void __fastcall CGThumbnailDialog___ctor(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B17571 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B17571 = 1;
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
  const MethodInfo *v10; // x2

  if ( (byte_4B1756B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CGThumbnailDialog_OpenFullScreen__, method);
    sub_1BCAFF8(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4B1756B = 1;
  }
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  v5 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1BCB244(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v6);
  if ( !cgThumbnailListViewManager
    || (cgThumbnailListViewManager->fields.callbackFunc = v5,
        sub_1BCAF9C(&cgThumbnailListViewManager->fields.callbackFunc),
        (galleryFullScreenPanel = this->fields.cgThumbnailListViewManager) == 0LL)
    || (CGThumbnailListViewManager__SetMode(galleryFullScreenPanel, 2, v9),
        (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)this->fields.galleryFullScreenPanel) == 0LL)
    || (galleryFullScreenPanel = (CGThumbnailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)galleryFullScreenPanel,
                                                                   0LL)) == 0LL )
  {
    sub_1BCB254(galleryFullScreenPanel, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)galleryFullScreenPanel, 0, 0LL);
  CGThumbnailDialog__ShowCGThumbnailObjects(this, 1, v10);
}


void __fastcall CGThumbnailDialog__DestryGalleryFullScreenPanel(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_galleryFullScreenPanel; // x19
  UnityEngine_Object_o *v4; // x20
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B17570 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B17570 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  p_galleryFullScreenPanel = (UnityEngine_Component_o **)&this->fields.galleryFullScreenPanel;
  v4 = (UnityEngine_Object_o *)galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_galleryFullScreenPanel )
      sub_1BCB254(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_galleryFullScreenPanel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_galleryFullScreenPanel = 0LL;
    sub_1BCAF9C(p_galleryFullScreenPanel);
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
  const MethodInfo *v18; // x6

  if ( (byte_4B1756A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&System_Action_TypeInfo, v5);
    sub_1BCAFF8(&Method_CGThumbnailDialog_CloseFullScreen__, v6);
    sub_1BCAFF8(&Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__, v7);
    sub_1BCAFF8(&Method_CGThumbnailListViewManager_JumpItemForID__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    byte_4B1756A = 1;
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
  v12 = (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager;
  cgThumbnailListViewManager = (CGThumbnailListViewManager_o *)CGThumbnailListViewManager__get_GalleryIdList(
                                                                 this->fields.cgThumbnailListViewManager,
                                                                 *(const MethodInfo **)&index);
  if ( !cgThumbnailListViewManager )
    goto LABEL_8;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)cgThumbnailListViewManager,
           index,
           (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
  v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CGThumbnailDialog__FullScreenPanelSetup_b__23_0__, 0LL);
  v15 = (Il2CppObject *)this->fields.cgThumbnailListViewManager;
  v16 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
  System_Action_int____ctor(v16, v15, Method_CGThumbnailListViewManager_JumpItemForID__, 0LL);
  v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CGThumbnailDialog_CloseFullScreen__, 0LL);
  if ( !galleryFullScreenPanel )
LABEL_8:
    sub_1BCB254(cgThumbnailListViewManager, *(_QWORD *)&index);
  GalleryFullScreenPanel__Setup(galleryFullScreenPanel, v12, Item, v14, v16, v17, v18);
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

  if ( (byte_4B1756D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CGThumbnailDialog_OnClickBackToGalleryTop__, method);
    byte_4B1756D = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickBackToGalleryTop__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickBackToGalleryTop__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_CGThumbnailDialog_OnClickBackToGalleryTop__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0LL),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0LL),
          (v5 = this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1BCB254(v5, v6);
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

  if ( (byte_4B1756E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CGThumbnailDialog_OnClickClose__, method);
    byte_4B1756E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_CGThumbnailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
    if ( !cgThumbnailListViewManager
      || (v8 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager,
          cgThumbnailListViewManager->fields.initMode = 0,
          cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v8, 0LL),
          ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0LL),
          (v5 = this->fields.cgThumbnailListViewManager) == 0LL) )
    {
      sub_1BCB254(v5, v6);
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

  if ( (byte_4B17567 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CGThumbnailDialog_OnClickIsCG__, method);
    byte_4B17567 = 1;
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
      sub_1BCB254(cgFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)cgFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsCG__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsCG__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_CGThumbnailDialog_OnClickIsCG__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  }
}


void __fastcall CGThumbnailDialog__OnClickIsMovie(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *movieFilterCheckBoxSprite; // x0
  const MethodInfo *v4; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B17568 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CGThumbnailDialog_OnClickIsMovie__, method);
    byte_4B17568 = 1;
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
      sub_1BCB254(movieFilterCheckBoxSprite, method);
    }
    CGThumbnailListViewManager__SetFilter(
      (CGThumbnailListViewManager_o *)movieFilterCheckBoxSprite,
      this->fields.isCG,
      this->fields.isMovie,
      v4);
    v5 = Method_CGThumbnailDialog_OnClickIsMovie__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickIsMovie__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_CGThumbnailDialog_OnClickIsMovie__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
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

  if ( (byte_4B1756C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CGThumbnailDialog_OnClickScaleChange__, method);
    byte_4B1756C = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CGThumbnailDialog_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CGThumbnailDialog_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_CGThumbnailDialog_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
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
      sub_1BCB254(cgThumbnailListViewManager, v5);
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
  const MethodInfo *v27; // x2
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x25
  _BOOL4 isCG; // w27
  _BOOL4 isMovie; // w28
  CGThumbnailListViewManager_CallbackFunc_o *v31; // x26
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x5
  UISprite_o *scaleChangeTabSprite; // x24
  UILabel_o *galleryExplanationLabel; // x24
  UILabel_o *cgFilterCheckBoxLabel; // x24
  UILabel_o *movieFilterCheckBoxLabel; // x24
  UISprite_o *warTitleSprite; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_Action_o *v43; // x21
  int32_t v44; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B17566 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, galleryEntities);
    sub_1BCAFF8(&Method_CGThumbnailDialog_OpenFullScreen__, v13);
    sub_1BCAFF8(&Method_CGThumbnailDialog__Open_b__19_0__, v14);
    sub_1BCAFF8(&CGThumbnailListViewManager_CallbackFunc_TypeInfo, v15);
    sub_1BCAFF8(&int_TypeInfo, v16);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_6862/*"GALLERY_CHECKBOX_CG"*/, v18);
    sub_1BCAFF8(&StringLiteral_7937/*"IsGalleryCGFilter"*/, v19);
    sub_1BCAFF8(&StringLiteral_20481/*"img_txt_gallery_{0}"*/, v20);
    sub_1BCAFF8(&StringLiteral_6863/*"GALLERY_CHECKBOX_MOVIE"*/, v21);
    sub_1BCAFF8(&StringLiteral_7938/*"IsGalleryMovieFilter"*/, v22);
    sub_1BCAFF8(&StringLiteral_6865/*"GALLERY_EXPLANATION"*/, v23);
    byte_4B17566 = 1;
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
  this->fields.isCG = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7937/*"IsGalleryCGFilter"*/, 0, 0LL) == 1;
  titleInfoControl = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt(
                                             (System_String_o *)StringLiteral_7938/*"IsGalleryMovieFilter"*/,
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
  CGThumbnailListViewManager__SetMode((CGThumbnailListViewManager_o *)titleInfoControl, 1, v27);
  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  isCG = this->fields.isCG;
  isMovie = this->fields.isMovie;
  v31 = (CGThumbnailListViewManager_CallbackFunc_o *)sub_1BCB244(CGThumbnailListViewManager_CallbackFunc_TypeInfo);
  CGThumbnailListViewManager_CallbackFunc___ctor(
    v31,
    (Il2CppObject *)this,
    Method_CGThumbnailDialog_OpenFullScreen__,
    v32);
  if ( !cgThumbnailListViewManager )
    goto LABEL_23;
  CGThumbnailListViewManager__CreateList(cgThumbnailListViewManager, galleryEntities, isCG, isMovie, v31, v33);
  titleInfoControl = (TitleInfoControl_o *)this->fields.cgThumbnailListViewManager;
  if ( !titleInfoControl )
    goto LABEL_23;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfoControl = (TitleInfoControl_o *)CGThumbnailListViewManager__GetScaleButtonSpriteName(
                                             (CGThumbnailListViewManager_o *)titleInfoControl,
                                             (const MethodInfo *)galleryEntities);
  if ( !scaleChangeTabSprite )
    goto LABEL_23;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfoControl, 0LL);
  galleryExplanationLabel = this->fields.galleryExplanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6865/*"GALLERY_EXPLANATION"*/, 0LL);
  if ( !galleryExplanationLabel )
    goto LABEL_23;
  UILabel__set_text(galleryExplanationLabel, (System_String_o *)titleInfoControl, 0LL);
  cgFilterCheckBoxLabel = this->fields.cgFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6862/*"GALLERY_CHECKBOX_CG"*/, 0LL);
  if ( !cgFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(cgFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0LL);
  movieFilterCheckBoxLabel = this->fields.movieFilterCheckBoxLabel;
  titleInfoControl = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6863/*"GALLERY_CHECKBOX_MOVIE"*/, 0LL);
  if ( !movieFilterCheckBoxLabel )
    goto LABEL_23;
  UILabel__set_text(movieFilterCheckBoxLabel, (System_String_o *)titleInfoControl, 0LL);
  this->fields.backToGalleryTop = backToTop;
  sub_1BCAF9C(&this->fields.backToGalleryTop);
  this->fields.closeAction = close;
  sub_1BCAF9C(&this->fields.closeAction);
  warTitleSprite = this->fields.warTitleSprite;
  v44 = warId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v39, v40, v41);
  titleInfoControl = (TitleInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_20481/*"img_txt_gallery_{0}"*/, v42, 0LL);
  if ( !warTitleSprite
    || (UISprite__set_spriteName(warTitleSprite, (System_String_o *)titleInfoControl, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.warTitleSprite) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(titleInfoControl, galleryEntities);
  }
  ((void (__fastcall *)(TitleInfoControl_o *, void *))titleInfoControl->klass[2]._1.typeMetadataHandle)(
    titleInfoControl,
    titleInfoControl->klass[2]._1.interopData);
  v43 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_CGThumbnailDialog__Open_b__19_0__, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v43, 0, 0LL);
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
  __int64 v11; // x0
  __int64 v12; // x1
  struct CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x21
  ListViewManager_o *v14; // x0
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  const MethodInfo *v16; // x2
  AssetLoader_LoadEndDataHandler_o *v17; // x19

  if ( (byte_4B17569 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__, v7);
    sub_1BCAFF8(&CGThumbnailDialog___c__DisplayClass22_0_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_9148/*"MyRoom/Gallery/Prefab"*/, v9);
    byte_4B17569 = 1;
  }
  v10 = sub_1BCB244(CGThumbnailDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        v11 = sub_1BCAF9C(v10 + 16),
        *(_DWORD *)(v10 + 24) = index,
        (cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager) == 0LL) )
  {
    sub_1BCB254(v11, v12);
  }
  v14 = (ListViewManager_o *)this->fields.cgThumbnailListViewManager;
  cgThumbnailListViewManager->fields.initMode = 0;
  cgThumbnailListViewManager->fields.callbackCount = ListViewManager__get_ObjectSum(v14, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)cgThumbnailListViewManager, 0, 0LL);
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0LL, 0LL) )
  {
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)v10,
      Method_CGThumbnailDialog___c__DisplayClass22_0__OpenFullScreen_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9148/*"MyRoom/Gallery/Prefab"*/, v17, 1, 0LL);
  }
  else
  {
    CGThumbnailDialog__FullScreenPanelSetup(this, *(_DWORD *)(v10 + 24), v16);
  }
}


void __fastcall CGThumbnailDialog__SaveFilter(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B1756F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_7937/*"IsGalleryCGFilter"*/, method);
    sub_1BCAFF8(&StringLiteral_7938/*"IsGalleryMovieFilter"*/, v3);
    byte_4B1756F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7937/*"IsGalleryCGFilter"*/, this->fields.isCG, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7938/*"IsGalleryMovieFilter"*/, this->fields.isMovie, 0LL);
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
    sub_1BCB254(cgFullScreenBgSprite, isShow);
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
    sub_1BCB254(0LL, method);
  CGThumbnailListViewManager__UnloadTextureAsset(cgThumbnailListViewManager, method);
}


void __fastcall CGThumbnailDialog___FullScreenPanelSetup_b__23_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CGThumbnailDialog__ShowCGThumbnailObjects(this, 0, v2);
}


void __fastcall CGThumbnailDialog___Open_b__19_0(CGThumbnailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CGThumbnailListViewManager_o *cgThumbnailListViewManager; // x0

  cgThumbnailListViewManager = this->fields.cgThumbnailListViewManager;
  if ( !cgThumbnailListViewManager )
    sub_1BCB254(0LL, method);
  CGThumbnailListViewManager__SetMode(cgThumbnailListViewManager, 2, v2);
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
  if ( (byte_4B17572 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, assetData);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___, v5);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    this = (CGThumbnailDialog___c__DisplayClass22_0_o *)sub_1BCAFF8(&StringLiteral_6972/*"GalleryFullScreenListViewPanel"*/, v8);
    byte_4B17572 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)AssetData__GetObject_object__50315216(
                                                        assetData,
                                                        (System_String_o *)StringLiteral_6972/*"GalleryFullScreenListViewPanel"*/,
                                                        (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v4->fields.__4__this )
    goto LABEL_11;
  v10 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4->fields.__4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                        v10,
                                                        transform,
                                                        (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  if ( !this
    || (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenPanel___),
        !_4__this)
    || (_4__this->fields.galleryFullScreenPanel = (struct GalleryFullScreenPanel_o *)this,
        sub_1BCAF9C(&_4__this->fields.galleryFullScreenPanel),
        (this = (CGThumbnailDialog___c__DisplayClass22_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BCB254(this, assetData);
  }
  CGThumbnailDialog__FullScreenPanelSetup((CGThumbnailDialog_o *)this, v4->fields.index, v12);
}