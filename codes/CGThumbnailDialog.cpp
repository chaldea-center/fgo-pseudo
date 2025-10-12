void CGThumbnailDialog___ctor(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3296F & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3296F = 1;
  }
  *(_WORD *)&this->fields.isCG = 257;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CGThumbnailDialog__CloseFullScreen(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x21
  CGThumbnailListViewManager_CallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  CGThumbnailListViewManager_o *galleryFullScreenPanel; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C32969 & 1) == 0 )
  {
    sub_1C32C20(&Method_CGThumbnailDialog_OpenFullScreen__);
    sub_1C32C20(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_4C32969 = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  v4 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1C32E6C(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v5);
  if ( !cgThumbnailListViewManager
    || (cgThumbnailListViewManager->fields.callbackFunc = v4,
        sub_1C32BC4(&cgThumbnailListViewManager->fields.callbackFunc, v4),
        (galleryFullScreenPanel = this->fields.cgThumbnailListViewManager) == 0)
    || (CGThumbnailListViewManager__SetMode(galleryFullScreenPanel, 2, v7),
        (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)this->fields.galleryFullScreenPanel) == 0)
    || (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)galleryFullScreenPanel,
                                                                   0)) == 0 )
  {
    sub_1C32E7C(galleryFullScreenPanel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)galleryFullScreenPanel, 0, 0);
  CGThumbnailDialog__ShowCGThumbnailObjects(this, 1, v8);
}


void CGThumbnailDialog__DestryGalleryFullScreenPanel(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_galleryFullScreenPanel; // x19
  UnityEngine_Object_o *v4; // x20
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // t1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C3296E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3296E = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  p_galleryFullScreenPanel = (UnityEngine_Component_o **)&this->fields.galleryFullScreenPanel;
  v4 = (UnityEngine_Object_o *)galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_galleryFullScreenPanel )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_galleryFullScreenPanel, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_galleryFullScreenPanel = 0;
    sub_1C32BC4(p_galleryFullScreenPanel, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CGThumbnailDialog__FullScreenPanelSetup(CGThumbnailDialog_o *this, int32_t index, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_int__o *v8; // x21
  int32_t Item; // w22
  System_Action_o *v10; // x23
  Il2CppObject *v11; // x25
  System_Action_int__o *v12; // x24
  System_Action_o *v13; // x25

  if ( (byte_4C32968 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CGThumbnailDialog_CloseFullScreen__);
    sub_1C32C20(&Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__);
    sub_1C32C20(&Method_CGThumbnailListViewManager_JumpItemForID__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C32968 = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    goto LABEL_8;
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_SortGalleryIdList(
                                                                 cgThumbnailListViewManager,
                                                                 *(const MethodInfo **)&index);
  if ( !this->fields.cgThumbnailListViewManager )
    goto LABEL_8;
  v8 = (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager;
  cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                                 this->fields.cgThumbnailListViewManager,
                                                                 v7);
  if ( !cgThumbnailListViewManager )
    goto LABEL_8;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager,
           index,
           (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
  v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__, 0);
  v11 = (Il2CppObject *)this->fields.cgThumbnailListViewManager;
  v12 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
  System_Action_int____ctor(v12, v11, Method_CGThumbnailListViewManager_JumpItemForID__, 0);
  v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CGThumbnailDialog_CloseFullScreen__, 0);
  if ( !galleryFullScreenPanel )
LABEL_8:
    sub_1C32E7C(cgThumbnailListViewManager);
  GalleryFullScreenPanel__Setup(galleryFullScreenPanel, v8, Item, v10, v12, v13, 0);
}


void CGThumbnailDialog__OnClickBackToGalleryTop(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CGThumbnailListViewManager_o *v5; // x0
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x20
  ListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4C3296B & 1) == 0 )
  {
    sub_1C32C20(&Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    byte_4C3296B = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickBackToGalleryTop__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickBackToGalleryTop__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v7 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v7, 0),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0),
          (v5 = this->fields.cgThumbnailListViewManager) == 0) )
    {
      sub_1C32E7C(v5);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(v5, v8);
    CGThumbnailDialog__SaveFilter(this, v9);
    BaseDialog__SafeClose((BaseDialog_o *)this, this->fields.backToGalleryTop, 0);
    CGThumbnailDialog__DestryGalleryFullScreenPanel(this, v10);
  }
}


void CGThumbnailDialog__OnClickClose(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CGThumbnailListViewManager_o *v5; // x0
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x20
  ListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4C3296C & 1) == 0 )
  {
    sub_1C32C20(&Method_CGThumbnailDialog_OnClickClose__);
    byte_4C3296C = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_CGThumbnailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v7 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v7, 0),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0),
          (v5 = this->fields.cgThumbnailListViewManager) == 0) )
    {
      sub_1C32E7C(v5);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(v5, v8);
    CGThumbnailDialog__SaveFilter(this, v9);
    ActionExtensions__Call(this->fields.closeAction, 0);
    CGThumbnailDialog__DestryGalleryFullScreenPanel(this, v10);
  }
}


void CGThumbnailDialog__OnClickIsCG(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cgFilterCheckBoxSprite; // x0
  const MethodInfo *v4; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4C32965 & 1) == 0 )
  {
    sub_1C32C20(&Method_CGThumbnailDialog_OnClickIsCG__);
    byte_4C32965 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgFilterCheckBoxSprite;
    this->fields.isCG ^= 1u;
    if ( !cgFilterCheckBoxSprite
      || (cgFilterCheckBoxSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                cgFilterCheckBoxSprite,
                                                                0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFilterCheckBoxSprite, this->fields.isCG, 0),
          (cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgThumbnailListViewManager) == 0) )
    {
      sub_1C32E7C(cgFilterCheckBoxSprite);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)cgFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsCG__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsCG__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_CGThumbnailDialog_OnClickIsCG__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  }
}


void CGThumbnailDialog__OnClickIsMovie(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *movieFilterCheckBoxSprite; // x0
  const MethodInfo *v4; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4C32966 & 1) == 0 )
  {
    sub_1C32C20(&Method_CGThumbnailDialog_OnClickIsMovie__);
    byte_4C32966 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    movieFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.movieFilterCheckBoxSprite;
    this->fields.isMovie ^= 1u;
    if ( !movieFilterCheckBoxSprite
      || (movieFilterCheckBoxSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   movieFilterCheckBoxSprite,
                                                                   0)) == 0
      || (UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)movieFilterCheckBoxSprite,
            this->fields.isMovie,
            0),
          (movieFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgThumbnailListViewManager) == 0) )
    {
      sub_1C32E7C(movieFilterCheckBoxSprite);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)movieFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsMovie__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsMovie__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_CGThumbnailDialog_OnClickIsMovie__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  }
}


void CGThumbnailDialog__OnClickScaleChange(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  const MethodInfo *v7; // x1
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4C3296A & 1) == 0 )
  {
    sub_1C32C20(&Method_CGThumbnailDialog_OnClickScaleChange__);
    byte_4C3296A = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_CGThumbnailDialog_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (CGThumbnailListViewManager__ChangeIconScale(cgThumbnailListViewManager, v5),
          (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                                                         cgThumbnailListViewManager,
                                                                         v7),
          !scaleChangeTabSprite) )
    {
      sub_1C32E7C(cgThumbnailListViewManager);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)cgThumbnailListViewManager, 0);
  }
}


void CGThumbnailDialog__Open(
        CGThumbnailDialog_o *this,
        System_Collections_Generic_List_GalleryEntity__o *galleryEntities,
        int32_t warId,
        System_Action_o *action,
        System_Action_o *close,
        System_Action_o *backToTop,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Component_o *cgFilterCheckBoxSprite; // x8
  const MethodInfo *v16; // x2
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x25
  _BOOL4 isCG; // w27
  _BOOL4 isMovie; // w28
  CGThumbnailListViewManager_CallbackFunc_o *v20; // x26
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x1
  UISprite_o *scaleChangeTabSprite; // x24
  UILabel_o *galleryExplanationLabel; // x24
  UILabel_o *cgFilterCheckBoxLabel; // x24
  UILabel_o *movieFilterCheckBoxLabel; // x24
  UISprite_o *warTitleSprite; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  System_Action_o *v36; // x21
  int32_t v37; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C32964 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CGThumbnailDialog_OpenFullScreen__);
    sub_1C32C20(&Method_CGThumbnailDialog__Open_b__19_0__);
    sub_1C32C20(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6914/*"GALLERY_CHECKBOX_CG"*/);
    sub_1C32C20(&StringLiteral_8004/*"IsGalleryCGFilter"*/);
    sub_1C32C20(&StringLiteral_20664/*"img_txt_gallery_{0}"*/);
    sub_1C32C20(&StringLiteral_6915/*"GALLERY_CHECKBOX_MOVIE"*/);
    sub_1C32C20(&StringLiteral_8005/*"IsGalleryMovieFilter"*/);
    sub_1C32C20(&StringLiteral_6917/*"GALLERY_EXPLANATION"*/);
    byte_4C32964 = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__setBackBtnSprite(titleInfoControl, 2, 1, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__SetActiveTitleName(titleInfoControl, 0, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__setHeaderBgImg(titleInfoControl, 0, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0);
  CGThumbnailDialog__ShowCGThumbnailObjects(this, 1, v14);
  this->fields.isCG = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8004/*"IsGalleryCGFilter"*/, 0, 0) == 1;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8005/*"IsGalleryMovieFilter"*/, 0, 0);
  cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgFilterCheckBoxSprite;
  this->fields.isMovie = (_DWORD)titleInfoControl == 1;
  if ( !cgFilterCheckBoxSprite )
    goto LABEL_23;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(cgFilterCheckBoxSprite, 0);
  if ( !titleInfoControl )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, this->fields.isCG, 0);
  titleInfoControl = (TitleInfoControl_o *)this->fields.movieFilterCheckBoxSprite;
  if ( !titleInfoControl )
    goto LABEL_23;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleInfoControl,
                                             0);
  if ( !titleInfoControl )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, this->fields.isMovie, 0);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_23;
  CGThumbnailListViewManager__SetMode((CGThumbnailListViewManager_o *)titleInfoControl, 1, v16);
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  isCG = this->fields.isCG;
  isMovie = this->fields.isMovie;
  v20 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1C32E6C(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v21);
  if ( !cgThumbnailListViewManager )
    goto LABEL_23;
  CGThumbnailListViewManager__CreateList(cgThumbnailListViewManager, galleryEntities, isCG, isMovie, v20, v22);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_23;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfoControl = (TitleInfoControl_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                             (CGThumbnailListViewManager_o *)titleInfoControl,
                                             v23);
  if ( !scaleChangeTabSprite )
    goto LABEL_23;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfoControl, 0);
  galleryExplanationLabel = this->fields.galleryExplanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6917/*"GALLERY_EXPLANATION"*/, 0);
  if ( !galleryExplanationLabel )
    goto LABEL_23;
  UILabel__set_text(galleryExplanationLabel, (System_String_o *)titleInfoControl, 0);
  cgFilterCheckBoxLabel = this->fields.cgFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6914/*"GALLERY_CHECKBOX_CG"*/, 0);
  if ( !cgFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(cgFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0);
  movieFilterCheckBoxLabel = this->fields.movieFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6915/*"GALLERY_CHECKBOX_MOVIE"*/, 0);
  if ( !movieFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(movieFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0);
  this->fields.backToGalleryTop = backToTop;
  sub_1C32BC4(&this->fields.backToGalleryTop, backToTop);
  this->fields.closeAction = close;
  sub_1C32BC4(&this->fields.closeAction, close);
  warTitleSprite = this->fields.warTitleSprite;
  v37 = warId;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v29, v30, v31, v32, v33, v34);
  titleInfoControl = (TitleInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_20664/*"img_txt_gallery_{0}"*/, v35, 0);
  if ( !warTitleSprite
    || (UISprite__set_spriteName(warTitleSprite, (System_String_o *)titleInfoControl, 0),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.warTitleSprite) == 0) )
  {
LABEL_23:
    sub_1C32E7C(titleInfoControl);
  }
  ((void (__fastcall *)(TitleInfoControl_o *, void *))titleInfoControl->klass[2]._1.parent)(
    titleInfoControl,
    titleInfoControl->klass[2]._1.generic_class);
  v36 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_CGThumbnailDialog__Open_b__19_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v36, 0, 0);
  ActionExtensions__Call(action, 0);
}


void CGThumbnailDialog__OpenFullScreen(CGThumbnailDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x21
  ListViewManager_o *v8; // x0
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  const MethodInfo *v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x19

  if ( (byte_4C32967 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__);
    sub_1C32C20(&CGThumbnailDialog___c__DisplayClass22_0_TypeInfo);
    sub_1C32C20(&StringLiteral_9218/*"MyRoom/Gallery/Prefab"*/);
    byte_4C32967 = 1;
  }
  v5 = sub_1C32E6C(CGThumbnailDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        v6 = sub_1C32BC4(v5 + 16, this),
        *(_DWORD *)(v5 + 24) = index,
        (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0) )
  {
    sub_1C32E7C(v6);
  }
  v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager;
  cgThumbnailListViewManager->fields.initMode = 0;
  cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0);
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0, 0) )
  {
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9218/*"MyRoom/Gallery/Prefab"*/, v11, 1, 0);
  }
  else
  {
    CGThumbnailDialog__FullScreenPanelSetup(this, *(_DWORD *)(v5 + 24), v10);
  }
}


void CGThumbnailDialog__SaveFilter(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3296D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8004/*"IsGalleryCGFilter"*/);
    sub_1C32C20(&StringLiteral_8005/*"IsGalleryMovieFilter"*/);
    byte_4C3296D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8004/*"IsGalleryCGFilter"*/, this->fields.isCG, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8005/*"IsGalleryMovieFilter"*/, this->fields.isMovie, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void CGThumbnailDialog__ShowCGThumbnailObjects(CGThumbnailDialog_o *this, bool isShow, const MethodInfo *method)
{
  UnityEngine_Component_o *cgFullScreenBgSprite; // x0
  long double v6; // q0

  cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.cgFullScreenBgSprite;
  if ( !cgFullScreenBgSprite )
    goto LABEL_10;
  cgFullScreenBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cgFullScreenBgSprite, 0);
  if ( !cgFullScreenBgSprite )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFullScreenBgSprite, !isShow, 0);
  cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.cgThumbnailBgObject;
  if ( !cgFullScreenBgSprite
    || (cgFullScreenBgSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)cgFullScreenBgSprite,
                                                            0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFullScreenBgSprite, isShow, 0),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfoControl, isShow, 0),
        (cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.buttonParentObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFullScreenBgSprite, isShow, 0),
        (cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.basePanel) == 0) )
  {
LABEL_10:
    sub_1C32E7C(cgFullScreenBgSprite);
  }
  LODWORD(v6) = 0;
  if ( isShow )
    *(float *)&v6 = 1.0;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))cgFullScreenBgSprite->klass[1]._1.element_class)(
    cgFullScreenBgSprite,
    cgFullScreenBgSprite->klass[1]._1.castClass,
    v6);
}


void CGThumbnailDialog__UnloadListViewAsset(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1C32E7C(0);
  CGThumbnailListViewManager__UnloadTextureAsset(cgThumbnailListViewManager, method);
}


void CGThumbnailDialog___FullScreenPanelSetup_b__23_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CGThumbnailDialog__ShowCGThumbnailObjects(this, 0, v2);
}


void CGThumbnailDialog___Open_b__19_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1C32E7C(0);
  CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 2, v2);
}


void CGThumbnailDialog___c__DisplayClass22_0___ctor(
        CGThumbnailDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CGThumbnailDialog___c__DisplayClass22_0___OpenFullScreen_b__0(
        CGThumbnailDialog___c__DisplayClass22_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  CGThumbnailDialog___c__DisplayClass22_0_o *v4; // x19
  struct CGThumbnailDialog_o *_4__this; // x20
  Il2CppObject *v6; // x21
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_4C32970 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (CGThumbnailDialog___c__DisplayClass22_0_o *)sub_1C32C20(&StringLiteral_7031/*"GalleryFullScreenListViewPanel"*/);
    byte_4C32970 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)AssetData__GetObject_object__51111776(
                                                        assetData,
                                                        (System_String_o *)StringLiteral_7031/*"GalleryFullScreenListViewPanel"*/,
                                                        (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v4->fields.__4__this )
    goto LABEL_11;
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4->fields.__4__this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_Object__Instantiate_object__51812484(
                                                        v6,
                                                        transform,
                                                        (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  if ( !this
    || (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___),
        !_4__this)
    || (_4__this->fields.galleryFullScreenPanel = (struct GalleryFullScreenPanel_o *)this,
        sub_1C32BC4(&_4__this->fields.galleryFullScreenPanel, this),
        (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C32E7C(this);
  }
  CGThumbnailDialog__FullScreenPanelSetup((CGThumbnailDialog_o *)this, v4->fields.index, v8);
}