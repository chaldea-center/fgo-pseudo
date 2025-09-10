void CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  CombineBannerComponent_o *v2; // x19
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  System_String_o *WebViewAddress; // x19

  v2 = this;
  if ( (byte_4C2B094 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&WebViewManager_TypeInfo);
    this = (CombineBannerComponent_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B094 = 1;
  }
  eventEntity = v2->fields.eventEntity;
  if ( !eventEntity )
    sub_1C2D6EC(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0, 0);
}


void CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2B093 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C2B093 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner_40383144(bannerSprite, eventData, 0);
  this->fields.eventEntity = eventData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventEntity, (int32_t)eventData, v6, v7);
}