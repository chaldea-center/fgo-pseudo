void __fastcall GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  System_String_o *v12; // x20

  if ( (byte_4BB0D10 & 1) == 0 )
  {
    sub_1C13D24(&Method_GachaBannerComponent_OnClickDetail__, method);
    sub_1C13D24(&LocalizationManager_TypeInfo, v3);
    sub_1C13D24(&WebViewManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_15796/*"WAVE_BATTLE_RESTRICTION_NOT_SATISFY_TITLE"*/, v5);
    byte_4BB0D10 = 1;
  }
  v6 = Method_GachaBannerComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_GachaBannerComponent_OnClickDetail__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C13D3C(Method_GachaBannerComponent_OnClickDetail__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  info = this->fields.info;
  if ( !info )
    sub_1C13F80(v8, v9);
  detailUrl = info->fields.detailUrl;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15796/*"WAVE_BATTLE_RESTRICTION_NOT_SATISFY_TITLE"*/, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v12, detailUrl, 0LL, 0LL);
}


void __fastcall GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  VaildGachaInfo_o *info; // x0
  char v13; // w20
  Il2CppObject *MasterData_object; // x20
  struct VaildGachaInfo_o *v15; // x8
  int32_t v16; // w21
  System_String_o *v17; // x20
  struct VaildGachaInfo_o *v18; // x8
  int32_t maxGetNum; // w8
  struct VaildGachaInfo_o *v20; // x8
  System_String_o *v21; // x20
  struct VaildGachaInfo_o *v22; // x8
  Il2CppObject *v23; // x22
  Il2CppObject *DateTimeDayOfWeek; // x0
  GachaPickupCollateralEntity_o *v25; // [xsp+0h] [xbp-40h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+8h] [xbp-38h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BB0D0E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserGachaMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&StringLiteral_7043/*"GACHA_HISTORY_UPPER_MESSAGE"*/, v9);
    sub_1C13D24(&StringLiteral_7041/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, v10);
    sub_1C13D24(&StringLiteral_7042/*"GACHA_HISTORY_TITLE"*/, v11);
    byte_4BB0D0E = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  gachaPickupCollateralGroupEntity = 0LL;
  info = this->fields.info;
  if ( !info )
    goto LABEL_50;
  info = (VaildGachaInfo_o *)VaildGachaInfo__HasFlag(info, 2, 0LL);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_50;
  v13 = (char)info;
  info = (VaildGachaInfo_o *)UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0LL);
  if ( !info )
    goto LABEL_50;
  if ( (v13 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0LL);
  info = (VaildGachaInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)info,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BAF1E5 = 1;
  }
  info = (VaildGachaInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    info = (VaildGachaInfo_o *)NetworkManager_TypeInfo;
  }
  v15 = this->fields.info;
  if ( !v15 || !MasterData_object )
    goto LABEL_50;
  if ( !UserGachaMaster__TryGetEntity(
          (UserGachaMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&info[1].fields.beforeId + 64LL),
          v15->fields.id,
          0LL) )
    goto LABEL_23;
  info = (VaildGachaInfo_o *)entity;
  if ( !entity )
    goto LABEL_50;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0LL) )
  {
LABEL_23:
    v17 = (System_String_o *)StringLiteral_7041/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    info = (VaildGachaInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    v18 = this->fields.info;
    if ( v18 && info )
    {
      if ( !GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
              (GachaPickupCollateralGroupMaster_o *)info,
              &gachaPickupCollateralGroupEntity,
              v18->fields.id,
              0LL) )
        goto LABEL_40;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      info = (VaildGachaInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
      if ( !gachaPickupCollateralGroupEntity || !info )
        goto LABEL_50;
      info = (VaildGachaInfo_o *)GachaPickupCollateralMaster__TryGetEntityFromGroupId(
                                   (GachaPickupCollateralMaster_o *)info,
                                   &v25,
                                   gachaPickupCollateralGroupEntity->fields.id,
                                   0LL);
      if ( ((unsigned __int8)info & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_50;
        maxGetNum = v25->fields.maxGetNum;
        if ( maxGetNum )
          v16 = 785;
        else
          v16 = 746;
        if ( !maxGetNum )
          v17 = (System_String_o *)StringLiteral_7043/*"GACHA_HISTORY_UPPER_MESSAGE"*/;
      }
      else
      {
LABEL_40:
        v16 = 785;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      info = (VaildGachaInfo_o *)LocalizationManager__Get(v17, 0LL);
      v20 = this->fields.info;
      if ( v20 )
      {
        v21 = (System_String_o *)info;
        info = (VaildGachaInfo_o *)LocalizationManager__GetDateTimeDayOfWeek(v20->fields.openedAt, 0LL);
        v22 = this->fields.info;
        if ( v22 )
        {
          v23 = (Il2CppObject *)info;
          DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v22->fields.closedAt, 0LL);
          method = (const MethodInfo *)System_String__Format_62982316(v21, v23, DateTimeDayOfWeek, 0LL);
          goto LABEL_46;
        }
      }
    }
LABEL_50:
    sub_1C13F80(info, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  method = (const MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_7042/*"GACHA_HISTORY_TITLE"*/, 0LL);
  v16 = 785;
LABEL_46:
  info = (VaildGachaInfo_o *)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)info, (System_String_o *)method, 0LL);
  info = (VaildGachaInfo_o *)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_50;
  UIWidget__set_width((UIWidget_o *)info, v16, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaBannerComponent__setBannerGachaInfo(
        GachaBannerComponent_o *this,
        VaildGachaInfo_o *data,
        int32_t idx,
        int32_t moveIdx,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  int32_t width; // w22
  UIAtlas_o *height; // x0
  __int64 v17; // x1
  struct UIPanel_o *clipPanel; // x8
  float v19; // s2
  float v20; // s5
  float v21; // s2
  const MethodInfo *v22; // x1
  UnityEngine_Vector4_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB0D0D & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, data);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    byte_4BB0D0D = 1;
  }
  this->fields.info = data;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.info,
    (int64_t)data,
    *(int64_t *)&idx,
    moveIdx,
    (System_String_o *)bannerAtlas,
    (BattleSetupInfo_o *)imgName,
    (FollowerInfo_o *)method,
    v7);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  width = UnityEngine_Screen__get_width(0LL);
  height = (UIAtlas_o *)UnityEngine_Screen__get_height(0LL);
  clipPanel = this->fields.clipPanel;
  if ( !clipPanel )
    goto LABEL_14;
  v19 = (float)width / (float)(int)height;
  v20 = (float)(fminf(v19, 2.3333) / 1.7778) * 1024.0;
  if ( v19 < 1.7778 )
    v21 = 1024.0;
  else
    v21 = v20;
  v23.fields.z = floorf(v21);
  v23.fields.x = clipPanel->fields.mClipRange.fields.x;
  v23.fields.y = clipPanel->fields.mClipRange.fields.y;
  v23.fields.w = clipPanel->fields.mClipRange.fields.w;
  UIPanel__set_baseClipRegion(this->fields.clipPanel, v23, 0LL);
  GachaBannerComponent__UpdateDisplay(this, v22);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  height = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)height & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      height = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                              bannerAtlas,
                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1C13F80(height, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaBannerComponent__setEnabledCollider(
        GachaBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4BB0D0F & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_4BB0D0F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C13F80(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}