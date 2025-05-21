void __fastcall CGThumbnailDialog___ctor(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B3FB21 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3FB21 = 1;
  }
  *(_WORD *)&this->fields.isCG = 257;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CGThumbnailDialog__CloseFullScreen(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x21
  CGThumbnailListViewManager_CallbackFunc_o *v5; // x20
  CGThumbnailListViewManager_o *galleryFullScreenPanel; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B3FB1B & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailDialog_OpenFullScreen__, method);
    sub_1BDB878(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4B3FB1B = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  v5 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1BDBAC4(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    0LL);
  if ( !cgThumbnailListViewManager
    || (cgThumbnailListViewManager->fields.callbackFunc = v5,
        sub_1BDB81C(&cgThumbnailListViewManager->fields.callbackFunc),
        (galleryFullScreenPanel = this->fields.cgThumbnailListViewManager) == 0LL)
    || (CGThumbnailListViewManager__SetMode(galleryFullScreenPanel, 2, 0LL),
        (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)this->fields.galleryFullScreenPanel) == 0LL)
    || (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)galleryFullScreenPanel,
                                                                   0LL)) == 0LL )
  {
    sub_1BDBAD4(galleryFullScreenPanel, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)galleryFullScreenPanel, 0, 0LL);
  CGThumbnailDialog__ShowCGThumbnailObjects(this, 1, v8);
}


void __fastcall CGThumbnailDialog__DestryGalleryFullScreenPanel(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_galleryFullScreenPanel; // x19
  UnityEngine_Object_o *v4; // x20
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B3FB20 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3FB20 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  p_galleryFullScreenPanel = (UnityEngine_Component_o **)&this->fields.galleryFullScreenPanel;
  v4 = (UnityEngine_Object_o *)galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_galleryFullScreenPanel )
      sub_1BDBAD4(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_galleryFullScreenPanel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_galleryFullScreenPanel = 0LL;
    sub_1BDB81C(p_galleryFullScreenPanel);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailDialog__FullScreenPanelSetup(
        CGThumbnailDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x20
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t Item; // w22
  System_Action_o *v14; // x23
  Il2CppObject *v15; // x25
  System_Action_int__o *v16; // x24
  System_Action_o *v17; // x25

  if ( (byte_4B3FB1A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&System_Action_TypeInfo, v5);
    sub_1BDB878(&Method_CGThumbnailDialog_CloseFullScreen__, v6);
    sub_1BDB878(&Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__, v7);
    sub_1BDB878(&Method_CGThumbnailListViewManager_JumpItemForID__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    byte_4B3FB1A = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    goto LABEL_8;
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_SortGalleryIdList(
                                                                 cgThumbnailListViewManager,
                                                                 0LL);
  if ( !this->fields.cgThumbnailListViewManager )
    goto LABEL_8;
  v12 = (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager;
  cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                                 this->fields.cgThumbnailListViewManager,
                                                                 0LL);
  if ( !cgThumbnailListViewManager )
    goto LABEL_8;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager,
           index,
           (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
  v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__, 0LL);
  v15 = (Il2CppObject *)this->fields.cgThumbnailListViewManager;
  v16 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v16, v15, Method_CGThumbnailListViewManager_JumpItemForID__, 0LL);
  v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CGThumbnailDialog_CloseFullScreen__, 0LL);
  if ( !galleryFullScreenPanel )
LABEL_8:
    sub_1BDBAD4(cgThumbnailListViewManager, *(_QWORD *)&index);
  GalleryFullScreenPanel__Setup(galleryFullScreenPanel, v12, Item, v14, v16, v17, 0LL);
}


void __fastcall CGThumbnailDialog__OnClickBackToGalleryTop(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B3FB1D & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailDialog_OnClickBackToGalleryTop__, method);
    byte_4B3FB1D = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickBackToGalleryTop__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickBackToGalleryTop__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 0, 0LL),
          (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1BDBAD4(cgThumbnailListViewManager, v5);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(cgThumbnailListViewManager, 0LL);
    CGThumbnailDialog__SaveFilter(this, v7);
    BaseDialog__SafeClose((BaseDialog_o *)this, this->fields.backToGalleryTop, 0LL);
    CGThumbnailDialog__DestryGalleryFullScreenPanel(this, v8);
  }
}


void __fastcall CGThumbnailDialog__OnClickClose(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B3FB1E & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailDialog_OnClickClose__, method);
    byte_4B3FB1E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_CGThumbnailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 0, 0LL),
          (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1BDBAD4(cgThumbnailListViewManager, v5);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(cgThumbnailListViewManager, 0LL);
    CGThumbnailDialog__SaveFilter(this, v7);
    ActionExtensions__Call(this->fields.closeAction, 0LL);
    CGThumbnailDialog__DestryGalleryFullScreenPanel(this, v8);
  }
}


void __fastcall CGThumbnailDialog__OnClickIsCG(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cgFilterCheckBoxSprite; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B3FB17 & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailDialog_OnClickIsCG__, method);
    byte_4B3FB17 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgFilterCheckBoxSprite;
    this->fields.isCG ^= 1u;
    if ( !cgFilterCheckBoxSprite
      || (cgFilterCheckBoxSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                cgFilterCheckBoxSprite,
                                                                0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFilterCheckBoxSprite, this->fields.isCG, 0LL),
          (cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1BDBAD4(cgFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)cgFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      0LL);
    v4 = Method_CGThumbnailDialog_OnClickIsCG__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsCG__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_CGThumbnailDialog_OnClickIsCG__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  }
}


void __fastcall CGThumbnailDialog__OnClickIsMovie(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *movieFilterCheckBoxSprite; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B3FB18 & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailDialog_OnClickIsMovie__, method);
    byte_4B3FB18 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    movieFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.movieFilterCheckBoxSprite;
    this->fields.isMovie ^= 1u;
    if ( !movieFilterCheckBoxSprite
      || (movieFilterCheckBoxSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   movieFilterCheckBoxSprite,
                                                                   0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)movieFilterCheckBoxSprite,
            this->fields.isMovie,
            0LL),
          (movieFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1BDBAD4(movieFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)movieFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      0LL);
    v4 = Method_CGThumbnailDialog_OnClickIsMovie__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsMovie__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_CGThumbnailDialog_OnClickIsMovie__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  }
}


void __fastcall CGThumbnailDialog__OnClickScaleChange(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B3FB1C & 1) == 0 )
  {
    sub_1BDB878(&Method_CGThumbnailDialog_OnClickScaleChange__, method);
    byte_4B3FB1C = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_CGThumbnailDialog_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (CGThumbnailListViewManager__ChangeIconScale(cgThumbnailListViewManager, 0LL),
          (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                                                         cgThumbnailListViewManager,
                                                                         0LL),
          !scaleChangeTabSprite) )
    {
      sub_1BDBAD4(cgThumbnailListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)cgThumbnailListViewManager, 0LL);
  }
}


void __fastcall CGThumbnailDialog__Open(
        CGThumbnailDialog_o *this,
        System_Collections_Generic_List_GalleryEntity__o *galleryEntities,
        int32_t warId,
        System_Action_o *action,
        System_Action_o *close,
        System_Action_o *backToTop,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  TitleInfoControl_o *titleInfoControl; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Component_o *cgFilterCheckBoxSprite; // x8
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x25
  _BOOL4 isCG; // w27
  _BOOL4 isMovie; // w28
  CGThumbnailListViewManager_CallbackFunc_o *v30; // x26
  UISprite_o *scaleChangeTabSprite; // x24
  UILabel_o *galleryExplanationLabel; // x24
  UILabel_o *cgFilterCheckBoxLabel; // x24
  UILabel_o *movieFilterCheckBoxLabel; // x24
  UISprite_o *warTitleSprite; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  System_Action_o *v40; // x21
  int32_t v41; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B3FB16 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, galleryEntities);
    sub_1BDB878(&Method_CGThumbnailDialog_OpenFullScreen__, v13);
    sub_1BDB878(&Method_CGThumbnailDialog__Open_b__19_0__, v14);
    sub_1BDB878(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, v15);
    sub_1BDB878(&int_TypeInfo, v16);
    sub_1BDB878(&LocalizationManager_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_6925/*"GALLERY_CHECKBOX_CG"*/, v18);
    sub_1BDB878(&StringLiteral_7997/*"IsGalleryCGFilter"*/, v19);
    sub_1BDB878(&StringLiteral_20675/*"img_txt_gallery_{0}"*/, v20);
    sub_1BDB878(&StringLiteral_6926/*"GALLERY_CHECKBOX_MOVIE"*/, v21);
    sub_1BDB878(&StringLiteral_7998/*"IsGalleryMovieFilter"*/, v22);
    sub_1BDB878(&StringLiteral_6928/*"GALLERY_EXPLANATION"*/, v23);
    byte_4B3FB16 = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__setBackBtnSprite(titleInfoControl, 2, 1, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__SetActiveTitleName(titleInfoControl, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__setHeaderBgImg(titleInfoControl, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_23;
  TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL);
  CGThumbnailDialog__ShowCGThumbnailObjects(this, 1, v25);
  this->fields.isCG = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7997/*"IsGalleryCGFilter"*/, 0, 0LL) == 1;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt(
                                             (System_String_o *)StringLiteral_7998/*"IsGalleryMovieFilter"*/,
                                             0,
                                             0LL);
  cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgFilterCheckBoxSprite;
  this->fields.isMovie = (_DWORD)titleInfoControl == 1;
  if ( !cgFilterCheckBoxSprite )
    goto LABEL_23;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(cgFilterCheckBoxSprite, 0LL);
  if ( !titleInfoControl )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, this->fields.isCG, 0LL);
  titleInfoControl = (TitleInfoControl_o *)this->fields.movieFilterCheckBoxSprite;
  if ( !titleInfoControl )
    goto LABEL_23;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleInfoControl,
                                             0LL);
  if ( !titleInfoControl )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, this->fields.isMovie, 0LL);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_23;
  CGThumbnailListViewManager__SetMode((CGThumbnailListViewManager_o *)titleInfoControl, 1, 0LL);
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  isCG = this->fields.isCG;
  isMovie = this->fields.isMovie;
  v30 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1BDBAC4(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    0LL);
  if ( !cgThumbnailListViewManager )
    goto LABEL_23;
  CGThumbnailListViewManager__CreateList(cgThumbnailListViewManager, galleryEntities, isCG, isMovie, v30, 0LL);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_23;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfoControl = (TitleInfoControl_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                             (CGThumbnailListViewManager_o *)titleInfoControl,
                                             0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_23;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfoControl, 0LL);
  galleryExplanationLabel = this->fields.galleryExplanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6928/*"GALLERY_EXPLANATION"*/, 0LL);
  if ( !galleryExplanationLabel )
    goto LABEL_23;
  UILabel__set_text(galleryExplanationLabel, (System_String_o *)titleInfoControl, 0LL);
  cgFilterCheckBoxLabel = this->fields.cgFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6925/*"GALLERY_CHECKBOX_CG"*/, 0LL);
  if ( !cgFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(cgFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0LL);
  movieFilterCheckBoxLabel = this->fields.movieFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6926/*"GALLERY_CHECKBOX_MOVIE"*/, 0LL);
  if ( !movieFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(movieFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0LL);
  this->fields.backToGalleryTop = backToTop;
  sub_1BDB81C(&this->fields.backToGalleryTop);
  this->fields.closeAction = close;
  sub_1BDB81C(&this->fields.closeAction);
  warTitleSprite = this->fields.warTitleSprite;
  v41 = warId;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
  titleInfoControl = (TitleInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_20675/*"img_txt_gallery_{0}"*/, v39, 0LL);
  if ( !warTitleSprite
    || (UISprite__set_spriteName(warTitleSprite, (System_String_o *)titleInfoControl, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.warTitleSprite) == 0LL) )
  {
LABEL_23:
    sub_1BDBAD4(titleInfoControl, galleryEntities);
  }
  ((void (__fastcall *)(TitleInfoControl_o *, void *))titleInfoControl->klass[2]._1.typeMetadataHandle)(
    titleInfoControl,
    titleInfoControl->klass[2]._1.interopData);
  v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_CGThumbnailDialog__Open_b__19_0__, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v40, 0, 0LL);
  ActionExtensions__Call(action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailDialog__OpenFullScreen(CGThumbnailDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  const MethodInfo *v14; // x2
  AssetLoader_LoadEndDataHandler_o *v15; // x19

  if ( (byte_4B3FB19 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__, v7);
    sub_1BDB878(&CGThumbnailDialog___c__DisplayClass22_0_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_9216/*"MyRoom/Gallery/Prefab"*/, v9);
    byte_4B3FB19 = 1;
  }
  v10 = sub_1BDBAC4(CGThumbnailDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BDB81C(v10 + 16),
        *(_DWORD *)(v10 + 24) = index,
        (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0LL) )
  {
    sub_1BDBAD4(cgThumbnailListViewManager, v12);
  }
  CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 0, 0LL);
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0LL, 0LL) )
  {
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v15,
      (Il2CppObject *)v10,
      Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9216/*"MyRoom/Gallery/Prefab"*/, v15, 1, 0LL);
  }
  else
  {
    CGThumbnailDialog__FullScreenPanelSetup(this, *(_DWORD *)(v10 + 24), v14);
  }
}


void __fastcall CGThumbnailDialog__SaveFilter(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B3FB1F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_7997/*"IsGalleryCGFilter"*/, method);
    sub_1BDB878(&StringLiteral_7998/*"IsGalleryMovieFilter"*/, v3);
    byte_4B3FB1F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7997/*"IsGalleryCGFilter"*/, this->fields.isCG, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7998/*"IsGalleryMovieFilter"*/, this->fields.isMovie, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailDialog__ShowCGThumbnailObjects(
        CGThumbnailDialog_o *this,
        bool isShow,
        const MethodInfo *method)
{
  UnityEngine_Component_o *cgFullScreenBgSprite; // x0
  long double v6; // q0

  cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.cgFullScreenBgSprite;
  if ( !cgFullScreenBgSprite )
    goto LABEL_10;
  cgFullScreenBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cgFullScreenBgSprite, 0LL);
  if ( !cgFullScreenBgSprite )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFullScreenBgSprite, !isShow, 0LL);
  cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.cgThumbnailBgObject;
  if ( !cgFullScreenBgSprite
    || (cgFullScreenBgSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)cgFullScreenBgSprite,
                                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFullScreenBgSprite, isShow, 0LL),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfoControl, isShow, 0LL),
        (cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.buttonParentObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cgFullScreenBgSprite, isShow, 0LL),
        (cgFullScreenBgSprite = (UnityEngine_Component_o *)this->fields.basePanel) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(cgFullScreenBgSprite, isShow);
  }
  LODWORD(v6) = 0;
  if ( isShow )
    *(float *)&v6 = 1.0;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))cgFullScreenBgSprite->klass[1]._1.castClass)(
    cgFullScreenBgSprite,
    cgFullScreenBgSprite->klass[1]._1.declaringType,
    v6);
}


void __fastcall CGThumbnailDialog__UnloadListViewAsset(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1BDBAD4(0LL, method);
  CGThumbnailListViewManager__UnloadTextureAsset(cgThumbnailListViewManager, 0LL);
}


void __fastcall CGThumbnailDialog___FullScreenPanelSetup_b__23_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CGThumbnailDialog__ShowCGThumbnailObjects(this, 0, v2);
}


void __fastcall CGThumbnailDialog___Open_b__19_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1BDBAD4(0LL, method);
  CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 2, 0LL);
}


void __fastcall CGThumbnailDialog___c__DisplayClass22_0___ctor(
        CGThumbnailDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CGThumbnailDialog___c__DisplayClass22_0___OpenFullScreen_b__0(
        CGThumbnailDialog___c__DisplayClass22_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  CGThumbnailDialog___c__DisplayClass22_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CGThumbnailDialog_o *_4__this; // x20
  Il2CppObject *v10; // x21
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B3FB22 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, assetData);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    this = (CGThumbnailDialog___c__DisplayClass22_0_o *)sub_1BDB878(&StringLiteral_7033/*"GalleryFullScreenListViewPanel"*/, v8);
    byte_4B3FB22 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)AssetData__GetObject_object__50417328(
                                                        assetData,
                                                        (System_String_o *)StringLiteral_7033/*"GalleryFullScreenListViewPanel"*/,
                                                        (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v4->fields.__4__this )
    goto LABEL_11;
  v10 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4->fields.__4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                        v10,
                                                        transform,
                                                        (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
  if ( !this
    || (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___),
        !_4__this)
    || (_4__this->fields.galleryFullScreenPanel = (struct GalleryFullScreenPanel_o *)this,
        sub_1BDB81C(&_4__this->fields.galleryFullScreenPanel),
        (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BDBAD4(this, assetData);
  }
  CGThumbnailDialog__FullScreenPanelSetup((CGThumbnailDialog_o *)this, v4->fields.index, v12);
}