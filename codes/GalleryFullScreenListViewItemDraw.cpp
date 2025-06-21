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

  if ( (byte_4B175AF & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, assetPath);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__31_0__, v5);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    byte_4B175AF = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__31_0__,
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


void __fastcall GalleryFullScreenListViewItemDraw__Init(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  GalleryFullScreenListViewItemDraw_o *v4; // x19
  int32_t CurrentGalleryType_k__BackingField; // w23
  System_Action_o *v6; // x20
  struct GalleryFullScreenListViewItem_o *v7; // x8
  GalleryFullScreenListViewItemDraw_o *v8; // x21
  GalleryFullScreenListViewItemDraw_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  System_Collections_IEnumerator_o *loadCoroutine; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *playMovieCoroutine; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *playSeekSequenceCoroutine; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct GalleryFullScreenListViewItem_o *v23; // x8
  int32_t v24; // w8
  System_Collections_IEnumerator_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_23;
  v4 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_23;
  CurrentGalleryType_k__BackingField = galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField;
  v6 = callAction;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                  (GalleryResourceEntity_o *)this,
                                                  0LL);
  v7 = v4->fields.galleryFullScreenListViewItem;
  if ( !v7 )
    goto LABEL_23;
  v8 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)v7->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_23;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetObjectName(
                                                  (GalleryResourceEntity_o *)this,
                                                  0LL);
  if ( !v4->fields.backTexture )
    goto LABEL_23;
  v9 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v4->fields.backTexture,
                                                  0LL);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 2, 0LL);
  GameObjectHelper__SetActiveSafely(v4->fields.touchPanel, CurrentGalleryType_k__BackingField == 1, 0LL);
  this = (GalleryFullScreenListViewItemDraw_o *)v4->fields.busyAnim;
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 1, 0LL);
  loadCoroutine = v4->fields.loadCoroutine;
  if ( loadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, loadCoroutine, 0LL);
    v4->fields.loadCoroutine = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.loadCoroutine, 0, v13, v14);
  }
  playMovieCoroutine = v4->fields.playMovieCoroutine;
  if ( playMovieCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playMovieCoroutine, 0LL);
    v4->fields.playMovieCoroutine = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.playMovieCoroutine, 0, v16, v17);
  }
  playSeekSequenceCoroutine = v4->fields.playSeekSequenceCoroutine;
  if ( playSeekSequenceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playSeekSequenceCoroutine, 0LL);
    v4->fields.playSeekSequenceCoroutine = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.playSeekSequenceCoroutine, 0, v19, v20);
  }
  callAction = (System_Action_o *)v4->fields.seekSequenceCoroutine;
  if ( callAction )
  {
    UnityEngine_MonoBehaviour__StopCoroutine(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_Collections_IEnumerator_o *)callAction,
      0LL);
    v4->fields.seekSequenceCoroutine = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.seekSequenceCoroutine, 0, v21, v22);
  }
  v23 = v4->fields.galleryFullScreenListViewItem;
  if ( !v23 )
LABEL_23:
    sub_1BCB254(this, callAction);
  v24 = v23->fields._CurrentGalleryType_k__BackingField;
  if ( v24 == 2 )
  {
    v25 = GalleryFullScreenListViewItemDraw__SetCGCoroutine(v4, (System_String_o *)v8, (System_String_o *)v9, v6, v11);
    goto LABEL_21;
  }
  if ( v24 == 1 )
  {
    v25 = GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(v4, (System_String_o *)v8, v6, v10);
LABEL_21:
    v4->fields.loadCoroutine = v25;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.loadCoroutine, (int32_t)v25, v26, v27);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)v4, v4->fields.loadCoroutine, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  if ( (byte_4B175B7 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_9149/*"MyRoom/Gallery/SubstituteData"*/, textureName);
    byte_4B175B7 = 1;
  }
  if ( !textureName )
    sub_1BCB254(this, textureName);
  return System_String__Contains(textureName, (System_String_o *)StringLiteral_9149/*"MyRoom/Gallery/SubstituteData"*/, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw__IsSameName(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v4; // x20
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryFullScreenListViewItem_o *v6; // x8
  System_String_o *v7; // x20
  System_String_o *ObjectName; // x21

  v4 = this;
  if ( (byte_4B175AD & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_1039/*"/"*/, targetName);
    byte_4B175AD = 1;
  }
  galleryFullScreenListViewItem = v4->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem
    || (this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField) == 0LL
    || (this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                        (GalleryResourceEntity_o *)this,
                                                        0LL),
        (v6 = v4->fields.galleryFullScreenListViewItem) == 0LL)
    || (v7 = (System_String_o *)this,
        (this = (GalleryFullScreenListViewItemDraw_o *)v6->fields._GalleryResourceEntity_k__BackingField) == 0LL) )
  {
    sub_1BCB254(this, targetName);
  }
  ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
    v7 = System_String__Concat_62488672(v7, (System_String_o *)StringLiteral_1039/*"/"*/, ObjectName, 0LL);
  return System_String__op_Equality(v7, targetName, 0LL);
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
    sub_1BCB254(backTexture, method);
  }
  return v5
       / ((__int64 (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer))backTexture->klass->vtable._6_get_canBeAnchored.method)(
           backTexture,
           backTexture->klass->vtable._7_get_alpha.methodPtr) == 1;
}


void __fastcall GalleryFullScreenListViewItemDraw__OpenPause(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CRIMovieControl_o *movieControl; // x0
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v6; // x20

  if ( (byte_4B175B3 & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B175B3 = 1;
  }
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_17;
  CRIMovieControl__OnClickPauseButton(movieControl, 0LL);
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL) )
  {
    v6 = this->fields.moviePlayer;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4B17452 )
    {
      sub_1BCAFF8(&BgmManager_TypeInfo, method);
      byte_4B17452 = 1;
    }
    movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
    }
    if ( v6 )
    {
      CRIMoviePlayer__SetVolume(v6, *((float *)movieControl[1].monitor + 9), 0LL);
      goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(movieControl, method);
  }
LABEL_15:
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_17;
  CRIMovieControl__Open(movieControl, 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovie(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  GalleryFullScreenListViewItemDraw_o **p_moviePlayer; // x20
  UnityEngine_Object_o *moviePlayer; // x21
  Il2CppObject *moviePlayerPrefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct CRIMoviePlayer_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UITexture_o *backBgTexture; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UnityEngine_GameObject_o *busyAnim; // x1
  struct UITexture_o *v27; // x8
  struct UITexture_o *v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UITexture_o *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct CRIMoviePlayer_o *v34; // x8
  struct ExUITexture_o *texture; // x1
  struct CRIMoviePlayer_o *v36; // x8
  GalleryFullScreenListViewItemDraw_o *v37; // x21
  struct GalleryFullScreenListViewItem_o *v38; // x8
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8
  CRIMoviePlayer_o *v40; // x21
  System_String_o *assetPath; // x22
  __int64 v42; // x1
  System_String_o *Path; // x23
  BgmManager_c *v44; // x0
  float masterVolume; // s8
  System_Action_o *v46; // x24
  CinemascopeSideFrame_o *v47; // x25
  System_Action_o *nonDeleteCallBack; // x26
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_IEnumerator_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct CRIMovieControl_o *movieControl; // x8
  struct CRIMovieControl_o *v55; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B175B2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&BgmManager_TypeInfo, v3);
    sub_1BCAFF8(&CinemascopeSideFrame_TypeInfo, v4);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_0__, v5);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_1__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIButton___, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_CRIMoviePlayer___, v8);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B175B2 = 1;
  }
  if ( v2->fields.data )
  {
    galleryFullScreenListViewItem = v2->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_55;
    if ( !galleryFullScreenListViewItem->fields.isCenterItem )
      return;
    p_moviePlayer = (GalleryFullScreenListViewItemDraw_o **)&v2->fields.moviePlayer;
    moviePlayer = (UnityEngine_Object_o *)v2->fields.moviePlayer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL) )
    {
      this = *p_moviePlayer;
      if ( !*p_moviePlayer )
        goto LABEL_55;
      if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
        return;
    }
    moviePlayerPrefab = (Il2CppObject *)v2->fields.moviePlayerPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__Instantiate_object__51002592(
            moviePlayerPrefab,
            transform,
            (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_CRIMoviePlayer___);
    v2->fields.moviePlayer = (struct CRIMoviePlayer_o *)v15;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.moviePlayer, (int32_t)v15, v16, v17);
    this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.touchPanel;
    if ( this )
    {
      v18 = v2->fields.moviePlayer;
      this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIButton___);
      if ( v18 )
      {
        v18->fields.touch = (struct UIButton_o *)this;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v18->fields.touch, (int32_t)this, v19, v20);
        this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
        if ( this )
        {
          backBgTexture = v2->fields.backBgTexture;
          this[1].monitor = backBgTexture;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this[1].monitor, (int32_t)backBgTexture, v21, v22);
          this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
          if ( this )
          {
            busyAnim = v2->fields.busyAnim;
            *(_QWORD *)&this[1].fields.m_CachedPtr = busyAnim;
            sub_1BCAF9C((CGThumbnailListItem_o *)&this[1].fields, (int32_t)busyAnim, v24, v25);
            this = *p_moviePlayer;
            if ( *p_moviePlayer )
            {
              this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                if ( *p_moviePlayer )
                {
                  v27 = v2->fields.backBgTexture;
                  if ( v27 )
                  {
                    this = (GalleryFullScreenListViewItemDraw_o *)(*p_moviePlayer)->fields.seekSequenceCoroutine;
                    if ( this )
                    {
                      UIWidget__set_width((UIWidget_o *)this, v27->fields.mWidth, 0LL);
                      if ( *p_moviePlayer )
                      {
                        v28 = v2->fields.backBgTexture;
                        if ( v28 )
                        {
                          this = (GalleryFullScreenListViewItemDraw_o *)(*p_moviePlayer)->fields.seekSequenceCoroutine;
                          if ( this )
                          {
                            UIWidget__set_height((UIWidget_o *)this, v28->fields.mHeight, 0LL);
                            this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.movieControl;
                            if ( this )
                            {
                              v31 = (struct UITexture_o *)v2->fields.moviePlayer;
                              this->fields.backBgTexture = v31;
                              sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.backBgTexture, (int32_t)v31, v29, v30);
                              v34 = v2->fields.moviePlayer;
                              if ( v34 )
                              {
                                this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.movieControl;
                                if ( this )
                                {
                                  texture = (struct ExUITexture_o *)v34->fields.texture;
                                  this->fields.backTexture = texture;
                                  sub_1BCAF9C(
                                    (CGThumbnailListItem_o *)&this->fields.backTexture,
                                    (int32_t)texture,
                                    v32,
                                    v33);
                                  this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.movieControl;
                                  if ( this )
                                  {
                                    CRIMovieControl__Closed((CRIMovieControl_o *)this, 0LL);
                                    GameObjectHelper__SetActiveSafely(v2->fields.movieControlPanel, 1, 0LL);
                                    v36 = v2->fields.moviePlayer;
                                    if ( v36 )
                                    {
                                      this = (GalleryFullScreenListViewItemDraw_o *)v36->fields.texture;
                                      if ( this )
                                      {
                                        this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this,
                                                                                        0LL);
                                        if ( v2->fields.backBgTexture )
                                        {
                                          v37 = this;
                                          this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)v2->fields.backBgTexture,
                                                                                          0LL);
                                          if ( this )
                                          {
                                            localScale = UnityEngine_Transform__get_localScale(
                                                           (UnityEngine_Transform_o *)this,
                                                           0LL);
                                            GameObjectExtensions__SetLocalScale(
                                              (UnityEngine_GameObject_o *)v37,
                                              localScale,
                                              0LL);
                                            v38 = v2->fields.galleryFullScreenListViewItem;
                                            if ( v38 )
                                            {
                                              GalleryResourceEntity_k__BackingField = v38->fields._GalleryResourceEntity_k__BackingField;
                                              if ( GalleryResourceEntity_k__BackingField )
                                              {
                                                this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.data;
                                                if ( this )
                                                {
                                                  v40 = v2->fields.moviePlayer;
                                                  assetPath = GalleryResourceEntity_k__BackingField->fields.assetPath;
                                                  Path = AssetData__get_Path((AssetData_o *)this, 0LL);
                                                  if ( !BgmManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                                                  if ( !byte_4B17452 )
                                                  {
                                                    sub_1BCAFF8(&BgmManager_TypeInfo, v42);
                                                    byte_4B17452 = 1;
                                                  }
                                                  v44 = BgmManager_TypeInfo;
                                                  if ( !BgmManager_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                                                    v44 = BgmManager_TypeInfo;
                                                  }
                                                  masterVolume = v44->static_fields->masterVolume;
                                                  v46 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                                                  System_Action___ctor(
                                                    v46,
                                                    (Il2CppObject *)v2,
                                                    Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_0__,
                                                    0LL);
                                                  v47 = (CinemascopeSideFrame_o *)sub_1BCB244(CinemascopeSideFrame_TypeInfo);
                                                  CinemascopeSideFrame___ctor(v47, 0, 1, 0LL);
                                                  nonDeleteCallBack = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                                                  System_Action___ctor(
                                                    nonDeleteCallBack,
                                                    (Il2CppObject *)v2,
                                                    Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_1__,
                                                    0LL);
                                                  if ( v40 )
                                                  {
                                                    CRIMoviePlayer__Initialize(
                                                      v40,
                                                      assetPath,
                                                      Path,
                                                      masterVolume,
                                                      1,
                                                      0LL,
                                                      v46,
                                                      1,
                                                      v47,
                                                      0,
                                                      0,
                                                      1,
                                                      nonDeleteCallBack,
                                                      0LL);
                                                    this = *p_moviePlayer;
                                                    if ( *p_moviePlayer )
                                                    {
                                                      CRIMoviePlayer__StopAndDispBg((CRIMoviePlayer_o *)this, 0LL);
                                                      method = (const MethodInfo *)v2->fields.playSeekSequenceCoroutine;
                                                      if ( method )
                                                      {
                                                        UnityEngine_MonoBehaviour__StopCoroutine(
                                                          (UnityEngine_MonoBehaviour_o *)v2,
                                                          (System_Collections_IEnumerator_o *)method,
                                                          0LL);
                                                        v2->fields.playSeekSequenceCoroutine = 0LL;
                                                        sub_1BCAF9C(
                                                          (CGThumbnailListItem_o *)&v2->fields.playSeekSequenceCoroutine,
                                                          0,
                                                          v49,
                                                          v50);
                                                      }
                                                      this = *p_moviePlayer;
                                                      if ( *p_moviePlayer )
                                                      {
                                                        v51 = CRIMoviePlayer__PlaySeekSequence(
                                                                (CRIMoviePlayer_o *)this,
                                                                0,
                                                                0LL);
                                                        v2->fields.playSeekSequenceCoroutine = v51;
                                                        sub_1BCAF9C(
                                                          (CGThumbnailListItem_o *)&v2->fields.playSeekSequenceCoroutine,
                                                          (int32_t)v51,
                                                          v52,
                                                          v53);
                                                        this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)v2, v2->fields.playSeekSequenceCoroutine, 0LL);
                                                        movieControl = v2->fields.movieControl;
                                                        if ( movieControl )
                                                        {
                                                          this = (GalleryFullScreenListViewItemDraw_o *)movieControl->fields.playButton;
                                                          if ( this )
                                                          {
                                                            this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                                                            if ( this )
                                                            {
                                                              UnityEngine_GameObject__SetActive(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0,
                                                                0LL);
                                                              v55 = v2->fields.movieControl;
                                                              if ( v55 )
                                                              {
                                                                this = (GalleryFullScreenListViewItemDraw_o *)v55->fields.pauseButton;
                                                                if ( this )
                                                                {
                                                                  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                                                                  if ( this )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(
                                                                      (UnityEngine_GameObject_o *)this,
                                                                      1,
                                                                      0LL);
                                                                    return;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_55:
    sub_1BCB254(this, method);
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

  if ( (byte_4B175B1 & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_TypeInfo, enableControlCallBack);
    byte_4B175B1 = 1;
  }
  v7 = sub_1BCB244(GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = enableControlCallBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)enableControlCallBack, v10, v11);
  *(_QWORD *)(v7 + 48) = endFullScreenAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endFullScreenAction, v12, v13);
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

  if ( (byte_4B175AB & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_TypeInfo, assetPath);
    byte_4B175AB = 1;
  }
  v9 = sub_1BCB244(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 40) = assetPath;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)assetPath, v12, v13);
  *(_QWORD *)(v9 + 48) = objName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 48), (int32_t)objName, v14, v15);
  *(_QWORD *)(v9 + 56) = callAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 56), (int32_t)callAction, v16, v17);
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

  if ( (byte_4B175AE & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, assetName);
    byte_4B175AE = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(assetName, 0LL);
  this->fields.data = AssetStorage;
  p_data = &this->fields.data;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_data, (int32_t)AssetStorage, v7, v8);
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

  if ( (byte_4B175AC & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_TypeInfo, imgName);
    byte_4B175AC = 1;
  }
  v5 = sub_1BCB244(GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = imgName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)imgName, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetItem(
        GalleryFullScreenListViewItemDraw_o *this,
        GalleryFullScreenListViewItem_o *item,
        int32_t mode,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryFullScreenListViewItem_o **p_galleryFullScreenListViewItem; // x22
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v11; // x2

  if ( item && mode )
  {
    p_galleryFullScreenListViewItem = &this->fields.galleryFullScreenListViewItem;
    galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
    if ( galleryFullScreenListViewItem && galleryFullScreenListViewItem->fields.index != item->fields.index )
    {
      backTexture = this->fields.backTexture;
      if ( !backTexture )
        sub_1BCB254(0LL, item);
      ExUITexture__ClearImage(backTexture, 0LL);
    }
    this->fields.galleryFullScreenListViewItem = item;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)p_galleryFullScreenListViewItem,
      (int32_t)item,
      mode,
      (const MethodInfo *)callAction);
    GalleryFullScreenListViewItemDraw__Init(this, callAction, v11);
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
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&movieControl->fields.enableControlCallBack,
          (int32_t)enableControlCallBack,
          (int32_t)endFullScreenAction,
          method),
        (movieControl = this->fields.movieControl) == 0LL) )
  {
    sub_1BCB254(movieControl, enableControlCallBack);
  }
  movieControl->fields.endFullScreenAction = endFullScreenAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)&movieControl->fields.endFullScreenAction, (int32_t)endFullScreenAction, v7, v8);
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

  if ( (byte_4B175B0 & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_TypeInfo, assetPath);
    byte_4B175B0 = 1;
  }
  v7 = sub_1BCB244(GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = assetPath;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)assetPath, v10, v11);
  *(_QWORD *)(v7 + 48) = callAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callAction, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewItemDraw__SetMovieLocalScale(
        GalleryFullScreenListViewItemDraw_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backBgTexture; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  backBgTexture = (UnityEngine_Component_o *)this->fields.backBgTexture;
  if ( !backBgTexture )
    sub_1BCB254(0LL, method);
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(backBgTexture, 0LL);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalScale(gameObject, v8, 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw__SetScale(
        GalleryFullScreenListViewItemDraw_o *this,
        int32_t *width,
        int32_t *height,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_String_o *AssetPath; // x21
  bool IsFullScreenMovie; // w0
  int32_t mHeight; // w8
  UnityEngine_Object_o *v13; // x22
  struct GalleryFullScreenListViewItem_o *v14; // x8
  struct GalleryFullScreenListViewItem_o *v15; // x8
  System_String_o *v16; // x22
  System_String_o *ObjectName; // x23
  const MethodInfo *v18; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v20; // x2
  struct ExUITexture_o *backTexture; // x8

  v6 = this;
  if ( (byte_4B175B5 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, width);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v8);
    byte_4B175B5 = 1;
  }
  galleryFullScreenListViewItem = v6->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_34;
  if ( galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField == 1 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( this )
    {
      AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0LL);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      IsFullScreenMovie = FSUtility__IsFullScreenMovie(AssetPath, 0LL);
      *width = 1344;
      if ( IsFullScreenMovie )
        mHeight = 576;
      else
        mHeight = 756;
      goto LABEL_11;
    }
    goto LABEL_34;
  }
  this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
  if ( !this )
    goto LABEL_34;
  v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, void *, int32_t *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                  this,
                                  this->klass[2]._1.image,
                                  height,
                                  method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    *height = 1;
    *width = 1;
  }
  else
  {
    v14 = v6->fields.galleryFullScreenListViewItem;
    if ( !v14 )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)v14->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                    (GalleryResourceEntity_o *)this,
                                                    0LL);
    v15 = v6->fields.galleryFullScreenListViewItem;
    if ( !v15 )
      goto LABEL_34;
    v16 = (System_String_o *)this;
    this = (GalleryFullScreenListViewItemDraw_o *)v15->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_34;
    ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0LL);
    if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
      v16 = System_String__Concat_62488672(v16, (System_String_o *)StringLiteral_1039/*"/"*/, ObjectName, 0LL);
    IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(v6, v18);
    if ( IsStandardSize
      && !GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
            (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
            v16,
            v20) )
    {
      this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
      if ( this )
      {
        UITexture__set_uvRect((UITexture_o *)this, v6->fields.cgRect, 0LL);
        backTexture = v6->fields.backTexture;
        if ( backTexture )
        {
          *width = backTexture->fields.mWidth;
          mHeight = backTexture->fields.mHeight;
LABEL_11:
          *height = mHeight;
          return;
        }
      }
LABEL_34:
      sub_1BCB254(this, width);
    }
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_34;
    UITexture__set_uvRect((UITexture_o *)this, v6->fields.substituteDataRect, 0LL);
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                                    this,
                                                    this->klass[2]._1.image);
    if ( !this )
      goto LABEL_34;
    *width = ((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, const char *))this->klass[1]._1.gc_desc)(
               this,
               this->klass[1]._1.name);
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                                    this,
                                                    this->klass[2]._1.image);
    if ( !this )
      goto LABEL_34;
    *height = (*(__int64 (__fastcall **)(GalleryFullScreenListViewItemDraw_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                this,
                this->klass[1]._1.this_arg.data);
  }
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
    sub_1BCB254(backTexture, v4);
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
  if ( (byte_4B175B6 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, textureName);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B175B6 = 1;
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
          sub_1BCB254(backTexture, textureName);
        }
      }
      textureName = (System_String_o *)&qword_240;
      if ( !v11 )
        goto LABEL_22;
      goto LABEL_20;
    }
  }
}


void __fastcall GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct System_Collections_IEnumerator_o **p_playMovieCoroutine; // x20
  struct System_Collections_IEnumerator_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    sub_1BCB254(this, enableControlCallBack);
  if ( galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField == 1 )
  {
    p_playMovieCoroutine = &this->fields.playMovieCoroutine;
    if ( !this->fields.playMovieCoroutine )
    {
      v7 = GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(
             this,
             enableControlCallBack,
             endFullScreenAction,
             method);
      this->fields.playMovieCoroutine = v7;
      sub_1BCAF9C((CGThumbnailListItem_o *)p_playMovieCoroutine, (int32_t)v7, v8, v9);
      UnityEngine_MonoBehaviour__StartCoroutine_70121648(
        (UnityEngine_MonoBehaviour_o *)this,
        this->fields.playMovieCoroutine,
        0LL);
    }
  }
}


void __fastcall GalleryFullScreenListViewItemDraw__StopMovie(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_moviePlayer; // x19
  UnityEngine_Object_o *moviePlayer; // x21
  __int64 v5; // x1
  struct CRIMovieControl_o *klass; // x0
  UnityEngine_Object_o *movieControl; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *movieControlPanel; // x21
  UnityEngine_Object_o *gameObject; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B175B4 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B175B4 = 1;
  }
  p_moviePlayer = (CGThumbnailListItem_o *)&this->fields.moviePlayer;
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL) )
  {
    klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
    if ( p_moviePlayer->klass )
    {
      if ( !klass->fields.panel || !CRIMoviePlayer__IsStoppable((CRIMoviePlayer_o *)klass, 0LL) )
        return;
      klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
      if ( p_moviePlayer->klass )
      {
        CRIMoviePlayer__MovieStop((CRIMoviePlayer_o *)klass, 0LL);
        movieControl = (UnityEngine_Object_o *)this->fields.movieControl;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(movieControl, 0LL, 0LL) )
        {
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          CRIMovieControl__Close(klass, 0LL);
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          klass->fields.player = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&klass->fields.player, 0, v8, v9);
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          klass->fields.texture = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&klass->fields.texture, 0, v10, v11);
        }
        movieControlPanel = (UnityEngine_Object_o *)this->fields.movieControlPanel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(movieControlPanel, 0LL, 0LL) )
          GameObjectHelper__SetActiveSafely(this->fields.movieControlPanel, 0, 0LL);
        klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
        if ( p_moviePlayer->klass )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)klass,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
          p_moviePlayer->klass = 0LL;
          sub_1BCAF9C(p_moviePlayer, 0, v14, v15);
          return;
        }
      }
    }
LABEL_26:
    sub_1BCB254(klass, v5);
  }
}


void __fastcall GalleryFullScreenListViewItemDraw___DownloadMovieAsset_b__31_0(
        GalleryFullScreenListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  this->fields.setDataWait = 0;
}


bool __fastcall GalleryFullScreenListViewItemDraw___PlayMovieCoroutine_b__34_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x9
  System_String_o *name; // x19
  System_String_o *AssetPath; // x1

  data = this->fields.data;
  if ( !data )
    return 1;
  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem
    || (this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  name = data->fields.name;
  AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0LL);
  return System_String__op_Inequality(name, AssetPath, 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw___PlayMovie_b__35_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v2; // x19
  __int64 v3; // x1
  struct CRIMoviePlayer_o *moviePlayer; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4B175B8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw_PlayMovie__, v3);
    byte_4B175B8 = 1;
  }
  moviePlayer = v2->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_11;
  this = (GalleryFullScreenListViewItemDraw_o *)moviePlayer->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_11;
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 7 )
    return;
  this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
  if ( !this
    || (CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0LL),
        (galleryFullScreenListViewItem = v2->fields.galleryFullScreenListViewItem) == 0LL) )
  {
LABEL_11:
    sub_1BCB254(this, method);
  }
  if ( galleryFullScreenListViewItem->fields.isCenterItem )
  {
    v6 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v2, Method_GalleryFullScreenListViewItemDraw_PlayMovie__, 0LL);
    GalleryFullScreenListViewItemDraw__Init(v2, v6, v7);
  }
}


void __fastcall GalleryFullScreenListViewItemDraw___PlayMovie_b__35_1(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *moviePlayer; // x20
  struct CRIMoviePlayer_o *v11; // x8
  struct CRIMoviePlayer_o *v12; // x8
  struct CRIMoviePlayer_o *v13; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct CRIMoviePlayer_o *v15; // x8
  System_Collections_IEnumerator_o *seekSequenceCoroutine; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CRIMoviePlayer_o *v19; // x21
  System_Action_o *v20; // x22
  struct System_Collections_IEnumerator_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B175B9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&BgmManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw_OpenPause__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&TouchEffectManager_TypeInfo, v7);
    byte_4B175B9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0LL);
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (CommonUI_o *)UnityEngine_Object__op_Equality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = this->fields.moviePlayer;
    if ( !v11 )
      goto LABEL_30;
    Instance = (CommonUI_o *)v11->fields._player_k__BackingField;
    if ( !Instance )
      goto LABEL_30;
    Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0LL);
    if ( (_DWORD)Instance != 7 )
    {
      v12 = this->fields.moviePlayer;
      if ( !v12 )
        goto LABEL_30;
      Instance = (CommonUI_o *)v12->fields._player_k__BackingField;
      if ( !Instance )
        goto LABEL_30;
      Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0LL);
      if ( (_DWORD)Instance == 6 )
      {
        v13 = this->fields.moviePlayer;
        if ( !v13 )
          goto LABEL_30;
        Instance = (CommonUI_o *)v13->fields._player_k__BackingField;
        if ( !Instance )
          goto LABEL_30;
        Instance = (CommonUI_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)Instance, 0LL);
        if ( Instance )
        {
          galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
          if ( !galleryFullScreenListViewItem )
            goto LABEL_30;
          if ( galleryFullScreenListViewItem->fields.isCenterItem )
          {
            Instance = (CommonUI_o *)this->fields.moviePlayer;
            if ( Instance )
            {
              CRIMoviePlayer__SetVolume((CRIMoviePlayer_o *)Instance, 0.0, 0LL);
              v15 = this->fields.moviePlayer;
              if ( v15 )
              {
                Instance = (CommonUI_o *)v15->fields._player_k__BackingField;
                if ( Instance )
                {
                  CriMana_Player__Pause((CriMana_Player_o *)Instance, 1, 0LL);
                  seekSequenceCoroutine = this->fields.seekSequenceCoroutine;
                  if ( seekSequenceCoroutine )
                  {
                    UnityEngine_MonoBehaviour__StopCoroutine(
                      (UnityEngine_MonoBehaviour_o *)this,
                      seekSequenceCoroutine,
                      0LL);
                    this->fields.seekSequenceCoroutine = 0LL;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seekSequenceCoroutine, 0, v17, v18);
                  }
                  v19 = this->fields.moviePlayer;
                  v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                  System_Action___ctor(
                    v20,
                    (Il2CppObject *)this,
                    Method_GalleryFullScreenListViewItemDraw_OpenPause__,
                    0LL);
                  if ( v19 )
                  {
                    v21 = CRIMoviePlayer__SeekSequence(v19, 0, v20, 0LL);
                    this->fields.seekSequenceCoroutine = v21;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seekSequenceCoroutine, (int32_t)v21, v22, v23);
                    UnityEngine_MonoBehaviour__StartCoroutine_70121648(
                      (UnityEngine_MonoBehaviour_o *)this,
                      this->fields.seekSequenceCoroutine,
                      0LL);
                    return;
                  }
                }
              }
            }
LABEL_30:
            sub_1BCB254(Instance, v9);
          }
        }
      }
    }
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw___SetMovieDataCoroutine_b__32_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.setDataWait;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34___ctor(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__MoveNext(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitWhile_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  const MethodInfo *v14; // x1

  v3 = this;
  if ( (byte_4B175BA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    sub_1BCAFF8(&System_Func_bool__TypeInfo, v4);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__34_0__, v5);
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)sub_1BCAFF8(
                                                                              &UnityEngine_WaitWhile_TypeInfo,
                                                                              v6);
    byte_4B175BA = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCB254(this, method);
    GalleryFullScreenListViewItemDraw__SetMovieCallBack(
      _4__this,
      v3->fields.enableControlCallBack,
      v3->fields.endFullScreenAction,
      v2);
    GalleryFullScreenListViewItemDraw__PlayMovie(_4__this, v14);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)v3->fields.enableControlCallBack,
      0,
      (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v9 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      (Il2CppObject *)_4__this,
      Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__34_0__,
      0LL);
    v10 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v10, v9, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v10;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.__2__current, (int32_t)v10, v11, v12);
    result = 1;
    v3->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26___ctor(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__MoveNext(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *v4; // x20
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
  if ( (byte_4B175BB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_Texture2D____76915368, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v6);
    byte_4B175BB = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_23;
    data = _4__this->fields.data;
    if ( data )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)AssetData__GetObject_object__50315216(
                                                                            data,
                                                                            v4->fields.objName,
                                                                            (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_Texture2D____76915368);
      backTexture = _4__this->fields.backTexture;
      if ( !backTexture )
        goto LABEL_23;
      v16 = (UnityEngine_Object_o *)this;
      ((void (__fastcall *)(struct ExUITexture_o *, GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *, Il2CppMethodPointer))backTexture->klass->vtable._27_set_mainTexture.method)(
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
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)_4__this->fields.backTexture;
      if ( !this )
        goto LABEL_23;
      (*(void (__fastcall **)(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *, _QWORD, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        0LL,
        this->klass[1].vtable._0_Equals.methodPtr);
    }
    ActionExtensions__Call(v4->fields.callAction, 0LL);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)_4__this->fields.backTexture;
    if ( this )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)UnityEngine_Component__get_gameObject(
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
LABEL_23:
    sub_1BCB254(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  assetPath = v4->fields.assetPath;
  v4->fields._imgName_5__2 = assetPath;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._imgName_5__2, (int32_t)assetPath, v2, v3);
  if ( System_String__IsNullOrEmpty(v4->fields.objName, 0LL) )
  {
    v4->fields.objName = 0LL;
    p_objName = (CGThumbnailListItem_o *)&v4->fields.objName;
    v13 = 0;
  }
  else
  {
    v19 = System_String__Concat_62488672(
            v4->fields.assetPath,
            (System_String_o *)StringLiteral_1039/*"/"*/,
            v4->fields.objName,
            0LL);
    v13 = (int)v19;
    v4->fields._imgName_5__2 = v19;
    p_objName = (CGThumbnailListItem_o *)&v4->fields._imgName_5__2;
  }
  sub_1BCAF9C(p_objName, v13, v10, v11);
  v21 = GalleryFullScreenListViewItemDraw__SetDataCoroutine(_4__this, v4->fields._imgName_5__2, v20);
  v4->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BCAF9C(p__2__current, (int32_t)v21, v23, v24);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27___ctor(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__MoveNext(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  const MethodInfo *v6; // x2
  float waitTime_5__2; // s8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._waitTime_5__2 = 0.0;
    if ( _4__this )
    {
      GalleryFullScreenListViewItemDraw__SetData(_4__this, this->fields.imgName, v2);
      goto LABEL_6;
    }
LABEL_12:
    sub_1BCB254(this, method);
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_12;
LABEL_6:
  if ( !_4__this->fields.setDataWait )
    return 0;
  if ( GalleryFullScreenListViewItemDraw__IsSameName(_4__this, this->fields.imgName, v2) )
  {
    GalleryFullScreenListViewItemDraw__SetData(_4__this, this->fields.imgName, v6);
    waitTime_5__2 = this->fields._waitTime_5__2;
    this->fields._waitTime_5__2 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    if ( _4__this->fields.setDataWait )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, 0, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  result = 0;
  *(_WORD *)&_4__this->fields.setDataWait = 0;
  return result;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32___ctor(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__MoveNext(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  bool v10; // w21
  const MethodInfo *v11; // x2
  System_Func_bool__o *v12; // x22
  UnityEngine_WaitWhile_o *v13; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *assetPath; // x21
  const MethodInfo *v18; // x2
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_String_o *v23; // x21
  bool IsFullScreenMovie; // w8
  int32_t v25; // w21
  AssetData_o *data; // x0
  System_String_o *Empty; // x0
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4B175BC & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&FSUtility_TypeInfo, v3);
    sub_1BCAFF8(&System_Func_bool__TypeInfo, v4);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__32_0__, v5);
    sub_1BCAFF8(&string_TypeInfo, v6);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)sub_1BCAFF8(
                                                                                 &UnityEngine_WaitWhile_TypeInfo,
                                                                                 v7);
    byte_4B175BC = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    assetPath = v2->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)AssetManager__getAsset(0, assetPath, 0LL);
    if ( !_4__this )
      goto LABEL_31;
    v19 = this;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)GalleryFullScreenListViewItemDraw__IsSameName(
                                                                                 _4__this,
                                                                                 v2->fields.assetPath,
                                                                                 v18);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this->fields.data = (struct AssetData_o *)v19;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.data, (int32_t)v19, v20, v21);
    }
    galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_31;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_31;
    v23 = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(v23, 0LL);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
    v25 = IsFullScreenMovie ? 576 : 756;
    if ( !this )
      goto LABEL_31;
    UIWidget__set_width((UIWidget_o *)this, 1344, 0LL);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
    if ( !this )
      goto LABEL_31;
    UIWidget__set_height((UIWidget_o *)this, v25, 0LL);
    data = _4__this->fields.data;
    if ( !data || (Empty = AssetData__get_Path(data, 0LL)) == 0LL )
      Empty = string_TypeInfo->static_fields->Empty;
    _4__this->fields.setDataResult = !System_String__IsNullOrEmpty(Empty, 0LL);
    ActionExtensions__Call(v2->fields.callAction, 0LL);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backTexture;
    if ( !this
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL)) == 0LL )
    {
LABEL_31:
      sub_1BCB254(this, method);
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
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
  if ( !this )
    goto LABEL_31;
  v29.fields.r = 0.0;
  v29.fields.g = 0.0;
  v29.fields.b = 0.0;
  v29.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v29, 0LL);
  v10 = 1;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  GalleryFullScreenListViewItemDraw__DownloadMovieAsset(_4__this, v2->fields.assetPath, v11);
  v12 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)_4__this,
    Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__32_0__,
    0LL);
  v13 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v13, v12, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(p__2__current, (int32_t)v13, v15, v16);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v10;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  ;
}