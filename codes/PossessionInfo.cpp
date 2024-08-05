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
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v12; // x1
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
  int32_t v23; // w2
  int32_t v24; // w3
  _QWORD *v25; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FAD48 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v3);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_1B64870(&NetworkManager_TypeInfo, v5);
    sub_1B64870(&Method_PossessionInfo_OnClickIcon__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&Method_PossessionInfo___c__OnClickIcon_b__11_0__, v8);
    sub_1B64870(&PossessionInfo___c_TypeInfo, v9);
    byte_49FAD48 = 1;
  }
  entity = 0LL;
  if ( this->fields.isServantHaving )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_25;
    v13 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)Master_object,
            &entity,
            UserId,
            this->fields.servantId,
            0LL);
    v14 = Method_PossessionInfo_OnClickIcon__;
    v15 = v13;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B64888(Method_PossessionInfo_OnClickIcon__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B64854(v14, v14[4]);
    if ( v15 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = entity;
      v18 = (CommonUI_o *)UserId;
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
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v21, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0LL);
        static_fields = PossessionInfo___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v23, v24);
      }
      if ( v18 )
      {
        CommonUI__OpenServantStatusDialog_30358744(v18, 37, v17, _9__11_0, 0LL);
        return;
      }
LABEL_25:
      sub_1B64ACC(UserId, v12);
    }
  }
  else
  {
    v25 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B64888(Method_PossessionInfo_OnClickIcon__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B64854(v25, v25[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
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
  __int64 v22; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v24; // x20
  Il2CppObject *v25; // x23
  int64_t IsServantHaving; // x0
  int64_t v27; // x1
  int32_t v28; // w23
  IconLabelInfo_o *v29; // x22
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x22
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v34; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v40; // w22
  bool v41; // w23
  System_String_o *v42; // x23
  Il2CppObject *v43; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  UILabel_o *treasureDeviceLevelLabel; // x20
  int v47; // w21
  System_String_o *v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  UISprite_o *summonedSprite; // x20
  _BOOL4 v54; // w21
  __int64 v55; // x19
  __int64 v56; // x22
  System_String_o *v57; // x1
  int v58; // [xsp+44h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49FAD47 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v9);
    sub_1B64870(&DataManager_TypeInfo, v10);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B64870(&IconLabelInfo_TypeInfo, v12);
    sub_1B64870(&int___TypeInfo, v13);
    sub_1B64870(&int_TypeInfo, v14);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&NetworkManager_TypeInfo, v16);
    sub_1B64870(&StringLiteral_8550/*"MAX_NP_LEVEL"*/, v17);
    sub_1B64870(&StringLiteral_8736/*"MULTIPLE_INFO"*/, v18);
    sub_1B64870(&StringLiteral_20248/*"img_icon_summoned"*/, v19);
    sub_1B64870(&StringLiteral_10356/*"POSSESSION_NUM"*/, v20);
    sub_1B64870(&StringLiteral_20247/*"img_icon_not_summoned"*/, v21);
    sub_1B64870(&StringLiteral_11749/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, v22);
    byte_49FAD47 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantMaster___);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  IsServantHaving = sub_1B64918(int___TypeInfo, 1LL);
  if ( !IsServantHaving )
    goto LABEL_47;
  v27 = IsServantHaving;
  if ( !*(_DWORD *)(IsServantHaving + 24) )
    sub_1B64AD4(IsServantHaving, IsServantHaving);
  *(_DWORD *)(IsServantHaving + 32) = svtId;
  if ( !v25 )
    goto LABEL_47;
  IsServantHaving = UserServantCollectionMaster__IsServantHaving(
                      (UserServantCollectionMaster_o *)v25,
                      (System_Int32_array *)IsServantHaving,
                      0LL);
  this->fields.isServantHaving = IsServantHaving & 1;
  this->fields.servantId = svtId;
  if ( !Master_object )
    goto LABEL_47;
  IsServantHaving = (int64_t)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               svtId,
                               (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !IsServantHaving )
    goto LABEL_47;
  v28 = *(_DWORD *)(IsServantHaving + 208);
  v29 = (IconLabelInfo_o *)sub_1B64ABC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_47;
  IconLabelInfo__Set_37829740(v29, 57, v28, 0, 0, 0, 0, 0, 0LL);
  IsServantHaving = (int64_t)this->fields.servantFaceIcon;
  if ( !IsServantHaving )
    goto LABEL_47;
  ServantFaceIconComponent__Set_37906444(
    (ServantFaceIconComponent_o *)IsServantHaving,
    svtId,
    0,
    -1,
    0,
    v29,
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
  IsServantHaving = (int64_t)this->fields.maskSprite;
  if ( !IsServantHaving )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantHaving, !this->fields.isServantHaving, 0LL);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ItemMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  IsServantHaving = NetworkManager__get_UserId(0LL);
  if ( !v31 )
    goto LABEL_47;
  IsServantHaving = UserSvtCoinMaster__TryGetEntity(
                      (UserSvtCoinMaster_o *)v31,
                      &entity,
                      IsServantHaving,
                      this->fields.servantId,
                      0LL);
  if ( (IsServantHaving & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_47;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  coinNumLabel = this->fields.coinNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8736/*"MULTIPLE_INFO"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0LL);
  IsServantHaving = (int64_t)System_String__Format(v34, NumberFormat, 0LL);
  if ( !coinNumLabel )
    goto LABEL_47;
  UILabel__set_text(coinNumLabel, (System_String_o *)IsServantHaving, 0LL);
  if ( !v30 )
    goto LABEL_47;
  IsServantHaving = (int64_t)ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v30, this->fields.servantId, 0LL);
  if ( !IsServantHaving )
    goto LABEL_47;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)IsServantHaving, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  IsServantHaving = AtlasManager__SetCoin(coinIcon, ImageId, 0LL);
  if ( !v24 )
LABEL_47:
    sub_1B64ACC(IsServantHaving, v27);
  ServantHavingCount = UserServantMaster__GetServantHavingCount(
                         (UserServantMaster_o *)v24,
                         this->fields.servantId,
                         0,
                         0LL);
  possessionNumLabel = this->fields.possessionNumLabel;
  v40 = ServantHavingCount;
  v41 = UserServantMaster__IsServantHaving((UserServantMaster_o *)v24, this->fields.servantId, 0, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v41 )
    {
LABEL_30:
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"POSSESSION_NUM"*/, 0LL);
      v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v40, 0LL);
      IsServantHaving = (int64_t)System_String__Format(v42, v43, 0LL);
      goto LABEL_33;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v41 )
      goto LABEL_30;
  }
  IsServantHaving = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0LL);
LABEL_33:
  v27 = IsServantHaving;
  if ( !possessionNumLabel )
    goto LABEL_47;
  UILabel__set_text(possessionNumLabel, (System_String_o *)IsServantHaving, 0LL);
  IsServantHaving = (int64_t)this->fields.possessionNumLabel;
  if ( !IsServantHaving )
    goto LABEL_47;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)IsServantHaving, 0LL);
  IsServantHaving = (int64_t)this->fields.treasureDeviceLevelLabel;
  if ( !IsServantHaving )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsServantHaving, 0LL);
  IsServantHaving = UserServantMaster__IsServantHaving((UserServantMaster_o *)v24, this->fields.servantId, 0, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(gameObject, IsServantHaving & 1, 0LL);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(
                             (UserServantMaster_o *)v24,
                             this->fields.servantId,
                             0LL);
  treasureDeviceLevelLabel = this->fields.treasureDeviceLevelLabel;
  v47 = MaxTreasureDeviceLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8550/*"MAX_NP_LEVEL"*/, 0LL);
  v58 = v47;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v49, v50, v51);
  IsServantHaving = (int64_t)System_String__Format(v48, v52, 0LL);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_47;
  UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)IsServantHaving, 0LL);
  IsServantHaving = (int64_t)this->fields.treasureDeviceLevelLabel;
  if ( !IsServantHaving )
    goto LABEL_47;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)IsServantHaving, 0LL);
  summonedSprite = this->fields.summonedSprite;
  v54 = this->fields.isServantHaving;
  v55 = StringLiteral_20247/*"img_icon_not_summoned"*/;
  v56 = StringLiteral_20248/*"img_icon_summoned"*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v54 )
    v57 = (System_String_o *)v56;
  else
    v57 = (System_String_o *)v55;
  AtlasManager__SetEventSprite(summonedSprite, v57, 0LL);
}


void __fastcall PossessionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FAD49 & 1) == 0 )
  {
    sub_1B64870(&PossessionInfo___c_TypeInfo, v1);
    byte_49FAD49 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(PossessionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)PossessionInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_49FAD4A & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, _);
    byte_49FAD4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}