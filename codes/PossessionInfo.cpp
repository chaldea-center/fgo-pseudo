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
  bool v12; // w0
  _QWORD *v13; // x8
  bool v14; // w19
  System_Reflection_MethodBase_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantCollectionEntity_o *v18; // x19
  CommonUI_o *v19; // x20
  PossessionInfo___c_c *v20; // x8
  ServantStatusDialog_EndDelegate_o *_9__11_0; // x21
  Il2CppObject *v22; // x22
  struct PossessionInfo___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  _QWORD *v26; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8C59 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_PossessionInfo_OnClickIcon__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_PossessionInfo___c__OnClickIcon_b__11_0__, v8);
    sub_1B640C8(&PossessionInfo___c_TypeInfo, v9);
    byte_49F8C59 = 1;
  }
  entity = 0LL;
  if ( this->fields.isServantHaving )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_25;
    v12 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)Master_object,
            &entity,
            UserId,
            this->fields.servantId,
            0LL);
    v13 = Method_PossessionInfo_OnClickIcon__;
    v14 = v12;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1B640E0(Method_PossessionInfo_OnClickIcon__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
    if ( v14 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = entity;
      v19 = (CommonUI_o *)UserId;
      v20 = PossessionInfo___c_TypeInfo;
      if ( !PossessionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PossessionInfo___c_TypeInfo);
        v20 = PossessionInfo___c_TypeInfo;
      }
      _9__11_0 = v20->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = PossessionInfo___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v16, v17);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v22, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0LL);
        static_fields = PossessionInfo___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v24, v25);
      }
      if ( v19 )
      {
        CommonUI__OpenServantStatusDialog_30356776(v19, 37, v18, _9__11_0, 0LL);
        return;
      }
LABEL_25:
      sub_1B64324(UserId);
    }
  }
  else
  {
    v26 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1B640E0(Method_PossessionInfo_OnClickIcon__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w23
  IconLabelInfo_o *v30; // x22
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x22
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v35; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v41; // w22
  bool v42; // w23
  System_String_o *v43; // x23
  Il2CppObject *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  UILabel_o *treasureDeviceLevelLabel; // x20
  int v48; // w21
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  UISprite_o *summonedSprite; // x20
  _BOOL4 v52; // w21
  __int64 v53; // x19
  __int64 v54; // x22
  System_String_o *v55; // x1
  int v56; // [xsp+44h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49F8C58 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v12);
    sub_1B640C8(&int___TypeInfo, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_8548/*"MAX_NP_LEVEL"*/, v17);
    sub_1B640C8(&StringLiteral_8734/*"MULTIPLE_INFO"*/, v18);
    sub_1B640C8(&StringLiteral_20245/*"img_icon_summoned"*/, v19);
    sub_1B640C8(&StringLiteral_10355/*"POSSESSION_NUM"*/, v20);
    sub_1B640C8(&StringLiteral_20244/*"img_icon_not_summoned"*/, v21);
    sub_1B640C8(&StringLiteral_11746/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, v22);
    byte_49F8C58 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  IsServantHaving = sub_1B64170(int___TypeInfo, 1LL);
  if ( !IsServantHaving )
    goto LABEL_47;
  if ( !*(_DWORD *)(IsServantHaving + 24) )
    sub_1B6432C(IsServantHaving, IsServantHaving);
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
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !IsServantHaving )
    goto LABEL_47;
  v29 = *(_DWORD *)(IsServantHaving + 208);
  v30 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v27, v28);
  IconLabelInfo___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_47;
  IconLabelInfo__Set_37825360(v30, 57, v29, 0, 0, 0, 0, 0, 0LL);
  IsServantHaving = (int64_t)this->fields.servantFaceIcon;
  if ( !IsServantHaving )
    goto LABEL_47;
  ServantFaceIconComponent__Set_37902064(
    (ServantFaceIconComponent_o *)IsServantHaving,
    svtId,
    0,
    -1,
    0,
    v30,
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
  v31 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  IsServantHaving = NetworkManager__get_UserId(0LL);
  if ( !v32 )
    goto LABEL_47;
  IsServantHaving = UserSvtCoinMaster__TryGetEntity(
                      (UserSvtCoinMaster_o *)v32,
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
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MULTIPLE_INFO"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0LL);
  IsServantHaving = (int64_t)System_String__Format(v35, NumberFormat, 0LL);
  if ( !coinNumLabel )
    goto LABEL_47;
  UILabel__set_text(coinNumLabel, (System_String_o *)IsServantHaving, 0LL);
  if ( !v31 )
    goto LABEL_47;
  IsServantHaving = (int64_t)ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v31, this->fields.servantId, 0LL);
  if ( !IsServantHaving )
    goto LABEL_47;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)IsServantHaving, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  IsServantHaving = AtlasManager__SetCoin(coinIcon, ImageId, 0LL);
  if ( !v24 )
LABEL_47:
    sub_1B64324(IsServantHaving);
  ServantHavingCount = UserServantMaster__GetServantHavingCount(
                         (UserServantMaster_o *)v24,
                         this->fields.servantId,
                         0,
                         0LL);
  possessionNumLabel = this->fields.possessionNumLabel;
  v41 = ServantHavingCount;
  v42 = UserServantMaster__IsServantHaving((UserServantMaster_o *)v24, this->fields.servantId, 0, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v42 )
    {
LABEL_30:
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"POSSESSION_NUM"*/, 0LL);
      v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41, 0LL);
      IsServantHaving = (int64_t)System_String__Format(v43, v44, 0LL);
      goto LABEL_33;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v42 )
      goto LABEL_30;
  }
  IsServantHaving = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11746/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0LL);
LABEL_33:
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
  v48 = MaxTreasureDeviceLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8548/*"MAX_NP_LEVEL"*/, 0LL);
  v56 = v48;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
  IsServantHaving = (int64_t)System_String__Format(v49, v50, 0LL);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_47;
  UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)IsServantHaving, 0LL);
  IsServantHaving = (int64_t)this->fields.treasureDeviceLevelLabel;
  if ( !IsServantHaving )
    goto LABEL_47;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)IsServantHaving, 0LL);
  summonedSprite = this->fields.summonedSprite;
  v52 = this->fields.isServantHaving;
  v53 = StringLiteral_20244/*"img_icon_not_summoned"*/;
  v54 = StringLiteral_20245/*"img_icon_summoned"*/;
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8C5A & 1) == 0 )
  {
    sub_1B640C8(&PossessionInfo___c_TypeInfo, v1);
    byte_49F8C5A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PossessionInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)PossessionInfo___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall PossessionInfo___c___ctor(PossessionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PossessionInfo___c___OnClickIcon_b__11_0(PossessionInfo___c_o *this, bool _, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8C5B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, _);
    byte_49F8C5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}