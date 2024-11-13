void __fastcall GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  __int64 v16; // x1
  System_String_o *v17; // x20

  if ( (byte_4B1289C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GachaBannerComponent_OnClickDetail__, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15720/*"WEB_VIEW_TITLE_SUMMON"*/, v8, v9);
    byte_4B1289C = 1;
  }
  v10 = Method_GachaBannerComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_GachaBannerComponent_OnClickDetail__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_GachaBannerComponent_OnClickDetail__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  info = this->fields.info;
  if ( !info )
    sub_1BCAA3C(v12, v13);
  detailUrl = info->fields.detailUrl;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15720/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v16);
  WebViewManager__OpenView(v17, detailUrl, 0LL, 0LL);
}


void __fastcall GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t info; // x0
  char v23; // w20
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x20
  struct VaildGachaInfo_o *v26; // x8
  int32_t v27; // w21
  System_String_o *v28; // x20
  struct VaildGachaInfo_o *v29; // x8
  int32_t maxGetNum; // w8
  struct VaildGachaInfo_o *v31; // x8
  System_String_o *v32; // x20
  struct VaildGachaInfo_o *v33; // x8
  Il2CppObject *v34; // x22
  Il2CppObject *DateTimeDayOfWeek; // x0
  GachaPickupCollateralEntity_o *v36; // [xsp+0h] [xbp-40h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+8h] [xbp-38h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1289A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_7003/*"GACHA_PC_MESSAGE_NO_MAX"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_7001/*"GACHA_PC_MESSAGE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_7002/*"GACHA_PC_MESSAGE_END"*/, v20, v21);
    byte_4B1289A = 1;
  }
  entity = 0LL;
  v36 = 0LL;
  gachaPickupCollateralGroupEntity = 0LL;
  info = (int64_t)this->fields.info;
  if ( !info )
    goto LABEL_46;
  info = VaildGachaInfo__HasFlag((VaildGachaInfo_o *)info, 2, 0LL);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_46;
  v23 = info;
  info = (int64_t)UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0LL);
  if ( !info )
    goto LABEL_46;
  if ( (v23 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0LL);
  info = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)info,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  info = NetworkManager__get_UserId(0LL);
  v26 = this->fields.info;
  if ( !v26 || !MasterData_object )
    goto LABEL_46;
  if ( !UserGachaMaster__TryGetEntity((UserGachaMaster_o *)MasterData_object, &entity, info, v26->fields.id, 0LL) )
    goto LABEL_19;
  info = (int64_t)entity;
  if ( !entity )
    goto LABEL_46;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0LL) )
  {
LABEL_19:
    v28 = (System_String_o *)StringLiteral_7001/*"GACHA_PC_MESSAGE"*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    info = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    v29 = this->fields.info;
    if ( v29 && info )
    {
      if ( !GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
              (GachaPickupCollateralGroupMaster_o *)info,
              &gachaPickupCollateralGroupEntity,
              v29->fields.id,
              0LL) )
        goto LABEL_36;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      info = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
      if ( !gachaPickupCollateralGroupEntity || !info )
        goto LABEL_46;
      info = GachaPickupCollateralMaster__TryGetEntityFromGroupId(
               (GachaPickupCollateralMaster_o *)info,
               &v36,
               gachaPickupCollateralGroupEntity->fields.id,
               0LL);
      if ( (info & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_46;
        maxGetNum = v36->fields.maxGetNum;
        if ( maxGetNum )
          v27 = 785;
        else
          v27 = 746;
        if ( !maxGetNum )
          v28 = (System_String_o *)StringLiteral_7003/*"GACHA_PC_MESSAGE_NO_MAX"*/;
      }
      else
      {
LABEL_36:
        v27 = 785;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      info = (int64_t)LocalizationManager__Get(v28, 0LL);
      v31 = this->fields.info;
      if ( v31 )
      {
        v32 = (System_String_o *)info;
        info = (int64_t)LocalizationManager__GetDateTimeDayOfWeek(v31->fields.openedAt, 0LL);
        v33 = this->fields.info;
        if ( v33 )
        {
          v34 = (Il2CppObject *)info;
          DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v33->fields.closedAt, 0LL);
          method = (const MethodInfo *)System_String__Format_62415592(v32, v34, DateTimeDayOfWeek, 0LL);
          goto LABEL_42;
        }
      }
    }
LABEL_46:
    sub_1BCAA3C(info, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  method = (const MethodInfo *)LocalizationManager__Get((System_String_o *)StringLiteral_7002/*"GACHA_PC_MESSAGE_END"*/, 0LL);
  v27 = 785;
LABEL_42:
  info = (int64_t)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)info, (System_String_o *)method, 0LL);
  info = (int64_t)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_46;
  UIWidget__set_width((UIWidget_o *)info, v27, 0LL);
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
  __int64 v15; // x2
  int32_t width; // w22
  UIAtlas_o *height; // x0
  __int64 v18; // x1
  struct UIPanel_o *clipPanel; // x8
  float v20; // s2
  float v21; // s5
  float v22; // s2
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  UnityEngine_Vector4_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12899 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, data, *(_QWORD *)&idx);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B12899 = 1;
  }
  this->fields.info = data;
  sub_1BCA784(
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
  v20 = (float)width / (float)(int)height;
  v21 = (float)(fminf(v20, 2.3333) / 1.7778) * 1024.0;
  if ( v20 < 1.7778 )
    v22 = 1024.0;
  else
    v22 = v21;
  v25.fields.z = floorf(v22);
  v25.fields.x = clipPanel->fields.mClipRange.fields.x;
  v25.fields.y = clipPanel->fields.mClipRange.fields.y;
  v25.fields.w = clipPanel->fields.mClipRange.fields.w;
  UIPanel__set_baseClipRegion(this->fields.clipPanel, v25, 0LL);
  GachaBannerComponent__UpdateDisplay(this, v23);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  height = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)height & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      height = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                              bannerAtlas,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1BCAA3C(height, v18);
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

  if ( (byte_4B1289B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable, method);
    byte_4B1289B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}