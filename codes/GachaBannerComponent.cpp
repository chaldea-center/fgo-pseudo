void GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20

  if ( (byte_596C9C5 & 1) == 0 )
  {
    sub_2213A60(&Method_GachaBannerComponent_OnClickDetail__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_16166/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_596C9C5 = 1;
  }
  v3 = Method_GachaBannerComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_GachaBannerComponent_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_GachaBannerComponent_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  info = this->fields.info;
  if ( !info )
    sub_2213CDC(v5, v6);
  detailUrl = info->fields.detailUrl;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_16166/*"WEB_VIEW_TITLE_SUMMON"*/, 0);
  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v10, v11);
  WebViewManager__OpenView(v12, detailUrl, 0, 0);
}


void GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
{
  VaildGachaInfo_o *info; // x0
  bool HasFlag; // w8
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  struct VaildGachaInfo_o *v7; // x8
  __int64 v8; // x2
  int32_t v9; // w21
  System_String_o *v10; // x20
  struct VaildGachaInfo_o *v11; // x8
  __int64 v12; // x2
  struct VaildGachaInfo_o *v13; // x8
  System_String_o *v14; // x20
  struct VaildGachaInfo_o *v15; // x8
  Il2CppObject *v16; // x22
  Il2CppObject *DateTimeDayOfWeek; // x0
  GachaPickupCollateralEntity_o *v18; // [xsp+0h] [xbp-40h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+8h] [xbp-38h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596C9C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_7207/*"GACHA_PC_MESSAGE_NO_MAX"*/);
    sub_2213A60(&StringLiteral_7205/*"GACHA_PC_MESSAGE"*/);
    sub_2213A60(&StringLiteral_7206/*"GACHA_PC_MESSAGE_END"*/);
    byte_596C9C3 = 1;
  }
  info = this->fields.info;
  entity = 0;
  v18 = 0;
  gachaPickupCollateralGroupEntity = 0;
  if ( !info )
    goto LABEL_51;
  HasFlag = VaildGachaInfo__HasFlag(info, 2, 0);
  info = (VaildGachaInfo_o *)this->fields.pickupMessageParent;
  if ( !HasFlag )
  {
    if ( info )
    {
      info = (VaildGachaInfo_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)info, 0);
      if ( info )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0);
        return;
      }
    }
    goto LABEL_51;
  }
  if ( !info )
    goto LABEL_51;
  info = (VaildGachaInfo_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)info, 0);
  if ( !info )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0);
  info = (VaildGachaInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_51;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)info,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  info = (VaildGachaInfo_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v5);
    info = (VaildGachaInfo_o *)NetworkManager_TypeInfo;
  }
  v7 = this->fields.info;
  if ( !v7 || !MasterData_object )
    goto LABEL_51;
  if ( !UserGachaMaster__TryGetEntity(
          (UserGachaMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)&info[1].fields.name[2].fields,
          v7->fields.id,
          0) )
    goto LABEL_25;
  info = (VaildGachaInfo_o *)entity;
  if ( !entity )
    goto LABEL_51;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0) )
  {
LABEL_25:
    v10 = (System_String_o *)StringLiteral_7205/*"GACHA_PC_MESSAGE"*/;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v8);
    info = (VaildGachaInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    v11 = this->fields.info;
    if ( v11 && info )
    {
      if ( !GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
              (GachaPickupCollateralGroupMaster_o *)info,
              &gachaPickupCollateralGroupEntity,
              v11->fields.id,
              0) )
        goto LABEL_42;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v12);
      info = (VaildGachaInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
      if ( !gachaPickupCollateralGroupEntity || !info )
        goto LABEL_51;
      info = (VaildGachaInfo_o *)GachaPickupCollateralMaster__TryGetEntityFromGroupId(
                                   (GachaPickupCollateralMaster_o *)info,
                                   &v18,
                                   gachaPickupCollateralGroupEntity->fields.id,
                                   0);
      if ( ((unsigned __int8)info & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_51;
        if ( v18->fields.maxGetNum )
          v9 = 785;
        else
          v9 = 746;
        if ( !v18->fields.maxGetNum )
          v10 = (System_String_o *)StringLiteral_7207/*"GACHA_PC_MESSAGE_NO_MAX"*/;
      }
      else
      {
LABEL_42:
        v9 = 785;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v12);
      info = (VaildGachaInfo_o *)LocalizationManager__Get(v10, 0);
      v13 = this->fields.info;
      if ( v13 )
      {
        v14 = (System_String_o *)info;
        info = (VaildGachaInfo_o *)LocalizationManager__GetDateTimeDayOfWeek(v13->fields.openedAt, 0);
        v15 = this->fields.info;
        if ( v15 )
        {
          v16 = (Il2CppObject *)info;
          DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v15->fields.closedAt, 0);
          method = (const MethodInfo *)System_String__Format_75697880(v14, v16, DateTimeDayOfWeek, 0);
          goto LABEL_48;
        }
      }
    }
LABEL_51:
    sub_2213CDC(info, method);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v8);
  method = (const MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_7206/*"GACHA_PC_MESSAGE_END"*/, 0);
  v9 = 785;
LABEL_48:
  info = (VaildGachaInfo_o *)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)info, (System_String_o *)method, 0);
  info = (VaildGachaInfo_o *)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_51;
  UIWidget__set_width((UIWidget_o *)info, v9, 0);
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
  bool v7; // w7
  int32_t width; // w23
  UnityEngine_GameObject_o *height; // x0
  __int64 v16; // x1
  struct UIPanel_o *clipPanel; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s1
  float v21; // s0
  const MethodInfo *v22; // x1
  int64_t privilegeClosedAt; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C9C2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C9C2 = 1;
  }
  this->fields.info = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.info,
    (int32_t)data,
    *(System_String_o **)&idx,
    *(System_String_o **)&moveIdx,
    (int32_t)bannerAtlas,
    (int32_t)imgName,
    (bool)method,
    v7);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  width = UnityEngine_Screen__get_width(0);
  height = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
  clipPanel = this->fields.clipPanel;
  if ( !clipPanel )
    goto LABEL_21;
  v18 = (float)width / (float)(int)height;
  v19 = 2.3333;
  if ( v18 <= 2.3333 )
    v19 = (float)width / (float)(int)height;
  v20 = (float)(v19 / 1.7778) * 1024.0;
  v21 = v18 >= 1.7778 ? v20 : 1024.0;
  v26.fields.y = clipPanel->fields.mClipRange.fields.y;
  v26.fields.w = clipPanel->fields.mClipRange.fields.w;
  v26.fields.z = floorf(v21);
  v26.fields.x = clipPanel->fields.mClipRange.fields.x;
  UIPanel__set_baseClipRegion(this->fields.clipPanel, v26, 0);
  GachaBannerComponent__UpdateDisplay(this, v22);
  if ( !data )
    goto LABEL_21;
  height = this->fields.overwriteTimeParent;
  if ( !height )
    goto LABEL_21;
  privilegeClosedAt = data->fields.privilegeClosedAt;
  UnityEngine_GameObject__SetActive(height, privilegeClosedAt > 0, 0);
  if ( privilegeClosedAt >= 1 )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainTimeComponent, 1, 0);
    height = (UnityEngine_GameObject_o *)this->fields.remainTimeComponent;
    if ( !height )
      goto LABEL_21;
    RemainTimeComponent__StartTimeUpdate((RemainTimeComponent_o *)height, data->fields.privilegeClosedAt, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  height = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)height & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      height = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             bannerAtlas,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
LABEL_21:
    sub_2213CDC(height, v16);
  }
}


void GachaBannerComponent__setEnabledCollider(GachaBannerComponent_o *this, bool isEnable, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_596C9C4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_596C9C4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_2213CDC(0, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
}