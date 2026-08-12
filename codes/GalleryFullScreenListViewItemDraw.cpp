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
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_596B52E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__31_0__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_596B52E = 1;
  }
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v5,
    (Il2CppObject *)this,
    Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__31_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
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
  System_Action_o *v5; // x20
  int32_t CurrentGalleryType_k__BackingField; // w24
  struct GalleryFullScreenListViewItem_o *v7; // x8
  GalleryFullScreenListViewItemDraw_o *v8; // x21
  GalleryFullScreenListViewItemDraw_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  System_Collections_IEnumerator_o *loadCoroutine; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_IEnumerator_o *playMovieCoroutine; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_IEnumerator_o *playSeekSequenceCoroutine; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct GalleryFullScreenListViewItem_o *v39; // x8
  int32_t v40; // w8
  System_Collections_IEnumerator_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_25;
  v4 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_25;
  v5 = callAction;
  CurrentGalleryType_k__BackingField = galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField;
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
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v4->fields.backTexture,
                                                  0);
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 2, 0);
  this = (GalleryFullScreenListViewItemDraw_o *)v4->fields.backBgTexture;
  if ( !this )
    goto LABEL_25;
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 1, 0);
  GameObjectHelper__SetActiveSafely(v4->fields.touchPanel, CurrentGalleryType_k__BackingField == 1, 0);
  this = (GalleryFullScreenListViewItemDraw_o *)v4->fields.busyAnim;
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 1, 0);
  loadCoroutine = v4->fields.loadCoroutine;
  if ( loadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, loadCoroutine, 0);
    v4->fields.loadCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.loadCoroutine, 0, v13, v14, v15, v16, v17, v18);
  }
  playMovieCoroutine = v4->fields.playMovieCoroutine;
  if ( playMovieCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playMovieCoroutine, 0);
    v4->fields.playMovieCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.playMovieCoroutine, 0, v20, v21, v22, v23, v24, v25);
  }
  playSeekSequenceCoroutine = v4->fields.playSeekSequenceCoroutine;
  if ( playSeekSequenceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playSeekSequenceCoroutine, 0);
    v4->fields.playSeekSequenceCoroutine = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.playSeekSequenceCoroutine,
      0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  callAction = (System_Action_o *)v4->fields.seekSequenceCoroutine;
  if ( callAction )
  {
    UnityEngine_MonoBehaviour__StopCoroutine(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_Collections_IEnumerator_o *)callAction,
      0);
    v4->fields.seekSequenceCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.seekSequenceCoroutine, 0, v33, v34, v35, v36, v37, v38);
  }
  v39 = v4->fields.galleryFullScreenListViewItem;
  if ( !v39 )
LABEL_25:
    sub_2213CDC(this, callAction);
  v40 = v39->fields._CurrentGalleryType_k__BackingField;
  if ( v40 == 2 )
  {
    v41 = GalleryFullScreenListViewItemDraw__SetCGCoroutine(v4, (System_String_o *)v8, (System_String_o *)v9, v5, v11);
    goto LABEL_23;
  }
  if ( v40 == 1 )
  {
    v41 = GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(v4, (System_String_o *)v8, v5, v10);
LABEL_23:
    v4->fields.loadCoroutine = v41;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.loadCoroutine,
      (int32_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v4, v4->fields.loadCoroutine, 0);
}


bool GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  if ( (byte_596B536 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_2213A60(&StringLiteral_9604/*"MyRoom/Gallery/SubstituteData"*/);
    byte_596B536 = 1;
  }
  if ( !textureName )
    sub_2213CDC(this, textureName);
  return System_String__Contains(textureName, (System_String_o *)StringLiteral_9604/*"MyRoom/Gallery/SubstituteData"*/, 0);
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
  if ( (byte_596B52C & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596B52C = 1;
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
    sub_2213CDC(this, targetName);
  }
  ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0) )
    v7 = System_String__Concat_75694928(v7, (System_String_o *)StringLiteral_1123/*"/"*/, ObjectName, 0);
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
    sub_2213CDC(backTexture, method);
  }
  return v5
       / ((int (__fastcall *)(struct ExUITexture_o *, const MethodInfo *))backTexture->klass->vtable._6_get_canBeAnchored.methodPtr)(
           backTexture,
           backTexture->klass->vtable._6_get_canBeAnchored.method) == 1;
}


void GalleryFullScreenListViewItemDraw__OpenPause(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  CRIMovieControl_o *movieControl; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *moviePlayer; // x20
  __int64 v7; // x2
  CRIMoviePlayer_o *v8; // x20

  if ( (byte_596B532 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B532 = 1;
  }
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_17;
  CRIMovieControl__OnClickPauseButton(movieControl, 0);
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(moviePlayer, 0, 0) )
  {
    v8 = this->fields.moviePlayer;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v7);
    if ( !byte_596B2FF )
    {
      sub_2213A60(&BgmManager_TypeInfo);
      byte_596B2FF = 1;
    }
    movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v7);
      movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
    }
    if ( v8 )
    {
      CRIMoviePlayer__SetVolume(v8, *((float *)&movieControl[1].klass->_1.byval_arg.data + 1), 0);
      goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(movieControl, method);
  }
LABEL_15:
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_17;
  CRIMovieControl__Open(movieControl, 0);
}


void GalleryFullScreenListViewItemDraw__PlayMovie(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  GalleryFullScreenListViewItemDraw_o *v3; // x19
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  GalleryFullScreenListViewItemDraw_o **p_moviePlayer; // x20
  UnityEngine_Object_o *moviePlayer; // x21
  struct GalleryFullScreenListViewItem_o *v7; // x8
  struct GalleryFullScreenListViewItem_o *v8; // x8
  GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8
  MovieFileMerge_o *v10; // x21
  System_String_o *outputMergeFile; // x22
  GalleryFullScreenListViewItemDraw_o *v12; // x21
  struct GalleryFullScreenListViewItem_o *v13; // x8
  Il2CppObject *moviePlayerPrefab; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct CRIMoviePlayer_o *v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct UITexture_o *backBgTexture; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct UnityEngine_GameObject_o *busyAnim; // x1
  struct UITexture_o *v46; // x8
  struct UITexture_o *v47; // x8
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct UITexture_o *v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct CRIMoviePlayer_o *v61; // x8
  struct ExUITexture_o *texture; // x1
  struct CRIMoviePlayer_o *v63; // x8
  GalleryFullScreenListViewItemDraw_o *v64; // x23
  __int64 v65; // x1
  __int64 v66; // x2
  GalleryFullScreenListViewItemDraw_o *v67; // x23
  BgmManager_c *v68; // x0
  float masterVolume; // s8
  System_Action_o *v70; // x24
  CinemascopeSideFrame_o *v71; // x25
  System_Action_o *nonDeleteCallBack; // x26
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_Collections_IEnumerator_o *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct CRIMovieControl_o *movieControl; // x8
  struct CRIMovieControl_o *v87; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_596B531 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&CinemascopeSideFrame_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_0__);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_1__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIButton___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_CRIMoviePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B531 = 1;
  }
  galleryFullScreenListViewItem = v3->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_64;
  if ( galleryFullScreenListViewItem->fields.isCenterItem )
  {
    p_moviePlayer = (GalleryFullScreenListViewItemDraw_o **)&v3->fields.moviePlayer;
    moviePlayer = (UnityEngine_Object_o *)v3->fields.moviePlayer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_10;
    this = *p_moviePlayer;
    if ( !*p_moviePlayer )
      goto LABEL_64;
    this = (GalleryFullScreenListViewItemDraw_o *)CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_10:
      v7 = v3->fields.galleryFullScreenListViewItem;
      if ( !v7 )
        goto LABEL_64;
      this = (GalleryFullScreenListViewItemDraw_o *)v7->fields._GalleryResourceEntity_k__BackingField;
      if ( !this )
        goto LABEL_64;
      this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetDownloadType(
                                                      (GalleryResourceEntity_o *)this,
                                                      0);
      if ( (_DWORD)this == 1 )
      {
        this = (GalleryFullScreenListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_64;
        v8 = v3->fields.galleryFullScreenListViewItem;
        if ( !v8 )
          goto LABEL_64;
        GalleryResourceEntity_k__BackingField = v8->fields._GalleryResourceEntity_k__BackingField;
        if ( !GalleryResourceEntity_k__BackingField )
          goto LABEL_64;
        v10 = (MovieFileMerge_o *)*((_QWORD *)this + 253);
        this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                        GalleryResourceEntity_k__BackingField,
                                                        0);
        if ( !v10 )
          goto LABEL_64;
        MovieFileMerge__Initialize(v10, (System_String_o *)this, 0, 0);
        outputMergeFile = v10->fields.outputMergeFile;
        v12 = (GalleryFullScreenListViewItemDraw_o *)outputMergeFile;
LABEL_23:
        moviePlayerPrefab = (Il2CppObject *)v3->fields.moviePlayerPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        v18 = UnityEngine_Object__Instantiate_object__59717116(
                moviePlayerPrefab,
                transform,
                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_CRIMoviePlayer___);
        v3->fields.moviePlayer = (struct CRIMoviePlayer_o *)v18;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v3->fields.moviePlayer,
          (int32_t)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.touchPanel;
        if ( this )
        {
          v25 = v3->fields.moviePlayer;
          this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIButton___);
          if ( v25 )
          {
            v25->fields.touch = (struct UIButton_o *)this;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v25->fields.touch,
              (int32_t)this,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.moviePlayer;
            if ( this )
            {
              backBgTexture = v3->fields.backBgTexture;
              *((_QWORD *)this + 25) = backBgTexture;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)((char *)this + 200),
                (int32_t)backBgTexture,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.moviePlayer;
              if ( this )
              {
                busyAnim = v3->fields.busyAnim;
                *((_QWORD *)this + 26) = busyAnim;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)((char *)this + 208),
                  (int32_t)busyAnim,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44);
                this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.moviePlayer;
                if ( this )
                {
                  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                    if ( *p_moviePlayer )
                    {
                      v46 = v3->fields.backBgTexture;
                      if ( v46 )
                      {
                        this = (GalleryFullScreenListViewItemDraw_o *)(*p_moviePlayer)->fields.seekSequenceCoroutine;
                        if ( this )
                        {
                          UIWidget__set_width((UIWidget_o *)this, v46->fields.mWidth, 0);
                          if ( *p_moviePlayer )
                          {
                            v47 = v3->fields.backBgTexture;
                            if ( v47 )
                            {
                              this = (GalleryFullScreenListViewItemDraw_o *)(*p_moviePlayer)->fields.seekSequenceCoroutine;
                              if ( this )
                              {
                                UIWidget__set_height((UIWidget_o *)this, v47->fields.mHeight, 0);
                                this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.movieControl;
                                if ( this )
                                {
                                  v54 = (struct UITexture_o *)v3->fields.moviePlayer;
                                  this->fields.backBgTexture = v54;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&this->fields.backBgTexture,
                                    (int32_t)v54,
                                    v48,
                                    v49,
                                    v50,
                                    v51,
                                    v52,
                                    v53);
                                  v61 = v3->fields.moviePlayer;
                                  if ( v61 )
                                  {
                                    this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.movieControl;
                                    if ( this )
                                    {
                                      texture = (struct ExUITexture_o *)v61->fields.texture;
                                      this->fields.backTexture = texture;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)&this->fields.backTexture,
                                        (int32_t)texture,
                                        v55,
                                        v56,
                                        v57,
                                        v58,
                                        v59,
                                        v60);
                                      this = (GalleryFullScreenListViewItemDraw_o *)v3->fields.movieControl;
                                      if ( this )
                                      {
                                        CRIMovieControl__Closed((CRIMovieControl_o *)this, 0);
                                        GameObjectHelper__SetActiveSafely(v3->fields.movieControlPanel, 1, 0);
                                        v63 = v3->fields.moviePlayer;
                                        if ( v63 )
                                        {
                                          this = (GalleryFullScreenListViewItemDraw_o *)v63->fields.texture;
                                          if ( this )
                                          {
                                            this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0);
                                            if ( v3->fields.backBgTexture )
                                            {
                                              v64 = this;
                                              this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                                              (UnityEngine_Component_o *)v3->fields.backBgTexture,
                                                                                              0);
                                              if ( this )
                                              {
                                                localScale = UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0);
                                                GameObjectExtensions__SetLocalScale(
                                                  (UnityEngine_GameObject_o *)v64,
                                                  localScale,
                                                  0);
                                                v67 = *p_moviePlayer;
                                                if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
                                                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v65, v66);
                                                if ( !byte_596B2FF )
                                                {
                                                  sub_2213A60(&BgmManager_TypeInfo);
                                                  byte_596B2FF = 1;
                                                }
                                                v68 = BgmManager_TypeInfo;
                                                if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
                                                {
                                                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v65, v66);
                                                  v68 = BgmManager_TypeInfo;
                                                }
                                                masterVolume = v68->static_fields->masterVolume;
                                                v70 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v70,
                                                  (Il2CppObject *)v3,
                                                  Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_0__,
                                                  0);
                                                v71 = (CinemascopeSideFrame_o *)sub_2213CCC(CinemascopeSideFrame_TypeInfo);
                                                CinemascopeSideFrame___ctor(v71, 0, 1, 0);
                                                nonDeleteCallBack = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  nonDeleteCallBack,
                                                  (Il2CppObject *)v3,
                                                  Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__35_1__,
                                                  0);
                                                if ( v67 )
                                                {
                                                  CRIMoviePlayer__Initialize(
                                                    (CRIMoviePlayer_o *)v67,
                                                    (System_String_o *)v12,
                                                    outputMergeFile,
                                                    masterVolume,
                                                    1,
                                                    0,
                                                    v70,
                                                    1,
                                                    v71,
                                                    0,
                                                    0,
                                                    1,
                                                    nonDeleteCallBack,
                                                    0,
                                                    0,
                                                    0);
                                                  this = *p_moviePlayer;
                                                  if ( *p_moviePlayer )
                                                  {
                                                    CRIMoviePlayer__StopAndDispBg((CRIMoviePlayer_o *)this, 0);
                                                    method = (const MethodInfo *)v3->fields.playSeekSequenceCoroutine;
                                                    if ( method )
                                                    {
                                                      UnityEngine_MonoBehaviour__StopCoroutine(
                                                        (UnityEngine_MonoBehaviour_o *)v3,
                                                        (System_Collections_IEnumerator_o *)method,
                                                        0);
                                                      v3->fields.playSeekSequenceCoroutine = 0;
                                                      sub_2213A04(
                                                        (MissionNaviTransitionBoardItem_o *)&v3->fields.playSeekSequenceCoroutine,
                                                        0,
                                                        v73,
                                                        v74,
                                                        v75,
                                                        v76,
                                                        v77,
                                                        v78);
                                                    }
                                                    this = *p_moviePlayer;
                                                    if ( *p_moviePlayer )
                                                    {
                                                      v79 = CRIMoviePlayer__PlaySeekSequence(
                                                              (CRIMoviePlayer_o *)this,
                                                              0,
                                                              0);
                                                      v3->fields.playSeekSequenceCoroutine = v79;
                                                      sub_2213A04(
                                                        (MissionNaviTransitionBoardItem_o *)&v3->fields.playSeekSequenceCoroutine,
                                                        (int32_t)v79,
                                                        v80,
                                                        v81,
                                                        v82,
                                                        v83,
                                                        v84,
                                                        v85);
                                                      this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v3, v3->fields.playSeekSequenceCoroutine, 0);
                                                      movieControl = v3->fields.movieControl;
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
                                                            v87 = v3->fields.movieControl;
                                                            if ( v87 )
                                                            {
                                                              this = (GalleryFullScreenListViewItemDraw_o *)v87->fields.pauseButton;
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
LABEL_64:
        sub_2213CDC(this, method);
      }
      if ( v3->fields.data )
      {
        v13 = v3->fields.galleryFullScreenListViewItem;
        if ( !v13 )
          goto LABEL_64;
        this = (GalleryFullScreenListViewItemDraw_o *)v13->fields._GalleryResourceEntity_k__BackingField;
        if ( !this )
          goto LABEL_64;
        this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                        (GalleryResourceEntity_o *)this,
                                                        0);
        if ( !v3->fields.data )
          goto LABEL_64;
        v12 = this;
        outputMergeFile = AssetData__get_Path(v3->fields.data, 0);
        goto LABEL_23;
      }
    }
  }
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596B530 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_TypeInfo);
    byte_596B530 = 1;
  }
  v7 = sub_2213CCC(GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 56) = enableControlCallBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 56),
    (int32_t)enableControlCallBack,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_QWORD *)(v7 + 32) = endFullScreenAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endFullScreenAction, v20, v21, v22, v23, v24, v25);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596B52A & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_TypeInfo);
    byte_596B52A = 1;
  }
  v9 = sub_2213CCC(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = assetPath;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)assetPath, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v9 + 48) = objName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)objName, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v9 + 56) = callAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)callAction, v28, v29, v30, v31, v32, v33);
  return (System_Collections_IEnumerator_o *)v9;
}


void GalleryFullScreenListViewItemDraw__SetData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct AssetData_o *AssetStorage; // x0
  struct AssetData_o **p_data; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596B52D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596B52D = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetName, method);
  AssetStorage = AssetManager__getAssetStorage(assetName, 0);
  this->fields.data = AssetStorage;
  p_data = &this->fields.data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_data, (int32_t)AssetStorage, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_data + 16) = *p_data == 0;
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewItemDraw__SetDataCoroutine(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *imgName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B52B & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_TypeInfo);
    byte_596B52B = 1;
  }
  v5 = sub_2213CCC(GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = imgName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)imgName, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewItemDraw__SetItem(
        GalleryFullScreenListViewItemDraw_o *this,
        GalleryFullScreenListViewItem_o *item,
        int32_t mode,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
        sub_2213CDC(0, item);
      ExUITexture__ClearImage(backTexture, 0);
    }
    this->fields.galleryFullScreenListViewItem = item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_galleryFullScreenListViewItem,
      (int32_t)item,
      *(System_String_o **)&mode,
      (System_String_o *)callAction,
      (int32_t)method,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CRIMovieControl_o *movieControl; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  movieControl = this->fields.movieControl;
  if ( !movieControl
    || (movieControl->fields.enableControlCallBack = enableControlCallBack,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&movieControl->fields.enableControlCallBack,
          (int32_t)enableControlCallBack,
          (System_String_o *)endFullScreenAction,
          (System_String_o *)method,
          v4,
          v5,
          v6,
          v7),
        (movieControl = this->fields.movieControl) == 0) )
  {
    sub_2213CDC(movieControl, enableControlCallBack);
  }
  movieControl->fields.endFullScreenAction = endFullScreenAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&movieControl->fields.endFullScreenAction,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596B52F & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_TypeInfo);
    byte_596B52F = 1;
  }
  v7 = sub_2213CCC(GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = assetPath;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)assetPath, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callAction, v20, v21, v22, v23, v24, v25);
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
    sub_2213CDC(0, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *AssetPath; // x21
  bool IsFullScreenMovie; // w0
  int32_t mHeight; // w8
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x22
  struct GalleryFullScreenListViewItem_o *v16; // x8
  struct GalleryFullScreenListViewItem_o *v17; // x8
  System_String_o *v18; // x22
  System_String_o *ObjectName; // x23
  const MethodInfo *v20; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v22; // x2
  struct ExUITexture_o *v23; // x8
  struct ExUITexture_o *backTexture; // x8

  v6 = this;
  if ( (byte_596B534 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596B534 = 1;
  }
  galleryFullScreenListViewItem = v6->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_34;
  if ( galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField == 1 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( this )
    {
      AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v8, v9);
      IsFullScreenMovie = FSUtility__IsFullScreenMovie(AssetPath, 0);
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
  v15 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, Il2CppMethodPointer, int32_t *, const MethodInfo *))this->klass[1].vtable._2_GetHashCode.method)(
                                  this,
                                  this->klass[1].vtable._3_ToString.methodPtr,
                                  height,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Object__op_Equality(v15, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    *height = 1;
    *width = 1;
  }
  else
  {
    v16 = v6->fields.galleryFullScreenListViewItem;
    if ( !v16 )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)v16->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                    (GalleryResourceEntity_o *)this,
                                                    0);
    v17 = v6->fields.galleryFullScreenListViewItem;
    if ( !v17 )
      goto LABEL_34;
    v18 = (System_String_o *)this;
    this = (GalleryFullScreenListViewItemDraw_o *)v17->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_34;
    ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0);
    if ( !System_String__IsNullOrEmpty(ObjectName, 0) )
      v18 = System_String__Concat_75694928(v18, (System_String_o *)StringLiteral_1123/*"/"*/, ObjectName, 0);
    IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(v6, v20);
    if ( IsStandardSize
      && !GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
            (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
            v18,
            v22) )
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
LABEL_11:
          *height = mHeight;
          return;
        }
      }
LABEL_34:
      sub_2213CDC(this, width);
    }
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_34;
    UITexture__set_uvRect((UITexture_o *)this, v6->fields.substituteDataRect, 0);
    this = (GalleryFullScreenListViewItemDraw_o *)v6->fields.backTexture;
    if ( !this )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                    this,
                                                    this->klass[1].vtable._3_ToString.methodPtr);
    if ( !this )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewItemDraw_o *, void *))this->klass[1]._1.image)(
                                                    this,
                                                    this->klass[1]._1.gc_desc);
    v23 = v6->fields.backTexture;
    *width = (int)this;
    if ( !v23 )
      goto LABEL_34;
    this = (GalleryFullScreenListViewItemDraw_o *)((GalleryFullScreenListViewItemDraw_o *(__fastcall *)(struct ExUITexture_o *__return_ptr, struct ExUITexture_o *, const MethodInfo *))v23->klass->vtable._26_get_mainTexture.methodPtr)(
                                                    v23,
                                                    v23,
                                                    v23->klass->vtable._26_get_mainTexture.method);
    if ( !this )
      goto LABEL_34;
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
    sub_2213CDC(backTexture, v4);
  }
  UIWidget__set_height(backTexture, height[0], 0);
}


void GalleryFullScreenListViewItemDraw__SetUpTextureSize(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  UIWidget_o *backTexture; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x21
  const MethodInfo *v9; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2

  v3 = textureName;
  if ( (byte_596B535 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B535 = 1;
  }
  backTexture = (UIWidget_o *)this->fields.backTexture;
  if ( !backTexture )
    goto LABEL_22;
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *, const MethodInfo *))backTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                 backTexture,
                                 backTexture->klass->vtable._26_get_mainTexture.method,
                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(this, v9);
    if ( IsStandardSize
      && !GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
            (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
            v3,
            v11) )
    {
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v12, v13);
      if ( FSUtility__IsFullScreenBack(v3, 0) )
      {
        textureName = (System_String_o *)&qword_240;
      }
      else
      {
        if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v14, v15);
        if ( FSUtility__IsFullScreenImage(v3, 0) )
          textureName = (System_String_o *)&qword_240;
        else
          textureName = (System_String_o *)(byte_284 + 112);
      }
      backTexture = (UIWidget_o *)this->fields.backTexture;
      if ( backTexture )
      {
        UIWidget__set_height(backTexture, (int32_t)textureName, 0);
        backTexture = (UIWidget_o *)this->fields.backTexture;
        if ( backTexture )
        {
          UIWidget__set_width(backTexture, 1344, 0);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(backTexture, textureName);
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
  struct System_Collections_IEnumerator_o **p_playMovieCoroutine; // x20
  struct System_Collections_IEnumerator_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    sub_2213CDC(this, enableControlCallBack);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_playMovieCoroutine, (int32_t)v7, v8, v9, v10, v11, v12, v13);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756(
        (UnityEngine_MonoBehaviour_o *)this,
        this->fields.playMovieCoroutine,
        0);
    }
  }
}


void GalleryFullScreenListViewItemDraw__StopMovie(GalleryFullScreenListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_moviePlayer; // x19
  UnityEngine_Object_o *moviePlayer; // x21
  __int64 v6; // x1
  struct CRIMovieControl_o *klass; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *movieControl; // x21
  __int64 v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Object_o *movieControlPanel; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596B533 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B533 = 1;
  }
  p_moviePlayer = (MissionNaviTransitionBoardItem_o *)&this->fields.moviePlayer;
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->fields.player, 0, v12, v13, v14, v15, v16, v17);
          klass = this->fields.movieControl;
          if ( !klass )
            goto LABEL_26;
          klass->fields.texture = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->fields.texture, 0, v18, v19, v20, v21, v22, v23);
        }
        movieControlPanel = (UnityEngine_Object_o *)this->fields.movieControlPanel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v11);
        if ( UnityEngine_Object__op_Inequality(movieControlPanel, 0, 0) )
          GameObjectHelper__SetActiveSafely(this->fields.movieControlPanel, 0, 0);
        klass = (struct CRIMovieControl_o *)p_moviePlayer->klass;
        if ( p_moviePlayer->klass )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)klass,
                                                 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
          UnityEngine_Object__Destroy_83459800(gameObject, 0);
          p_moviePlayer->klass = 0;
          sub_2213A04(p_moviePlayer, 0, v28, v29, v30, v31, v32, v33);
          return;
        }
      }
    }
LABEL_26:
    sub_2213CDC(klass, v6);
  }
}


void GalleryFullScreenListViewItemDraw___DownloadMovieAsset_b__31_0(
        GalleryFullScreenListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  this->fields.setDataWait = 0;
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
  if ( (byte_596B537 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_2213A60(&Method_GalleryFullScreenListViewItemDraw_PlayMovie__);
    byte_596B537 = 1;
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
    sub_2213CDC(this, method);
  }
  if ( galleryFullScreenListViewItem->fields.isCenterItem )
  {
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *moviePlayer; // x20
  __int64 v10; // x2
  struct CRIMoviePlayer_o *v11; // x8
  struct CRIMoviePlayer_o *v12; // x8
  struct CRIMoviePlayer_o *v13; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct CRIMoviePlayer_o *v15; // x8
  System_Collections_IEnumerator_o *seekSequenceCoroutine; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  CRIMoviePlayer_o *v23; // x21
  System_Action_o *v24; // x22
  struct System_Collections_IEnumerator_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596B538 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw_OpenPause__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596B538 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v5, v6);
  TouchEffectManager__SetBlock(0, 0);
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  Instance = (CommonUI_o *)UnityEngine_Object__op_Equality(moviePlayer, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = this->fields.moviePlayer;
    if ( !v11 )
      goto LABEL_30;
    Instance = (CommonUI_o *)v11->fields._player_k__BackingField;
    if ( !Instance )
      goto LABEL_30;
    Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0);
    if ( (_DWORD)Instance != 7 )
    {
      v12 = this->fields.moviePlayer;
      if ( !v12 )
        goto LABEL_30;
      Instance = (CommonUI_o *)v12->fields._player_k__BackingField;
      if ( !Instance )
        goto LABEL_30;
      Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0);
      if ( (_DWORD)Instance == 6 )
      {
        v13 = this->fields.moviePlayer;
        if ( !v13 )
          goto LABEL_30;
        Instance = (CommonUI_o *)v13->fields._player_k__BackingField;
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
              v15 = this->fields.moviePlayer;
              if ( v15 )
              {
                Instance = (CommonUI_o *)v15->fields._player_k__BackingField;
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
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.seekSequenceCoroutine,
                      0,
                      v17,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
                  }
                  v23 = this->fields.moviePlayer;
                  v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v24,
                    (Il2CppObject *)this,
                    Method_GalleryFullScreenListViewItemDraw_OpenPause__,
                    0);
                  if ( v23 )
                  {
                    v25 = CRIMoviePlayer__SeekSequence(v23, 0, v24, 0);
                    this->fields.seekSequenceCoroutine = v25;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.seekSequenceCoroutine,
                      (int32_t)v25,
                      v26,
                      v27,
                      v28,
                      v29,
                      v30,
                      v31);
                    UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                      (UnityEngine_MonoBehaviour_o *)this,
                      this->fields.seekSequenceCoroutine,
                      0);
                    return;
                  }
                }
              }
            }
LABEL_30:
            sub_2213CDC(Instance, v4);
          }
        }
      }
    }
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v4, v10);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *v8; // x19
  int32_t _1__state; // w8
  GalleryFullScreenListViewItemDraw_o *_4__this; // x20
  Il2CppObject *v11; // x22
  Il2CppObject **p__8__2; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Action_o *endFullScreenAction; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x1
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  Il2CppObject *v34; // x23
  Il2CppObject **p__8__1; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x1
  struct GalleryFullScreenListViewItem_o *v49; // x8
  CommonUI_o *v50; // x21
  struct GalleryFullScreenListViewItem_o *v51; // x8
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8
  GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *v53; // x20
  int32_t questId; // w23
  Il2CppObject *v55; // x24
  System_Action_o *v56; // x22
  System_Collections_IEnumerator_o *v57; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct GalleryFullScreenListViewItemDraw___c__DisplayClass34_1_o *_8__1; // x8
  struct GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_o *_8__2; // x8
  const MethodInfo *v68; // x1
  Il2CppObject *v69; // x20
  System_Func_bool__o *v70; // x21
  UnityEngine_WaitWhile_o *v71; // x20
  MissionNaviTransitionBoardItem_o *v72; // x19
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7

  v8 = this;
  if ( (byte_596B539 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw___c__DisplayClass34_0__PlayMovieCoroutine_b__0__);
    sub_2213A60(&GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw___c__DisplayClass34_1__PlayMovieCoroutine_b__1__);
    sub_2213A60(&GalleryFullScreenListViewItemDraw___c__DisplayClass34_1_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B539 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_24;
  }
  if ( _1__state == 1 )
  {
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)&v8->fields.__8__1;
    _8__1 = v8->fields.__8__1;
    v8->fields.__1__state = -1;
    if ( !_8__1 )
      goto LABEL_29;
    if ( _8__1->fields.isCancel )
      return 0;
    this->klass = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
LABEL_24:
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 || !_4__this )
      goto LABEL_29;
    GalleryFullScreenListViewItemDraw__SetMovieCallBack(
      _4__this,
      v8->fields.enableControlCallBack,
      _8__2->fields.endFullScreenAction,
      (const MethodInfo *)v3);
    GalleryFullScreenListViewItemDraw__PlayMovie(_4__this, v68);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)v8->fields.enableControlCallBack,
      0,
      (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_2213CCC(GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor(v11, 0);
  v8->fields.__8__2 = (struct GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_o *)v11;
  p__8__2 = (Il2CppObject **)&v8->fields.__8__2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__2, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)v8->fields.__8__2;
  if ( !this )
    goto LABEL_29;
  endFullScreenAction = v8->fields.endFullScreenAction;
  *(_QWORD *)&this->fields.__1__state = endFullScreenAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)endFullScreenAction,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)v8->fields.__8__2;
  if ( !this )
    goto LABEL_29;
  v32 = (Il2CppObject *)v8->fields.__4__this;
  this->fields.__2__current = v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
    (int32_t)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !_4__this )
    goto LABEL_29;
  galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_29;
  this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_29;
  if ( GalleryResourceEntity__GetDownloadType((GalleryResourceEntity_o *)this, 0) == 1 )
  {
    v34 = (Il2CppObject *)sub_2213CCC(GalleryFullScreenListViewItemDraw___c__DisplayClass34_1_TypeInfo);
    System_Object___ctor(v34, 0);
    v8->fields.__8__1 = (struct GalleryFullScreenListViewItemDraw___c__DisplayClass34_1_o *)v34;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v34, v36, v37, v38, v39, v40, v41);
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)v8->fields.__8__1;
    if ( this )
    {
      v48 = *p__8__2;
      this->fields.__2__current = *p__8__2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v48,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      if ( *p__8__1 )
      {
        LOBYTE((*p__8__1)[1].klass) = 0;
        this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v49 = _4__this->fields.galleryFullScreenListViewItem;
        if ( v49 )
        {
          v50 = (CommonUI_o *)this;
          this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)v49->fields._GalleryResourceEntity_k__BackingField;
          if ( this )
          {
            this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_o *)GalleryResourceEntity__GetAssetPath(
                                                                                      (GalleryResourceEntity_o *)this,
                                                                                      0);
            v51 = _4__this->fields.galleryFullScreenListViewItem;
            if ( v51 )
            {
              GalleryResourceEntity_k__BackingField = v51->fields._GalleryResourceEntity_k__BackingField;
              if ( GalleryResourceEntity_k__BackingField )
              {
                v53 = this;
                questId = GalleryResourceEntity_k__BackingField->fields.questId;
                v55 = *p__8__1;
                v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v56,
                  v55,
                  Method_GalleryFullScreenListViewItemDraw___c__DisplayClass34_1__PlayMovieCoroutine_b__1__,
                  0);
                if ( v50 )
                {
                  v57 = CommonUI__DownloadMovieIfNeeded(v50, (System_String_o *)v53, questId, -1, v56, 0);
                  v8->fields.__2__current = (Il2CppObject *)v57;
                  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
                  sub_2213A04(p__2__current, (int32_t)v57, v59, v60, v61, v62, v63, v64);
                  p__2__current[-1].fields._BoardType_k__BackingField = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(this, method);
  }
  v69 = (Il2CppObject *)v8->fields.__8__2;
  v70 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v70,
    v69,
    Method_GalleryFullScreenListViewItemDraw___c__DisplayClass34_0__PlayMovieCoroutine_b__0__,
    0);
  v71 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v71, v70, 0);
  v8->fields.__2__current = (Il2CppObject *)v71;
  v72 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(v72, (int32_t)v71, v73, v74, v75, v76, v77, v78);
  v72[-1].fields._BoardType_k__BackingField = 2;
  return 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__34_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *v8; // x20
  int32_t _1__state; // w23
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x19
  AssetData_o *data; // x0
  struct ExUITexture_o *backTexture; // x8
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  bool v16; // w0
  System_String_o *imgName_5__2; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  struct System_String_o *assetPath; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  MissionNaviTransitionBoardItem_o *p_objName; // x0
  int32_t v28; // w1
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  System_Collections_IEnumerator_o *v31; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  v8 = this;
  if ( (byte_596B53A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596B53A = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_25;
      data = _4__this->fields.data;
      if ( data )
      {
        this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *)AssetData__GetObject_object__58532980(
                                                                              data,
                                                                              v8->fields.objName,
                                                                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
        backTexture = _4__this->fields.backTexture;
        if ( !backTexture )
          goto LABEL_25;
        v13 = (UnityEngine_Object_o *)this;
        ((void (__fastcall *)(struct ExUITexture_o *__return_ptr, struct ExUITexture_o *, GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_o *, const MethodInfo *))backTexture->klass->vtable._27_set_mainTexture.methodPtr)(
          backTexture,
          _4__this->fields.backTexture,
          this,
          backTexture->klass->vtable._27_set_mainTexture.method);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
        v16 = UnityEngine_Object__op_Inequality(v13, 0, 0);
        imgName_5__2 = v8->fields._imgName_5__2;
        _4__this->fields.setDataResult = v16;
        GalleryFullScreenListViewItemDraw__SetUpTextureSize(_4__this, imgName_5__2, v18);
        GalleryFullScreenListViewItemDraw__SetTextureScale(_4__this, v19);
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
      if ( !_4__this->fields.setDataResult )
      {
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
                return _1__state == 0;
              }
            }
          }
        }
LABEL_25:
        sub_2213CDC(this, method);
      }
    }
  }
  else
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    *(_WORD *)&_4__this->fields.setDataWait = 1;
    assetPath = v8->fields.assetPath;
    v8->fields._imgName_5__2 = assetPath;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._imgName_5__2,
      (int32_t)assetPath,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( System_String__IsNullOrEmpty(v8->fields.objName, 0) )
    {
      v8->fields.objName = 0;
      p_objName = (MissionNaviTransitionBoardItem_o *)&v8->fields.objName;
      v28 = 0;
    }
    else
    {
      v29 = System_String__Concat_75694928(
              v8->fields.assetPath,
              (System_String_o *)StringLiteral_1123/*"/"*/,
              v8->fields.objName,
              0);
      v28 = (int)v29;
      v8->fields._imgName_5__2 = v29;
      p_objName = (MissionNaviTransitionBoardItem_o *)&v8->fields._imgName_5__2;
    }
    sub_2213A04(p_objName, v28, v21, v22, v23, v24, v25, v26);
    v31 = GalleryFullScreenListViewItemDraw__SetDataCoroutine(_4__this, v8->fields._imgName_5__2, v30);
    v8->fields.__2__current = (Il2CppObject *)v31;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v31, v33, v34, v35, v36, v37, v38);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  float deltaTime; // s0
  _BOOL4 setDataWait; // w8
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields._waitTime_5__2 = 0.0;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      GalleryFullScreenListViewItemDraw__SetData(_4__this, this->fields.imgName, v2);
      goto LABEL_6;
    }
LABEL_12:
    sub_2213CDC(this, method);
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
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    setDataWait = _4__this->fields.setDataWait;
    this->fields._waitTime_5__2 = waitTime_5__2 + deltaTime;
    if ( setDataWait )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v8, v9, v10, v11, v12, v13);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
    return 0;
  }
  *(_WORD *)&_4__this->fields.setDataWait = 0;
  return 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__27_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  __int64 v2; // x2
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *v3; // x20
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x19
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  const MethodInfo *v7; // x2
  bool v8; // w8
  System_String_o *assetPath; // x21
  const MethodInfo *v10; // x2
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  AssetData_o *data; // x0
  System_String_o *Path; // x0
  struct GalleryFullScreenListViewItem_o *v20; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x21
  bool IsFullScreenMovie; // w8
  int32_t v25; // w21
  bool v26; // w21
  System_Func_bool__o *v28; // x22
  UnityEngine_WaitWhile_o *v29; // x19
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_596B53B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__32_0__);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B53B = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    assetPath = v3->fields.assetPath;
    v3->fields.__1__state = -1;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)AssetManager__getAsset(0, assetPath, 0);
    if ( !_4__this )
      goto LABEL_38;
    v11 = this;
    if ( GalleryFullScreenListViewItemDraw__IsSameName(_4__this, v3->fields.assetPath, v10) )
    {
      _4__this->fields.data = (struct AssetData_o *)v11;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.data,
        (int32_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    data = _4__this->fields.data;
    if ( !data || (Path = AssetData__get_Path(data, 0)) == 0 )
      Path = **(System_String_o ***)(qword_5984390 + 184);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)System_String__IsNullOrEmpty(Path, 0);
    v8 = ((unsigned __int8)this & 1) == 0;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
    if ( !this )
      goto LABEL_38;
    v37.fields.r = 0.0;
    v37.fields.g = 0.0;
    v37.fields.b = 0.0;
    v37.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v37, 0);
    galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_38;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_38;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)GalleryResourceEntity__GetDownloadType(
                                                                                 (GalleryResourceEntity_o *)this,
                                                                                 0);
    if ( (_DWORD)this != 1 )
    {
      v26 = 1;
      *(_WORD *)&_4__this->fields.setDataWait = 1;
      GalleryFullScreenListViewItemDraw__DownloadMovieAsset(_4__this, v3->fields.assetPath, v7);
      v28 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v28,
        (Il2CppObject *)_4__this,
        Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__32_0__,
        0);
      v29 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v29, v28, 0);
      v3->fields.__2__current = (Il2CppObject *)v29;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v29, v31, v32, v33, v34, v35, v36);
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return v26;
    }
    v8 = 1;
  }
  _4__this->fields.setDataResult = v8;
  v20 = _4__this->fields.galleryFullScreenListViewItem;
  if ( !v20 )
    goto LABEL_38;
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)v20->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_38;
  v23 = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v21, v22);
  IsFullScreenMovie = FSUtility__IsFullScreenMovie(v23, 0);
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
  v25 = IsFullScreenMovie ? 576 : 756;
  if ( !this )
    goto LABEL_38;
  UIWidget__set_width((UIWidget_o *)this, 1344, 0);
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
  if ( !this )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)this, v25, 0);
  ActionExtensions__Call(v3->fields.callAction, 0);
  if ( !_4__this->fields.setDataResult )
  {
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backTexture;
    if ( this )
    {
      this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)_4__this->fields.backBgTexture;
        if ( this )
        {
          this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_o *)UnityEngine_Component__get_gameObject(
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
LABEL_38:
    sub_2213CDC(this, method);
  }
  return 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__32_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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


void GalleryFullScreenListViewItemDraw___c__DisplayClass34_0___ctor(
        GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GalleryFullScreenListViewItemDraw___c__DisplayClass34_0___PlayMovieCoroutine_b__0(
        GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItemDraw_o *_4__this; // x9
  struct AssetData_o *data; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x9
  System_String_o *name; // x19
  System_String_o *AssetPath; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  data = _4__this->fields.data;
  if ( data )
  {
    galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
    if ( galleryFullScreenListViewItem )
    {
      this = (GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
      if ( this )
      {
        name = data->fields.name;
        AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0);
        return System_String__op_Inequality(name, AssetPath, 0);
      }
    }
LABEL_7:
    sub_2213CDC(this, method);
  }
  return 1;
}


void GalleryFullScreenListViewItemDraw___c__DisplayClass34_1___ctor(
        GalleryFullScreenListViewItemDraw___c__DisplayClass34_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GalleryFullScreenListViewItemDraw___c__DisplayClass34_1___PlayMovieCoroutine_b__1(
        GalleryFullScreenListViewItemDraw___c__DisplayClass34_1_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItemDraw___c__DisplayClass34_0_o *CS___8__locals1; // x8
  struct System_Action_o *endFullScreenAction; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  this->fields.isCancel = 1;
  if ( !CS___8__locals1 )
    sub_2213CDC(this, method);
  endFullScreenAction = CS___8__locals1->fields.endFullScreenAction;
  if ( endFullScreenAction )
    ((void (__fastcall *)(intptr_t, intptr_t))endFullScreenAction->fields.invoke_impl)(
      endFullScreenAction->fields.method_code,
      endFullScreenAction->fields.method);
}