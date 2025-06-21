void __fastcall CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  CombineBannerComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  System_String_o *WebViewAddress; // x19

  v2 = this;
  if ( (byte_4B2018B & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&WebViewManager_TypeInfo, v3);
    this = (CombineBannerComponent_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B2018B = 1;
  }
  eventEntity = v2->fields.eventEntity;
  if ( !eventEntity )
    sub_1BCB254(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0LL, 0LL);
}


void __fastcall CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B2018A & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, eventData);
    byte_4B2018A = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner_39792492(bannerSprite, eventData, 0LL);
  this->fields.eventEntity = eventData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventEntity, (int32_t)eventData, v6, v7);
}