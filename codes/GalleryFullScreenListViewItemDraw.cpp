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

  if ( (byte_4AFD0CF & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, assetPath);
    sub_1BC3008(&Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__30_0__, v5);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    byte_4AFD0CF = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_GalleryFullScreenListViewItemDraw__DownloadMovieAsset_b__30_0__,
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
  bool v10; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  System_Collections_IEnumerator_o *loadCoroutine; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *playMovieCoroutine; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *playSeekSequenceCoroutine; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct GalleryFullScreenListViewItem_o *v24; // x8
  int32_t v25; // w8
  System_Collections_IEnumerator_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_25;
  v4 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_25;
  CurrentGalleryType_k__BackingField = galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField;
  v6 = callAction;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                  (GalleryResourceEntity_o *)this,
                                                  0LL);
  v7 = v4->fields.galleryFullScreenListViewItem;
  if ( !v7 )
    goto LABEL_25;
  v8 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)v7->fields._GalleryResourceEntity_k__BackingField;
  if ( !this )
    goto LABEL_25;
  this = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetObjectName(
                                                  (GalleryResourceEntity_o *)this,
                                                  0LL);
  if ( !v4->fields.backTexture )
    goto LABEL_25;
  v9 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v4->fields.backTexture,
                                                  0LL);
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 2, 0LL);
  this = (GalleryFullScreenListViewItemDraw_o *)v4->fields.moviePlayer;
  if ( !this )
    goto LABEL_25;
  this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, CurrentGalleryType_k__BackingField == 1, 0LL);
  this = (GalleryFullScreenListViewItemDraw_o *)v4->fields.moviePlayer;
  if ( !this )
    goto LABEL_25;
  v10 = CurrentGalleryType_k__BackingField == 1;
  CRIMoviePlayer__ActiveAnim((CRIMoviePlayer_o *)this, 0LL);
  GameObjectHelper__SetActiveSafely(v4->fields.movieControlPanel, v10, 0LL);
  GameObjectHelper__SetActiveSafely(v4->fields.touchPanel, v10, 0LL);
  loadCoroutine = v4->fields.loadCoroutine;
  if ( loadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, loadCoroutine, 0LL);
    v4->fields.loadCoroutine = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.loadCoroutine, 0, v14, v15);
  }
  playMovieCoroutine = v4->fields.playMovieCoroutine;
  if ( playMovieCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playMovieCoroutine, 0LL);
    v4->fields.playMovieCoroutine = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.playMovieCoroutine, 0, v17, v18);
  }
  playSeekSequenceCoroutine = v4->fields.playSeekSequenceCoroutine;
  if ( playSeekSequenceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, playSeekSequenceCoroutine, 0LL);
    v4->fields.playSeekSequenceCoroutine = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.playSeekSequenceCoroutine, 0, v20, v21);
  }
  callAction = (System_Action_o *)v4->fields.seekSequenceCoroutine;
  if ( callAction )
  {
    UnityEngine_MonoBehaviour__StopCoroutine(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_Collections_IEnumerator_o *)callAction,
      0LL);
    v4->fields.seekSequenceCoroutine = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.seekSequenceCoroutine, 0, v22, v23);
  }
  v24 = v4->fields.galleryFullScreenListViewItem;
  if ( !v24 )
LABEL_25:
    sub_1BC3264(this, callAction);
  v25 = v24->fields._CurrentGalleryType_k__BackingField;
  if ( v25 == 2 )
  {
    v26 = GalleryFullScreenListViewItemDraw__SetCGCoroutine(v4, (System_String_o *)v8, (System_String_o *)v9, v6, v12);
    goto LABEL_23;
  }
  if ( v25 == 1 )
  {
    v26 = GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine(v4, (System_String_o *)v8, v6, v11);
LABEL_23:
    v4->fields.loadCoroutine = v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.loadCoroutine, (int32_t)v26, v27, v28);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)v4, v4->fields.loadCoroutine, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
        GalleryFullScreenListViewItemDraw_o *this,
        System_String_o *textureName,
        const MethodInfo *method)
{
  if ( (byte_4AFD0D6 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BC3008(&StringLiteral_9138/*"MyRoom/Gallery/SubstituteData"*/, textureName);
    byte_4AFD0D6 = 1;
  }
  if ( !textureName )
    sub_1BC3264(this, textureName);
  return System_String__Contains(textureName, (System_String_o *)StringLiteral_9138/*"MyRoom/Gallery/SubstituteData"*/, 0LL);
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
  if ( (byte_4AFD0CD & 1) == 0 )
  {
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BC3008(&StringLiteral_1039/*"/"*/, targetName);
    byte_4AFD0CD = 1;
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
    sub_1BC3264(this, targetName);
  }
  ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)this, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
    v7 = System_String__Concat_62386896(v7, (System_String_o *)StringLiteral_1039/*"/"*/, ObjectName, 0LL);
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
    sub_1BC3264(backTexture, method);
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
  CRIMovieControl_o *movieControl; // x0
  CRIMoviePlayer_o *moviePlayer; // x20

  if ( (byte_4AFD0D3 & 1) == 0 )
  {
    sub_1BC3008(&BgmManager_TypeInfo, method);
    byte_4AFD0D3 = 1;
  }
  movieControl = this->fields.movieControl;
  if ( !movieControl )
    goto LABEL_13;
  CRIMovieControl__OnClickPauseButton(movieControl, 0LL);
  moviePlayer = this->fields.moviePlayer;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4AFCFAF )
  {
    sub_1BC3008(&BgmManager_TypeInfo, method);
    byte_4AFCFAF = 1;
  }
  movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    movieControl = (CRIMovieControl_o *)BgmManager_TypeInfo;
  }
  if ( !moviePlayer
    || (CRIMoviePlayer__SetVolume(moviePlayer, *((float *)movieControl[1].monitor + 9), 0LL),
        (movieControl = this->fields.movieControl) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(movieControl, method);
  }
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
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct GalleryFullScreenListViewItem_o *v8; // x8
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8
  CRIMoviePlayer_o *moviePlayer; // x20
  System_String_o *assetPath; // x21
  __int64 v12; // x1
  System_String_o *Path; // x22
  BgmManager_c *v14; // x0
  float masterVolume; // s8
  System_Action_o *v16; // x23
  CinemascopeSideFrame_o *v17; // x24
  System_Action_o *nonDeleteCallBack; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct CRIMovieControl_o *movieControl; // x8
  struct CRIMovieControl_o *v25; // x8

  v2 = this;
  if ( (byte_4AFD0D2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&BgmManager_TypeInfo, v3);
    sub_1BC3008(&CinemascopeSideFrame_TypeInfo, v4);
    sub_1BC3008(&Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__34_0__, v5);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BC3008(
                                                    &Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__34_1__,
                                                    v6);
    byte_4AFD0D2 = 1;
  }
  if ( v2->fields.data )
  {
    galleryFullScreenListViewItem = v2->fields.galleryFullScreenListViewItem;
    if ( galleryFullScreenListViewItem )
    {
      if ( !galleryFullScreenListViewItem->fields.isCenterItem )
        return;
      this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
      if ( this )
      {
        this = (GalleryFullScreenListViewItemDraw_o *)CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        v8 = v2->fields.galleryFullScreenListViewItem;
        if ( v8 )
        {
          GalleryResourceEntity_k__BackingField = v8->fields._GalleryResourceEntity_k__BackingField;
          if ( GalleryResourceEntity_k__BackingField )
          {
            this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.data;
            if ( this )
            {
              moviePlayer = v2->fields.moviePlayer;
              assetPath = GalleryResourceEntity_k__BackingField->fields.assetPath;
              Path = AssetData__get_Path((AssetData_o *)this, 0LL);
              if ( !BgmManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              if ( !byte_4AFCFAF )
              {
                sub_1BC3008(&BgmManager_TypeInfo, v12);
                byte_4AFCFAF = 1;
              }
              v14 = BgmManager_TypeInfo;
              if ( !BgmManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                v14 = BgmManager_TypeInfo;
              }
              masterVolume = v14->static_fields->masterVolume;
              v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(
                v16,
                (Il2CppObject *)v2,
                Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__34_0__,
                0LL);
              v17 = (CinemascopeSideFrame_o *)sub_1BC3254(CinemascopeSideFrame_TypeInfo);
              CinemascopeSideFrame___ctor(v17, 0, 1, 0LL);
              nonDeleteCallBack = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(
                nonDeleteCallBack,
                (Il2CppObject *)v2,
                Method_GalleryFullScreenListViewItemDraw__PlayMovie_b__34_1__,
                0LL);
              if ( moviePlayer )
              {
                CRIMoviePlayer__Initialize(
                  moviePlayer,
                  assetPath,
                  Path,
                  masterVolume,
                  1,
                  0LL,
                  v16,
                  1,
                  v17,
                  0,
                  0,
                  1,
                  nonDeleteCallBack,
                  0LL);
                this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
                if ( this )
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
                    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.playSeekSequenceCoroutine, 0, v19, v20);
                  }
                  this = (GalleryFullScreenListViewItemDraw_o *)v2->fields.moviePlayer;
                  if ( this )
                  {
                    v21 = CRIMoviePlayer__PlaySeekSequence((CRIMoviePlayer_o *)this, 0, 0LL);
                    v2->fields.playSeekSequenceCoroutine = v21;
                    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.playSeekSequenceCoroutine, (int32_t)v21, v22, v23);
                    this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                                                                    (UnityEngine_MonoBehaviour_o *)v2,
                                                                    v2->fields.playSeekSequenceCoroutine,
                                                                    0LL);
                    movieControl = v2->fields.movieControl;
                    if ( movieControl )
                    {
                      this = (GalleryFullScreenListViewItemDraw_o *)movieControl->fields.playButton;
                      if ( this )
                      {
                        this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                        if ( this )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                          v25 = v2->fields.movieControl;
                          if ( v25 )
                          {
                            this = (GalleryFullScreenListViewItemDraw_o *)v25->fields.pauseButton;
                            if ( this )
                            {
                              this = (GalleryFullScreenListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
                              if ( this )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
    sub_1BC3264(this, method);
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

  if ( (byte_4AFD0D1 & 1) == 0 )
  {
    sub_1BC3008(&GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_TypeInfo, enableControlCallBack);
    byte_4AFD0D1 = 1;
  }
  v7 = sub_1BC3254(GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = enableControlCallBack;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)enableControlCallBack, v10, v11);
  *(_QWORD *)(v7 + 48) = endFullScreenAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endFullScreenAction, v12, v13);
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

  if ( (byte_4AFD0CB & 1) == 0 )
  {
    sub_1BC3008(&GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_TypeInfo, assetPath);
    byte_4AFD0CB = 1;
  }
  v9 = sub_1BC3254(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 40) = assetPath;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)assetPath, v12, v13);
  *(_QWORD *)(v9 + 48) = objName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)objName, v14, v15);
  *(_QWORD *)(v9 + 56) = callAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 56), (int32_t)callAction, v16, v17);
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

  if ( (byte_4AFD0CE & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, assetName);
    byte_4AFD0CE = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(assetName, 0LL);
  this->fields.data = AssetStorage;
  p_data = &this->fields.data;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_data, (int32_t)AssetStorage, v7, v8);
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

  if ( (byte_4AFD0CC & 1) == 0 )
  {
    sub_1BC3008(&GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_TypeInfo, imgName);
    byte_4AFD0CC = 1;
  }
  v5 = sub_1BC3254(GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = imgName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)imgName, v8, v9);
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
        sub_1BC3264(0LL, item);
      ExUITexture__ClearImage(backTexture, 0LL);
    }
    this->fields.galleryFullScreenListViewItem = item;
    sub_1BC2FAC(
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
        sub_1BC2FAC(
          (CGThumbnailListItem_o *)&movieControl->fields.enableControlCallBack,
          (int32_t)enableControlCallBack,
          (int32_t)endFullScreenAction,
          method),
        (movieControl = this->fields.movieControl) == 0LL) )
  {
    sub_1BC3264(movieControl, enableControlCallBack);
  }
  movieControl->fields.endFullScreenAction = endFullScreenAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)&movieControl->fields.endFullScreenAction, (int32_t)endFullScreenAction, v7, v8);
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

  if ( (byte_4AFD0D0 & 1) == 0 )
  {
    sub_1BC3008(&GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_TypeInfo, assetPath);
    byte_4AFD0D0 = 1;
  }
  v7 = sub_1BC3254(GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = assetPath;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)assetPath, v10, v11);
  *(_QWORD *)(v7 + 48) = callAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callAction, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewItemDraw__SetMovieLocalScale(
        GalleryFullScreenListViewItemDraw_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *movieTexture; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  movieTexture = (UnityEngine_Component_o *)this->fields.movieTexture;
  if ( !movieTexture )
    goto LABEL_4;
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(movieTexture, 0LL);
  v10.fields.x = x;
  v10.fields.y = y;
  v10.fields.z = z;
  GameObjectExtensions__SetLocalScale(gameObject, v10, 0LL);
  movieTexture = (UnityEngine_Component_o *)this->fields.backBgTexture;
  if ( !movieTexture )
LABEL_4:
    sub_1BC3264(movieTexture, method);
  v9 = UnityEngine_Component__get_gameObject(movieTexture, 0LL);
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.x = x;
  GameObjectExtensions__SetLocalScale(v9, v11, 0LL);
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
  System_String_o *AssetPath; // x21
  bool IsFullScreenMovie; // w0
  int32_t mHeight; // w8
  UnityEngine_Object_o *v14; // x22
  struct GalleryFullScreenListViewItem_o *v15; // x8
  struct GalleryFullScreenListViewItem_o *v16; // x8
  System_String_o *v17; // x22
  System_String_o *ObjectName; // x23
  const MethodInfo *v19; // x1
  _BOOL8 IsStandardSize; // x0
  const MethodInfo *v21; // x2
  struct ExUITexture_o *backTexture; // x8

  if ( (byte_4AFD0D4 & 1) == 0 )
  {
    sub_1BC3008(&FSUtility_TypeInfo, width);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v8);
    byte_4AFD0D4 = 1;
  }
  moviePlayer = (UnityEngine_Behaviour_o *)this->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_36;
  moviePlayer = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(moviePlayer, 0LL);
  if ( ((unsigned __int8)moviePlayer & 1) != 0 )
  {
    galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_36;
    if ( galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField == 1 )
    {
      moviePlayer = (UnityEngine_Behaviour_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
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
        goto LABEL_35;
      }
LABEL_36:
      sub_1BC3264(moviePlayer, width);
    }
  }
  moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
  if ( !moviePlayer )
    goto LABEL_36;
  v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))moviePlayer->klass[1].vtable._3_ToString.method)(
                                  moviePlayer,
                                  moviePlayer->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  moviePlayer = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)moviePlayer & 1) != 0 )
  {
    *height = 1;
    *width = 1;
    return;
  }
  v15 = this->fields.galleryFullScreenListViewItem;
  if ( !v15 )
    goto LABEL_36;
  moviePlayer = (UnityEngine_Behaviour_o *)v15->fields._GalleryResourceEntity_k__BackingField;
  if ( !moviePlayer )
    goto LABEL_36;
  moviePlayer = (UnityEngine_Behaviour_o *)GalleryResourceEntity__GetAssetPath(
                                             (GalleryResourceEntity_o *)moviePlayer,
                                             0LL);
  v16 = this->fields.galleryFullScreenListViewItem;
  if ( !v16 )
    goto LABEL_36;
  v17 = (System_String_o *)moviePlayer;
  moviePlayer = (UnityEngine_Behaviour_o *)v16->fields._GalleryResourceEntity_k__BackingField;
  if ( !moviePlayer )
    goto LABEL_36;
  ObjectName = GalleryResourceEntity__GetObjectName((GalleryResourceEntity_o *)moviePlayer, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
    v17 = System_String__Concat_62386896(v17, (System_String_o *)StringLiteral_1039/*"/"*/, ObjectName, 0LL);
  IsStandardSize = GalleryFullScreenListViewItemDraw__IsStandardSize(this, v19);
  if ( !IsStandardSize
    || GalleryFullScreenListViewItemDraw__IsGallerySubstituteData(
         (GalleryFullScreenListViewItemDraw_o *)IsStandardSize,
         v17,
         v21) )
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
    goto LABEL_36;
  }
  moviePlayer = (UnityEngine_Behaviour_o *)this->fields.backTexture;
  if ( !moviePlayer )
    goto LABEL_36;
  UITexture__set_uvRect((UITexture_o *)moviePlayer, this->fields.cgRect, 0LL);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    goto LABEL_36;
  *width = backTexture->fields.mWidth;
  mHeight = backTexture->fields.mHeight;
LABEL_35:
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
    sub_1BC3264(backTexture, v4);
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
  if ( (byte_4AFD0D5 & 1) == 0 )
  {
    sub_1BC3008(&FSUtility_TypeInfo, textureName);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFD0D5 = 1;
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
          sub_1BC3264(backTexture, textureName);
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
  GalleryFullScreenListViewItemDraw_o *v5; // x19
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
  if ( !galleryFullScreenListViewItem )
    goto LABEL_8;
  if ( galleryFullScreenListViewItem->fields._CurrentGalleryType_k__BackingField != 1 )
    return;
  v5 = this;
  this = (GalleryFullScreenListViewItemDraw_o *)this->fields.moviePlayer;
  if ( !this )
LABEL_8:
    sub_1BC3264(this, enableControlCallBack);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL)
    && !v5->fields.playMovieCoroutine )
  {
    v9 = GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(v5, enableControlCallBack, endFullScreenAction, v8);
    v5->fields.playMovieCoroutine = v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v5->fields.playMovieCoroutine, (int32_t)v9, v10, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872(
      (UnityEngine_MonoBehaviour_o *)v5,
      v5->fields.playMovieCoroutine,
      0LL);
  }
}


void __fastcall GalleryFullScreenListViewItemDraw__StopMovie(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct CRIMoviePlayer_o *moviePlayer; // x0

  moviePlayer = this->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_7;
  if ( moviePlayer->fields._player_k__BackingField && CRIMoviePlayer__IsPlaying(moviePlayer, 0LL) )
  {
    moviePlayer = this->fields.moviePlayer;
    if ( moviePlayer )
    {
      CRIMoviePlayer__MovieStop(moviePlayer, 0LL);
      return;
    }
LABEL_7:
    sub_1BC3264(moviePlayer, method);
  }
}


void __fastcall GalleryFullScreenListViewItemDraw___DownloadMovieAsset_b__30_0(
        GalleryFullScreenListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  this->fields.setDataWait = 0;
}


bool __fastcall GalleryFullScreenListViewItemDraw___PlayMovieCoroutine_b__33_0(
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
    sub_1BC3264(this, method);
  }
  name = data->fields.name;
  AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0LL);
  return System_String__op_Inequality(name, AssetPath, 0LL);
}


void __fastcall GalleryFullScreenListViewItemDraw___PlayMovie_b__34_0(
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
  if ( (byte_4AFD0D7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (GalleryFullScreenListViewItemDraw_o *)sub_1BC3008(&Method_GalleryFullScreenListViewItemDraw_PlayMovie__, v3);
    byte_4AFD0D7 = 1;
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
    sub_1BC3264(this, method);
  }
  if ( galleryFullScreenListViewItem->fields.isCenterItem )
  {
    v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v2, Method_GalleryFullScreenListViewItemDraw_PlayMovie__, 0LL);
    GalleryFullScreenListViewItemDraw__Init(v2, v6, v7);
  }
}


void __fastcall GalleryFullScreenListViewItemDraw___PlayMovie_b__34_1(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  struct CRIMoviePlayer_o *moviePlayer; // x8
  struct CRIMoviePlayer_o *v10; // x8
  struct CRIMoviePlayer_o *v11; // x8
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  struct CRIMoviePlayer_o *v13; // x8
  System_Collections_IEnumerator_o *seekSequenceCoroutine; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CRIMoviePlayer_o *v17; // x21
  System_Action_o *v18; // x22
  struct System_Collections_IEnumerator_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4AFD0D8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&BgmManager_TypeInfo, v3);
    sub_1BC3008(&Method_GalleryFullScreenListViewItemDraw_OpenPause__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&TouchEffectManager_TypeInfo, v6);
    byte_4AFD0D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0LL);
  moviePlayer = this->fields.moviePlayer;
  if ( !moviePlayer )
    goto LABEL_27;
  Instance = (CommonUI_o *)moviePlayer->fields._player_k__BackingField;
  if ( !Instance )
    goto LABEL_27;
  Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0LL);
  if ( (_DWORD)Instance != 7 )
  {
    v10 = this->fields.moviePlayer;
    if ( !v10 )
      goto LABEL_27;
    Instance = (CommonUI_o *)v10->fields._player_k__BackingField;
    if ( !Instance )
      goto LABEL_27;
    Instance = (CommonUI_o *)CriMana_Player__get_status((CriMana_Player_o *)Instance, 0LL);
    if ( (_DWORD)Instance == 6 )
    {
      v11 = this->fields.moviePlayer;
      if ( !v11 )
        goto LABEL_27;
      Instance = (CommonUI_o *)v11->fields._player_k__BackingField;
      if ( !Instance )
        goto LABEL_27;
      Instance = (CommonUI_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)Instance, 0LL);
      if ( Instance )
      {
        galleryFullScreenListViewItem = this->fields.galleryFullScreenListViewItem;
        if ( !galleryFullScreenListViewItem )
          goto LABEL_27;
        if ( galleryFullScreenListViewItem->fields.isCenterItem )
        {
          Instance = (CommonUI_o *)this->fields.moviePlayer;
          if ( Instance )
          {
            CRIMoviePlayer__SetVolume((CRIMoviePlayer_o *)Instance, 0.0, 0LL);
            v13 = this->fields.moviePlayer;
            if ( v13 )
            {
              Instance = (CommonUI_o *)v13->fields._player_k__BackingField;
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
                  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.seekSequenceCoroutine, 0, v15, v16);
                }
                v17 = this->fields.moviePlayer;
                v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                System_Action___ctor(
                  v18,
                  (Il2CppObject *)this,
                  Method_GalleryFullScreenListViewItemDraw_OpenPause__,
                  0LL);
                if ( v17 )
                {
                  v19 = CRIMoviePlayer__SeekSequence(v17, 0, v18, 0LL);
                  this->fields.seekSequenceCoroutine = v19;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.seekSequenceCoroutine, (int32_t)v19, v20, v21);
                  UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                    (UnityEngine_MonoBehaviour_o *)this,
                    this->fields.seekSequenceCoroutine,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_27:
          sub_1BC3264(Instance, v8);
        }
      }
    }
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


bool __fastcall GalleryFullScreenListViewItemDraw___SetMovieDataCoroutine_b__31_0(
        GalleryFullScreenListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.setDataWait;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33___ctor(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33__MoveNext(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *v3; // x19
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
  if ( (byte_4AFD0D9 & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_bool___, method);
    sub_1BC3008(&System_Func_bool__TypeInfo, v4);
    sub_1BC3008(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__33_0__, v5);
    this = (GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *)sub_1BC3008(
                                                                              &UnityEngine_WaitWhile_TypeInfo,
                                                                              v6);
    byte_4AFD0D9 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BC3264(this, method);
    GalleryFullScreenListViewItemDraw__SetMovieCallBack(
      _4__this,
      v3->fields.enableControlCallBack,
      v3->fields.endFullScreenAction,
      v2);
    GalleryFullScreenListViewItemDraw__PlayMovie(_4__this, v14);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)v3->fields.enableControlCallBack,
      0,
      (const MethodInfo_2F513BC *)Method_ActionExtensions_Call_bool___);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v9 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      (Il2CppObject *)_4__this,
      Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_b__33_0__,
      0LL);
    v10 = (UnityEngine_WaitWhile_o *)sub_1BC3254(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v10, v9, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v10;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.__2__current, (int32_t)v10, v11, v12);
    result = 1;
    v3->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__PlayMovieCoroutine_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25___ctor(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25__MoveNext(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *v4; // x20
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
  if ( (byte_4AFD0DA & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)sub_1BC3008(&StringLiteral_1039/*"/"*/, v6);
    byte_4AFD0DA = 1;
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
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)AssetData__GetObject_object__50213776(
                                                                            data,
                                                                            v4->fields.objName,
                                                                            (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
      backTexture = _4__this->fields.backTexture;
      if ( !backTexture )
        goto LABEL_25;
      v16 = (UnityEngine_Object_o *)this;
      ((void (__fastcall *)(struct ExUITexture_o *, GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *, Il2CppMethodPointer))backTexture->klass->vtable._27_set_mainTexture.method)(
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
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)_4__this->fields.backTexture;
      if ( !this )
        goto LABEL_25;
      (*(void (__fastcall **)(GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *, _QWORD, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        0LL,
        this->klass[1].vtable._0_Equals.methodPtr);
    }
    ActionExtensions__Call(v4->fields.callAction, 0LL);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)_4__this->fields.backTexture;
    if ( this )
    {
      this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)_4__this->fields.moviePlayer;
        if ( this )
        {
          this = (GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *)UnityEngine_Component__get_gameObject(
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
    sub_1BC3264(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  assetPath = v4->fields.assetPath;
  v4->fields._imgName_5__2 = assetPath;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._imgName_5__2, (int32_t)assetPath, v2, v3);
  if ( System_String__IsNullOrEmpty(v4->fields.objName, 0LL) )
  {
    v4->fields.objName = 0LL;
    p_objName = (CGThumbnailListItem_o *)&v4->fields.objName;
    v13 = 0;
  }
  else
  {
    v19 = System_String__Concat_62386896(
            v4->fields.assetPath,
            (System_String_o *)StringLiteral_1039/*"/"*/,
            v4->fields.objName,
            0LL);
    v13 = (int)v19;
    v4->fields._imgName_5__2 = v19;
    p_objName = (CGThumbnailListItem_o *)&v4->fields._imgName_5__2;
  }
  sub_1BC2FAC(p_objName, v13, v10, v11);
  v21 = GalleryFullScreenListViewItemDraw__SetDataCoroutine(_4__this, v4->fields._imgName_5__2, v20);
  v4->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BC2FAC(p__2__current, (int32_t)v21, v23, v24);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetCGCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26___ctor(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26__MoveNext(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_o *this,
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
    sub_1BC3264(this, method);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, 0, v8, v9);
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


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetDataCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31___ctor(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31__MoveNext(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *v2; // x20
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
  const MethodInfo *v18; // x2
  GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct GalleryFullScreenListViewItem_o *galleryFullScreenListViewItem; // x8
  System_String_o *v23; // x21
  bool IsFullScreenMovie; // w8
  int32_t v25; // w21
  UIWidget_o *movieTexture; // x22
  UIWidget_o *v27; // x22
  AssetData_o *data; // x0
  System_String_o *Empty; // x0
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4AFD0DB & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&FSUtility_TypeInfo, v3);
    sub_1BC3008(&System_Func_bool__TypeInfo, v4);
    sub_1BC3008(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__31_0__, v5);
    sub_1BC3008(&string_TypeInfo, v6);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)sub_1BC3008(
                                                                                 &UnityEngine_WaitWhile_TypeInfo,
                                                                                 v7);
    byte_4AFD0DB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    assetPath = v2->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)AssetManager__getAsset(0, assetPath, 0LL);
    if ( !_4__this )
      goto LABEL_35;
    v19 = this;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)GalleryFullScreenListViewItemDraw__IsSameName(
                                                                                 _4__this,
                                                                                 v2->fields.assetPath,
                                                                                 v18);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this->fields.data = (struct AssetData_o *)v19;
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.data, (int32_t)v19, v20, v21);
    }
    galleryFullScreenListViewItem = _4__this->fields.galleryFullScreenListViewItem;
    if ( !galleryFullScreenListViewItem )
      goto LABEL_35;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)galleryFullScreenListViewItem->fields._GalleryResourceEntity_k__BackingField;
    if ( !this )
      goto LABEL_35;
    v23 = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)this, 0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsFullScreenMovie = FSUtility__IsFullScreenMovie(v23, 0LL);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)_4__this->fields.backBgTexture;
    v25 = IsFullScreenMovie ? 576 : 756;
    if ( !this )
      goto LABEL_35;
    movieTexture = (UIWidget_o *)_4__this->fields.movieTexture;
    UIWidget__set_width((UIWidget_o *)this, 1344, 0LL);
    if ( !movieTexture )
      goto LABEL_35;
    UIWidget__set_width(movieTexture, 1344, 0LL);
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)_4__this->fields.backBgTexture;
    if ( !this )
      goto LABEL_35;
    v27 = (UIWidget_o *)_4__this->fields.movieTexture;
    UIWidget__set_height((UIWidget_o *)this, v25, 0LL);
    if ( !v27 )
      goto LABEL_35;
    UIWidget__set_height(v27, v25, 0LL);
    data = _4__this->fields.data;
    if ( !data || (Empty = AssetData__get_Path(data, 0LL)) == 0LL )
      Empty = string_TypeInfo->static_fields->Empty;
    _4__this->fields.setDataResult = !System_String__IsNullOrEmpty(Empty, 0LL);
    ActionExtensions__Call(v2->fields.callAction, 0LL);
    if ( _4__this->fields.setDataResult )
      return 0;
    this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)_4__this->fields.backTexture;
    if ( !this
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
          (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)_4__this->fields.moviePlayer) == 0LL)
      || (this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL)) == 0LL )
    {
LABEL_35:
      sub_1BC3264(this, method);
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
    goto LABEL_35;
  this = (GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *)_4__this->fields.moviePlayer;
  if ( !this )
    goto LABEL_35;
  v31.fields.r = 0.0;
  v31.fields.g = 0.0;
  v31.fields.b = 0.0;
  v31.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)this, v31, 0LL);
  v10 = 1;
  *(_WORD *)&_4__this->fields.setDataWait = 1;
  GalleryFullScreenListViewItemDraw__DownloadMovieAsset(_4__this, v2->fields.assetPath, v11);
  v12 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)_4__this,
    Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_b__31_0__,
    0LL);
  v13 = (UnityEngine_WaitWhile_o *)sub_1BC3254(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v13, v12, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BC2FAC(p__2__current, (int32_t)v13, v15, v16);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v10;
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31__System_IDisposable_Dispose(
        GalleryFullScreenListViewItemDraw__SetMovieDataCoroutine_d__31_o *this,
        const MethodInfo *method)
{
  ;
}