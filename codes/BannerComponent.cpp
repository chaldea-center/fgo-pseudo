void BannerComponent___ctor(BannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BannerComponent__OnClick(BannerComponent_o *this, const MethodInfo *method)
{
  System_String_o *linkBody; // x19

  if ( (byte_4D2BBB5 & 1) == 0 )
  {
    sub_1C94098(&WebViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BBB5 = 1;
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
  __int64 v7; // x1
  System_String_o *linkBody; // x20
  struct System_String_o *WebViewAddress; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2BBB4 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2BBB4 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = AtlasManager__SetBanner_41355384(bannerSprite, eventData, 0);
  if ( !eventData )
    sub_1C942F0(v6, v7);
  linkBody = eventData->fields.linkBody;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0);
  this->fields.linkBody = WebViewAddress;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.linkBody,
    (int32_t)WebViewAddress,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}