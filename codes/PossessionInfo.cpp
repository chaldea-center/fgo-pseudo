void __fastcall PossessionInfo___ctor(PossessionInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PossessionInfo__Awake(PossessionInfo_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PossessionInfo__OnClickIcon(PossessionInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v5; // x1
  bool v6; // w0
  _QWORD *v7; // x8
  bool v8; // w19
  System_Reflection_MethodBase_o *v9; // x0
  UserServantCollectionEntity_o *v10; // x19
  CommonUI_o *v11; // x20
  PossessionInfo___c_c *v12; // x8
  ServantStatusDialog_EndDelegate_o *_9__11_0; // x21
  Il2CppObject *v14; // x22
  struct PossessionInfo___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  _QWORD *v18; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57928 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_PossessionInfo_OnClickIcon__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_PossessionInfo___c__OnClickIcon_b__11_0__);
    sub_1B885B0(&PossessionInfo___c_TypeInfo);
    byte_4A57928 = 1;
  }
  entity = 0LL;
  if ( this->fields.isServantHaving )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_25;
    v6 = UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           UserId,
           this->fields.servantId,
           0LL);
    v7 = Method_PossessionInfo_OnClickIcon__;
    v8 = v6;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8(Method_PossessionInfo_OnClickIcon__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    if ( v8 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = entity;
      v11 = (CommonUI_o *)UserId;
      v12 = PossessionInfo___c_TypeInfo;
      if ( !PossessionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PossessionInfo___c_TypeInfo);
        v12 = PossessionInfo___c_TypeInfo;
      }
      _9__11_0 = v12->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = PossessionInfo___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v14, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0LL);
        static_fields = PossessionInfo___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v16, v17);
      }
      if ( v11 )
      {
        CommonUI__OpenServantStatusDialog_30505740(v11, 37, v10, _9__11_0, 0LL);
        return;
      }
LABEL_25:
      sub_1B8880C(UserId, v5);
    }
  }
  else
  {
    v18 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B885C8(Method_PossessionInfo_OnClickIcon__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
}


void __fastcall PossessionInfo__SetInfo(PossessionInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v6; // x20
  int64_t servantFaceIcon; // x0
  int64_t v8; // x1
  int32_t v9; // w23
  IconLabelInfo_o *v10; // x22
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x22
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v15; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v21; // w22
  bool IsServantHaving; // w23
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  UILabel_o *treasureDeviceLevelLabel; // x20
  int v28; // w21
  System_String_o *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UISprite_o *summonedSprite; // x20
  _BOOL4 v35; // w21
  __int64 v36; // x19
  __int64 v37; // x22
  System_String_o *v38; // x1
  int v39; // [xsp+44h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A57927 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8588/*"MAX_NP_LEVEL"*/);
    sub_1B885B0(&StringLiteral_8776/*"MULTIPLE_INFO"*/);
    sub_1B885B0(&StringLiteral_20325/*"img_icon_summoned"*/);
    sub_1B885B0(&StringLiteral_10405/*"POSSESSION_NUM"*/);
    sub_1B885B0(&StringLiteral_20324/*"img_icon_not_summoned"*/);
    sub_1B885B0(&StringLiteral_11801/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    byte_4A57927 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  servantFaceIcon = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !servantFaceIcon )
    goto LABEL_45;
  servantFaceIcon = UserServantCollectionMaster__IsGet((UserServantCollectionMaster_o *)servantFaceIcon, svtId, 0LL);
  this->fields.isServantHaving = servantFaceIcon & 1;
  this->fields.servantId = svtId;
  if ( !Master_object )
    goto LABEL_45;
  servantFaceIcon = (int64_t)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               svtId,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !servantFaceIcon )
    goto LABEL_45;
  v9 = *(_DWORD *)(servantFaceIcon + 208);
  v10 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_45;
  IconLabelInfo__Set_38140136(v10, 57, v9, 0, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (int64_t)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_45;
  ServantFaceIconComponent__Set_38217436(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    svtId,
    0,
    -1,
    0,
    v10,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    0LL);
  servantFaceIcon = (int64_t)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, !this->fields.isServantHaving, 0LL);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  servantFaceIcon = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_45;
  servantFaceIcon = UserSvtCoinMaster__TryGetEntity(
                      (UserSvtCoinMaster_o *)v12,
                      &entity,
                      servantFaceIcon,
                      this->fields.servantId,
                      0LL);
  if ( (servantFaceIcon & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_45;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  coinNumLabel = this->fields.coinNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8776/*"MULTIPLE_INFO"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0LL);
  servantFaceIcon = (int64_t)System_String__Format(v15, NumberFormat, 0LL);
  if ( !coinNumLabel )
    goto LABEL_45;
  UILabel__set_text(coinNumLabel, (System_String_o *)servantFaceIcon, 0LL);
  if ( !v11 )
    goto LABEL_45;
  servantFaceIcon = (int64_t)ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v11, this->fields.servantId, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_45;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)servantFaceIcon, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  servantFaceIcon = AtlasManager__SetCoin(coinIcon, ImageId, 0LL);
  if ( !v6 )
LABEL_45:
    sub_1B8880C(servantFaceIcon, v8);
  ServantHavingCount = UserServantMaster__GetServantHavingCount(
                         (UserServantMaster_o *)v6,
                         this->fields.servantId,
                         0,
                         0LL);
  possessionNumLabel = this->fields.possessionNumLabel;
  v21 = ServantHavingCount;
  IsServantHaving = UserServantMaster__IsServantHaving((UserServantMaster_o *)v6, this->fields.servantId, 0, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsServantHaving )
    {
LABEL_28:
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10405/*"POSSESSION_NUM"*/, 0LL);
      v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v21, 0LL);
      servantFaceIcon = (int64_t)System_String__Format(v23, v24, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( IsServantHaving )
      goto LABEL_28;
  }
  servantFaceIcon = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0LL);
LABEL_31:
  v8 = servantFaceIcon;
  if ( !possessionNumLabel )
    goto LABEL_45;
  UILabel__set_text(possessionNumLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int64_t)this->fields.possessionNumLabel;
  if ( !servantFaceIcon )
    goto LABEL_45;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int64_t)this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
  servantFaceIcon = UserServantMaster__IsServantHaving((UserServantMaster_o *)v6, this->fields.servantId, 0, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, servantFaceIcon & 1, 0LL);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(
                             (UserServantMaster_o *)v6,
                             this->fields.servantId,
                             0LL);
  treasureDeviceLevelLabel = this->fields.treasureDeviceLevelLabel;
  v28 = MaxTreasureDeviceLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8588/*"MAX_NP_LEVEL"*/, 0LL);
  v39 = v28;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v30, v31, v32);
  servantFaceIcon = (int64_t)System_String__Format(v29, v33, 0LL);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_45;
  UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int64_t)this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_45;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0LL);
  summonedSprite = this->fields.summonedSprite;
  v35 = this->fields.isServantHaving;
  v36 = StringLiteral_20324/*"img_icon_not_summoned"*/;
  v37 = StringLiteral_20325/*"img_icon_summoned"*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v35 )
    v38 = (System_String_o *)v37;
  else
    v38 = (System_String_o *)v36;
  AtlasManager__SetEventSprite(summonedSprite, v38, 0LL);
}


void __fastcall PossessionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57929 & 1) == 0 )
  {
    sub_1B885B0(&PossessionInfo___c_TypeInfo);
    byte_4A57929 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PossessionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)PossessionInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall PossessionInfo___c___ctor(PossessionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PossessionInfo___c___OnClickIcon_b__11_0(PossessionInfo___c_o *this, bool _, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5792A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5792A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}