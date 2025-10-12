void BannerComponent___ctor(BannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BannerComponent__OnClick(BannerComponent_o *this, const MethodInfo *method)
{
  System_String_o *linkBody; // x19

  if ( (byte_4C36D3A & 1) == 0 )
  {
    sub_1C32C20(&WebViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36D3A = 1;
  }
  linkBody = this->fields.linkBody;
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, linkBody, 0, 0);
}


void BannerComponent__SetBanner(BannerComponent_o *this, EventEntity_o *eventData, const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  _BOOL8 v6; // x0
  System_String_o *linkBody; // x20
  struct System_String_o *WebViewAddress; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C36D39 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36D39 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = AtlasManager__SetBanner_40505372(bannerSprite, eventData, 0);
  if ( !eventData )
    sub_1C32E7C(v6);
  linkBody = eventData->fields.linkBody;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0);
  this->fields.linkBody = WebViewAddress;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.linkBody, (int32_t)WebViewAddress, v9, v10);
}