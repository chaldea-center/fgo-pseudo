void __fastcall GachaBannerComponent___ctor(GachaBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GachaBannerComponent__OnClickDetail(GachaBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct VaildGachaInfo_o *info; // x8
  System_String_o *detailUrl; // x19
  System_String_o *v8; // x20

  if ( (byte_40FB350 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&WebViewManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15307/*"WEB_VIEW_TITLE_SUMMON"*/, v5);
    byte_40FB350 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  detailUrl = info->fields.detailUrl;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15307/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(v8, detailUrl, 0LL, 0LL);
}


void __fastcall GachaBannerComponent__UpdateDisplay(GachaBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  VaildGachaInfo_o *info; // x0
  bool HasFlag; // w0
  bool v10; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct VaildGachaInfo_o *v15; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  struct VaildGachaInfo_o *v18; // x8
  System_String_o *v19; // x20
  System_String_o *DateTimeDayOfWeek; // x0
  struct VaildGachaInfo_o *v21; // x8
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  UILabel_o *pickupMessage; // x0
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB34E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaMaster___, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_6810/*"GACHA_PC_MESSAGE"*/, v6);
    sub_B16FFC(&StringLiteral_6811/*"GACHA_PC_MESSAGE_END"*/, v7);
    byte_40FB34E = 1;
  }
  entity = 0LL;
  info = this->fields.info;
  if ( !info )
    goto LABEL_29;
  HasFlag = VaildGachaInfo__HasFlag(info, 2, 0LL);
  if ( !this->fields.pickupMessageParent )
    goto LABEL_29;
  v10 = HasFlag;
  gameObject = UnityEngine_GameObject__get_gameObject(this->fields.pickupMessageParent, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  if ( !v10 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v15 = this->fields.info;
  if ( !v15 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserGachaMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, v15->fields.id, 0LL) )
    goto LABEL_32;
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
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6810/*"GACHA_PC_MESSAGE"*/, 0LL);
    v18 = this->fields.info;
    if ( v18 )
    {
      v19 = v17;
      DateTimeDayOfWeek = LocalizationManager__GetDateTimeDayOfWeek(v18->fields.openedAt, 0LL);
      v21 = this->fields.info;
      if ( v21 )
      {
        v22 = (Il2CppObject *)DateTimeDayOfWeek;
        v23 = (Il2CppObject *)LocalizationManager__GetDateTimeDayOfWeek(v21->fields.closedAt, 0LL);
        v16 = System_String__Format_43739268(v19, v22, v23, 0LL);
        goto LABEL_27;
      }
    }
LABEL_29:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6811/*"GACHA_PC_MESSAGE_END"*/, 0LL);
LABEL_27:
  v24 = v16;
  pickupMessage = this->fields.pickupMessage;
  if ( !pickupMessage )
    goto LABEL_29;
  UILabel__set_text(pickupMessage, v24, 0LL);
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
  __int64 v14; // x1
  int32_t width; // w22
  int32_t height; // w0
  float v17; // s0
  UIPanel_o *clipPanel; // x0
  float v19; // s8
  UIPanel_o *v20; // x22
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  const MethodInfo *v25; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *bannerImg; // x0
  MethodInfo v28; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector4_o clipRange; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB34D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, data);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FB34D = 1;
  }
  this->fields.info = data;
  sub_B16F98(
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
  v28.methodPointer = 0LL;
  v28.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(clipRange, v21, v22, v23, v24, &v28);
  if ( !v20 )
    goto LABEL_14;
  *(_QWORD *)&v30.fields.x = v28.methodPointer;
  *(_QWORD *)&v30.fields.z = v28.invoker_method;
  UIPanel__set_clipRange(v20, v30, 0LL);
  GachaBannerComponent__UpdateDisplay(this, v25);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL) )
  {
    if ( bannerAtlas )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  bannerAtlas,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( this->fields.bannerImg )
      {
        UISprite__set_atlas(this->fields.bannerImg, (UIAtlas_o *)Component_srcLineSprite, 0LL);
        bannerImg = this->fields.bannerImg;
        if ( bannerImg )
        {
          UISprite__set_spriteName(bannerImg, imgName, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaBannerComponent__setEnabledCollider(
        GachaBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40FB34F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_40FB34F = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}