void CGThumbnailDialog___ctor(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2767B & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2767B = 1;
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4D27675 & 1) == 0 )
  {
    sub_1C94098(&Method_CGThumbnailDialog_OpenFullScreen__);
    sub_1C94098(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    byte_4D27675 = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  v4 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1C942E4(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v5);
  if ( !cgThumbnailListViewManager
    || (cgThumbnailListViewManager->fields.callbackFunc = v4,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&cgThumbnailListViewManager->fields.callbackFunc,
          (int32_t)v4,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (galleryFullScreenPanel = this->fields.cgThumbnailListViewManager) == 0)
    || (CGThumbnailListViewManager__SetMode(galleryFullScreenPanel, 2, v14),
        (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)this->fields.galleryFullScreenPanel) == 0)
    || (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)galleryFullScreenPanel,
                                                                   0)) == 0 )
  {
    sub_1C942F0(galleryFullScreenPanel, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)galleryFullScreenPanel, 0, 0);
  CGThumbnailDialog__ShowCGThumbnailObjects(this, 1, v15);
}


void CGThumbnailDialog__DestryGalleryFullScreenPanel(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_galleryFullScreenPanel; // x19
  UnityEngine_Object_o *v4; // x20
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2767A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2767A = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  p_galleryFullScreenPanel = (UnityEngine_Component_o **)&this->fields.galleryFullScreenPanel;
  v4 = (UnityEngine_Object_o *)galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_galleryFullScreenPanel )
      sub_1C942F0(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_galleryFullScreenPanel, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
    *p_galleryFullScreenPanel = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_galleryFullScreenPanel, 0, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void CGThumbnailDialog__FullScreenPanelSetup(CGThumbnailDialog_o *this, int32_t index, const MethodInfo *method)
{
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t Item; // w22
  System_Action_o *v9; // x23
  Il2CppObject *v10; // x25
  System_Action_int__o *v11; // x24
  System_Action_o *v12; // x25

  if ( (byte_4D27674 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CGThumbnailDialog_CloseFullScreen__);
    sub_1C94098(&Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__);
    sub_1C94098(&Method_CGThumbnailListViewManager_JumpItemForID__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D27674 = 1;
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
  v7 = (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager;
  cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                                 this->fields.cgThumbnailListViewManager,
                                                                 *(const MethodInfo **)&index);
  if ( !cgThumbnailListViewManager )
    goto LABEL_8;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager,
           index,
           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
  v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__, 0);
  v10 = (Il2CppObject *)this->fields.cgThumbnailListViewManager;
  v11 = (System_Action_int__o *)sub_1C942E4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v11, v10, Method_CGThumbnailListViewManager_JumpItemForID__, 0);
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CGThumbnailDialog_CloseFullScreen__, 0);
  if ( !galleryFullScreenPanel )
LABEL_8:
    sub_1C942F0(cgThumbnailListViewManager, *(_QWORD *)&index);
  GalleryFullScreenPanel__Setup(galleryFullScreenPanel, v7, Item, v9, v11, v12, 0);
}


void CGThumbnailDialog__OnClickBackToGalleryTop(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CGThumbnailListViewManager_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x20
  ListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4D27677 & 1) == 0 )
  {
    sub_1C94098(&Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    byte_4D27677 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickBackToGalleryTop__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickBackToGalleryTop__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0),
          (v5 = this->fields.cgThumbnailListViewManager) == 0) )
    {
      sub_1C942F0(v5, v6);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(v5, v6);
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
  const MethodInfo *v6; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x20
  ListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4D27678 & 1) == 0 )
  {
    sub_1C94098(&Method_CGThumbnailDialog_OnClickClose__);
    byte_4D27678 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CGThumbnailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0),
          (v5 = this->fields.cgThumbnailListViewManager) == 0) )
    {
      sub_1C942F0(v5, v6);
    }
    CGThumbnailListViewManager__UnloadTextureAsset(v5, v6);
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

  if ( (byte_4D27671 & 1) == 0 )
  {
    sub_1C94098(&Method_CGThumbnailDialog_OnClickIsCG__);
    byte_4D27671 = 1;
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
      sub_1C942F0(cgFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)cgFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsCG__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsCG__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_CGThumbnailDialog_OnClickIsCG__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  }
}


void CGThumbnailDialog__OnClickIsMovie(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *movieFilterCheckBoxSprite; // x0
  const MethodInfo *v4; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4D27672 & 1) == 0 )
  {
    sub_1C94098(&Method_CGThumbnailDialog_OnClickIsMovie__);
    byte_4D27672 = 1;
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
      sub_1C942F0(movieFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)movieFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsMovie__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsMovie__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_CGThumbnailDialog_OnClickIsMovie__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  }
}


void CGThumbnailDialog__OnClickScaleChange(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4D27676 & 1) == 0 )
  {
    sub_1C94098(&Method_CGThumbnailDialog_OnClickScaleChange__);
    byte_4D27676 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CGThumbnailDialog_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (CGThumbnailListViewManager__ChangeIconScale(cgThumbnailListViewManager, v5),
          (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                                                         cgThumbnailListViewManager,
                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_1C942F0(cgThumbnailListViewManager, v5);
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
  UISprite_o *scaleChangeTabSprite; // x24
  UILabel_o *galleryExplanationLabel; // x24
  UILabel_o *cgFilterCheckBoxLabel; // x24
  UILabel_o *movieFilterCheckBoxLabel; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UISprite_o *warTitleSprite; // x22
  Il2CppObject *v40; // x0
  System_Action_o *v41; // x21
  int32_t v42; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D27670 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CGThumbnailDialog_OpenFullScreen__);
    sub_1C94098(&Method_CGThumbnailDialog__Open_b__19_0__);
    sub_1C94098(&CGThumbnailListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_6925/*"GALLERY_CHECKBOX_CG"*/);
    sub_1C94098(&StringLiteral_8023/*"IsGalleryCGFilter"*/);
    sub_1C94098(&StringLiteral_20844/*"img_txt_gallery_{0}"*/);
    sub_1C94098(&StringLiteral_6926/*"GALLERY_CHECKBOX_MOVIE"*/);
    sub_1C94098(&StringLiteral_8024/*"IsGalleryMovieFilter"*/);
    sub_1C94098(&StringLiteral_6928/*"GALLERY_EXPLANATION"*/);
    byte_4D27670 = 1;
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
  this->fields.isCG = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8023/*"IsGalleryCGFilter"*/, 0, 0) == 1;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8024/*"IsGalleryMovieFilter"*/, 0, 0);
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
  v20 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1C942E4(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
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
                                             (const MethodInfo *)galleryEntities);
  if ( !scaleChangeTabSprite )
    goto LABEL_23;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfoControl, 0);
  galleryExplanationLabel = this->fields.galleryExplanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6928/*"GALLERY_EXPLANATION"*/, 0);
  if ( !galleryExplanationLabel )
    goto LABEL_23;
  UILabel__set_text(galleryExplanationLabel, (System_String_o *)titleInfoControl, 0);
  cgFilterCheckBoxLabel = this->fields.cgFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6925/*"GALLERY_CHECKBOX_CG"*/, 0);
  if ( !cgFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(cgFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0);
  movieFilterCheckBoxLabel = this->fields.movieFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6926/*"GALLERY_CHECKBOX_MOVIE"*/, 0);
  if ( !movieFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(movieFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0);
  this->fields.backToGalleryTop = backToTop;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.backToGalleryTop,
    (int32_t)backToTop,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.closeAction = close;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, (int32_t)close, v33, v34, v35, v36, v37, v38);
  warTitleSprite = this->fields.warTitleSprite;
  v42 = warId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  titleInfoControl = (TitleInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_20844/*"img_txt_gallery_{0}"*/, v40, 0);
  if ( !warTitleSprite
    || (UISprite__set_spriteName(warTitleSprite, (System_String_o *)titleInfoControl, 0),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.warTitleSprite) == 0) )
  {
LABEL_23:
    sub_1C942F0(titleInfoControl, galleryEntities);
  }
  ((void (__fastcall *)(TitleInfoControl_o *, void *))titleInfoControl->klass[2]._1.parent)(
    titleInfoControl,
    titleInfoControl->klass[2]._1.generic_class);
  v41 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CGThumbnailDialog__Open_b__19_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v41, 0, 0);
  ActionExtensions__Call(action, 0);
}


void CGThumbnailDialog__OpenFullScreen(CGThumbnailDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x21
  ListViewManager_o *v15; // x0
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  const MethodInfo *v17; // x2
  AssetLoader_LoadEndDataHandler_o *v18; // x19

  if ( (byte_4D27673 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__);
    sub_1C94098(&CGThumbnailDialog___c__DisplayClass22_0_TypeInfo);
    sub_1C94098(&StringLiteral_9240/*"MyRoom/Gallery/Prefab"*/);
    byte_4D27673 = 1;
  }
  v5 = sub_1C942E4(CGThumbnailDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v5 + 24) = index,
        (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0) )
  {
    sub_1C942F0(v6, v7);
  }
  v15 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager;
  cgThumbnailListViewManager->fields.initMode = 0;
  cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v15, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0);
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0, 0) )
  {
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v18,
      (Il2CppObject *)v5,
      Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9240/*"MyRoom/Gallery/Prefab"*/, v18, 1, 0);
  }
  else
  {
    CGThumbnailDialog__FullScreenPanelSetup(this, *(_DWORD *)(v5 + 24), v17);
  }
}


void CGThumbnailDialog__SaveFilter(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D27679 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_8023/*"IsGalleryCGFilter"*/);
    sub_1C94098(&StringLiteral_8024/*"IsGalleryMovieFilter"*/);
    byte_4D27679 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8023/*"IsGalleryCGFilter"*/, this->fields.isCG, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8024/*"IsGalleryMovieFilter"*/, this->fields.isMovie, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C942F0(cgFullScreenBgSprite, isShow);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4D2767C & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (CGThumbnailDialog___c__DisplayClass22_0_o *)sub_1C94098(&StringLiteral_7044/*"GalleryFullScreenListViewPanel"*/);
    byte_4D2767C = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)AssetData__GetObject_object__51893132(
                                                        assetData,
                                                        (System_String_o *)StringLiteral_7044/*"GalleryFullScreenListViewPanel"*/,
                                                        (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !v4->fields.__4__this )
    goto LABEL_11;
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4->fields.__4__this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_Object__Instantiate_object__52598436(
                                                        v6,
                                                        transform,
                                                        (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
  if ( !this
    || (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___),
        !_4__this)
    || (_4__this->fields.galleryFullScreenPanel = (struct GalleryFullScreenPanel_o *)this,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.galleryFullScreenPanel,
          (int32_t)this,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C942F0(this, assetData);
  }
  CGThumbnailDialog__FullScreenPanelSetup((CGThumbnailDialog_o *)this, v4->fields.index, v14);
}