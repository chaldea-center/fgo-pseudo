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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  CommonUI_o *Instance; // x0
  bool v13; // w0
  _QWORD *v14; // x8
  bool v15; // w19
  System_Reflection_MethodBase_o *v16; // x0
  UserServantCollectionEntity_o *v17; // x19
  CommonUI_o *v18; // x20
  PossessionInfo___c_c *v19; // x8
  ServantStatusDialog_EndDelegate_o *_9__11_0; // x21
  Il2CppObject *v21; // x22
  struct PossessionInfo___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  _QWORD *v29; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1E562 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_PossessionInfo_OnClickIcon__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_PossessionInfo___c__OnClickIcon_b__11_0__, v8);
    sub_1C3B764(&PossessionInfo___c_TypeInfo, v9);
    byte_4C1E562 = 1;
  }
  entity = 0LL;
  if ( this->fields.isServantHaving )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v10);
      byte_4C1C955 = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_29;
    v13 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)Master_object,
            &entity,
            (int64_t)Instance->fields.connectMark->fields.tipsBase,
            this->fields.servantId,
            0LL);
    v14 = Method_PossessionInfo_OnClickIcon__;
    v15 = v13;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C3B77C(Method_PossessionInfo_OnClickIcon__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C3B748(v14, v14[4]);
    if ( v15 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = entity;
      v18 = Instance;
      v19 = PossessionInfo___c_TypeInfo;
      if ( !PossessionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PossessionInfo___c_TypeInfo);
        v19 = PossessionInfo___c_TypeInfo;
      }
      _9__11_0 = v19->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = PossessionInfo___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v19->static_fields->__9;
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v21, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0LL);
        static_fields = PossessionInfo___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
          (int64_t)_9__11_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( v18 )
      {
        CommonUI__OpenServantStatusDialog_31243584(v18, 37, v17, _9__11_0, 0LL);
        return;
      }
LABEL_29:
      sub_1C3B9C0(Instance, v10);
    }
  }
  else
  {
    v29 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C3B77C(Method_PossessionInfo_OnClickIcon__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C3B748(v29, v29[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PossessionInfo__SetInfo(PossessionInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v23; // x20
  void *servantFaceIcon; // x0
  void *v25; // x1
  int32_t v26; // w23
  IconLabelInfo_o *v27; // x22
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x22
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v32; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v38; // w22
  bool IsServantHaving; // w23
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  UILabel_o *treasureDeviceLevelLabel; // x20
  int v45; // w21
  System_String_o *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  UISprite_o *summonedSprite; // x20
  _BOOL4 v52; // w21
  __int64 v53; // x19
  __int64 v54; // x22
  System_String_o *v55; // x1
  int v56; // [xsp+54h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4C1E561 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C3B764(&IconLabelInfo_TypeInfo, v12);
    sub_1C3B764(&int_TypeInfo, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_8765/*"MediumSeaGreen"*/, v16);
    sub_1C3B764(&StringLiteral_8961/*"MstMission"*/, v17);
    sub_1C3B764(&StringLiteral_20735/*"legacy"*/, v18);
    sub_1C3B764(&StringLiteral_10622/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, v19);
    sub_1C3B764(&StringLiteral_20734/*"leftbutton"*/, v20);
    sub_1C3B764(&StringLiteral_12046/*"STONE_NAME"*/, v21);
    byte_4C1E561 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  servantFaceIcon = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !servantFaceIcon )
    goto LABEL_49;
  servantFaceIcon = (void *)UserServantCollectionMaster__IsGet(
                              (UserServantCollectionMaster_o *)servantFaceIcon,
                              svtId,
                              0LL);
  this->fields.isServantHaving = (unsigned __int8)servantFaceIcon & 1;
  this->fields.servantId = svtId;
  if ( !Master_object )
    goto LABEL_49;
  servantFaceIcon = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      svtId,
                      (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !servantFaceIcon )
    goto LABEL_49;
  v26 = *((_DWORD *)servantFaceIcon + 52);
  v27 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_49;
  IconLabelInfo__Set_39561332(v27, 57, v26, 0, 0, 0, 0, 0, 0LL);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_49;
  ServantFaceIconComponent__Set_39640656(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    svtId,
    0,
    -1,
    0,
    v27,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    0LL,
    0LL);
  servantFaceIcon = this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, !this->fields.isServantHaving, 0LL);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v25);
    byte_4C1C955 = 1;
  }
  servantFaceIcon = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    servantFaceIcon = NetworkManager_TypeInfo;
  }
  if ( !v29 )
    goto LABEL_49;
  servantFaceIcon = (void *)UserSvtCoinMaster__TryGetEntity(
                              (UserSvtCoinMaster_o *)v29,
                              &entity,
                              *(_QWORD *)(*((_QWORD *)servantFaceIcon + 23) + 64LL),
                              this->fields.servantId,
                              0LL);
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
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8961/*"MstMission"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0LL);
  servantFaceIcon = System_String__Format(v32, NumberFormat, 0LL);
  if ( !coinNumLabel )
    goto LABEL_49;
  UILabel__set_text(coinNumLabel, (System_String_o *)servantFaceIcon, 0LL);
  if ( !v28 )
    goto LABEL_49;
  servantFaceIcon = ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v28, this->fields.servantId, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_49;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)servantFaceIcon, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  servantFaceIcon = (void *)AtlasManager__SetCoin(coinIcon, ImageId, 0LL);
  if ( !v23 )
LABEL_49:
    sub_1C3B9C0(servantFaceIcon, v25);
  ServantHavingCount = UserServantMaster__GetServantHavingCount(
                         (UserServantMaster_o *)v23,
                         this->fields.servantId,
                         0,
                         0LL);
  possessionNumLabel = this->fields.possessionNumLabel;
  v38 = ServantHavingCount;
  IsServantHaving = UserServantMaster__IsServantHaving((UserServantMaster_o *)v23, this->fields.servantId, 0, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsServantHaving )
    {
LABEL_32:
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10622/*"QUEST_CONFIRM_NO_CONSUME_COUNT"*/, 0LL);
      v41 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38, 0LL);
      servantFaceIcon = System_String__Format(v40, v41, 0LL);
      goto LABEL_35;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( IsServantHaving )
      goto LABEL_32;
  }
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"STONE_NAME"*/, 0LL);
LABEL_35:
  v25 = servantFaceIcon;
  if ( !possessionNumLabel )
    goto LABEL_49;
  UILabel__set_text(possessionNumLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.possessionNumLabel;
  if ( !servantFaceIcon )
    goto LABEL_49;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (void *)UserServantMaster__IsServantHaving(
                              (UserServantMaster_o *)v23,
                              this->fields.servantId,
                              0,
                              0LL);
  if ( !gameObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0LL);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(
                             (UserServantMaster_o *)v23,
                             this->fields.servantId,
                             0LL);
  treasureDeviceLevelLabel = this->fields.treasureDeviceLevelLabel;
  v45 = MaxTreasureDeviceLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_8765/*"MediumSeaGreen"*/, 0LL);
  v56 = v45;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v47, v48, v49);
  servantFaceIcon = System_String__Format(v46, v50, 0LL);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_49;
  UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_49;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0LL);
  summonedSprite = this->fields.summonedSprite;
  v52 = this->fields.isServantHaving;
  v53 = StringLiteral_20734/*"leftbutton"*/;
  v54 = StringLiteral_20735/*"legacy"*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v52 )
    v55 = (System_String_o *)v54;
  else
    v55 = (System_String_o *)v53;
  AtlasManager__SetEventSprite(summonedSprite, v55, 0LL);
}


void __fastcall PossessionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1E563 & 1) == 0 )
  {
    sub_1C3B764(&PossessionInfo___c_TypeInfo, v1);
    byte_4C1E563 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PossessionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)PossessionInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall PossessionInfo___c___ctor(PossessionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PossessionInfo___c___OnClickIcon_b__11_0(PossessionInfo___c_o *this, bool _, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1E564 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, _);
    byte_4C1E564 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}