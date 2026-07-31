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
  __int64 v2; // x2
  _BOOL4 isServantHaving; // w8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  CommonUI_o *Instance; // x0
  bool v9; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x2
  CommonUI_o *v13; // x20
  UserServantCollectionEntity_o *v14; // x19
  PossessionInfo___c_c *v15; // x8
  struct PossessionInfo___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__11_0; // x21
  Il2CppObject *v18; // x22
  struct PossessionInfo___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59348B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_PossessionInfo_OnClickIcon__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_PossessionInfo___c__OnClickIcon_b__11_0__);
    sub_21FFC50(&PossessionInfo___c_TypeInfo);
    byte_59348B4 = 1;
  }
  isServantHaving = this->fields.isServantHaving;
  entity = 0;
  if ( isServantHaving )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
      Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_31;
    v9 = UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)Instance->fields.errorDialog->fields.baseCallbackFunc,
           this->fields.servantId,
           0);
    v10 = Method_PossessionInfo_OnClickIcon__;
    if ( v9 )
    {
      if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_21FFC68(Method_PossessionInfo_OnClickIcon__);
      v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = Instance;
      v14 = entity;
      v15 = PossessionInfo___c_TypeInfo;
      if ( !*(&PossessionInfo___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PossessionInfo___c_TypeInfo, v5, v12);
        v15 = PossessionInfo___c_TypeInfo;
      }
      static_fields = v15->static_fields;
      _9__11_0 = static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !*(&v15->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v15, v5, v12);
          static_fields = PossessionInfo___c_TypeInfo->static_fields;
        }
        v18 = (Il2CppObject *)static_fields->__9;
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v18, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0);
        v19 = PossessionInfo___c_TypeInfo->static_fields;
        v19->__9__11_0 = _9__11_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v19->__9__11_0,
          (int32_t)_9__11_0,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      if ( v13 )
      {
        CommonUI__OpenServantStatusDialog_37303496(v13, 37, v14, _9__11_0, 0);
        return;
      }
LABEL_31:
      sub_21FFECC(Instance, v5);
    }
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_21FFC68(Method_PossessionInfo_OnClickIcon__);
    v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
  }
  else
  {
    v26 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_21FFC68(Method_PossessionInfo_OnClickIcon__);
    v27 = (System_Reflection_MethodBase_o *)sub_21FFC34(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PossessionInfo__SetInfo(PossessionInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x22
  Il2CppObject *v7; // x20
  void *servantFaceIcon; // x0
  void *v9; // x1
  int32_t v10; // w23
  IconLabelInfo_o *v11; // x22
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v18; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v26; // w22
  __int64 v27; // x1
  __int64 v28; // x2
  bool IsServantHaving; // w8
  int v30; // w9
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  __int64 v35; // x1
  __int64 v36; // x2
  UILabel_o *treasureDeviceLevelLabel; // x20
  int32_t v38; // w21
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UISprite_o *summonedSprite; // x20
  _BOOL4 v44; // w19
  __int64 v45; // x21
  __int64 v46; // x22
  System_String_o *v47; // x1
  int32_t v48; // [xsp+64h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_59348B3 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8967/*"MAX_NP_LEVEL"*/);
    sub_21FFC50(&StringLiteral_9170/*"MULTIPLE_INFO"*/);
    sub_21FFC50(&StringLiteral_21359/*"img_icon_summoned"*/);
    sub_21FFC50(&StringLiteral_10825/*"POSSESSION_NUM"*/);
    sub_21FFC50(&StringLiteral_21358/*"img_icon_not_summoned"*/);
    sub_21FFC50(&StringLiteral_12332/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    byte_59348B3 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  servantFaceIcon = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !servantFaceIcon )
    goto LABEL_51;
  servantFaceIcon = (void *)UserServantCollectionMaster__IsGet(
                              (UserServantCollectionMaster_o *)servantFaceIcon,
                              svtId,
                              0);
  this->fields.servantId = svtId;
  this->fields.isServantHaving = (unsigned __int8)servantFaceIcon & 1;
  if ( !Master_object )
    goto LABEL_51;
  servantFaceIcon = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      svtId,
                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !servantFaceIcon )
    goto LABEL_51;
  v10 = *((_DWORD *)servantFaceIcon + 52);
  v11 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_51;
  IconLabelInfo__Set_47932852(v11, 57, v10, 0, 0, 0, 0, 0, 0, 0);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_51;
  ServantFaceIconComponent__Set_48021296(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    svtId,
    0,
    -1,
    0,
    v11,
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
    1,
    0);
  servantFaceIcon = this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, !this->fields.isServantHaving, 0);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v13);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  servantFaceIcon = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v13);
    servantFaceIcon = NetworkManager_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_51;
  servantFaceIcon = (void *)UserSvtCoinMaster__TryGetEntity(
                              (UserSvtCoinMaster_o *)v14,
                              &entity,
                              *(_QWORD *)(*((_QWORD *)servantFaceIcon + 23) + 64LL),
                              this->fields.servantId,
                              0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_51;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  coinNumLabel = this->fields.coinNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v15);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MULTIPLE_INFO"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0);
  servantFaceIcon = System_String__Format(v18, NumberFormat, 0);
  if ( !coinNumLabel )
    goto LABEL_51;
  UILabel__set_text(coinNumLabel, (System_String_o *)servantFaceIcon, 0);
  if ( !v12 )
    goto LABEL_51;
  servantFaceIcon = ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v12, this->fields.servantId, 0);
  if ( !servantFaceIcon )
    goto LABEL_51;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)servantFaceIcon, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
  servantFaceIcon = (void *)AtlasManager__SetCoin(coinIcon, ImageId, 0);
  if ( !v7 )
    goto LABEL_51;
  ServantHavingCount = UserServantMaster__GetServantHavingCount((UserServantMaster_o *)v7, this->fields.servantId, 0, 0);
  possessionNumLabel = this->fields.possessionNumLabel;
  v26 = ServantHavingCount;
  IsServantHaving = UserServantMaster__IsServantHaving((UserServantMaster_o *)v7, this->fields.servantId, 0, 0);
  v30 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsServantHaving )
  {
    if ( !v30 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10825/*"POSSESSION_NUM"*/, 0);
    v32 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0);
    servantFaceIcon = System_String__Format(v31, v32, 0);
  }
  else
  {
    if ( !v30 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0);
  }
  v9 = servantFaceIcon;
  if ( !possessionNumLabel )
    goto LABEL_51;
  UILabel__set_text(possessionNumLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.possessionNumLabel;
  if ( !servantFaceIcon )
    goto LABEL_51;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  servantFaceIcon = (void *)UserServantMaster__IsServantHaving((UserServantMaster_o *)v7, this->fields.servantId, 0, 0);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(
                             (UserServantMaster_o *)v7,
                             this->fields.servantId,
                             0);
  treasureDeviceLevelLabel = this->fields.treasureDeviceLevelLabel;
  v38 = MaxTreasureDeviceLevel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8967/*"MAX_NP_LEVEL"*/, 0);
  v48 = v38;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v48);
  servantFaceIcon = System_String__Format(v39, v40, 0);
  if ( !treasureDeviceLevelLabel
    || (UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)servantFaceIcon, 0),
        (servantFaceIcon = this->fields.treasureDeviceLevelLabel) == 0) )
  {
LABEL_51:
    sub_21FFECC(servantFaceIcon, v9);
  }
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0);
  summonedSprite = this->fields.summonedSprite;
  v44 = this->fields.isServantHaving;
  v45 = StringLiteral_21358/*"img_icon_not_summoned"*/;
  v46 = StringLiteral_21359/*"img_icon_summoned"*/;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41, v42);
  if ( v44 )
    v47 = (System_String_o *)v46;
  else
    v47 = (System_String_o *)v45;
  AtlasManager__SetEventSprite(summonedSprite, v47, 0);
}


void PossessionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59348B5 & 1) == 0 )
  {
    sub_21FFC50(&PossessionInfo___c_TypeInfo);
    byte_59348B5 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PossessionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PossessionInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PossessionInfo___c___ctor(PossessionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PossessionInfo___c___OnClickIcon_b__11_0(PossessionInfo___c_o *this, bool _, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59348B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59348B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}