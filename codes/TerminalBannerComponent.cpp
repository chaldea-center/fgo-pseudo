void TerminalBannerComponent___cctor(const MethodInfo *method)
{
  struct TerminalBannerComponent_StaticFields *static_fields; // x8

  if ( (byte_4C34C67 & 1) == 0 )
  {
    sub_1C32C20(&TerminalBannerComponent_TypeInfo);
    byte_4C34C67 = 1;
  }
  static_fields = TerminalBannerComponent_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_OWORD *)&static_fields->BANNER_INTERVAL_POS = xmmword_C0C770;
}


void TerminalBannerComponent___ctor(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TerminalBannerComponent__DestroyBanner(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_mBannerTex2D; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C34C60 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34C60 = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0);
    this->fields.mBannerWWW = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBannerWWW, 0, v4, v5);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = (CGThumbnailListItem_o *)&this->fields.mBannerTex2D;
  v7 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_mBannerTex2D->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(klass, 0);
    p_mBannerTex2D->klass = 0;
    sub_1C32BC4(p_mBannerTex2D, 0, v10, v11);
  }
}


float TerminalBannerComponent__GetPos(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  return GameObjectExtensions__GetLocalPositionX(gameObject, 0);
}


int32_t TerminalBannerComponent__GetPosIdx(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  TerminalBannerComponent_c *v5; // x0
  float v6; // s8
  float v7; // s0
  int32_t v8; // w8

  if ( (byte_4C34C65 & 1) == 0 )
  {
    sub_1C32C20(&TerminalBannerComponent_TypeInfo);
    byte_4C34C65 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  v5 = TerminalBannerComponent_TypeInfo;
  v6 = LocalPositionX;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v5 = TerminalBannerComponent_TypeInfo;
  }
  v7 = (float)(v6 + (float)(v5->static_fields->BANNER_INTERVAL_POS * 0.5)) / v5->static_fields->BANNER_INTERVAL_POS;
  v8 = vcvtms_s32_f32(v7);
  if ( floorf(v7) == INFINITY )
    return 0x80000000;
  else
    return v8;
}


bool TerminalBannerComponent__IsFocus(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  return TerminalBannerComponent__GetPosIdx(this, method) == 0;
}


void TerminalBannerComponent__Move(
        TerminalBannerComponent_o *this,
        QuestBoardListViewItemDraw_o *questBoardDraw,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x0
  float LocalPositionX; // s0
  float v8; // s8
  float mTgtPos; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s9
  TerminalBannerComponent_c *v13; // x0
  float mPosMin; // s0
  float v15; // s8
  float mPosMax; // s1
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4C34C64 & 1) == 0 )
  {
    sub_1C32C20(&TerminalBannerComponent_TypeInfo);
    byte_4C34C64 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  if ( !questBoardDraw )
    sub_1C32E7C(v6);
  v8 = LocalPositionX;
  mTgtPos = this->fields.mTgtPos;
  if ( questBoardDraw->fields.mIsEnableDragX )
  {
    v10 = mTgtPos + questBoardDraw->fields.mTouchPosDif;
    this->fields.mTgtPos = v10;
    v11 = v10 - v8;
  }
  else
  {
    v12 = mTgtPos - v8;
    v13 = TerminalBannerComponent_TypeInfo;
    if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
      v13 = TerminalBannerComponent_TypeInfo;
    }
    v11 = v12 * v13->static_fields->TGT_SPD_RATE;
  }
  mPosMin = this->fields.mPosMin;
  v15 = v8 + v11;
  if ( v15 <= mPosMin )
  {
    mPosMax = this->fields.mPosMin;
    mPosMin = this->fields.mPosMax;
  }
  else
  {
    mPosMax = this->fields.mPosMax;
    if ( v15 <= mPosMax )
      goto LABEL_14;
  }
  v15 = mPosMin + (float)(v15 - mPosMax);
  this->fields.mTgtPos = mPosMin + (float)(this->fields.mTgtPos - mPosMax);
LABEL_14:
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v17, v15, 0);
}


void TerminalBannerComponent__OnDisable(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v4; // x1

  started = TerminalBannerComponent__StartDownloadBanner(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0);
  TerminalBannerComponent__DestroyBanner(this, v4);
}


void TerminalBannerComponent__OnPress(
        TerminalBannerComponent_o *this,
        QuestBoardListViewItemDraw_o *qdraw,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mTgtPos = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
}


void TerminalBannerComponent__OnPull(
        TerminalBannerComponent_o *this,
        QuestBoardListViewItemDraw_o *qdraw,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t PosIdx; // w0
  const MethodInfo *v7; // x2
  int v8; // w8
  bool IsFlickR; // w20
  const MethodInfo *v10; // x1

  if ( !qdraw )
    sub_1C32E7C(this);
  if ( QuestBoardListViewItemDraw__IsFlickL(qdraw, 0) )
  {
    PosIdx = TerminalBannerComponent__GetPosIdx(this, v5);
    v8 = -1;
  }
  else
  {
    IsFlickR = QuestBoardListViewItemDraw__IsFlickR(qdraw, 0);
    PosIdx = TerminalBannerComponent__GetPosIdx(this, v10);
    v8 = IsFlickR;
  }
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, v8 + PosIdx, v7);
}


void TerminalBannerComponent__SetBannerTexture(
        TerminalBannerComponent_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mBannerTex; // x0
  const MethodInfo *v5; // x1

  mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
  if ( !mBannerTex
    || (((void (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Texture2D_o *, void *))mBannerTex->klass[1].vtable._3_ToString.method)(
          mBannerTex,
          tex,
          mBannerTex->klass[2]._1.image),
        (mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))mBannerTex->klass[2]._1.parent)(
          mBannerTex,
          mBannerTex->klass[2]._1.generic_class),
        (mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp) == 0)
    || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0)) == 0 )
  {
    sub_1C32E7C(mBannerTex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 0, 0);
  TerminalBannerComponent__StartLoadAndDisp_BannerNext(this, v5);
}


void TerminalBannerComponent__SetBannerTextureActive(
        TerminalBannerComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.mBannerTex, isActive, 0);
}


void TerminalBannerComponent__SetPos(TerminalBannerComponent_o *this, float pos, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, pos, 0);
}


void TerminalBannerComponent__SetTgtPos_ByPosIdx(
        TerminalBannerComponent_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v5; // x0

  if ( (byte_4C34C66 & 1) == 0 )
  {
    sub_1C32C20(&TerminalBannerComponent_TypeInfo);
    byte_4C34C66 = 1;
  }
  v5 = TerminalBannerComponent_TypeInfo;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v5 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v5->static_fields->BANNER_INTERVAL_POS * (float)posIndex;
}


// local variable allocation has failed, the output may be wrong!
void TerminalBannerComponent__Setup(
        TerminalBannerComponent_o *this,
        int32_t idx,
        BannerEntity_o *bannerEnt,
        int32_t bannerCount,
        TerminalBannerComponent_o *bannerNext,
        const MethodInfo *method)
{
  __int64 v11; // x0
  int32_t BannerId; // w0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  TerminalBannerComponent_c *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float BANNER_INTERVAL_POS; // s0

  if ( (byte_4C34C61 & 1) == 0 )
  {
    sub_1C32C20(&TerminalBannerComponent_TypeInfo);
    byte_4C34C61 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.mBannerEntity,
    (int32_t)bannerEnt,
    (int32_t)bannerEnt,
    *(const MethodInfo **)&bannerCount);
  if ( !bannerEnt )
    sub_1C32E7C(v11);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBannerNext, (int32_t)bannerNext, v13, v14);
  v15 = TerminalBannerComponent_TypeInfo;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v15 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v15->static_fields->BANNER_INTERVAL_POS * (float)idx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPos, 0);
  BANNER_INTERVAL_POS = TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS;
  this->fields.mPosMin = -BANNER_INTERVAL_POS;
  this->fields.mPosMax = BANNER_INTERVAL_POS * (float)(bannerCount - 1);
}


// local variable allocation has failed, the output may be wrong!
void TerminalBannerComponent__StartAutoMove(TerminalBannerComponent_o *this, int32_t dir, const MethodInfo *method)
{
  int32_t PosIdx; // w0
  const MethodInfo *v6; // x2
  int v7; // w8

  PosIdx = TerminalBannerComponent__GetPosIdx(this, *(const MethodInfo **)&dir);
  if ( dir == 1 )
    v7 = -1;
  else
    v7 = 1;
  if ( !dir )
    v7 = 0;
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, PosIdx + v7, v6);
}


void TerminalBannerComponent__StartAutoMoveL(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  v3 = TerminalBannerComponent__GetPosIdx(this, method) - 1;
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, v3, v4);
}


void TerminalBannerComponent__StartAutoMoveR(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  v3 = TerminalBannerComponent__GetPosIdx(this, method) + 1;
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, v3, v4);
}


System_Collections_IEnumerator_o *TerminalBannerComponent__StartDownloadBanner(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C34C5F & 1) == 0 )
  {
    sub_1C32C20(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
    byte_4C34C5F = 1;
  }
  v3 = sub_1C32E6C(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v4; // x2
  System_String_o *WebViewAddress_41280180; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Component_o *mBannerTex; // x0
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C34C62 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34C62 = 1;
  }
  mBannerTex2D = (UnityEngine_Object_o *)this->fields.mBannerTex2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mBannerTex2D, 0, 0) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_41280180 = NetworkManager__getWebViewAddress_41280180(7, 0);
    mBannerId = this->fields.mBannerId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId, v6, v7, v8, v9, v10, v11);
    v13 = System_String__Format(WebViewAddress_41280180, v12, 0);
    this->fields.mBannerUrl = v13;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBannerUrl, (int32_t)v13, v14, v15);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_18;
    mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0);
    if ( !mBannerTex )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))mBannerTex->klass[1].vtable._3_ToString.method)(
      mBannerTex,
      0,
      mBannerTex->klass[2]._1.image);
    this->fields.mBannerRetryCount = 0;
    mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !mBannerTex )
      goto LABEL_18;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)mBannerTex, 0) )
    {
      started = TerminalBannerComponent__StartDownloadBanner(this, v17);
      UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, started, 0);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0)) == 0 )
    {
LABEL_18:
      sub_1C32E7C(mBannerTex);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0);
  }
  else
  {
    TerminalBannerComponent__SetBannerTexture(this, this->fields.mBannerTex2D, v4);
  }
}


void TerminalBannerComponent__StartLoadAndDisp_BannerNext(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBannerNext; // x20
  const MethodInfo *v4; // x1
  TerminalBannerComponent_o *v5; // x0

  if ( (byte_4C34C63 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34C63 = 1;
  }
  mBannerNext = (UnityEngine_Object_o *)this->fields.mBannerNext;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBannerNext, 0, 0) )
  {
    v5 = this->fields.mBannerNext;
    if ( !v5 )
      sub_1C32E7C(0);
    TerminalBannerComponent__StartLoadAndDisp(v5, v4);
  }
}


BannerEntity_o *TerminalBannerComponent__get_BannerEnt(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.mBannerEntity;
}


int32_t TerminalBannerComponent__get_Idx(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIdx;
}


void TerminalBannerComponent__StartDownloadBanner_d__24___ctor(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalBannerComponent__StartDownloadBanner_d__24__MoveNext(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v2; // x21
  int32_t _1__state; // w8
  struct TerminalBannerComponent_o *_4__this; // x19
  System_String_o *mBannerUrl; // x20
  UnityEngine_Networking_UnityWebRequest_o *v6; // x22
  CGThumbnailListItem_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v13; // x0
  CGThumbnailListItem_o *p__2__current; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v17; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v21; // x22
  int32_t v22; // w24
  int32_t v23; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v25; // x23
  System_Byte_array *data; // x0
  System_String_o *v27; // x0
  bool IsNullOrEmpty; // w0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int v31; // w21
  TerminalBannerComponent_c *v32; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2

  v2 = this;
  if ( (byte_4C34C68 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalBannerComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Texture2D_TypeInfo);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_1C32C20(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    byte_4C34C68 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_43;
    p_mBannerWWW = (TerminalBannerComponent__StartDownloadBanner_d__24_o **)&_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_33;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0) )
      goto LABEL_23;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_43;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    if ( System_String__IsNullOrEmpty(error, 0) )
    {
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v2->fields._texDl_5__2;
      if ( !this )
        goto LABEL_43;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                       (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                       0);
      if ( !v2->fields._texDl_5__2 )
        goto LABEL_43;
      v21 = this;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                       v2->fields._texDl_5__2,
                                                                       0);
      if ( !this )
        goto LABEL_43;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                       this,
                                                                       this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
      if ( !v2->fields._texDl_5__2 )
        goto LABEL_43;
      v22 = (int)this;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                       v2->fields._texDl_5__2,
                                                                       0);
      if ( !this
        || (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                             this,
                                                                             this->klass->vtable._6_MoveNext.method),
            !v2->fields._texDl_5__2)
        || (v23 = (int)this,
            (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                              v2->fields._texDl_5__2,
                                                                              0)) == 0)
        || (format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0),
            v25 = (UnityEngine_Texture2D_o *)sub_1C32E6C(UnityEngine_Texture2D_TypeInfo),
            UnityEngine_Texture2D___ctor_71111856(v25, v22, v23, format, 0, 0),
            (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v2->fields._texDl_5__2) == 0) )
      {
LABEL_43:
        sub_1C32E7C(this);
      }
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      UnityEngine_ImageConversion__LoadImage_71331960(v25, data, 0);
    }
    else
    {
LABEL_23:
      v25 = 0;
      v21 = 0;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0) )
    {
      goto LABEL_33;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_43;
    v27 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v27, 0);
    if ( !v21 || !IsNullOrEmpty || !v21->fields.__2__current )
      goto LABEL_33;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0, 0) )
    {
      _4__this->fields.mBannerTex2D = v25;
      sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.mBannerTex2D, (int32_t)v25, v29, v30);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, v36);
    }
    else
    {
LABEL_33:
      v31 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v31;
      v32 = TerminalBannerComponent_TypeInfo;
      if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v32 = TerminalBannerComponent_TypeInfo;
      }
      if ( v31 <= v32->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, method);
      }
    }
    v17 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v17;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)v17, 0);
    *p_mBannerWWW = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, 0, v34, v35);
LABEL_40:
    LOBYTE(v17) = 0;
    return (char)v17;
  }
  if ( _1__state )
    goto LABEL_40;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_43;
  TerminalBannerComponent__DestroyBanner(_4__this, method);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v6 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C32E6C(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v6, mBannerUrl, 0);
  _4__this->fields.mBannerWWW = v6;
  v7 = (CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW;
  sub_1C32BC4(v7, (int32_t)v6, v8, v9);
  v10 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C32E6C(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v10, 0, 0);
  v2->fields._texDl_5__2 = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._texDl_5__2, (int32_t)v10, v11, v12);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v7->klass;
  if ( !v7->klass )
    goto LABEL_43;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__2,
    0);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v7->klass;
  if ( !v7->klass )
    goto LABEL_43;
  v13 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C32BC4(p__2__current, (int32_t)v13, v15, v16);
  LOBYTE(v17) = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return (char)v17;
}


Il2CppObject *TerminalBannerComponent__StartDownloadBanner_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalBannerComponent__StartDownloadBanner_d__24__System_Collections_IEnumerator_Reset(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *TerminalBannerComponent__StartDownloadBanner_d__24__System_Collections_IEnumerator_get_Current(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalBannerComponent__StartDownloadBanner_d__24__System_IDisposable_Dispose(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  ;
}