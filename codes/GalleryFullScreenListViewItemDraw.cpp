void GalleryFullScreenListViewItemDraw___ctor(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.debugWaitLoadTime = 20.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GalleryFullScreenListViewItemDraw__Awake(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewItemDraw__DebugWaitTime(
        GalleryFullScreenListViewItemDraw_o *this,
        float waitTime,
        const MethodInfo *method)
{
  if ( this->fields.debugWaitLoadTime <= waitTime )
    *(_WORD *)&this->fields.setDataWait = 0;
}


void GalleryFullScreenListViewItemDraw__DownloadMovieAsset(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4CC236C & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__31_0__);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CC236C = 1;
  }
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v5,
    (Il2CppObject *)this,
    Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__31_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(assetPath, v5, 1, 0);
}


bool GalleryFullScreenListViewItemDraw__GetSetDataWait(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.setDataWait;
}


void GalleryFullScreenListViewItemDraw__Init(
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
  UnityEngine_GameObject_o *gameObject; // x24
  char v11; // w23
  bool v12; // w23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  System_Collections_IEnumerator_o *loadCoroutine; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_IEnumerator_o *playMovieCoroutine; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_IEnumerator_o *playSeekSequenceCoroutine; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct GalleryFullScreenListViewItem_o *v42; // x8
  int32_t v43; // w8
  System_Collections_IEnumerator_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_25;
  v4 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_25;
  CurrentGalleryType_k__BackingField = galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField;
  v6 = callAction;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
  v7 = v4->fields.galleryFullScreenListViewItem;
  if ( !v7 )
    goto LABEL_25;
  v8 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)v7->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_25;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0);
  if ( !v4->fields.backTexture )
    goto LABEL_25;
  v9 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.backTexture, 0);
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryType__IsCG(CurrentGalleryType_k__BackingField, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryType__IsMovie(CurrentGalleryType_k__BackingField, 0);
  if ( !v4->fields.backBgTexture )
    goto LABEL_25;
  v11 = (char)this;
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v4->fields.backBgTexture,
                                                  0);
  if ( !this )
    goto LABEL_25;
  v12 = v11 & 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
  GameObjectHelper__SetActiveSafely(v4->fields.touchPanel, v12, 0);
  this = (GalleryFullScreenListViewItemDraw_o *)v4->fields.busyAnim;
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
  loadCoroutine = v4->fields.loadCoroutine;
  if ( loadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, loadCoroutine, 0);
    v4->fields.loadCoroutine = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.loadCoroutine, 0, v16, v17, v18, v19, v20, v21);
  }
  playMovieCoroutine = v4->fields.playMovieCoroutine;
  if ( playMovieCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playMovieCoroutine, 0);
    v4->fields.playMovieCoroutine = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.playMovieCoroutine, 0, v23, v24, v25, v26, v27, v28);
  }
  playSeekSequenceCoroutine = v4->fields.playSeekSequenceCoroutine;
  if ( playSeekSequenceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playSeekSequenceCoroutine, 0);
    v4->fields.playSeekSequenceCoroutine = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.playSeekSequenceCoroutine, 0, v30, v31, v32, v33, v34, v35);
  }
  callAction = (System_Action_o *)v4->fields.seekSequenceCoroutine;
  if ( callAction )
  {
    UnityEngine_MonoBehaviour__StopCoroutine(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_Collections_IEnumerator_o *)callAction,
      0);
    v4->fields.seekSequenceCoroutine = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.seekSequenceCoroutine, 0, v36, v37, v38, v39, v40, v41);
  }
  v42 = v4->fields.galleryFullScreenListViewItem;
  if ( !v42 )
LABEL_25:
    sub_1C71608(this, callAction);
  v43 = v42->fields._CurrentGalleryType_k__BackingField;
  if ( v43 == 2 )
  {
    v44 = GalleryFullScreenListViewItemDraw__SetCGCoroutine(v4, (System_String_o *)v8, (System_String_o *)v9, v6, v14);
    goto LABEL_23;
  }
  if ( v43 == 1 )
  {
    v44 = GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(v4, (System_String_o *)v8, v6, v13);
LABEL_23:
    v4->fields.loadCoroutine = v44;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.loadCoroutine, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)v4, v4->fields.loadCoroutine, 0);
}


bool GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  if ( (byte_4CC2374 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1C713B0(&StringLiteral_9221/*"MyRoom/Gallery/SubstituteData"*/);
    byte_4CC2374 = 1;
  }
  if ( !textureName )
    sub_1C71608(this, textureName);
  return System_String__Contains(textureName, (System_String_o *)StringLiteral_9221/*"MyRoom/Gallery/SubstituteData"*/, 0);
}


bool GalleryFullScreenListViewItemDraw__IsSameName(
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
  if ( (byte_4CC236A & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC236A = 1;
  }
  galleryFullScreenListViewItem = v4->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem
    || (this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField) == 0
    || (this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                        (GalleryResourceEntity_o *)this,
                                                        0),
        (v6 = v4->fields.galleryFullScreenListViewItem) == 0)
    || (v7 = (System_String_o *)this,
        (this = (GalleryFullScreenListViewItemDraw_o *)v6->fields._GalleryResourceEntity_k__BackingField) == 0) )
  {
    sub_1C71608(this, targetName);
  }
  ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0) )
    v7 = System_String__Concat_64069988(v7, (System_String_o *)StringLiteral_1041/*"/"*/, ObjectName, 0);
  return System_String__op_Equality(v7, targetName, 0);
}


bool GalleryFullScreenListViewItemDraw__IsStandardSize(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct ExUITexture_o *backTexture; // x0
  struct ExUITexture_o *v4; // x8
  int v5; // w19

  backTexture = this->fields.backTexture;
  if ( !backTexture
    || (backTexture = (struct ExUITexture_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, const MethodInfo *))backTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                backTexture,
                                                backTexture->klass->vtable._26_get_mainTexture.method)) == 0
    || (backTexture = (struct ExUITexture_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, const MethodInfo *))backTexture->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                                backTexture,
                                                backTexture->klass->vtable._4_get_isAnchoredHorizontally.method),
        (v4 = this->fields.backTexture) == 0)
    || (v5 = (int)backTexture,
        (backTexture = (struct ExUITexture_o *)((struct ExUITexture_o *(__fastcall *)(struct ExUITexture_o *__return_ptr, struct ExUITexture_o *, const MethodInfo *))v4->klass->vtable._26_get_mainTexture.methodPtr)(
                                                 v4,
                                                 v4,
                                                 v4->klass->vtable._26_get_mainTexture.method)) == 0) )
  {
    sub_1C71608(backTexture, method);
  }
  return v5
       / ((int (__fastcall *)(struct ExUITexture_o *, const MethodInfo *))backTexture->klass->vtable._6_get_canBeAnchored.methodPtr)(
           backTexture,
           backTexture->klass->vtable._6_get_canBeAnchored.method) == 1;
}


void GalleryFullScreenListViewItemDraw__OpenPause(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  CRIMovieControl_o *movieControl; // x0
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v5; // x20

  if ( (byte_4CC2370 & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2370 = 1;
  }
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_17;
  CRIMovieControl__OnClickPauseButton(movieControl, 0);
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(moviePlayer, 0, 0) )
  {
    v5 = this->fields.moviePlayer;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CC21CB )
    {
      sub_1C713B0(&BgmManager_TypeInfo);
      byte_4CC21CB = 1;
    }
    movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
    }
    if ( v5 )
    {
      CRIMoviePlayer__SetVolume(v5, *((float *)movieControl[1].monitor + 9), 0);
      goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(movieControl, method);
  }
LABEL_15:
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_17;
  CRIMovieControl__Open(movieControl, 0);
}


void GalleryFullScreenListViewItemDraw__PlayMovie(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v2; // x19
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  GalleryFullScreenListViewItemDraw_o **p_moviePlayer; // x20
  UnityEngine_Object_o *moviePlayer; // x21
  Il2CppObject *moviePlayerPrefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct CRIMoviePlayer_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UITexture_o *backBgTexture; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  intptr_t busyAnim; // x1
  struct UITexture_o *v36; // x8
  struct UITexture_o *v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct UITexture_o *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct CRIMoviePlayer_o *v51; // x8
  struct ExUITexture_o *texture; // x1
  struct CRIMoviePlayer_o *v53; // x8
  GalleryFullScreenListViewItemDraw_o *v54; // x21
  struct GalleryFullScreenListViewItem_o *v55; // x8
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8
  CRIMoviePlayer_o *v57; // x21
  System_String_o *assetPath; // x22
  System_String_o *Path; // x23
  BgmManager_c *v60; // x0
  float masterVolume; // s8
  System_Action_o *v62; // x24
  CinemascopeSideFrame_o *v63; // x25
  System_Action_o *nonDeleteCallBack; // x26
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Collections_IEnumerator_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct CRIMovieControl_o *movieControl; // x8
  struct CRIMovieControl_o *v79; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CC236F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&CinemascopeSideFrame_TypeInfo);
    sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_0__);
    sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_1__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIButton___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_CRIMoviePlayer___);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC236F = 1;
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
    if ( UnityEngine_Object__op_Inequality(moviePlayer, 0, 0) )
    {
      this = *p_moviePlayer;
      if ( !*p_moviePlayer )
        goto LABEL_55;
      if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0) )
        return;
    }
    moviePlayerPrefab = (Il2CppObject *)v2->fields.moviePlayerPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object__52264420(
           moviePlayerPrefab,
           transform,
           (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_CRIMoviePlayer___);
    v2->fields.moviePlayer = (struct CRIMoviePlayer_o *)v8;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.moviePlayer, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.touchPanel;
    if ( this )
    {
      v15 = v2->fields.moviePlayer;
      this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIButton___);
      if ( v15 )
      {
        v15->fields.touch = (struct UIButton_o *)this;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->fields.touch, (int32_t)this, v16, v17, v18, v19, v20, v21);
        this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
        if ( this )
        {
          backBgTexture = v2->fields.backBgTexture;
          this[1].monitor = backBgTexture;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this[1].monitor,
            (int32_t)backBgTexture,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
          if ( this )
          {
            busyAnim = (intptr_t)v2->fields.busyAnim;
            this[1].fields.m_CachedPtr = busyAnim;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&this[1].fields, busyAnim, v29, v30, v31, v32, v33, v34);
            this = *p_moviePlayer;
            if ( *p_moviePlayer )
            {
              this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                if ( *p_moviePlayer )
                {
                  v36 = v2->fields.backBgTexture;
                  if ( v36 )
                  {
                    this = (GalleryFullScreenListViewItemDraw_o *)(*p_moviePlayer)->fields.seekSequenceCoroutine;
                    if ( this )
                    {
                      UIWidget__set_width((UIWidget_o *)this, v36->fields.mWidth, 0);
                      if ( *p_moviePlayer )
                      {
                        v37 = v2->fields.backBgTexture;
                        if ( v37 )
                        {
                          this = (GalleryFullScreenListViewItemDraw_o *)(*p_moviePlayer)->fields.seekSequenceCoroutine;
                          if ( this )
                          {
                            UIWidget__set_height((UIWidget_o *)this, v37->fields.mHeight, 0);
                            this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.movieControl;
                            if ( this )
                            {
                              v44 = (struct UITexture_o *)v2->fields.moviePlayer;
                              this->fields.backBgTexture = v44;
                              sub_1C71354(
                                (GrandQuestFolderBoardItem_o *)&this->fields.backBgTexture,
                                (int32_t)v44,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
                              v51 = v2->fields.moviePlayer;
                              if ( v51 )
                              {
                                this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.movieControl;
                                if ( this )
                                {
                                  texture = (struct ExUITexture_o *)v51->fields.texture;
                                  this->fields.backTexture = texture;
                                  sub_1C71354(
                                    (GrandQuestFolderBoardItem_o *)&this->fields.backTexture,
                                    (int32_t)texture,
                                    v45,
                                    v46,
                                    v47,
                                    v48,
                                    v49,
                                    v50);
                                  this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.movieControl;
                                  if ( this )
                                  {
                                    CRIMovieControl__Closed((CRIMovieControl_o *)this, 0);
                                    GameObjectHelper__SetActiveSafely(v2->fields.movieControlPanel, 1, 0);
                                    v53 = v2->fields.moviePlayer;
                                    if ( v53 )
                                    {
                                      this = (GalleryFullScreenListViewItemDraw_o *)v53->fields.texture;
                                      if ( this )
                                      {
                                        this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this,
                                                                                        0);
                                        if ( v2->fields.backBgTexture )
                                        {
                                          v54 = this;
                                          this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)v2->fields.backBgTexture,
                                                                                          0);
                                          if ( this )
                                          {
                                            localScale = UnityEngine_Transform__get_localScale(
                                                           (UnityEngine_Transform_o *)this,
                                                           0);
                                            GameObjectExtensions__SetLocalScale(
                                              (UnityEngine_GameObject_o *)v54,
                                              localScale,
                                              0);
                                            v55 = v2->fields.galleryFullScreenListViewItem;
                                            if ( v55 )
                                            {
                                              GalleryResourceEntity_k__BackingField = v55->fields._GalleryResourceEntity_k__BackingField;
                                              if ( GalleryResourceEntity_k__BackingField )
                                              {
                                                this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.data;
                                                if ( this )
                                                {
                                                  v57 = v2->fields.moviePlayer;
                                                  assetPath = GalleryResourceEntity_k__BackingField->fields.assetPath;
                                                  Path = AssetData__get_Path((AssetData_o *)this, 0);
                                                  if ( !BgmManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                                                  if ( !byte_4CC21CB )
                                                  {
                                                    sub_1C713B0(&BgmManager_TypeInfo);
                                                    byte_4CC21CB = 1;
                                                  }
                                                  v60 = BgmManager_TypeInfo;
                                                  if ( !BgmManager_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                                                    v60 = BgmManager_TypeInfo;
                                                  }
                                                  masterVolume = v60->static_fields->masterVolume;
                                                  v62 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                                                  System_Action___ctor(
                                                    v62,
                                                    (Il2CppObject *)v2,
                                                    Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_0__,
                                                    0);
                                                  v63 = (CinemascopeSideFrame_o *)sub_1C715FC(CinemascopeSideFrame_TypeInfo);
                                                  CinemascopeSideFrame___ctor(v63, 0, 1, 0);
                                                  nonDeleteCallBack = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                                                  System_Action___ctor(
                                                    nonDeleteCallBack,
                                                    (Il2CppObject *)v2,
                                                    Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_1__,
                                                    0);
                                                  if ( v57 )
                                                  {
                                                    CRIMoviePlayer__Initialize(
                                                      v57,
                                                      assetPath,
                                                      Path,
                                                      masterVolume,
                                                      1,
                                                      0,
                                                      v62,
                                                      1,
                                                      v63,
                                                      0,
                                                      0,
                                                      1,
                                                      nonDeleteCallBack,
                                                      0);
                                                    this = *p_moviePlayer;
                                                    if ( *p_moviePlayer )
                                                    {
                                                      CRIMoviePlayer__StopAndDispBg((CRIMoviePlayer_o *)this, 0);
                                                      method = (const MethodInfo *)v2->fields.playSeekSequenceCoroutine;
                                                      if ( method )
                                                      {
                                                        UnityEngine_MonoBehaviour__StopCoroutine(
                                                          (UnityEngine_MonoBehaviour_o *)v2,
                                                          (System_Collections_IEnumerator_o *)method,
                                                          0);
                                                        v2->fields.playSeekSequenceCoroutine = 0;
                                                        sub_1C71354(
                                                          (GrandQuestFolderBoardItem_o *)&v2->fields.playSeekSequenceCoroutine,
                                                          0,
                                                          v65,
                                                          v66,
                                                          v67,
                                                          v68,
                                                          v69,
                                                          v70);
                                                      }
                                                      this = *p_moviePlayer;
                                                      if ( *p_moviePlayer )
                                                      {
                                                        v71 = CRIMoviePlayer__PlaySeekSequence(
                                                                (CRIMoviePlayer_o *)this,
                                                                0,
                                                                0);
                                                        v2->fields.playSeekSequenceCoroutine = v71;
                                                        sub_1C71354(
                                                          (GrandQuestFolderBoardItem_o *)&v2->fields.playSeekSequenceCoroutine,
                                                          (int32_t)v71,
                                                          v72,
                                                          v73,
                                                          v74,
                                                          v75,
                                                          v76,
                                                          v77);
                                                        this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)v2, v2->fields.playSeekSequenceCoroutine, 0);
                                                        movieControl = v2->fields.movieControl;
                                                        if ( movieControl )
                                                        {
                                                          this = (GalleryFullScreenListViewItemDraw_o *)movieControl->fields.playButton;
                                                          if ( this )
                                                          {
                                                            this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                                                            if ( this )
                                                            {
                                                              UnityEngine_GameObject__SetActive(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0,
                                                                0);
                                                              v79 = v2->fields.movieControl;
                                                              if ( v79 )
                                                              {
                                                                this = (GalleryFullScreenListViewItemDraw_o *)v79->fields.pauseButton;
                                                                if ( this )
                                                                {
                                                                  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                                                                  if ( this )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(
                                                                      (UnityEngine_GameObject_o *)this,
                                                                      1,
                                                                      0);
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
    sub_1C71608(this, method);
  }
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CC236E & 1) == 0 )
  {
    sub_1C713B0(&GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_TypeInfo);
    byte_4CC236E = 1;
  }
  v7 = sub_1C715FC(GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = enableControlCallBack;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)enableControlCallBack, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = endFullScreenAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)endFullScreenAction, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewItemDraw__SetCGCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetPath,
        System_String_o *objName,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CC2368 & 1) == 0 )
  {
    sub_1C713B0(&GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_TypeInfo);
    byte_4CC2368 = 1;
  }
  v9 = sub_1C715FC(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = assetPath;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)assetPath, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v9 + 48) = objName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)objName, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v9 + 56) = callAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)callAction, v28, v29, v30, v31, v32, v33);
  return (System_Collections_IEnumerator_o *)v9;
}


void GalleryFullScreenListViewItemDraw__SetData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct AssetData_o *AssetStorage; // x0
  struct AssetData_o **p_data; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC236B & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC236B = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(assetName, 0);
  this->fields.data = AssetStorage;
  p_data = &this->fields.data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_data, (int32_t)AssetStorage, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_data + 16) = *p_data == 0;
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewItemDraw__SetDataCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *imgName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CC2369 & 1) == 0 )
  {
    sub_1C713B0(&GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_TypeInfo);
    byte_4CC2369 = 1;
  }
  v5 = sub_1C715FC(GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = imgName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)imgName, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void GalleryFullScreenListViewItemDraw__SetItem(
        GalleryFullScreenListViewItemDraw_o *this,
        GalleryFullScreenListViewItem_o *item,
        int32_t mode,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryFullScreenListViewItem_o **p_galleryFullScreenListViewItem; // x22
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v14; // x2

  if ( item && mode )
  {
    p_galleryFullScreenListViewItem = &this->fields.galleryFullScreenListViewItem;
    galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
    if ( galleryFullScreenListViewItem && galleryFullScreenListViewItem->fields.index != item->fields.index )
    {
      backTexture = this->fields.backTexture;
      if ( !backTexture )
        sub_1C71608(0, item);
      ExUITexture__ClearImage(backTexture, 0);
    }
    this->fields.galleryFullScreenListViewItem = item;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)p_galleryFullScreenListViewItem,
      (int32_t)item,
      mode,
      (int32_t)callAction,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    GalleryFullScreenListViewItemDraw__Init(this, callAction, v14);
  }
}


void GalleryFullScreenListViewItemDraw__SetMovieCallBack(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CRIMovieControl_o *movieControl; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  movieControl = this->fields.movieControl;
  if ( !movieControl
    || (movieControl->fields.enableControlCallBack = enableControlCallBack,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&movieControl->fields.enableControlCallBack,
          (int32_t)enableControlCallBack,
          (int32_t)endFullScreenAction,
          (int32_t)method,
          v4,
          v5,
          v6,
          v7),
        (movieControl = this->fields.movieControl) == 0) )
  {
    sub_1C71608(movieControl, enableControlCallBack);
  }
  movieControl->fields.endFullScreenAction = endFullScreenAction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&movieControl->fields.endFullScreenAction,
    (int32_t)endFullScreenAction,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetPath,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CC236D & 1) == 0 )
  {
    sub_1C713B0(&GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_TypeInfo);
    byte_4CC236D = 1;
  }
  v7 = sub_1C715FC(GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = assetPath;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)assetPath, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)callAction, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void GalleryFullScreenListViewItemDraw__SetMovieLocalScale(
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
    sub_1C71608(0, method);
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(backBgTexture, 0);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalScale(gameObject, v8, 0);
}


void GalleryFullScreenListViewItemDraw__SetScale(
        GalleryFullScreenListViewItemDraw_o *this,
        int32_t *width,
        int32_t *height,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v6; // x21
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryFullScreenListViewItem_o *v8; // x8
  System_String_o *AssetPath; // x21
  bool IsFullScreenMovie; // w0
  int32_t mHeight; // w8
  UnityEngine_Object_o *v12; // x22
  struct GalleryFullScreenListViewItem_o *v13; // x8
  struct GalleryFullScreenListViewItem_o *v14; // x8
  System_String_o *v15; // x22
  System_String_o *ObjectName; // x23
  const MethodInfo *v17; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v19; // x2
  struct ExUITexture_o *backTexture; // x8

  v6 = this;
  if ( (byte_4CC2372 & 1) == 0 )
  {
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC2372 = 1;
  }
  galleryFullScreenListViewItem = v6->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_35;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryType__IsMovie(
                                                  galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField,
                                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v6->fields.galleryFullScreenListViewItem;
    if ( v8 )
    {
      this = (GalleryFullScreenListViewItemDraw_o *)v8->fields._GalleryResourceEntity_k__BackingField;
      if ( this )
      {
        AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        IsFullScreenMovie = FSUtility__IsFullScreenMovie(AssetPath, 0);
        *width = 1344;
        if ( IsFullScreenMovie )
          mHeight = 576;
        else
          mHeight = 756;
        goto LABEL_12;
      }
    }
    goto LABEL_35;
  }
  this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
  if ( !this )
    goto LABEL_35;
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                  this,
                                  this->klass[1].vtable._3_ToString.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    *height = 1;
    *width = 1;
  }
  else
  {
    v13 = v6->fields.galleryFullScreenListViewItem;
    if ( !v13 )
      goto LABEL_35;
    this = (GalleryFullScreenListViewItemDraw_o *)v13->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_35;
    this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                    (GalleryResourceEntity_o *)this,
                                                    0);
    v14 = v6->fields.galleryFullScreenListViewItem;
    if ( !v14 )
      goto LABEL_35;
    v15 = (System_String_o *)this;
    this = (GalleryFullScreenListViewItemDraw_o *)v14->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_35;
    ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0);
    if ( !System_String__IsNullOrEmpty(ObjectName, 0) )
      v15 = System_String__Concat_64069988(v15, (System_String_o *)StringLiteral_1041/*"/"*/, ObjectName, 0);
    IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(v6, v17);
    if ( IsStandardSize
      && !GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
            (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
            v15,
            v19) )
    {
      this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
      if ( this )
      {
        UITexture__set_uvRect((UITexture_o *)this, v6->fields.cgRect, 0);
        backTexture = v6->fields.backTexture;
        if ( backTexture )
        {
          *width = backTexture->fields.mWidth;
          mHeight = backTexture->fields.mHeight;
LABEL_12:
          *height = mHeight;
          return;
        }
      }
LABEL_35:
      sub_1C71608(this, width);
    }
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_35;
    UITexture__set_uvRect((UITexture_o *)this, v6->fields.substituteDataRect, 0);
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_35;
    this = (GalleryFullScreenListViewItemDraw_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                    this,
                                                    this->klass[1].vtable._3_ToString.methodPtr);
    if ( !this )
      goto LABEL_35;
    *width = ((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, void *))this->klass[1]._1.image)(
               this,
               this->klass[1]._1.gc_desc);
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_35;
    this = (GalleryFullScreenListViewItemDraw_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                    this,
                                                    this->klass[1].vtable._3_ToString.methodPtr);
    if ( !this )
      goto LABEL_35;
    *height = ((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                this,
                *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  }
}


void GalleryFullScreenListViewItemDraw__SetTextureScale(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  UIWidget_o *backTexture; // x0
  int32_t height[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)height = 0;
  GalleryFullScreenListViewItemDraw__SetScale(this, &height[1], height, v2);
  backTexture = (UIWidget_o *)this->fields.backTexture;
  if ( !backTexture
    || (UIWidget__set_width(backTexture, height[1], 0), (backTexture = (UIWidget_o *)this->fields.backTexture) == 0) )
  {
    sub_1C71608(backTexture, v4);
  }
  UIWidget__set_height(backTexture, height[0], 0);
}


void GalleryFullScreenListViewItemDraw__SetUpTextureSize(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  struct ExUITexture_o *backTexture; // x0
  UnityEngine_Object_o *v6; // x21
  const MethodInfo *v7; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v9; // x2
  UIWidget_o *v10; // x8

  v3 = textureName;
  if ( (byte_4CC2373 & 1) == 0 )
  {
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2373 = 1;
  }
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    goto LABEL_22;
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct ExUITexture_o *, const MethodInfo *, const MethodInfo *))backTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                 backTexture,
                                 backTexture->klass->vtable._26_get_mainTexture.method,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(this, v7);
    if ( IsStandardSize
      && !GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
            (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
            v3,
            v9) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      backTexture = (struct ExUITexture_o *)FSUtility__IsFullScreenBack(v3, 0);
      if ( ((unsigned __int8)backTexture & 1) != 0 )
      {
        v10 = (UIWidget_o *)this->fields.backTexture;
      }
      else
      {
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        backTexture = (struct ExUITexture_o *)FSUtility__IsFullScreenImage(v3, 0);
        v10 = (UIWidget_o *)this->fields.backTexture;
        if ( ((unsigned __int8)backTexture & 1) == 0 )
        {
          textureName = (System_String_o *)(byte_284 + 112);
          if ( !v10 )
            goto LABEL_22;
LABEL_20:
          UIWidget__set_height(v10, (int32_t)textureName, 0);
          backTexture = this->fields.backTexture;
          if ( backTexture )
          {
            UIWidget__set_width((UIWidget_o *)backTexture, 1344, 0);
            return;
          }
LABEL_22:
          sub_1C71608(backTexture, textureName);
        }
      }
      textureName = (System_String_o *)&qword_240;
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_20;
    }
  }
}


void GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  const MethodInfo *v8; // x3
  struct System_Collections_IEnumerator_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    sub_1C71608(this, enableControlCallBack);
  if ( GalleryType__IsMovie(galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField, 0)
    && !this->fields.playMovieCoroutine )
  {
    v9 = GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(this, enableControlCallBack, endFullScreenAction, v8);
    this->fields.playMovieCoroutine = v9;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.playMovieCoroutine,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800(
      (UnityEngine_MonoBehaviour_o *)this,
      this->fields.playMovieCoroutine,
      0);
  }
}


void GalleryFullScreenListViewItemDraw__StopMovie(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_moviePlayer; // x19
  UnityEngine_Object_o *moviePlayer; // x21
  __int64 v5; // x1
  struct CRIMovieControl_o *klass; // x0
  UnityEngine_Object_o *movieControl; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *movieControlPanel; // x21
  UnityEngine_Object_o *gameObject; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CC2371 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2371 = 1;
  }
  p_moviePlayer = (GrandQuestFolderBoardItem_o *)&this->fields.moviePlayer;
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(moviePlayer, 0, 0) )
  {
    klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
    if ( p_moviePlayer->klass )
    {
      if ( !klass->fields.panel || !CRIMoviePlayer__IsStoppable((CRIMoviePlayer_o *)klass, 0) )
        return;
      klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
      if ( p_moviePlayer->klass )
      {
        CRIMoviePlayer__MovieStop((CRIMoviePlayer_o *)klass, 0);
        movieControl = (UnityEngine_Object_o *)this->fields.movieControl;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(movieControl, 0, 0) )
        {
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          CRIMovieControl__Close(klass, 0);
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          klass->fields.player = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&klass->fields.player, 0, v8, v9, v10, v11, v12, v13);
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          klass->fields.texture = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&klass->fields.texture, 0, v14, v15, v16, v17, v18, v19);
        }
        movieControlPanel = (UnityEngine_Object_o *)this->fields.movieControlPanel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(movieControlPanel, 0, 0) )
          GameObjectHelper__SetActiveSafely(this->fields.movieControlPanel, 0, 0);
        klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
        if ( p_moviePlayer->klass )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)klass,
                                                 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71724608(gameObject, 0);
          p_moviePlayer->klass = 0;
          sub_1C71354(p_moviePlayer, 0, v22, v23, v24, v25, v26, v27);
          return;
        }
      }
    }
LABEL_26:
    sub_1C71608(klass, v5);
  }
}


void GalleryFullScreenListViewItemDraw___DownloadMovieAsset_b__31_0(
        GalleryFullScreenListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  this->fields.setDataWait = 0;
}


bool GalleryFullScreenListViewItemDraw___PlayMovieCoroutine_b__34_0(
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
    || (this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField) == 0 )
  {
    sub_1C71608(this, method);
  }
  name = data->fields.name;
  AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
  return System_String__op_Inequality(name, AssetPath, 0);
}


void GalleryFullScreenListViewItemDraw___PlayMovie_b__35_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *v2; // x19
  struct CRIMoviePlayer_o *moviePlayer; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_4CC2375 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw_PlayMovie__);
    byte_4CC2375 = 1;
  }
  moviePlayer = v2->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_11;
  this = (GalleryFullScreenListViewItemDraw_o *)moviePlayer->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_11;
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 7 )
    return;
  this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
  if ( !this
    || (CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0),
        (galleryFullScreenListViewItem = v2->fields.galleryFullScreenListViewItem) == 0) )
  {
LABEL_11:
    sub_1C71608(this, method);
  }
  if ( galleryFullScreenListViewItem->fields.isCenterItem )
  {
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)v2, Method_GalleryFullScreenListViewItemDraw_PlayMovie__, 0);
    GalleryFullScreenListViewItemDraw__Init(v2, v5, v6);
  }
}


void GalleryFullScreenListViewItemDraw___PlayMovie_b__35_1(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *moviePlayer; // x20
  struct CRIMoviePlayer_o *v6; // x8
  struct CRIMoviePlayer_o *v7; // x8
  struct CRIMoviePlayer_o *v8; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct CRIMoviePlayer_o *v10; // x8
  System_Collections_IEnumerator_o *seekSequenceCoroutine; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  CRIMoviePlayer_o *v18; // x21
  System_Action_o *v19; // x22
  struct System_Collections_IEnumerator_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CC2376 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw_OpenPause__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TouchEffectManager_TypeInfo);
    byte_4CC2376 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0);
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (CommonUI_o *)UnityEngine_Object__op_Equality(moviePlayer, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v6 = this->fields.moviePlayer;
    if ( !v6 )
      goto LABEL_30;
    Instance = (CommonUI_o *)v6->fields._player_k__BackingField;
    if ( !Instance )
      goto LABEL_30;
    Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0);
    if ( (_DWORD)Instance != 7 )
    {
      v7 = this->fields.moviePlayer;
      if ( !v7 )
        goto LABEL_30;
      Instance = (CommonUI_o *)v7->fields._player_k__BackingField;
      if ( !Instance )
        goto LABEL_30;
      Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0);
      if ( (_DWORD)Instance == 6 )
      {
        v8 = this->fields.moviePlayer;
        if ( !v8 )
          goto LABEL_30;
        Instance = (CommonUI_o *)v8->fields._player_k__BackingField;
        if ( !Instance )
          goto LABEL_30;
        Instance = (CommonUI_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)Instance, 0);
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
              CRIMoviePlayer__SetVolume((CRIMoviePlayer_o *)Instance, 0.0, 0);
              v10 = this->fields.moviePlayer;
              if ( v10 )
              {
                Instance = (CommonUI_o *)v10->fields._player_k__BackingField;
                if ( Instance )
                {
                  CriMana_Player__Pause((CriMana_Player_o *)Instance, 1, 0);
                  seekSequenceCoroutine = this->fields.seekSequenceCoroutine;
                  if ( seekSequenceCoroutine )
                  {
                    UnityEngine_MonoBehaviour__StopCoroutine(
                      (UnityEngine_MonoBehaviour_o *)this,
                      seekSequenceCoroutine,
                      0);
                    this->fields.seekSequenceCoroutine = 0;
                    sub_1C71354(
                      (GrandQuestFolderBoardItem_o *)&this->fields.seekSequenceCoroutine,
                      0,
                      v12,
                      v13,
                      v14,
                      v15,
                      v16,
                      v17);
                  }
                  v18 = this->fields.moviePlayer;
                  v19 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v19,
                    (Il2CppObject *)this,
                    Method_GalleryFullScreenListViewItemDraw_OpenPause__,
                    0);
                  if ( v18 )
                  {
                    v20 = CRIMoviePlayer__SeekSequence(v18, 0, v19, 0);
                    this->fields.seekSequenceCoroutine = v20;
                    sub_1C71354(
                      (GrandQuestFolderBoardItem_o *)&this->fields.seekSequenceCoroutine,
                      (int32_t)v20,
                      v21,
                      v22,
                      v23,
                      v24,
                      v25,
                      v26);
                    UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                      (UnityEngine_MonoBehaviour_o *)this,
                      this->fields.seekSequenceCoroutine,
                      0);
                    return;
                  }
                }
              }
            }
LABEL_30:
            sub_1C71608(Instance, v4);
          }
        }
      }
    }
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0);
}


bool GalleryFullScreenListViewItemDraw___SetMovieDataCoroutine_b__32_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.setDataWait;
}


void GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34___ctor(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__MoveNext(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *v3; // x19
  int32_t _1__state; // w8
  GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool result; // w0
  const MethodInfo *v15; // x1

  v3 = this;
  if ( (byte_4CC2377 & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_bool___);
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__34_0__);
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)sub_1C713B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CC2377 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C71608(this, method);
    GalleryFullScreenListViewItemDraw__SetMovieCallBack(
      _4__this,
      v3->fields.enableControlCallBack,
      v3->fields.endFullScreenAction,
      v2);
    GalleryFullScreenListViewItemDraw__PlayMovie(_4__this, v15);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)v3->fields.enableControlCallBack,
      0,
      (const MethodInfo_3095C18 *)Method_ActionExtensions_Call_bool___);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v6,
      (Il2CppObject *)_4__this,
      Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__34_0__,
      0);
    v7 = (UnityEngine_WaitWhile_o *)sub_1C715FC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    v3->fields.__2__current = (Il2CppObject *)v7;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    result = 1;
    v3->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26___ctor(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__MoveNext(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *v8; // x20
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x19
  struct System_String_o *assetPath; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_o *p_objName; // x0
  int32_t v19; // w1
  AssetData_o *data; // x0
  struct ExUITexture_o *backTexture; // x8
  UnityEngine_Object_o *v22; // x21
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4CC2378 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC2378 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    data = _4__this->fields.data;
    if ( data )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)AssetData__GetObject_object__51560868(
                                                                            data,
                                                                            v8->fields.objName,
                                                                            (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
      backTexture = _4__this->fields.backTexture;
      if ( !backTexture )
        goto LABEL_25;
      v22 = (UnityEngine_Object_o *)this;
      ((void (__fastcall *)(struct ExUITexture_o *__return_ptr, struct ExUITexture_o *, GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *, const MethodInfo *))backTexture->klass->vtable._27_set_mainTexture.methodPtr)(
        backTexture,
        _4__this->fields.backTexture,
        this,
        backTexture->klass->vtable._27_set_mainTexture.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this->fields.setDataResult = UnityEngine_Object__op_Inequality(v22, 0, 0);
      GalleryFullScreenListViewItemDraw__SetUpTextureSize(_4__this, v8->fields._imgName_5__2, v23);
      GalleryFullScreenListViewItemDraw__SetTextureScale(_4__this, v24);
    }
    else
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)_4__this->fields.backTexture;
      if ( !this )
        goto LABEL_25;
      (*(void (__fastcall **)(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *, _QWORD, _QWORD))&this->klass[1]._2.field_count)(
        this,
        0,
        *(_QWORD *)&this->klass[1]._2.interfaces_count);
    }
    ActionExtensions__Call(v8->fields.callAction, 0);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)_4__this->fields.backTexture;
    if ( this )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)_4__this->fields.backBgTexture;
        if ( this )
        {
          this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            GameObjectHelper__SetActiveSafely(_4__this->fields.movieControlPanel, 0, 0);
            GameObjectHelper__SetActiveSafely(_4__this->fields.touchPanel, 0, 0);
            return 0;
          }
        }
      }
    }
LABEL_25:
    sub_1C71608(this, method);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  assetPath = v8->fields.assetPath;
  v8->fields._imgName_5__2 = assetPath;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields._imgName_5__2, (int32_t)assetPath, v2, v3, v4, v5, v6, v7);
  if ( System_String__IsNullOrEmpty(v8->fields.objName, 0) )
  {
    v8->fields.objName = 0;
    p_objName = (GrandQuestFolderBoardItem_o *)&v8->fields.objName;
    v19 = 0;
  }
  else
  {
    v25 = System_String__Concat_64069988(
            v8->fields.assetPath,
            (System_String_o *)StringLiteral_1041/*"/"*/,
            v8->fields.objName,
            0);
    v19 = (int)v25;
    v8->fields._imgName_5__2 = v25;
    p_objName = (GrandQuestFolderBoardItem_o *)&v8->fields._imgName_5__2;
  }
  sub_1C71354(p_objName, v19, v12, v13, v14, v15, v16, v17);
  v27 = GalleryFullScreenListViewItemDraw__SetDataCoroutine(_4__this, v8->fields._imgName_5__2, v26);
  v8->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C71354(p__2__current, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27___ctor(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__MoveNext(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  const MethodInfo *v6; // x2
  float waitTime_5__2; // s8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
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
    sub_1C71608(this, method);
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
    this->fields._waitTime_5__2 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0);
    if ( _4__this->fields.setDataWait )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v8, v9, v10, v11, v12, v13);
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


Il2CppObject *GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_o *this,
        const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32___ctor(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__MoveNext(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *v2; // x20
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x19
  bool v5; // w21
  const MethodInfo *v6; // x2
  System_Func_bool__o *v7; // x22
  UnityEngine_WaitWhile_o *v8; // x19
  GrandQuestFolderBoardItem_o *p__2__current; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *assetPath; // x21
  const MethodInfo *v17; // x2
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_String_o *v26; // x21
  bool IsFullScreenMovie; // w8
  int32_t v28; // w21
  AssetData_o *data; // x0
  System_String_o *Empty; // x0
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CC2379 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__32_0__);
    sub_1C713B0(&string_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)sub_1C713B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CC2379 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    assetPath = v2->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)AssetManager__getAsset(0, assetPath, 0);
    if ( !_4__this )
      goto LABEL_33;
    v18 = this;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)GalleryFullScreenListViewItemDraw__IsSameName(
                                                                                 _4__this,
                                                                                 v2->fields.assetPath,
                                                                                 v17);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this->fields.data = (struct AssetData_o *)v18;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&_4__this->fields.data, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    }
    galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_33;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_33;
    v26 = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(v26, 0);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
    v28 = IsFullScreenMovie ? 576 : 756;
    if ( !this )
      goto LABEL_33;
    UIWidget__set_width((UIWidget_o *)this, 1344, 0);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
    if ( !this )
      goto LABEL_33;
    UIWidget__set_height((UIWidget_o *)this, v28, 0);
    data = _4__this->fields.data;
    if ( !data || (Empty = AssetData__get_Path(data, 0)) == 0 )
      Empty = string_TypeInfo->static_fields->Empty;
    _4__this->fields.setDataResult = !System_String__IsNullOrEmpty(Empty, 0);
    ActionExtensions__Call(v2->fields.callAction, 0);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backTexture;
    if ( !this
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
          (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture) == 0)
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0)) == 0 )
    {
LABEL_33:
      sub_1C71608(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    GameObjectHelper__SetActiveSafely(_4__this->fields.movieControlPanel, 0, 0);
    GameObjectHelper__SetActiveSafely(_4__this->fields.touchPanel, 0, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_33;
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
  if ( !this )
    goto LABEL_33;
  v32.fields.r = 0.0;
  v32.fields.g = 0.0;
  v32.fields.b = 0.0;
  v32.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v32, 0);
  v5 = 1;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  GalleryFullScreenListViewItemDraw__DownloadMovieAsset(_4__this, v2->fields.assetPath, v6);
  v7 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v7,
    (Il2CppObject *)_4__this,
    Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__32_0__,
    0);
  v8 = (UnityEngine_WaitWhile_o *)sub_1C715FC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v8, v7, 0);
  v2->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C71354(p__2__current, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return v5;
}


Il2CppObject *GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *this,
        const MethodInfo *method)
{
  ;
}