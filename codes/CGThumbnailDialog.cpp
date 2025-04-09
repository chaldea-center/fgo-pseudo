void __fastcall CGThumbnailDialog___ctor(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49B6043 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B6043 = 1;
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
  const MethodInfo *v6; // x3
  CGThumbnailListViewManager_o *galleryFullScreenPanel; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_49B603D & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailDialog_OpenFullScreen__, method);
    sub_1B4CF90(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, v3);
    byte_49B603D = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  v5 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1B4D1DC(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v6);
  if ( !cgThumbnailListViewManager )
    goto LABEL_9;
  cgThumbnailListViewManager->fields.callbackFunc = v5;
  sub_1B4CF34(&cgThumbnailListViewManager->fields.callbackFunc);
  galleryFullScreenPanel = this->fields.cgThumbnailListViewManager;
  if ( !galleryFullScreenPanel
    || (CGThumbnailListViewManager__SetMode(galleryFullScreenPanel, 2, v9),
        (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)this->fields.galleryFullScreenPanel) == 0LL)
    || (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)galleryFullScreenPanel,
                                                                   0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)galleryFullScreenPanel, 0, 0LL),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfoControl, 1, 0LL),
        (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)this->fields.buttonParentObject) == 0LL) )
  {
LABEL_9:
    sub_1B4D1EC(galleryFullScreenPanel, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)galleryFullScreenPanel, 1, 0LL);
}


void __fastcall CGThumbnailDialog__DestryGalleryFullScreenPanel(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_galleryFullScreenPanel; // x19
  UnityEngine_Object_o *v4; // x20
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_49B6042 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6042 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  p_galleryFullScreenPanel = (UnityEngine_Component_o **)&this->fields.galleryFullScreenPanel;
  v4 = (UnityEngine_Object_o *)galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_galleryFullScreenPanel )
      sub_1B4D1EC(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_galleryFullScreenPanel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    *p_galleryFullScreenPanel = 0LL;
    sub_1B4CF34(p_galleryFullScreenPanel);
  }
}


void __fastcall CGThumbnailDialog__OnClickBackToGalleryTop(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CGThumbnailListViewManager_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x20
  ListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_49B603F & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailDialog_OnClickBackToGalleryTop__, method);
    byte_49B603F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickBackToGalleryTop__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickBackToGalleryTop__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0LL),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0LL),
          (v5 = this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1B4D1EC(v5, v6);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(v5, v6);
    CGThumbnailDialog__SaveFilter(this, v9);
    BaseDialog__SafeClose((BaseDialog_o *)this, this->fields.backToGalleryTop, 0LL);
    CGThumbnailDialog__DestryGalleryFullScreenPanel(this, v10);
  }
}


void __fastcall CGThumbnailDialog__OnClickClose(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CGThumbnailListViewManager_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x20
  ListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_49B6040 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailDialog_OnClickClose__, method);
    byte_49B6040 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0LL),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0LL),
          (v5 = this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1B4D1EC(v5, v6);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(v5, v6);
    CGThumbnailDialog__SaveFilter(this, v9);
    ActionExtensions__Call(this->fields.closeAction, 0LL);
    CGThumbnailDialog__DestryGalleryFullScreenPanel(this, v10);
  }
}


void __fastcall CGThumbnailDialog__OnClickIsCG(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cgFilterCheckBoxSprite; // x0
  const MethodInfo *v4; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_49B603A & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailDialog_OnClickIsCG__, method);
    byte_49B603A = 1;
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
      sub_1B4D1EC(cgFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)cgFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsCG__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsCG__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailDialog_OnClickIsCG__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  }
}


void __fastcall CGThumbnailDialog__OnClickIsMovie(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *movieFilterCheckBoxSprite; // x0
  const MethodInfo *v4; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_49B603B & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailDialog_OnClickIsMovie__, method);
    byte_49B603B = 1;
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
      sub_1B4D1EC(movieFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)movieFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsMovie__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsMovie__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailDialog_OnClickIsMovie__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  }
}


void __fastcall CGThumbnailDialog__OnClickScaleChange(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49B603E & 1) == 0 )
  {
    sub_1B4CF90(&Method_CGThumbnailDialog_OnClickScaleChange__, method);
    byte_49B603E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_CGThumbnailDialog_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (CGThumbnailListViewManager__ChangeIconScale(cgThumbnailListViewManager, v5),
          (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                                                         cgThumbnailListViewManager,
                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_1B4D1EC(cgThumbnailListViewManager, v5);
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
  UnityEngine_Component_o *cgFilterCheckBoxSprite; // x8
  const MethodInfo *v26; // x2
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x25
  _BOOL4 isCG; // w27
  _BOOL4 isMovie; // w28
  CGThumbnailListViewManager_CallbackFunc_o *v30; // x26
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x5
  UISprite_o *scaleChangeTabSprite; // x24
  UILabel_o *galleryExplanationLabel; // x24
  UILabel_o *cgFilterCheckBoxLabel; // x24
  UILabel_o *movieFilterCheckBoxLabel; // x24
  UISprite_o *warTitleSprite; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_Action_o *v42; // x21
  int32_t v43; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49B6039 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, galleryEntities);
    sub_1B4CF90(&Method_CGThumbnailDialog_OpenFullScreen__, v13);
    sub_1B4CF90(&Method_CGThumbnailDialog__Open_b__17_0__, v14);
    sub_1B4CF90(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, v15);
    sub_1B4CF90(&int_TypeInfo, v16);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_6798/*"GALLERY_CHECKBOX_CG"*/, v18);
    sub_1B4CF90(&StringLiteral_7814/*"IsGalleryCGFilter"*/, v19);
    sub_1B4CF90(&StringLiteral_20258/*"img_txt_gallery_{0}"*/, v20);
    sub_1B4CF90(&StringLiteral_6799/*"GALLERY_CHECKBOX_MOVIE"*/, v21);
    sub_1B4CF90(&StringLiteral_7815/*"IsGalleryMovieFilter"*/, v22);
    sub_1B4CF90(&StringLiteral_6801/*"GALLERY_EXPLANATION"*/, v23);
    byte_49B6039 = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_24;
  TitleInfoControl__setBackBtnSprite(titleInfoControl, 2, 1, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_24;
  TitleInfoControl__SetActiveTitleName(titleInfoControl, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_24;
  TitleInfoControl__setHeaderBgImg(titleInfoControl, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_24;
  TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfoControl, 1, 0LL);
  titleInfoControl = (TitleInfoControl_o *)this->fields.buttonParentObject;
  if ( !titleInfoControl )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, 1, 0LL);
  this->fields.isCG = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7814/*"IsGalleryCGFilter"*/, 0, 0LL) == 1;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt(
                                             (System_String_o *)StringLiteral_7815/*"IsGalleryMovieFilter"*/,
                                             0,
                                             0LL);
  cgFilterCheckBoxSprite = (UnityEngine_Component_o *)this->fields.cgFilterCheckBoxSprite;
  this->fields.isMovie = (_DWORD)titleInfoControl == 1;
  if ( !cgFilterCheckBoxSprite )
    goto LABEL_24;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(cgFilterCheckBoxSprite, 0LL);
  if ( !titleInfoControl )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, this->fields.isCG, 0LL);
  titleInfoControl = (TitleInfoControl_o *)this->fields.movieFilterCheckBoxSprite;
  if ( !titleInfoControl )
    goto LABEL_24;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleInfoControl,
                                             0LL);
  if ( !titleInfoControl )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, this->fields.isMovie, 0LL);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_24;
  CGThumbnailListViewManager__SetMode((CGThumbnailListViewManager_o *)titleInfoControl, 1, v26);
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  isCG = this->fields.isCG;
  isMovie = this->fields.isMovie;
  v30 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1B4D1DC(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v31);
  if ( !cgThumbnailListViewManager )
    goto LABEL_24;
  CGThumbnailListViewManager__CreateList(cgThumbnailListViewManager, galleryEntities, isCG, isMovie, v30, v32);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_24;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfoControl = (TitleInfoControl_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                             (CGThumbnailListViewManager_o *)titleInfoControl,
                                             (const MethodInfo *)galleryEntities);
  if ( !scaleChangeTabSprite )
    goto LABEL_24;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfoControl, 0LL);
  galleryExplanationLabel = this->fields.galleryExplanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6801/*"GALLERY_EXPLANATION"*/, 0LL);
  if ( !galleryExplanationLabel )
    goto LABEL_24;
  UILabel__set_text(galleryExplanationLabel, (System_String_o *)titleInfoControl, 0LL);
  cgFilterCheckBoxLabel = this->fields.cgFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6798/*"GALLERY_CHECKBOX_CG"*/, 0LL);
  if ( !cgFilterCheckBoxLabel )
    goto LABEL_24;
  UILabel__set_text(cgFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0LL);
  movieFilterCheckBoxLabel = this->fields.movieFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6799/*"GALLERY_CHECKBOX_MOVIE"*/, 0LL);
  if ( !movieFilterCheckBoxLabel )
    goto LABEL_24;
  UILabel__set_text(movieFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0LL);
  this->fields.backToGalleryTop = backToTop;
  sub_1B4CF34(&this->fields.backToGalleryTop);
  this->fields.closeAction = close;
  sub_1B4CF34(&this->fields.closeAction);
  warTitleSprite = this->fields.warTitleSprite;
  v43 = warId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v38, v39, v40);
  titleInfoControl = (TitleInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_20258/*"img_txt_gallery_{0}"*/, v41, 0LL);
  if ( !warTitleSprite
    || (UISprite__set_spriteName(warTitleSprite, (System_String_o *)titleInfoControl, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.warTitleSprite) == 0LL) )
  {
LABEL_24:
    sub_1B4D1EC(titleInfoControl, galleryEntities);
  }
  ((void (__fastcall *)(TitleInfoControl_o *, void *))titleInfoControl->klass[2]._1.typeMetadataHandle)(
    titleInfoControl,
    titleInfoControl->klass[2]._1.interopData);
  v42 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_CGThumbnailDialog__Open_b__17_0__, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v42, 0, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  CGThumbnailListViewManager_o *SortGalleryIdList; // x0
  const MethodInfo *v17; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x21
  ListViewManager_o *v19; // x0
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  AssetLoader_LoadEndDataHandler_o *v21; // x19
  GalleryFullScreenPanel_o *v22; // x21
  System_Collections_Generic_List_int__o *v23; // x22
  int32_t Item; // w0
  Il2CppObject *v25; // x24
  int32_t v26; // w20
  System_Action_int__o *v27; // x23
  System_Action_o *v28; // x24

  if ( (byte_49B603C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&System_Action_TypeInfo, v5);
    sub_1B4CF90(&AssetManager_TypeInfo, v6);
    sub_1B4CF90(&Method_CGThumbnailDialog_CloseFullScreen__, v7);
    sub_1B4CF90(&Method_CGThumbnailListViewManager_JumpItemForID__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    sub_1B4CF90(&Method_CGThumbnailDialog___c__DisplayClass20_0__OpenFullScreen_b__0__, v12);
    sub_1B4CF90(&CGThumbnailDialog___c__DisplayClass20_0_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_9021/*"MyRoom/Gallery/Prefab"*/, v14);
    byte_49B603C = 1;
  }
  v15 = sub_1B4D1DC(CGThumbnailDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  *(_QWORD *)(v15 + 16) = this;
  SortGalleryIdList = (CGThumbnailListViewManager_o *)sub_1B4CF34(v15 + 16);
  *(_DWORD *)(v15 + 24) = index;
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    goto LABEL_17;
  v19 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager;
  cgThumbnailListViewManager->fields.initMode = 0;
  cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v19, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0LL);
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0LL, 0LL) )
  {
    SortGalleryIdList = this->fields.cgThumbnailListViewManager;
    if ( SortGalleryIdList )
    {
      v22 = this->fields.galleryFullScreenPanel;
      SortGalleryIdList = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_SortGalleryIdList(
                                                            SortGalleryIdList,
                                                            v17);
      if ( this->fields.cgThumbnailListViewManager )
      {
        v23 = (System_Collections_Generic_List_int__o *)SortGalleryIdList;
        SortGalleryIdList = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                              this->fields.cgThumbnailListViewManager,
                                                              v17);
        if ( SortGalleryIdList )
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)SortGalleryIdList,
                   *(_DWORD *)(v15 + 24),
                   (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
          v25 = (Il2CppObject *)this->fields.cgThumbnailListViewManager;
          v26 = Item;
          v27 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo);
          System_Action_int____ctor(v27, v25, Method_CGThumbnailListViewManager_JumpItemForID__, 0LL);
          v28 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_CGThumbnailDialog_CloseFullScreen__, 0LL);
          if ( v22 )
          {
            GalleryFullScreenPanel__Setup(v22, v23, v26, v27, v28, 0LL);
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfoControl, 0, 0LL);
            SortGalleryIdList = (CGThumbnailListViewManager_o *)this->fields.buttonParentObject;
            if ( SortGalleryIdList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SortGalleryIdList, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_1B4D1EC(SortGalleryIdList, v17);
  }
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v15,
    Method_CGThumbnailDialog___c__DisplayClass20_0__OpenFullScreen_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9021/*"MyRoom/Gallery/Prefab"*/, v21, 1, 0LL);
}


void __fastcall CGThumbnailDialog__SaveFilter(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49B6041 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_7814/*"IsGalleryCGFilter"*/, method);
    sub_1B4CF90(&StringLiteral_7815/*"IsGalleryMovieFilter"*/, v3);
    byte_49B6041 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7814/*"IsGalleryCGFilter"*/, this->fields.isCG, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7815/*"IsGalleryMovieFilter"*/, this->fields.isMovie, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall CGThumbnailDialog__UnloadListViewAsset(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1B4D1EC(0LL, method);
  CGThumbnailListViewManager__UnloadTextureAsset(cgThumbnailListViewManager, method);
}


void __fastcall CGThumbnailDialog___Open_b__17_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1B4D1EC(0LL, method);
  CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 2, v2);
}


void __fastcall CGThumbnailDialog___c__DisplayClass20_0___ctor(
        CGThumbnailDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CGThumbnailDialog___c__DisplayClass20_0___OpenFullScreen_b__0(
        CGThumbnailDialog___c__DisplayClass20_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  CGThumbnailDialog___c__DisplayClass20_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CGThumbnailDialog_o *_4__this; // x21
  Il2CppObject *v15; // x20
  UnityEngine_Transform_o *transform; // x22
  struct CGThumbnailDialog_o *v17; // x8
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x20
  struct CGThumbnailDialog_o *v19; // x8
  CGThumbnailDialog___c__DisplayClass20_0_o *v20; // x21
  struct CGThumbnailDialog_o *v21; // x8
  int32_t v22; // w22
  Il2CppObject *cgThumbnailListViewManager; // x24
  System_Action_int__o *v24; // x23
  Il2CppObject *v25; // x25
  System_Action_o *v26; // x24
  struct CGThumbnailDialog_o *v27; // x8
  struct CGThumbnailDialog_o *v28; // x8

  v4 = this;
  if ( (byte_49B6044 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, assetData);
    sub_1B4CF90(&System_Action_TypeInfo, v5);
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, v6);
    sub_1B4CF90(&Method_CGThumbnailDialog_CloseFullScreen__, v7);
    sub_1B4CF90(&Method_CGThumbnailListViewManager_JumpItemForID__, v8);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    this = (CGThumbnailDialog___c__DisplayClass20_0_o *)sub_1B4CF90(&StringLiteral_6880/*"GalleryFullScreenListViewPanel"*/, v13);
    byte_49B6044 = 1;
  }
  if ( !assetData )
    goto LABEL_20;
  _4__this = v4->fields.__4__this;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)AssetData__GetObject_object__49169892(
                                                        assetData,
                                                        (System_String_o *)StringLiteral_6880/*"GalleryFullScreenListViewPanel"*/,
                                                        (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v4->fields.__4__this )
    goto LABEL_20;
  v15 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4->fields.__4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)UnityEngine_Object__Instantiate_object__49839864(
                                                        v15,
                                                        transform,
                                                        (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  if ( !this )
    goto LABEL_20;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___);
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.galleryFullScreenPanel = (struct GalleryFullScreenPanel_o *)this;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)sub_1B4CF34(&_4__this->fields.galleryFullScreenPanel);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_20;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)v17->fields.cgThumbnailListViewManager;
  if ( !this )
    goto LABEL_20;
  galleryFullScreenPanel = v17->fields.galleryFullScreenPanel;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)CGThumbnailListViewManager__get_SortGalleryIdList(
                                                        (CGThumbnailListViewManager_o *)this,
                                                        (const MethodInfo *)assetData);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_20;
  v20 = this;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)v19->fields.cgThumbnailListViewManager;
  if ( !this )
    goto LABEL_20;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                        (CGThumbnailListViewManager_o *)this,
                                                        (const MethodInfo *)assetData);
  if ( !this )
    goto LABEL_20;
  this = (CGThumbnailDialog___c__DisplayClass20_0_o *)System_Collections_Generic_List_int___get_Item(
                                                        (System_Collections_Generic_List_int__o *)this,
                                                        v4->fields.index,
                                                        (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
  v21 = v4->fields.__4__this;
  if ( !v21 )
    goto LABEL_20;
  v22 = (int)this;
  cgThumbnailListViewManager = (Il2CppObject *)v21->fields.cgThumbnailListViewManager;
  v24 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v24, cgThumbnailListViewManager, Method_CGThumbnailListViewManager_JumpItemForID__, 0LL);
  v25 = (Il2CppObject *)v4->fields.__4__this;
  v26 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v26, v25, Method_CGThumbnailDialog_CloseFullScreen__, 0LL);
  if ( !galleryFullScreenPanel
    || (GalleryFullScreenPanel__Setup(
          galleryFullScreenPanel,
          (System_Collections_Generic_List_int__o *)v20,
          v22,
          v24,
          v26,
          0LL),
        (v27 = v4->fields.__4__this) == 0LL)
    || (BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v27->fields.titleInfoControl, 0, 0LL),
        (v28 = v4->fields.__4__this) == 0LL)
    || (this = (CGThumbnailDialog___c__DisplayClass20_0_o *)v28->fields.buttonParentObject) == 0LL )
  {
LABEL_20:
    sub_1B4D1EC(this, assetData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}