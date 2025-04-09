void __fastcall GalleryFullScreenListViewItemDraw___ctor(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.debugWaitLoadTime = 20.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw__Awake(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__DebugWaitTime(
        GalleryFullScreenListViewItemDraw_o *this,
        float waitTime,
        const MethodInfo *method)
{
  if ( this->fields.debugWaitLoadTime <= waitTime )
    *(_WORD *)&this->fields.setDataWait = 0;
}


void __fastcall GalleryFullScreenListViewItemDraw__DownloadMovieAsset(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x21

  if ( (byte_49B6081 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, assetPath);
    sub_1B4CF90(&Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__26_0__, v5);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    byte_49B6081 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__26_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(assetPath, v7, 1, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw__GetSetDataWait(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.setDataWait;
}


bool __fastcall GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  if ( (byte_49B6088 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_9022/*"MyRoom/Gallery/SubstituteData"*/, textureName);
    byte_49B6088 = 1;
  }
  if ( !textureName )
    sub_1B4D1EC(this, textureName);
  return System_String__Contains(textureName, (System_String_o *)StringLiteral_9022/*"MyRoom/Gallery/SubstituteData"*/, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw__IsStandardSize(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct ExUITexture_o *backTexture; // x0
  struct ExUITexture_o *v4; // x8
  int v5; // w19

  backTexture = this->fields.backTexture;
  if ( !backTexture
    || (backTexture = (struct ExUITexture_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer))backTexture->klass->vtable._26_get_mainTexture.method)(
                                                backTexture,
                                                backTexture->klass->vtable._27_set_mainTexture.methodPtr)) == 0LL
    || (backTexture = (struct ExUITexture_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer))backTexture->klass->vtable._4_get_isAnchoredHorizontally.method)(
                                                backTexture,
                                                backTexture->klass->vtable._5_get_isAnchoredVertically.methodPtr),
        (v4 = this->fields.backTexture) == 0LL)
    || (v5 = (int)backTexture,
        (backTexture = (struct ExUITexture_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer))v4->klass->vtable._26_get_mainTexture.method)(
                                                 v4,
                                                 v4->klass->vtable._27_set_mainTexture.methodPtr)) == 0LL) )
  {
    sub_1B4D1EC(backTexture, method);
  }
  return v5
       / ((__int64 (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer))backTexture->klass->vtable._6_get_canBeAnchored.method)(
           backTexture,
           backTexture->klass->vtable._7_get_alpha.methodPtr) == 1;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovie(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *data; // x0
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8
  CRIMoviePlayer_o *moviePlayer; // x20
  System_String_o *assetPath; // x21
  __int64 v12; // x1
  System_String_o *Path; // x22
  BgmManager_c *v14; // x0
  float masterVolume; // s8
  CinemascopeSideFrame_o *v16; // x23
  System_Action_o *nonDeleteCallBack; // x24

  if ( (byte_49B6084 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BgmManager_TypeInfo, v3);
    sub_1B4CF90(&CinemascopeSideFrame_TypeInfo, v4);
    sub_1B4CF90(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__29_0__, v5);
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw_TypeInfo, v6);
    byte_49B6084 = 1;
  }
  data = this->fields.data;
  if ( data && !GalleryFullScreenListViewItemDraw_TypeInfo->static_fields->isMovieBusy )
  {
    galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_17;
    GalleryResourceEntity_k__BackingField = galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !GalleryResourceEntity_k__BackingField )
      goto LABEL_17;
    moviePlayer = this->fields.moviePlayer;
    assetPath = GalleryResourceEntity_k__BackingField->fields.assetPath;
    Path = AssetData__get_Path(data, 0LL);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_49B60A3 )
    {
      sub_1B4CF90(&BgmManager_TypeInfo, v12);
      byte_49B60A3 = 1;
    }
    v14 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v14 = BgmManager_TypeInfo;
    }
    masterVolume = v14->static_fields->masterVolume;
    v16 = (CinemascopeSideFrame_o *)sub_1B4D1DC(CinemascopeSideFrame_TypeInfo);
    CinemascopeSideFrame___ctor(v16, 0, 1, 0LL);
    nonDeleteCallBack = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      nonDeleteCallBack,
      (Il2CppObject *)this,
      Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__29_0__,
      0LL);
    if ( !moviePlayer
      || (CRIMoviePlayer__Initialize(
            moviePlayer,
            assetPath,
            Path,
            masterVolume,
            1,
            0LL,
            0LL,
            1,
            v16,
            0,
            0,
            1,
            nonDeleteCallBack,
            0LL),
          (data = (AssetData_o *)this->fields.moviePlayer) == 0LL) )
    {
LABEL_17:
      sub_1B4D1EC(data, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)data, 1, 1, 1, 0LL);
    GalleryFullScreenListViewItemDraw_TypeInfo->static_fields->isMovieBusy = 1;
  }
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49B6083 & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_TypeInfo, enableControlCallBack);
    byte_49B6083 = 1;
  }
  v7 = sub_1B4D1DC(GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = enableControlCallBack;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 40), (int32_t)enableControlCallBack, v10, v11);
  *(_QWORD *)(v7 + 48) = endFullScreenAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endFullScreenAction, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetPath,
        System_String_o *objName,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_49B607E & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_TypeInfo, assetPath);
    byte_49B607E = 1;
  }
  v9 = sub_1B4D1DC(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 40) = assetPath;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 40), (int32_t)assetPath, v12, v13);
  *(_QWORD *)(v9 + 48) = objName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 48), (int32_t)objName, v14, v15);
  *(_QWORD *)(v9 + 56) = callAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 56), (int32_t)callAction, v16, v17);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct AssetData_o *AssetStorage; // x0
  struct AssetData_o **p_data; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49B6080 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, assetName);
    byte_49B6080 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(assetName, 0LL);
  this->fields.data = AssetStorage;
  p_data = &this->fields.data;
  sub_1B4CF34((CGThumbnailListItem_o *)p_data, (int32_t)AssetStorage, v7, v8);
  *((_BYTE *)p_data + 16) = *p_data == 0LL;
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *imgName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B607F & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_TypeInfo, imgName);
    byte_49B607F = 1;
  }
  v5 = sub_1B4D1DC(GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = imgName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)imgName, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewItemDraw__SetFrame(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B6085 & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw__SetFrame_d__30_TypeInfo, method);
    byte_49B6085 = 1;
  }
  v3 = sub_1B4D1DC(GalleryFullScreenListViewItemDraw__SetFrame_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetItem(
        GalleryFullScreenListViewItemDraw_o *this,
        GalleryFullScreenListViewItem_o *item,
        int32_t mode,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItem_o **p_galleryFullScreenListViewItem; // x22
  GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x0
  __int64 v11; // x1
  int32_t CurrentGalleryType_k__BackingField; // w24
  struct GalleryFullScreenListViewItem_o *v13; // x8
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  UnityEngine_GameObject_o *gameObject; // x25
  char v17; // w24
  bool v18; // w24
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  System_Collections_IEnumerator_o *loadCoroutine; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w8
  struct System_Collections_IEnumerator_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_49B607D & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw_TypeInfo, item);
    byte_49B607D = 1;
  }
  if ( item && mode )
  {
    this->fields.galleryFullScreenListViewItem = item;
    p_galleryFullScreenListViewItem = &this->fields.galleryFullScreenListViewItem;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)&this->fields.galleryFullScreenListViewItem,
      (int32_t)item,
      mode,
      (const MethodInfo *)callAction);
    if ( !this->fields.galleryFullScreenListViewItem )
      goto LABEL_23;
    GalleryResourceEntity_k__BackingField = this->fields.galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !GalleryResourceEntity_k__BackingField )
      goto LABEL_23;
    CurrentGalleryType_k__BackingField = item->fields._CurrentGalleryType_k__BackingField;
    GalleryResourceEntity_k__BackingField = (GalleryResourceEntity_o *)GalleryResourceEntity__GetAssetPath(
                                                                         GalleryResourceEntity_k__BackingField,
                                                                         0LL);
    v13 = *p_galleryFullScreenListViewItem;
    if ( !*p_galleryFullScreenListViewItem )
      goto LABEL_23;
    v14 = (System_String_o *)GalleryResourceEntity_k__BackingField;
    GalleryResourceEntity_k__BackingField = v13->fields._GalleryResourceEntity_k__BackingField;
    if ( !GalleryResourceEntity_k__BackingField )
      goto LABEL_23;
    GalleryResourceEntity_k__BackingField = (GalleryResourceEntity_o *)GalleryResourceEntity__GetObjectName(
                                                                         GalleryResourceEntity_k__BackingField,
                                                                         0LL);
    if ( !this->fields.backTexture )
      goto LABEL_23;
    v15 = (System_String_o *)GalleryResourceEntity_k__BackingField;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.backTexture, 0LL);
    GalleryResourceEntity_k__BackingField = (GalleryResourceEntity_o *)GalleryType__IsCG(
                                                                         CurrentGalleryType_k__BackingField,
                                                                         0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)GalleryResourceEntity_k__BackingField & 1, 0LL),
          GalleryResourceEntity_k__BackingField = (GalleryResourceEntity_o *)GalleryType__IsMovie(
                                                                               CurrentGalleryType_k__BackingField,
                                                                               0LL),
          !this->fields.moviePlayer)
      || (v17 = (char)GalleryResourceEntity_k__BackingField,
          (GalleryResourceEntity_k__BackingField = (GalleryResourceEntity_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this->fields.moviePlayer,
                                                                                0LL)) == 0LL)
      || (v18 = v17 & 1,
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)GalleryResourceEntity_k__BackingField, v18, 0LL),
          (GalleryResourceEntity_k__BackingField = (GalleryResourceEntity_o *)this->fields.moviePlayer) == 0LL) )
    {
LABEL_23:
      sub_1B4D1EC(GalleryResourceEntity_k__BackingField, v11);
    }
    CRIMoviePlayer__ActiveAnim((CRIMoviePlayer_o *)GalleryResourceEntity_k__BackingField, 0LL);
    GameObjectHelper__SetActiveSafely(this->fields.movieControlPanel, v18, 0LL);
    GameObjectHelper__SetActiveSafely(this->fields.touchPanel, v18, 0LL);
    loadCoroutine = this->fields.loadCoroutine;
    if ( loadCoroutine )
    {
      UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadCoroutine, 0LL);
      this->fields.loadCoroutine = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.loadCoroutine, 0, v22, v23);
    }
    GalleryFullScreenListViewItemDraw_TypeInfo->static_fields->isMovieBusy = 0;
    v24 = item->fields._CurrentGalleryType_k__BackingField;
    if ( v24 == 2 )
    {
      v25 = GalleryFullScreenListViewItemDraw__SetCGCoroutine(this, v14, v15, callAction, v20);
    }
    else
    {
      if ( v24 != 1 )
      {
LABEL_22:
        UnityEngine_MonoBehaviour__StartCoroutine_68789728(
          (UnityEngine_MonoBehaviour_o *)this,
          this->fields.loadCoroutine,
          0LL);
        return;
      }
      v25 = GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(this, v14, callAction, v19);
    }
    this->fields.loadCoroutine = v25;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.loadCoroutine, (int32_t)v25, v26, v27);
    goto LABEL_22;
  }
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieCallBack(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  struct CRIMovieControl_o *movieControl; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  movieControl = this->fields.movieControl;
  if ( !movieControl
    || (movieControl->fields.enableControlCallBack = enableControlCallBack,
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&movieControl->fields.enableControlCallBack,
          (int32_t)enableControlCallBack,
          (int32_t)endFullScreenAction,
          method),
        (movieControl = this->fields.movieControl) == 0LL) )
  {
    sub_1B4D1EC(movieControl, enableControlCallBack);
  }
  movieControl->fields.endFullScreenAction = endFullScreenAction;
  sub_1B4CF34((CGThumbnailListItem_o *)&movieControl->fields.endFullScreenAction, (int32_t)endFullScreenAction, v7, v8);
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetPath,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49B6082 & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_TypeInfo, assetPath);
    byte_49B6082 = 1;
  }
  v7 = sub_1B4D1DC(GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = assetPath;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 40), (int32_t)assetPath, v10, v11);
  *(_QWORD *)(v7 + 48) = callAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callAction, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetScale(
        GalleryFullScreenListViewItemDraw_o *this,
        int32_t *width,
        int32_t *height,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Behaviour_o *moviePlayer; // x0
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryFullScreenListViewItem_o *v11; // x8
  System_String_o *AssetPath; // x21
  bool IsFullScreenMovie; // w0
  int32_t mHeight; // w8
  UnityEngine_Object_o *v15; // x22
  struct GalleryFullScreenListViewItem_o *v16; // x8
  struct GalleryFullScreenListViewItem_o *v17; // x8
  System_String_o *v18; // x22
  System_String_o *ObjectName; // x23
  const MethodInfo *v20; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v22; // x2
  struct ExUITexture_o *backTexture; // x8

  if ( (byte_49B6086 & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, width);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_1057/*"/"*/, v8);
    byte_49B6086 = 1;
  }
  moviePlayer = (UnityEngine_Behaviour_o *)this->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_37;
  moviePlayer = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(moviePlayer, 0LL);
  if ( ((unsigned __int8)moviePlayer & 1) != 0 )
  {
    galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_37;
    moviePlayer = (UnityEngine_Behaviour_o *)GalleryType__IsMovie(
                                               galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField,
                                               0LL);
    if ( ((unsigned __int8)moviePlayer & 1) != 0 )
    {
      v11 = this->fields.galleryFullScreenListViewItem;
      if ( v11 )
      {
        moviePlayer = (UnityEngine_Behaviour_o *)v11->fields._GalleryResourceEntity_k__BackingField;
        if ( moviePlayer )
        {
          AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)moviePlayer, 0LL);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          IsFullScreenMovie = FSUtility__IsFullScreenMovie(AssetPath, 0LL);
          *width = 1344;
          if ( IsFullScreenMovie )
            mHeight = 576;
          else
            mHeight = 756;
          goto LABEL_36;
        }
      }
LABEL_37:
      sub_1B4D1EC(moviePlayer, width);
    }
  }
  moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
  if ( !moviePlayer )
    goto LABEL_37;
  v15 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))moviePlayer->klass[1].vtable._3_ToString.method)(
                                  moviePlayer,
                                  moviePlayer->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  moviePlayer = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)moviePlayer & 1) != 0 )
  {
    *height = 1;
    *width = 1;
    return;
  }
  v16 = this->fields.galleryFullScreenListViewItem;
  if ( !v16 )
    goto LABEL_37;
  moviePlayer = (UnityEngine_Behaviour_o *)v16->fields._GalleryResourceEntity_k__BackingField;
  if ( !moviePlayer )
    goto LABEL_37;
  moviePlayer = (UnityEngine_Behaviour_o *)GalleryResourceEntity__GetAssetPath(
                                             (GalleryResourceEntity_o *)moviePlayer,
                                             0LL);
  v17 = this->fields.galleryFullScreenListViewItem;
  if ( !v17 )
    goto LABEL_37;
  v18 = (System_String_o *)moviePlayer;
  moviePlayer = (UnityEngine_Behaviour_o *)v17->fields._GalleryResourceEntity_k__BackingField;
  if ( !moviePlayer )
    goto LABEL_37;
  ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)moviePlayer, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
    v18 = System_String__Concat_61131716(v18, (System_String_o *)StringLiteral_1057/*"/"*/, ObjectName, 0LL);
  IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(this, v20);
  if ( !IsStandardSize
    || GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
         (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
         v18,
         v22) )
  {
    moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
    if ( moviePlayer )
    {
      UITexture__set_uvRect((UITexture_o *)moviePlayer, this->fields.substituteDataRect, 0LL);
      moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
      if ( moviePlayer )
      {
        moviePlayer = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))moviePlayer->klass[1].vtable._3_ToString.method)(
                                                   moviePlayer,
                                                   moviePlayer->klass[2]._1.image);
        if ( moviePlayer )
        {
          *width = ((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, const char *))moviePlayer->klass[1]._1.gc_desc)(
                     moviePlayer,
                     moviePlayer->klass[1]._1.name);
          moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
          if ( moviePlayer )
          {
            moviePlayer = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))moviePlayer->klass[1].vtable._3_ToString.method)(
                                                       moviePlayer,
                                                       moviePlayer->klass[2]._1.image);
            if ( moviePlayer )
            {
              *height = (*(__int64 (__fastcall **)(UnityEngine_Behaviour_o *, void *))&moviePlayer->klass[1]._1.byval_arg.bits)(
                          moviePlayer,
                          moviePlayer->klass[1]._1.this_arg.data);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
  if ( !moviePlayer )
    goto LABEL_37;
  UITexture__set_uvRect((UITexture_o *)moviePlayer, this->fields.cgRect, 0LL);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    goto LABEL_37;
  *width = backTexture->fields.mWidth;
  mHeight = backTexture->fields.mHeight;
LABEL_36:
  *height = mHeight;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetTextureScale(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  UIWidget_o *backTexture; // x0
  int32_t height[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)height = 0LL;
  GalleryFullScreenListViewItemDraw__SetScale(this, &height[1], height, v2);
  backTexture = (UIWidget_o *)this->fields.backTexture;
  if ( !backTexture
    || (UIWidget__set_width(backTexture, height[1], 0LL), (backTexture = (UIWidget_o *)this->fields.backTexture) == 0LL) )
  {
    sub_1B4D1EC(backTexture, v4);
  }
  UIWidget__set_height(backTexture, height[0], 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw__SetUpTextureSize(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v5; // x1
  struct ExUITexture_o *backTexture; // x0
  UnityEngine_Object_o *v7; // x21
  const MethodInfo *v8; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v10; // x2
  UIWidget_o *v11; // x8

  v3 = textureName;
  if ( (byte_49B6087 & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, textureName);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B6087 = 1;
  }
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    goto LABEL_22;
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer, const MethodInfo *))backTexture->klass->vtable._26_get_mainTexture.method)(
                                 backTexture,
                                 backTexture->klass->vtable._27_set_mainTexture.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
  {
    IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(this, v8);
    if ( IsStandardSize
      && !GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
            (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
            v3,
            v10) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      backTexture = (struct ExUITexture_o *)FSUtility__IsFullScreenBack(v3, 0LL);
      if ( ((unsigned __int8)backTexture & 1) != 0 )
      {
        v11 = (UIWidget_o *)this->fields.backTexture;
      }
      else
      {
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        backTexture = (struct ExUITexture_o *)FSUtility__IsFullScreenImage(v3, 0LL);
        v11 = (UIWidget_o *)this->fields.backTexture;
        if ( ((unsigned __int8)backTexture & 1) == 0 )
        {
          textureName = (System_String_o *)(byte_284 + 112);
          if ( !v11 )
            goto LABEL_22;
LABEL_20:
          UIWidget__set_height(v11, (int32_t)textureName, 0LL);
          backTexture = this->fields.backTexture;
          if ( backTexture )
          {
            UIWidget__set_width((UIWidget_o *)backTexture, 1344, 0LL);
            return;
          }
LABEL_22:
          sub_1B4D1EC(backTexture, textureName);
        }
      }
      textureName = (System_String_o *)&qword_240;
      if ( !v11 )
        goto LABEL_22;
      goto LABEL_20;
    }
  }
}


void __fastcall GalleryFullScreenListViewItemDraw__StopMovie(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct CRIMoviePlayer_o *moviePlayer; // x0

  moviePlayer = this->fields.moviePlayer;
  if ( !moviePlayer )
    sub_1B4D1EC(0LL, method);
  if ( moviePlayer->fields._player_k__BackingField )
    CRIMoviePlayer__MovieStop(moviePlayer, 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw___DownloadMovieAsset_b__26_0(
        GalleryFullScreenListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  this->fields.setDataWait = 0;
}


bool __fastcall GalleryFullScreenListViewItemDraw___PlayMovieCoroutine_b__28_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.data == 0LL;
}


void __fastcall GalleryFullScreenListViewItemDraw___PlayMovie_b__29_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  struct CRIMoviePlayer_o *moviePlayer; // x8
  struct CRIMoviePlayer_o *v9; // x8
  struct CRIMoviePlayer_o *v10; // x8
  const MethodInfo *v11; // x1
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_49B6089 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    sub_1B4CF90(&GalleryFullScreenListViewItemDraw_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&TouchEffectManager_TypeInfo, v5);
    byte_49B6089 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0LL);
  GalleryFullScreenListViewItemDraw_TypeInfo->static_fields->isMovieBusy = 0;
  moviePlayer = this->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_22;
  Instance = (CommonUI_o *)moviePlayer->fields._player_k__BackingField;
  if ( !Instance )
    goto LABEL_22;
  Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0LL);
  v9 = this->fields.moviePlayer;
  if ( !v9 )
    goto LABEL_22;
  if ( (_DWORD)Instance != 7 )
  {
    Instance = (CommonUI_o *)v9->fields._player_k__BackingField;
    if ( Instance )
    {
      if ( !CriMana_Player__get_movieInfo((CriMana_Player_o *)Instance, 0LL) )
        goto LABEL_19;
      Instance = (CommonUI_o *)this->fields.moviePlayer;
      if ( Instance )
      {
        CRIMoviePlayer__MovieSeekByFrameNoCheckPlay((CRIMoviePlayer_o *)Instance, 0, 0LL);
        v10 = this->fields.moviePlayer;
        if ( v10 )
        {
          Instance = (CommonUI_o *)v10->fields._player_k__BackingField;
          if ( Instance )
          {
            if ( CriMana_Player__get_status((CriMana_Player_o *)Instance, 0LL) != 6 )
              goto LABEL_19;
            Instance = (CommonUI_o *)this->fields.moviePlayer;
            if ( Instance )
            {
              CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)Instance, 1, 1, 1, 0LL);
              GalleryFullScreenListViewItemDraw_TypeInfo->static_fields->isMovieBusy = 1;
              v12 = GalleryFullScreenListViewItemDraw__SetFrame(this, v11);
              UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B4D1EC(Instance, v7);
  }
  CRIMoviePlayer__MovieStop(this->fields.moviePlayer, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.moviePlayer, 0, 0LL);
  GameObjectHelper__SetActiveSafely(this->fields.movieControlPanel, 0, 0LL);
  GameObjectHelper__SetActiveSafely(this->fields.touchPanel, 0, 0LL);
LABEL_19:
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw___SetFrame_b__30_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct CRIMoviePlayer_o *moviePlayer; // x8

  moviePlayer = this->fields.moviePlayer;
  if ( !moviePlayer
    || (this = (GalleryFullScreenListViewItemDraw_o *)moviePlayer->fields._player_k__BackingField) == 0LL
    || (this = (GalleryFullScreenListViewItemDraw_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL)) == 0LL )
  {
    sub_1B4D1EC(this, method);
  }
  return this->fields.m_CachedPtr > 0;
}


bool __fastcall GalleryFullScreenListViewItemDraw___SetMovieDataCoroutine_b__27_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.setDataWait;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28___ctor(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28__MoveNext(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_Func_bool__o *v10; // x21
  UnityEngine_WaitWhile_o *v11; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  const MethodInfo *v16; // x1

  v3 = this;
  if ( (byte_49B608A & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_bool___, method);
    sub_1B4CF90(&System_Func_bool__TypeInfo, v4);
    sub_1B4CF90(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__28_0__, v5);
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *)sub_1B4CF90(
                                                                              &UnityEngine_WaitWhile_TypeInfo,
                                                                              v6);
    byte_49B608A = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      GalleryFullScreenListViewItemDraw__SetMovieCallBack(
        _4__this,
        v3->fields.enableControlCallBack,
        v3->fields.endFullScreenAction,
        v2);
      GalleryFullScreenListViewItemDraw__PlayMovie(_4__this, v16);
      ActionExtensions__Call_bool_(
        (System_Action_T__o *)v3->fields.enableControlCallBack,
        0,
        (const MethodInfo_2E57BEC *)Method_ActionExtensions_Call_bool___);
      return 0;
    }
    goto LABEL_14;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_14;
  if ( !GalleryType__IsMovie(galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField, 0LL) )
    return 0;
  this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *)_4__this->fields.moviePlayer;
  if ( !this )
LABEL_14:
    sub_1B4D1EC(this, method);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    v10 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v10,
      (Il2CppObject *)_4__this,
      Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__28_0__,
      0LL);
    v11 = (UnityEngine_WaitWhile_o *)sub_1B4D1DC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v11, v10, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v11;
    p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1B4CF34(p__2__current, (int32_t)v11, v13, v14);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22___ctor(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22__MoveNext(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x19
  struct System_String_o *assetPath; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_o *p_objName; // x0
  int32_t v13; // w1
  AssetData_o *data; // x0
  struct ExUITexture_o *backTexture; // x8
  UnityEngine_Object_o *v16; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  System_Collections_IEnumerator_o *v21; // x0
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_49B608B & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_Texture2D____75492024, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)sub_1B4CF90(&StringLiteral_1057/*"/"*/, v6);
    byte_49B608B = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    data = _4__this->fields.data;
    if ( data )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)AssetData__GetObject_object__49169892(
                                                                            data,
                                                                            v4->fields.objName,
                                                                            (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_Texture2D____75492024);
      backTexture = _4__this->fields.backTexture;
      if ( !backTexture )
        goto LABEL_25;
      v16 = (UnityEngine_Object_o *)this;
      ((void (__fastcall *)(struct ExUITexture_o *, GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *, Il2CppMethodPointer))backTexture->klass->vtable._27_set_mainTexture.method)(
        _4__this->fields.backTexture,
        this,
        backTexture->klass->vtable._28_get_shader.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this->fields.setDataResult = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      GalleryFullScreenListViewItemDraw__SetUpTextureSize(_4__this, v4->fields._imgName_5__2, v17);
      GalleryFullScreenListViewItemDraw__SetTextureScale(_4__this, v18);
    }
    else
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)_4__this->fields.backTexture;
      if ( !this )
        goto LABEL_25;
      (*(void (__fastcall **)(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *, _QWORD, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        0LL,
        this->klass[1].vtable._0_Equals.methodPtr);
    }
    ActionExtensions__Call(v4->fields.callAction, 0LL);
    System_String__IsNullOrEmpty(v4->fields.objName, 0LL);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)_4__this->fields.backTexture;
    if ( this )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)_4__this->fields.moviePlayer;
        if ( this )
        {
          this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            GameObjectHelper__SetActiveSafely(_4__this->fields.movieControlPanel, 0, 0LL);
            GameObjectHelper__SetActiveSafely(_4__this->fields.touchPanel, 0, 0LL);
            return 0;
          }
        }
      }
    }
LABEL_25:
    sub_1B4D1EC(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  assetPath = v4->fields.assetPath;
  v4->fields._imgName_5__2 = assetPath;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._imgName_5__2, (int32_t)assetPath, v2, v3);
  if ( System_String__IsNullOrEmpty(v4->fields.objName, 0LL) )
  {
    v4->fields.objName = 0LL;
    p_objName = (CGThumbnailListItem_o *)&v4->fields.objName;
    v13 = 0;
  }
  else
  {
    v19 = System_String__Concat_61131716(
            v4->fields.assetPath,
            (System_String_o *)StringLiteral_1057/*"/"*/,
            v4->fields.objName,
            0LL);
    v13 = (int)v19;
    v4->fields._imgName_5__2 = v19;
    p_objName = (CGThumbnailListItem_o *)&v4->fields._imgName_5__2;
  }
  sub_1B4CF34(p_objName, v13, v10, v11);
  v21 = GalleryFullScreenListViewItemDraw__SetDataCoroutine(_4__this, v4->fields._imgName_5__2, v20);
  v4->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B4CF34(p__2__current, (int32_t)v21, v23, v24);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__22_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23___ctor(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23__MoveNext(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  float waitTime_5__2; // s8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_6;
LABEL_10:
    sub_1B4D1EC(this, method);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  this->fields._waitTime_5__2 = 0.0;
  if ( !_4__this )
    goto LABEL_10;
  GalleryFullScreenListViewItemDraw__SetData(_4__this, this->fields.imgName, v2);
LABEL_6:
  if ( _4__this->fields.setDataWait )
  {
    GalleryFullScreenListViewItemDraw__SetData(_4__this, this->fields.imgName, v2);
    waitTime_5__2 = this->fields._waitTime_5__2;
    this->fields._waitTime_5__2 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    if ( _4__this->fields.setDataWait )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  return 0;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetFrame_d__30___ctor(
        GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetFrame_d__30__MoveNext(
        GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  Il2CppObject *moviePlayer; // x20
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v2 = this;
  if ( (byte_49B608C & 1) == 0 )
  {
    sub_1B4CF90(&Method_CRIMoviePlayer_IsPlaying__, method);
    sub_1B4CF90(&System_Func_bool__TypeInfo, v3);
    sub_1B4CF90(&Method_GalleryFullScreenListViewItemDraw__SetFrame_b__30_0__, v4);
    this = (GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *)sub_1B4CF90(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_49B608C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_14;
    this = (GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *)_4__this->fields.movieControl;
    if ( !this )
      goto LABEL_14;
    CRIMovieControl__OnClickPauseButton((CRIMovieControl_o *)this, 0LL);
    this = (GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *)_4__this->fields.movieControl;
    if ( !this )
      goto LABEL_14;
    CRIMovieControl__Open((CRIMovieControl_o *)this, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        moviePlayer = (Il2CppObject *)_4__this->fields.moviePlayer;
        v9 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v9, moviePlayer, Method_CRIMoviePlayer_IsPlaying__, 0LL);
        v10 = (UnityEngine_WaitUntil_o *)sub_1B4D1DC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1B4CF34(p__2__current, (int32_t)v10, v12, v13);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_14:
      sub_1B4D1EC(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  v15 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)_4__this,
    Method_GalleryFullScreenListViewItemDraw__SetFrame_b__30_0__,
    0LL);
  v16 = (UnityEngine_WaitUntil_o *)sub_1B4D1DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v16, v15, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v16, v17, v18);
  v2->fields.__1__state = 2;
  return 1;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetFrame_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetFrame_d__30__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_GalleryFullScreenListViewItemDraw__SetFrame_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetFrame_d__30__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetFrame_d__30__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetFrame_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27___ctor(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27__MoveNext(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x19
  bool v10; // w21
  const MethodInfo *v11; // x2
  System_Func_bool__o *v12; // x22
  UnityEngine_WaitWhile_o *v13; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *assetPath; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AssetData_o **p_data; // x21
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_String_o *v22; // x22
  char v23; // w22
  int32_t v24; // w1
  System_String_o *Empty; // x0
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_49B608D & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&FSUtility_TypeInfo, v3);
    sub_1B4CF90(&System_Func_bool__TypeInfo, v4);
    sub_1B4CF90(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__27_0__, v5);
    sub_1B4CF90(&string_TypeInfo, v6);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)sub_1B4CF90(
                                                                                 &UnityEngine_WaitWhile_TypeInfo,
                                                                                 v7);
    byte_49B608D = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    assetPath = v2->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)AssetManager__getAsset(0, assetPath, 0LL);
    if ( !_4__this )
      goto LABEL_31;
    _4__this->fields.data = (struct AssetData_o *)this;
    p_data = &_4__this->fields.data;
    sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.data, (int32_t)this, v18, v19);
    galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_31;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_31;
    v22 = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)FSUtility__IsFullScreenMovie(v22, 0LL);
    if ( !_4__this->fields.touchUiWidget )
      goto LABEL_31;
    v23 = (char)this;
    UIWidget__set_width(_4__this->fields.touchUiWidget, 1344, 0LL);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)_4__this->fields.touchUiWidget;
    if ( !this )
      goto LABEL_31;
    if ( (v23 & 1) != 0 )
      v24 = 576;
    else
      v24 = 756;
    UIWidget__set_height((UIWidget_o *)this, v24, 0LL);
    if ( !*p_data || (Empty = AssetData__get_Path(*p_data, 0LL)) == 0LL )
      Empty = string_TypeInfo->static_fields->Empty;
    _4__this->fields.setDataResult = !System_String__IsNullOrEmpty(Empty, 0LL);
    ActionExtensions__Call(v2->fields.callAction, 0LL);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)_4__this->fields.backTexture;
    if ( !this
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
          (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)_4__this->fields.moviePlayer) == 0LL)
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL)) == 0LL )
    {
LABEL_31:
      sub_1B4D1EC(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    GameObjectHelper__SetActiveSafely(_4__this->fields.movieControlPanel, 0, 0LL);
    GameObjectHelper__SetActiveSafely(_4__this->fields.touchPanel, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_31;
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *)_4__this->fields.moviePlayer;
  if ( !this )
    goto LABEL_31;
  v27.fields.r = 0.0;
  v27.fields.g = 0.0;
  v27.fields.b = 0.0;
  v27.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)this, v27, 0LL);
  v10 = 1;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  GalleryFullScreenListViewItemDraw__DownloadMovieAsset(_4__this, v2->fields.assetPath, v11);
  v12 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)_4__this,
    Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__27_0__,
    0LL);
  v13 = (UnityEngine_WaitWhile_o *)sub_1B4D1DC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v13, v12, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1B4CF34(p__2__current, (int32_t)v13, v15, v16);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v10;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  ;
}