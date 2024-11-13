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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v21; // x1
  bool v22; // w0
  _QWORD *v23; // x8
  bool v24; // w19
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  UserServantCollectionEntity_o *v28; // x19
  CommonUI_o *v29; // x20
  PossessionInfo___c_c *v30; // x8
  ServantStatusDialog_EndDelegate_o *_9__11_0; // x21
  Il2CppObject *v32; // x22
  struct PossessionInfo___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  _QWORD *v40; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B128B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PossessionInfo_OnClickIcon__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_PossessionInfo___c__OnClickIcon_b__11_0__, v14, v15);
    sub_1BCA7E0(&PossessionInfo___c_TypeInfo, v16, v17);
    byte_4B128B5 = 1;
  }
  entity = 0LL;
  if ( this->fields.isServantHaving )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_25;
    v22 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)Master_object,
            &entity,
            UserId,
            this->fields.servantId,
            0LL);
    v23 = Method_PossessionInfo_OnClickIcon__;
    v24 = v22;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1BCA7F8(Method_PossessionInfo_OnClickIcon__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
    if ( v24 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
      UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = entity;
      v29 = (CommonUI_o *)UserId;
      v30 = PossessionInfo___c_TypeInfo;
      if ( !PossessionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PossessionInfo___c_TypeInfo, v21);
        v30 = PossessionInfo___c_TypeInfo;
      }
      _9__11_0 = v30->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30, v21);
          v30 = PossessionInfo___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                          ServantStatusDialog_EndDelegate_TypeInfo,
                                                          v21,
                                                          v26,
                                                          v27);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v32, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0LL);
        static_fields = PossessionInfo___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
          (int64_t)_9__11_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      if ( v29 )
      {
        CommonUI__OpenServantStatusDialog_30778040(v29, 37, v28, _9__11_0, 0LL);
        return;
      }
LABEL_25:
      sub_1BCAA3C(UserId, v21);
    }
  }
  else
  {
    v40 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1BCA7F8(Method_PossessionInfo_OnClickIcon__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v40, v40[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PossessionInfo__SetInfo(PossessionInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v40; // x20
  int64_t servantFaceIcon; // x0
  int64_t v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  int32_t v45; // w23
  IconLabelInfo_o *v46; // x22
  Il2CppObject *v47; // x21
  __int64 v48; // x1
  Il2CppObject *v49; // x22
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v52; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  __int64 v55; // x1
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v59; // w22
  __int64 v60; // x1
  bool IsServantHaving; // w23
  System_String_o *v62; // x23
  Il2CppObject *v63; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  __int64 v66; // x1
  UILabel_o *treasureDeviceLevelLabel; // x20
  int v68; // w21
  System_String_o *v69; // x22
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  UISprite_o *summonedSprite; // x20
  _BOOL4 v73; // w21
  __int64 v74; // x19
  __int64 v75; // x22
  System_String_o *v76; // x1
  int v77; // [xsp+44h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B128B4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v19, v20);
    sub_1BCA7E0(&int_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_8714/*"MAX_NP_LEVEL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_20544/*"img_icon_summoned"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_10538/*"POSSESSION_NUM"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_20543/*"img_icon_not_summoned"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11939/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, v37, v38);
    byte_4B128B4 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  servantFaceIcon = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !servantFaceIcon )
    goto LABEL_45;
  v45 = *(_DWORD *)(servantFaceIcon + 208);
  v46 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v42, v43, v44);
  IconLabelInfo___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_45;
  IconLabelInfo__Set_38850420(v46, 57, v45, 0, 0, 0, 0, 0, 0LL);
  servantFaceIcon = (int64_t)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_45;
  ServantFaceIconComponent__Set_38928428(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    svtId,
    0,
    -1,
    0,
    v46,
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
  v47 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  v49 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
  servantFaceIcon = NetworkManager__get_UserId(0LL);
  if ( !v49 )
    goto LABEL_45;
  servantFaceIcon = UserSvtCoinMaster__TryGetEntity(
                      (UserSvtCoinMaster_o *)v49,
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0LL);
  servantFaceIcon = (int64_t)System_String__Format(v52, NumberFormat, 0LL);
  if ( !coinNumLabel )
    goto LABEL_45;
  UILabel__set_text(coinNumLabel, (System_String_o *)servantFaceIcon, 0LL);
  if ( !v47 )
    goto LABEL_45;
  servantFaceIcon = (int64_t)ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v47, this->fields.servantId, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_45;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)servantFaceIcon, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55);
  servantFaceIcon = AtlasManager__SetCoin(coinIcon, ImageId, 0LL);
  if ( !v40 )
LABEL_45:
    sub_1BCAA3C(servantFaceIcon, v42);
  ServantHavingCount = UserServantMaster__GetServantHavingCount(
                         (UserServantMaster_o *)v40,
                         this->fields.servantId,
                         0,
                         0LL);
  possessionNumLabel = this->fields.possessionNumLabel;
  v59 = ServantHavingCount;
  IsServantHaving = UserServantMaster__IsServantHaving((UserServantMaster_o *)v40, this->fields.servantId, 0, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsServantHaving )
    {
LABEL_28:
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10538/*"POSSESSION_NUM"*/, 0LL);
      v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v59, 0LL);
      servantFaceIcon = (int64_t)System_String__Format(v62, v63, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
    if ( IsServantHaving )
      goto LABEL_28;
  }
  servantFaceIcon = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0LL);
LABEL_31:
  v42 = servantFaceIcon;
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
  servantFaceIcon = UserServantMaster__IsServantHaving((UserServantMaster_o *)v40, this->fields.servantId, 0, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, servantFaceIcon & 1, 0LL);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(
                             (UserServantMaster_o *)v40,
                             this->fields.servantId,
                             0LL);
  treasureDeviceLevelLabel = this->fields.treasureDeviceLevelLabel;
  v68 = MaxTreasureDeviceLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MAX_NP_LEVEL"*/, 0LL);
  v77 = v68;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
  servantFaceIcon = (int64_t)System_String__Format(v69, v70, 0LL);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_45;
  UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int64_t)this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_45;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0LL);
  summonedSprite = this->fields.summonedSprite;
  v73 = this->fields.isServantHaving;
  v74 = StringLiteral_20543/*"img_icon_not_summoned"*/;
  v75 = StringLiteral_20544/*"img_icon_summoned"*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
  if ( v73 )
    v76 = (System_String_o *)v75;
  else
    v76 = (System_String_o *)v74;
  AtlasManager__SetEventSprite(summonedSprite, v76, 0LL);
}


void __fastcall PossessionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B128B6 & 1) == 0 )
  {
    sub_1BCA7E0(&PossessionInfo___c_TypeInfo, v1, v2);
    byte_4B128B6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PossessionInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PossessionInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B128B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, _, method);
    byte_4B128B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}