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

  if ( (byte_48DF0AD & 1) == 0 )
  {
    sub_1B00CCC(&Method_GachaBannerComponent_OnClickDetail__, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&WebViewManager_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_15323/*"WEB_VIEW_TITLE_SUMMON"*/, v5);
    byte_48DF0AD = 1;
  }
  v6 = Method_GachaBannerComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_GachaBannerComponent_OnClickDetail__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B00CE4(Method_GachaBannerComponent_OnClickDetail__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  info = this->fields.info;
  if ( !info )
    sub_1B00F28(v8, v9);
  detailUrl = info->fields.detailUrl;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15323/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
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
  int64_t info; // x0
  char v9; // w20
  Il2CppObject *MasterData_object; // x20
  struct VaildGachaInfo_o *v11; // x8
  System_String_o *v12; // x0
  struct VaildGachaInfo_o *v13; // x8
  System_String_o *v14; // x20
  struct VaildGachaInfo_o *v15; // x8
  Il2CppObject *v16; // x21
  Il2CppObject *DateTimeDayOfWeek; // x0
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48DF0AB & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserGachaMaster___, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B00CCC(&StringLiteral_6809/*"GACHA_PC_MESSAGE"*/, v6);
    sub_1B00CCC(&StringLiteral_6810/*"GACHA_PC_MESSAGE_END"*/, v7);
    byte_48DF0AB = 1;
  }
  entity = 0LL;
  info = (int64_t)this->fields.info;
  if ( !info )
    goto LABEL_27;
  info = VaildGachaInfo__HasFlag((VaildGachaInfo_o *)info, 2, 0LL);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_27;
  v9 = info;
  info = (int64_t)UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0LL);
  if ( !info )
    goto LABEL_27;
  if ( (v9 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0LL);
  info = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)info,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  info = NetworkManager__get_UserId(0LL);
  v11 = this->fields.info;
  if ( !v11 || !MasterData_object )
    goto LABEL_27;
  if ( !UserGachaMaster__TryGetEntity((UserGachaMaster_o *)MasterData_object, &entity, info, v11->fields.id, 0LL) )
    goto LABEL_30;
  info = (int64_t)entity;
  if ( !entity )
    goto LABEL_27;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0LL) )
  {
LABEL_30:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    info = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6809/*"GACHA_PC_MESSAGE"*/, 0LL);
    v13 = this->fields.info;
    if ( v13 )
    {
      v14 = (System_String_o *)info;
      info = (int64_t)LocalizationManager__GetDateTimeDayOfWeek(v13->fields.openedAt, 0LL);
      v15 = this->fields.info;
      if ( v15 )
      {
        v16 = (Il2CppObject *)info;
        DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v15->fields.closedAt, 0LL);
        v12 = System_String__Format_60340120(v14, v16, DateTimeDayOfWeek, 0LL);
        goto LABEL_24;
      }
    }
LABEL_27:
    sub_1B00F28(info, method);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6810/*"GACHA_PC_MESSAGE_END"*/, 0LL);
LABEL_24:
  method = (const MethodInfo *)v12;
  info = (int64_t)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)info, (System_String_o *)method, 0LL);
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
  __int64 v13; // x1
  int32_t width; // w22
  UIAtlas_o *height; // x0
  __int64 v16; // x1
  struct UIPanel_o *clipPanel; // x8
  float v18; // s2
  float v19; // s5
  float v20; // s2
  const MethodInfo *v21; // x1
  UnityEngine_Vector4_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48DF0AA & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, data);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v13);
    byte_48DF0AA = 1;
  }
  this->fields.info = data;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.info, (int32_t)data, idx, moveIdx);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  width = UnityEngine_Screen__get_width(0LL);
  height = (UIAtlas_o *)UnityEngine_Screen__get_height(0LL);
  clipPanel = this->fields.clipPanel;
  if ( !clipPanel )
    goto LABEL_14;
  v18 = (float)width / (float)(int)height;
  v19 = (float)(fminf(v18, 2.3333) / 1.7778) * 1024.0;
  if ( v18 < 1.7778 )
    v20 = 1024.0;
  else
    v20 = v19;
  v22.fields.z = floorf(v20);
  v22.fields.x = clipPanel->fields.mClipRange.fields.x;
  v22.fields.y = clipPanel->fields.mClipRange.fields.y;
  v22.fields.w = clipPanel->fields.mClipRange.fields.w;
  UIPanel__set_baseClipRegion(this->fields.clipPanel, v22, 0LL);
  GachaBannerComponent__UpdateDisplay(this, v21);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  height = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)height & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      height = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                              bannerAtlas,
                              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1B00F28(height, v16);
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

  if ( (byte_48DF0AC & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_48DF0AC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1B00F28(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}