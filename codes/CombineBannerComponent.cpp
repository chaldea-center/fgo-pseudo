void __fastcall CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  CombineBannerComponent_o *v2; // x19
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  System_String_o *WebViewAddress; // x19

  v2 = this;
  if ( (byte_42B0EC6 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&WebViewManager_TypeInfo);
    this = (CombineBannerComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0EC6 = 1;
  }
  eventEntity = v2->fields.eventEntity;
  if ( !eventEntity )
    sub_B52A5C(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0LL, 0LL);
}


void __fastcall CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B0EC5 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B0EC5 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner_28375196(bannerSprite, eventData, 0LL);
  this->fields.eventEntity = eventData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)eventData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}