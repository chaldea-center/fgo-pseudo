void __fastcall GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  System_String_o *v7; // x20

  if ( (byte_438F130 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&WebViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_15660/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_438F130 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  info = this->fields.info;
  if ( !info )
    sub_B7769C(v3, v4);
  detailUrl = info->fields.detailUrl;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15660/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(v7, detailUrl, 0LL, 0LL);
}


void __fastcall GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
{
  int64_t info; // x0
  char v4; // w20
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct VaildGachaInfo_o *v6; // x8
  System_String_o *v7; // x0
  struct VaildGachaInfo_o *v8; // x8
  System_String_o *v9; // x20
  struct VaildGachaInfo_o *v10; // x8
  Il2CppObject *v11; // x21
  Il2CppObject *DateTimeDayOfWeek; // x0
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438F12E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_6991/*"GACHA_PC_MESSAGE"*/);
    sub_B775C4(&StringLiteral_6992/*"GACHA_PC_MESSAGE_END"*/);
    byte_438F12E = 1;
  }
  entity = 0LL;
  info = (int64_t)this->fields.info;
  if ( !info )
    goto LABEL_29;
  info = VaildGachaInfo__HasFlag((VaildGachaInfo_o *)info, 2, 0LL);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_29;
  v4 = info;
  info = (int64_t)UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0LL);
  if ( !info )
    goto LABEL_29;
  if ( (v4 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)info, 1, 0LL);
  info = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !info )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)info,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  info = NetworkManager__get_UserId(0LL);
  v6 = this->fields.info;
  if ( !v6 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserGachaMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, info, v6->fields.id, 0LL) )
    goto LABEL_32;
  info = (int64_t)entity;
  if ( !entity )
    goto LABEL_29;
  if ( !UserGachaEntity__HasStatus(entity, 2, 0LL) )
  {
LABEL_32:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    info = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6991/*"GACHA_PC_MESSAGE"*/, 0LL);
    v8 = this->fields.info;
    if ( v8 )
    {
      v9 = (System_String_o *)info;
      info = (int64_t)LocalizationManager__GetDateTimeDayOfWeek(v8->fields.openedAt, 0LL);
      v10 = this->fields.info;
      if ( v10 )
      {
        v11 = (Il2CppObject *)info;
        DateTimeDayOfWeek = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v10->fields.closedAt, 0LL);
        v7 = System_String__Format_44897472(v9, v11, DateTimeDayOfWeek, 0LL);
        goto LABEL_27;
      }
    }
LABEL_29:
    sub_B7769C(info, method);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_6992/*"GACHA_PC_MESSAGE_END"*/, 0LL);
LABEL_27:
  method = (const MethodInfo *)v7;
  info = (int64_t)this->fields.pickupMessage;
  if ( !info )
    goto LABEL_29;
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
  System_Int32_array *v7; // x7
  int32_t width; // w22
  int32_t height; // w0
  __int64 v16; // x1
  float v17; // s0
  UIPanel_o *clipPanel; // x0
  float v19; // s8
  UIPanel_o *v20; // x22
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  const MethodInfo *v25; // x1
  MethodInfo v26; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector4_o clipRange; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438F12D & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F12D = 1;
  }
  this->fields.info = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)data,
    *(System_String_array ***)&idx,
    *(System_String_array ***)&moveIdx,
    (System_Boolean_array **)bannerAtlas,
    (System_Int32_array **)imgName,
    (System_Int32_array *)method,
    v7);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v17 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  clipPanel = this->fields.clipPanel;
  if ( !clipPanel )
    goto LABEL_14;
  v19 = v17 / 1.7778;
  clipRange = UIPanel__get_clipRange(clipPanel, 0LL);
  v20 = this->fields.clipPanel;
  clipRange.fields.z = floorf(v19 * 1024.0);
  v26.methodPointer = 0LL;
  v26.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(clipRange, v21, v22, v23, v24, &v26);
  if ( !v20 )
    goto LABEL_14;
  *(_QWORD *)&v28.fields.x = v26.methodPointer;
  *(_QWORD *)&v28.fields.z = v26.invoker_method;
  UIPanel__set_clipRange(v20, v28, 0LL);
  GachaBannerComponent__UpdateDisplay(this, v25);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  clipPanel = (UIPanel_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)clipPanel & 1) == 0 )
  {
    if ( bannerAtlas )
    {
      clipPanel = (UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 bannerAtlas,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( this->fields.bannerImg )
      {
        UISprite__set_atlas(this->fields.bannerImg, (UIAtlas_o *)clipPanel, 0LL);
        clipPanel = (UIPanel_o *)this->fields.bannerImg;
        if ( clipPanel )
        {
          UISprite__set_spriteName((UISprite_o *)clipPanel, imgName, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B7769C(clipPanel, v16);
  }
}


void __fastcall GachaBannerComponent__setEnabledCollider(
        GachaBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_438F12F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_438F12F = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B7769C(0LL, v6);
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}