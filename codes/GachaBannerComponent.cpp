void GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  System_String_o *v8; // x20

  if ( (byte_4C3F434 & 1) == 0 )
  {
    sub_1C37058(&Method_GachaBannerComponent_OnClickDetail__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&WebViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_15555/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_4C3F434 = 1;
  }
  v3 = Method_GachaBannerComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_GachaBannerComponent_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_GachaBannerComponent_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  info = this->fields.info;
  if ( !info )
    sub_1C372B4(v5);
  detailUrl = info->fields.detailUrl;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15555/*"WEB_VIEW_TITLE_SUMMON"*/, 0);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v8, detailUrl, 0, 0);
}


void GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
{
  VaildGachaInfo_o *info; // x0
  char v4; // w20
  Il2CppObject *MasterData_object; // x20
  struct VaildGachaInfo_o *v6; // x8
  System_String_o *v7; // x1
  int32_t v8; // w21
  System_String_o *v9; // x20
  struct VaildGachaInfo_o *v10; // x8
  int32_t maxGetNum; // w8
  struct VaildGachaInfo_o *v12; // x8
  System_String_o *v13; // x20
  struct VaildGachaInfo_o *v14; // x8
  Il2CppObject *v15; // x22
  Il2CppObject *DateTimeDayOfWeek; // x0
  GachaPickupCollateralEntity_o *v17; // [xsp+0h] [xbp-40h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+8h] [xbp-38h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3F432 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_6914/*"GACHA_PC_MESSAGE_NO_MAX"*/);
    sub_1C37058(&StringLiteral_6912/*"GACHA_PC_MESSAGE"*/);
    sub_1C37058(&StringLiteral_6913/*"GACHA_PC_MESSAGE_END"*/);
    byte_4C3F432 = 1;
  }
  entity = 0;
  v17 = 0;
  gachaPickupCollateralGroupEntity = 0;
  info = this->fields.info;
  if ( !info )
    goto LABEL_50;
  info = (VaildGachaInfo_o *)VaildGachaInfo__HasFlag(info, 2, 0);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_50;
  v4 = (char)info;
  info = (VaildGachaInfo_o *)UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0);
  if ( !info )
    goto LABEL_50;
  if ( (v4 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0);
  info = (VaildGachaInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)info,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  info = (VaildGachaInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    info = (VaildGachaInfo_o *)NetworkManager_TypeInfo;
  }
  v6 = this->fields.info;
  if ( !v6 || !MasterData_object )
    goto LABEL_50;
  if ( !UserGachaMaster__TryGetEntity(
          (UserGachaMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)&info[1].fields.name[2].fields,
          v6->fields.id,
          0) )
    goto LABEL_23;
  info = (VaildGachaInfo_o *)entity;
  if ( !entity )
    goto LABEL_50;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0) )
  {
LABEL_23:
    v9 = (System_String_o *)StringLiteral_6912/*"GACHA_PC_MESSAGE"*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    info = (VaildGachaInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    v10 = this->fields.info;
    if ( v10 && info )
    {
      if ( !GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
              (GachaPickupCollateralGroupMaster_o *)info,
              &gachaPickupCollateralGroupEntity,
              v10->fields.id,
              0) )
        goto LABEL_40;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      info = (VaildGachaInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
      if ( !gachaPickupCollateralGroupEntity || !info )
        goto LABEL_50;
      info = (VaildGachaInfo_o *)GachaPickupCollateralMaster__TryGetEntityFromGroupId(
                                   (GachaPickupCollateralMaster_o *)info,
                                   &v17,
                                   gachaPickupCollateralGroupEntity->fields.id,
                                   0);
      if ( ((unsigned __int8)info & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_50;
        maxGetNum = v17->fields.maxGetNum;
        if ( maxGetNum )
          v8 = 785;
        else
          v8 = 746;
        if ( !maxGetNum )
          v9 = (System_String_o *)StringLiteral_6914/*"GACHA_PC_MESSAGE_NO_MAX"*/;
      }
      else
      {
LABEL_40:
        v8 = 785;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      info = (VaildGachaInfo_o *)LocalizationManager__Get(v9, 0);
      v12 = this->fields.info;
      if ( v12 )
      {
        v13 = (System_String_o *)info;
        info = (VaildGachaInfo_o *)LocalizationManager__GetDateTimeDayOfWeek(v12->fields.openedAt, 0);
        v14 = this->fields.info;
        if ( v14 )
        {
          v15 = (Il2CppObject *)info;
          DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v14->fields.closedAt, 0);
          v7 = System_String__Format_63602948(v13, v15, DateTimeDayOfWeek, 0);
          goto LABEL_46;
        }
      }
    }
LABEL_50:
    sub_1C372B4(info);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_6913/*"GACHA_PC_MESSAGE_END"*/, 0);
  v8 = 785;
LABEL_46:
  info = (VaildGachaInfo_o *)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)info, v7, 0);
  info = (VaildGachaInfo_o *)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_50;
  UIWidget__set_width((UIWidget_o *)info, v8, 0);
}


VaildGachaInfo_o *GachaBannerComponent__getBannerGachaInfo(GachaBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.info;
}


int32_t GachaBannerComponent__getBannerIdx(GachaBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.bannerIdx;
}


int32_t GachaBannerComponent__getMoveBannerIdx(GachaBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.moveBannerIdx;
}


// local variable allocation has failed, the output may be wrong!
void GachaBannerComponent__setBannerGachaInfo(
        GachaBannerComponent_o *this,
        VaildGachaInfo_o *data,
        int32_t idx,
        int32_t moveIdx,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  int32_t width; // w23
  UnityEngine_GameObject_o *height; // x0
  struct UIPanel_o *clipPanel; // x8
  float v16; // s2
  float v17; // s5
  float v18; // s2
  const MethodInfo *v19; // x1
  int64_t privilegeClosedAt; // x23
  UnityEngine_Vector4_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F431 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F431 = 1;
  }
  this->fields.info = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.info, (int32_t)data, idx, *(const MethodInfo **)&moveIdx);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  width = UnityEngine_Screen__get_width(0);
  height = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
  clipPanel = this->fields.clipPanel;
  if ( !clipPanel )
    goto LABEL_19;
  v16 = (float)width / (float)(int)height;
  v17 = (float)(fminf(v16, 2.3333) / 1.7778) * 1024.0;
  v18 = v16 < 1.7778 ? 1024.0 : v17;
  v21.fields.z = floorf(v18);
  v21.fields.x = clipPanel->fields.mClipRange.fields.x;
  v21.fields.y = clipPanel->fields.mClipRange.fields.y;
  v21.fields.w = clipPanel->fields.mClipRange.fields.w;
  UIPanel__set_baseClipRegion(this->fields.clipPanel, v21, 0);
  GachaBannerComponent__UpdateDisplay(this, v19);
  if ( !data )
    goto LABEL_19;
  height = this->fields.overwriteTimeParent;
  if ( !height )
    goto LABEL_19;
  privilegeClosedAt = data->fields.privilegeClosedAt;
  UnityEngine_GameObject__SetActive(height, privilegeClosedAt > 0, 0);
  if ( privilegeClosedAt >= 1 )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainTimeComponent, 1, 0);
    height = (UnityEngine_GameObject_o *)this->fields.remainTimeComponent;
    if ( !height )
      goto LABEL_19;
    RemainTimeComponent__StartTimeUpdate((RemainTimeComponent_o *)height, data->fields.privilegeClosedAt, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  height = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)height & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      height = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             bannerAtlas,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( this->fields.bannerImg )
      {
        UISprite__set_atlas(this->fields.bannerImg, (UIAtlas_o *)height, 0);
        height = (UnityEngine_GameObject_o *)this->fields.bannerImg;
        if ( height )
        {
          UISprite__set_spriteName((UISprite_o *)height, imgName, 0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C372B4(height);
  }
}


void GachaBannerComponent__setEnabledCollider(GachaBannerComponent_o *this, bool isEnable, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3F433 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C3F433 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
}