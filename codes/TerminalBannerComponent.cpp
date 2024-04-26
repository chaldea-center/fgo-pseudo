void __fastcall TerminalBannerComponent___cctor(const MethodInfo *method)
{
  TerminalBannerComponent_c *v1; // x8

  if ( (byte_434EE46 & 1) == 0 )
  {
    sub_B70694(&TerminalBannerComponent_TypeInfo);
    byte_434EE46 = 1;
  }
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS = 480.0;
  v1 = TerminalBannerComponent_TypeInfo;
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_AUTO_MOVE_TIME_START = 4.0;
  v1->static_fields->BANNER_AUTO_MOVE_TIME_INTERVAL = 3.0;
  v1->static_fields->TGT_SPD_RATE = 0.25;
}


void __fastcall TerminalBannerComponent___ctor(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalBannerComponent__DestroyBanner(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  struct UnityEngine_Texture2D_o **p_mBannerTex2D; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_434EE3F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EE3F = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
    this->fields.mBannerWWW = 0LL;
    sub_B70630(&this->fields.mBannerWWW);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = &this->fields.mBannerTex2D;
  v5 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_mBannerTex2D;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v7, 0LL);
    *p_mBannerTex2D = 0LL;
    sub_B70630(p_mBannerTex2D);
  }
}


float __fastcall TerminalBannerComponent__GetPos(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  return GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
}


int32_t __fastcall TerminalBannerComponent__GetPosIdx(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s8
  TerminalBannerComponent_c *v5; // x0
  float v6; // s0

  if ( (byte_434EE44 & 1) == 0 )
  {
    sub_B70694(&TerminalBannerComponent_TypeInfo);
    byte_434EE44 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v5 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v5 = TerminalBannerComponent_TypeInfo;
  }
  v6 = floorf(
         (float)(LocalPositionX + (float)(v5->static_fields->BANNER_INTERVAL_POS * 0.5))
       / v5->static_fields->BANNER_INTERVAL_POS);
  if ( v6 == INFINITY )
    return (int)-v6;
  else
    return (int)v6;
}


bool __fastcall TerminalBannerComponent__IsFocus(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  return TerminalBannerComponent__GetPosIdx(this, method) == 0;
}


void __fastcall TerminalBannerComponent__Move(
        TerminalBannerComponent_o *this,
        QuestBoardListViewItemDraw_o *questBoardDraw,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  float LocalPositionX; // s0
  float v9; // s8
  float mTgtPos; // s0
  float v11; // s0
  float v12; // s9
  TerminalBannerComponent_c *v13; // x0
  float mPosMin; // s0
  float v15; // s8
  float mPosMax; // s1
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_434EE43 & 1) == 0 )
  {
    sub_B70694(&TerminalBannerComponent_TypeInfo);
    byte_434EE43 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( !questBoardDraw )
    sub_B7076C(v6, v7);
  v9 = LocalPositionX;
  mTgtPos = this->fields.mTgtPos;
  if ( questBoardDraw->fields.mIsEnableDragX )
  {
    v11 = mTgtPos + questBoardDraw->fields.mTouchPosDif;
    this->fields.mTgtPos = v11;
    v12 = v11 - v9;
    if ( questBoardDraw->fields.mIsEnableDragX )
      goto LABEL_12;
  }
  else
  {
    v12 = mTgtPos - v9;
  }
  v13 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v13 = TerminalBannerComponent_TypeInfo;
  }
  v12 = v12 * v13->static_fields->TGT_SPD_RATE;
LABEL_12:
  mPosMin = this->fields.mPosMin;
  v15 = v9 + v12;
  if ( v15 <= mPosMin )
  {
    mPosMax = this->fields.mPosMin;
    mPosMin = this->fields.mPosMax;
  }
  else
  {
    mPosMax = this->fields.mPosMax;
    if ( v15 <= mPosMax )
      goto LABEL_17;
  }
  v15 = mPosMin + (float)(v15 - mPosMax);
  this->fields.mTgtPos = mPosMin + (float)(this->fields.mTgtPos - mPosMax);
LABEL_17:
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v17, v15, 0LL);
}


void __fastcall TerminalBannerComponent__OnDisable(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v4; // x1

  started = TerminalBannerComponent__StartDownloadBanner(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  TerminalBannerComponent__DestroyBanner(this, v4);
}


void __fastcall TerminalBannerComponent__OnPress(
        TerminalBannerComponent_o *this,
        QuestBoardListViewItemDraw_o *qdraw,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.mTgtPos = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
}


void __fastcall TerminalBannerComponent__OnPull(
        TerminalBannerComponent_o *this,
        QuestBoardListViewItemDraw_o *qdraw,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  if ( !qdraw )
    sub_B7076C(this, 0LL);
  if ( QuestBoardListViewItemDraw__IsFlickL(qdraw, 0LL) )
  {
    v6 = 1;
  }
  else if ( QuestBoardListViewItemDraw__IsFlickR(qdraw, 0LL) )
  {
    v6 = 2;
  }
  else
  {
    v6 = 0;
  }
  TerminalBannerComponent__StartAutoMove(this, v6, v5);
}


void __fastcall TerminalBannerComponent__SetBannerTexture(
        TerminalBannerComponent_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mBannerTex; // x0
  const MethodInfo *v5; // x1

  mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
  if ( !mBannerTex
    || (((void (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Texture2D_o *, const char *))mBannerTex->klass[2]._1.gc_desc)(
          mBannerTex,
          tex,
          mBannerTex->klass[2]._1.name),
        (mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))mBannerTex->klass[2]._1.typeMetadataHandle)(
          mBannerTex,
          mBannerTex->klass[2]._1.interopData),
        (mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp) == 0LL)
    || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL)) == 0LL )
  {
    sub_B7076C(mBannerTex, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 0, 0LL);
  TerminalBannerComponent__StartLoadAndDisp_BannerNext(this, v5);
}


void __fastcall TerminalBannerComponent__SetPos(TerminalBannerComponent_o *this, float pos, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, pos, 0LL);
}


void __fastcall TerminalBannerComponent__SetTgtPos_ByPosIdx(
        TerminalBannerComponent_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v5; // x0

  if ( (byte_434EE45 & 1) == 0 )
  {
    sub_B70694(&TerminalBannerComponent_TypeInfo);
    byte_434EE45 = 1;
  }
  v5 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v5 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v5->static_fields->BANNER_INTERVAL_POS * (float)posIndex;
}


void __fastcall TerminalBannerComponent__Setup(
        TerminalBannerComponent_o *this,
        int32_t idx,
        BannerEntity_o *bannerEnt,
        int32_t bannerCount,
        TerminalBannerComponent_o *bannerNext,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t BannerId; // w0
  TerminalBannerComponent_c *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TerminalBannerComponent_c *v16; // x8

  if ( (byte_434EE40 & 1) == 0 )
  {
    sub_B70694(&TerminalBannerComponent_TypeInfo);
    byte_434EE40 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_B70630(&this->fields.mBannerEntity);
  if ( !bannerEnt )
    sub_B7076C(v11, v12);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0LL);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_B70630(&this->fields.mBannerNext);
  v14 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v14 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v14->static_fields->BANNER_INTERVAL_POS * (float)idx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPos, 0LL);
  v16 = TerminalBannerComponent_TypeInfo;
  this->fields.mPosMin = -TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS;
  this->fields.mPosMax = v16->static_fields->BANNER_INTERVAL_POS * (float)(bannerCount - 1);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalBannerComponent__StartAutoMove(
        TerminalBannerComponent_o *this,
        int32_t dir,
        const MethodInfo *method)
{
  int32_t PosIdx; // w1
  const MethodInfo *v6; // x2
  int v7; // w8

  PosIdx = TerminalBannerComponent__GetPosIdx(this, *(const MethodInfo **)&dir);
  if ( dir )
  {
    if ( dir == 1 )
      v7 = -1;
    else
      v7 = 1;
    PosIdx += v7;
  }
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, PosIdx, v6);
}


void __fastcall TerminalBannerComponent__StartAutoMoveL(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  v3 = TerminalBannerComponent__GetPosIdx(this, method) - 1;
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, v3, v4);
}


void __fastcall TerminalBannerComponent__StartAutoMoveR(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  v3 = TerminalBannerComponent__GetPosIdx(this, method) + 1;
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, v3, v4);
}


System_Collections_IEnumerator_o *__fastcall TerminalBannerComponent__StartDownloadBanner(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_434EE3E & 1) == 0 )
  {
    sub_B70694(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
    byte_434EE3E = 1;
  }
  v3 = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_B70764(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
  TerminalBannerComponent__StartDownloadBanner_d__24___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v3->fields.__4__this = this;
  sub_B70630(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v4; // x2
  System_String_o *WebViewAddress_25961988; // x20
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *mBannerTex; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434EE41 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EE41 = 1;
  }
  mBannerTex2D = (UnityEngine_Object_o *)this->fields.mBannerTex2D;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mBannerTex2D, 0LL, 0LL) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    WebViewAddress_25961988 = NetworkManager__getWebViewAddress_25961988(7, 0LL);
    mBannerId = this->fields.mBannerId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId, v6);
    this->fields.mBannerUrl = System_String__Format(WebViewAddress_25961988, v7, 0LL);
    sub_B70630(&this->fields.mBannerUrl);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_20;
    mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL);
    if ( !mBannerTex )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0LL);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_20;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))mBannerTex->klass[2]._1.gc_desc)(
      mBannerTex,
      0LL,
      mBannerTex->klass[2]._1.name);
    this->fields.mBannerRetryCount = 0;
    mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mBannerTex )
      goto LABEL_20;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)mBannerTex, 0LL) )
    {
      started = TerminalBannerComponent__StartDownloadBanner(this, v8);
      UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL)) == 0LL )
    {
LABEL_20:
      sub_B7076C(mBannerTex, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0LL);
  }
  else
  {
    TerminalBannerComponent__SetBannerTexture(this, this->fields.mBannerTex2D, v4);
  }
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp_BannerNext(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mBannerNext; // x20
  const MethodInfo *v4; // x1
  TerminalBannerComponent_o *v5; // x0

  if ( (byte_434EE42 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EE42 = 1;
  }
  mBannerNext = (UnityEngine_Object_o *)this->fields.mBannerNext;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mBannerNext, 0LL, 0LL) )
  {
    v5 = this->fields.mBannerNext;
    if ( !v5 )
      sub_B7076C(0LL, v4);
    TerminalBannerComponent__StartLoadAndDisp(v5, v4);
  }
}


BannerEntity_o *__fastcall TerminalBannerComponent__get_BannerEnt(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mBannerEntity;
}


int32_t __fastcall TerminalBannerComponent__get_Idx(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIdx;
}


void __fastcall TerminalBannerComponent__StartDownloadBanner_d__24___ctor(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalBannerComponent__StartDownloadBanner_d__24__MoveNext(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v2; // x21
  int32_t _1__state; // w8
  struct TerminalBannerComponent_o *_4__this; // x19
  System_String_o *mBannerUrl; // x20
  UnityEngine_Networking_UnityWebRequest_o *v6; // x22
  TerminalBannerComponent__StartDownloadBanner_d__24_o **v7; // x20
  UnityEngine_Networking_DownloadHandlerTexture_o *v8; // x23
  Il2CppObject **p__2__current; // x21
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v10; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v14; // x22
  UnityEngine_Object_o *texture; // x21
  System_String_o *v16; // x0
  bool IsNullOrEmpty; // w0
  int v18; // w21
  TerminalBannerComponent_c *v19; // x0
  System_Collections_IEnumerator_o *started; // x0

  v2 = this;
  if ( (byte_434F119 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalBannerComponent_TypeInfo);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_B70694(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    byte_434F119 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    p_mBannerWWW = (TerminalBannerComponent__StartDownloadBanner_d__24_o **)&_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_28;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_17;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_39;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v2->fields._texDl_5__2;
      if ( !this
        || (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                             (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                             0LL),
            !v2->fields._texDl_5__2) )
      {
LABEL_39:
        sub_B7076C(this, method);
      }
      v14 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v2->fields._texDl_5__2,
                                          0LL);
    }
    else
    {
LABEL_17:
      texture = 0LL;
      v14 = 0LL;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0LL) )
    {
      goto LABEL_28;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_39;
    v16 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v16, 0LL);
    if ( !v14 || !IsNullOrEmpty || !v14->fields.__2__current )
      goto LABEL_28;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
    {
      _4__this->fields.mBannerTex2D = (struct UnityEngine_Texture2D_o *)texture;
      sub_B70630(&_4__this->fields.mBannerTex2D);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, 0LL);
    }
    else
    {
LABEL_28:
      v18 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v18;
      v19 = TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v19 = TerminalBannerComponent_TypeInfo;
      }
      if ( v18 <= v19->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, 0LL);
      }
    }
    v10 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v10;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)v10, 0LL);
    *p_mBannerWWW = 0LL;
    sub_B70630(&_4__this->fields.mBannerWWW);
LABEL_36:
    LOBYTE(v10) = 0;
    return (char)v10;
  }
  if ( _1__state )
    goto LABEL_36;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  TerminalBannerComponent__DestroyBanner(_4__this, 0LL);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v6 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B70764(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v6, mBannerUrl, 0LL);
  v7 = (TerminalBannerComponent__StartDownloadBanner_d__24_o **)&_4__this->fields.mBannerWWW;
  _4__this->fields.mBannerWWW = v6;
  sub_B70630(&_4__this->fields.mBannerWWW);
  v8 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B70764(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v8, 0, 0LL);
  v2->fields._texDl_5__2 = v8;
  sub_B70630(&v2->fields._texDl_5__2);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)_4__this->fields.mBannerWWW;
  if ( !this )
    goto LABEL_39;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__2,
    0LL);
  this = *v7;
  if ( !*v7 )
    goto LABEL_39;
  v2->fields.__2__current = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                                              0LL);
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
  LOBYTE(v10) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)v10;
}


Il2CppObject *__fastcall TerminalBannerComponent__StartDownloadBanner_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalBannerComponent__StartDownloadBanner_d__24__System_Collections_IEnumerator_Reset(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall TerminalBannerComponent__StartDownloadBanner_d__24__System_Collections_IEnumerator_get_Current(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalBannerComponent__StartDownloadBanner_d__24__System_IDisposable_Dispose(
        TerminalBannerComponent__StartDownloadBanner_d__24_o *this,
        const MethodInfo *method)
{
  ;
}