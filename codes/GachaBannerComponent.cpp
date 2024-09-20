void __fastcall GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  System_String_o *v9; // x20

  if ( (byte_4A5790F & 1) == 0 )
  {
    sub_1B885B0(&Method_GachaBannerComponent_OnClickDetail__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&WebViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15553/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_4A5790F = 1;
  }
  v3 = Method_GachaBannerComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_GachaBannerComponent_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_GachaBannerComponent_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  info = this->fields.info;
  if ( !info )
    sub_1B8880C(v5, v6);
  detailUrl = info->fields.detailUrl;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15553/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v9, detailUrl, 0LL, 0LL);
}


void __fastcall GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
{
  int64_t info; // x0
  char v4; // w20
  Il2CppObject *MasterData_object; // x20
  struct VaildGachaInfo_o *v6; // x8
  int32_t v7; // w21
  System_String_o *v8; // x20
  struct VaildGachaInfo_o *v9; // x8
  int32_t maxGetNum; // w8
  struct VaildGachaInfo_o *v11; // x8
  System_String_o *v12; // x20
  struct VaildGachaInfo_o *v13; // x8
  Il2CppObject *v14; // x22
  Il2CppObject *DateTimeDayOfWeek; // x0
  GachaPickupCollateralEntity_o *v16; // [xsp+0h] [xbp-40h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+8h] [xbp-38h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5790D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6880/*"GACHA_PC_MESSAGE_NO_MAX"*/);
    sub_1B885B0(&StringLiteral_6878/*"GACHA_PC_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6879/*"GACHA_PC_MESSAGE_END"*/);
    byte_4A5790D = 1;
  }
  entity = 0LL;
  v16 = 0LL;
  gachaPickupCollateralGroupEntity = 0LL;
  info = (int64_t)this->fields.info;
  if ( !info )
    goto LABEL_46;
  info = VaildGachaInfo__HasFlag((VaildGachaInfo_o *)info, 2, 0LL);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_46;
  v4 = info;
  info = (int64_t)UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0LL);
  if ( !info )
    goto LABEL_46;
  if ( (v4 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0LL);
  info = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)info,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  info = NetworkManager__get_UserId(0LL);
  v6 = this->fields.info;
  if ( !v6 || !MasterData_object )
    goto LABEL_46;
  if ( !UserGachaMaster__TryGetEntity((UserGachaMaster_o *)MasterData_object, &entity, info, v6->fields.id, 0LL) )
    goto LABEL_19;
  info = (int64_t)entity;
  if ( !entity )
    goto LABEL_46;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0LL) )
  {
LABEL_19:
    v8 = (System_String_o *)StringLiteral_6878/*"GACHA_PC_MESSAGE"*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    info = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    v9 = this->fields.info;
    if ( v9 && info )
    {
      if ( !GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
              (GachaPickupCollateralGroupMaster_o *)info,
              &gachaPickupCollateralGroupEntity,
              v9->fields.id,
              0LL) )
        goto LABEL_36;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      info = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
      if ( !gachaPickupCollateralGroupEntity || !info )
        goto LABEL_46;
      info = GachaPickupCollateralMaster__TryGetEntityFromGroupId(
               (GachaPickupCollateralMaster_o *)info,
               &v16,
               gachaPickupCollateralGroupEntity->fields.id,
               0LL);
      if ( (info & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_46;
        maxGetNum = v16->fields.maxGetNum;
        if ( maxGetNum )
          v7 = 785;
        else
          v7 = 746;
        if ( !maxGetNum )
          v8 = (System_String_o *)StringLiteral_6880/*"GACHA_PC_MESSAGE_NO_MAX"*/;
      }
      else
      {
LABEL_36:
        v7 = 785;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      info = (int64_t)LocalizationManager__Get(v8, 0LL);
      v11 = this->fields.info;
      if ( v11 )
      {
        v12 = (System_String_o *)info;
        info = (int64_t)LocalizationManager__GetDateTimeDayOfWeek(v11->fields.openedAt, 0LL);
        v13 = this->fields.info;
        if ( v13 )
        {
          v14 = (Il2CppObject *)info;
          DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v13->fields.closedAt, 0LL);
          method = (const MethodInfo *)System_String__Format_61721404(v12, v14, DateTimeDayOfWeek, 0LL);
          goto LABEL_42;
        }
      }
    }
LABEL_46:
    sub_1B8880C(info, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  method = (const MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_6879/*"GACHA_PC_MESSAGE_END"*/, 0LL);
  v7 = 785;
LABEL_42:
  info = (int64_t)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)info, (System_String_o *)method, 0LL);
  info = (int64_t)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_46;
  UIWidget__set_width((UIWidget_o *)info, v7, 0LL);
}


VaildGachaInfo_o *__fastcall GachaBannerComponent__getBannerGachaInfo(
        GachaBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


int32_t __fastcall GachaBannerComponent__getBannerIdx(GachaBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.bannerIdx;
}


int32_t __fastcall GachaBannerComponent__getMoveBannerIdx(GachaBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.moveBannerIdx;
}


void __fastcall GachaBannerComponent__setBannerGachaInfo(
        GachaBannerComponent_o *this,
        VaildGachaInfo_o *data,
        int32_t idx,
        int32_t moveIdx,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  int32_t width; // w22
  UIAtlas_o *height; // x0
  __int64 v15; // x1
  struct UIPanel_o *clipPanel; // x8
  float v17; // s2
  float v18; // s5
  float v19; // s2
  const MethodInfo *v20; // x1
  UnityEngine_Vector4_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5790C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5790C = 1;
  }
  this->fields.info = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.info, (int32_t)data, idx, moveIdx);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  width = UnityEngine_Screen__get_width(0LL);
  height = (UIAtlas_o *)UnityEngine_Screen__get_height(0LL);
  clipPanel = this->fields.clipPanel;
  if ( !clipPanel )
    goto LABEL_14;
  v17 = (float)width / (float)(int)height;
  v18 = (float)(fminf(v17, 2.3333) / 1.7778) * 1024.0;
  if ( v17 < 1.7778 )
    v19 = 1024.0;
  else
    v19 = v18;
  v21.fields.z = floorf(v19);
  v21.fields.x = clipPanel->fields.mClipRange.fields.x;
  v21.fields.y = clipPanel->fields.mClipRange.fields.y;
  v21.fields.w = clipPanel->fields.mClipRange.fields.w;
  UIPanel__set_baseClipRegion(this->fields.clipPanel, v21, 0LL);
  GachaBannerComponent__UpdateDisplay(this, v20);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  height = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)height & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      height = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                              bannerAtlas,
                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( this->fields.bannerImg )
      {
        UISprite__set_atlas(this->fields.bannerImg, height, 0LL);
        height = (UIAtlas_o *)this->fields.bannerImg;
        if ( height )
        {
          UISprite__set_spriteName((UISprite_o *)height, imgName, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(height, v15);
  }
}


void __fastcall GachaBannerComponent__setEnabledCollider(
        GachaBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4A5790E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4A5790E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1B8880C(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}