void __fastcall TerminalBannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalBannerComponent_c *v2; // x8

  if ( (byte_4184564 & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, v1);
    byte_4184564 = 1;
  }
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS = 480.0;
  v2 = TerminalBannerComponent_TypeInfo;
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_AUTO_MOVE_TIME_START = 4.0;
  v2->static_fields->BANNER_AUTO_MOVE_TIME_INTERVAL = 3.0;
  v2->static_fields->TGT_SPD_RATE = 0.25;
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

  if ( (byte_418455D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418455D = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
    this->fields.mBannerWWW = 0LL;
    sub_B2C2F8(&this->fields.mBannerWWW, 0LL);
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
    UnityEngine_Object__Destroy_35314896(v7, 0LL);
    *p_mBannerTex2D = 0LL;
    sub_B2C2F8(p_mBannerTex2D, 0LL);
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

  if ( (byte_4184562 & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, method);
    byte_4184562 = 1;
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

  if ( (byte_4184561 & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, questBoardDraw);
    byte_4184561 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( !questBoardDraw )
    sub_B2C434(v6, v7);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(mBannerTex, tex);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalBannerComponent__SetTgtPos_ByPosIdx(
        TerminalBannerComponent_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v5; // x0

  if ( (byte_4184563 & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&posIndex);
    byte_4184563 = 1;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418455E & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&idx);
    byte_418455E = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_B2C2F8(&this->fields.mBannerEntity, bannerEnt);
  if ( !bannerEnt )
    sub_B2C434(v11, v12);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0LL);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_B2C2F8(&this->fields.mBannerNext, bannerNext);
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

  if ( (byte_418455C & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, method);
    byte_418455C = 1;
  }
  v3 = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_B2C42C(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
  TerminalBannerComponent__StartDownloadBanner_d__24___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v6; // x2
  System_String_o *WebViewAddress_26285648; // x20
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Component_o *mBannerTex; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418455F & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418455F = 1;
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
    WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(7, 0LL);
    mBannerId = this->fields.mBannerId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId);
    v9 = System_String__Format(WebViewAddress_26285648, v8, 0LL);
    this->fields.mBannerUrl = v9;
    sub_B2C2F8(&this->fields.mBannerUrl, v9);
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
      started = TerminalBannerComponent__StartDownloadBanner(this, v10);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL)) == 0LL )
    {
LABEL_20:
      sub_B2C434(mBannerTex, v10);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0LL);
  }
  else
  {
    TerminalBannerComponent__SetBannerTexture(this, this->fields.mBannerTex2D, v6);
  }
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp_BannerNext(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mBannerNext; // x20
  const MethodInfo *v4; // x1
  TerminalBannerComponent_o *v5; // x0

  if ( (byte_4184560 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184560 = 1;
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
      sub_B2C434(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct TerminalBannerComponent_o *_4__this; // x19
  System_String_o *mBannerUrl; // x20
  UnityEngine_Networking_UnityWebRequest_o *v9; // x22
  TerminalBannerComponent__StartDownloadBanner_d__24_o **v10; // x20
  UnityEngine_Networking_DownloadHandlerTexture_o *v11; // x23
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v12; // x0
  Il2CppObject **p__2__current; // x21
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v14; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v18; // x22
  UnityEngine_Object_o *texture; // x21
  System_String_o *v20; // x0
  bool IsNullOrEmpty; // w0
  int v22; // w21
  TerminalBannerComponent_c *v23; // x0
  System_Collections_IEnumerator_o *started; // x0

  v2 = this;
  if ( (byte_41847F3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, v4);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_B2C35C(
                                                                     &UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                                     v5);
    byte_41847F3 = 1;
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
        sub_B2C434(this, method);
      }
      v18 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v2->fields._texDl_5__2,
                                          0LL);
    }
    else
    {
LABEL_17:
      texture = 0LL;
      v18 = 0LL;
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
    v20 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v20, 0LL);
    if ( !v18 || !IsNullOrEmpty || !v18->fields.__2__current )
      goto LABEL_28;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
    {
      _4__this->fields.mBannerTex2D = (struct UnityEngine_Texture2D_o *)texture;
      sub_B2C2F8(&_4__this->fields.mBannerTex2D, texture);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, 0LL);
    }
    else
    {
LABEL_28:
      v22 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v22;
      v23 = TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v23 = TerminalBannerComponent_TypeInfo;
      }
      if ( v22 <= v23->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, 0LL);
      }
    }
    v14 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v14;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)v14, 0LL);
    *p_mBannerWWW = 0LL;
    sub_B2C2F8(&_4__this->fields.mBannerWWW, 0LL);
LABEL_36:
    LOBYTE(v14) = 0;
    return (char)v14;
  }
  if ( _1__state )
    goto LABEL_36;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  TerminalBannerComponent__DestroyBanner(_4__this, 0LL);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v9 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B2C42C(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v9, mBannerUrl, 0LL);
  v10 = (TerminalBannerComponent__StartDownloadBanner_d__24_o **)&_4__this->fields.mBannerWWW;
  _4__this->fields.mBannerWWW = v9;
  sub_B2C2F8(&_4__this->fields.mBannerWWW, v9);
  v11 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B2C42C(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v11, 0, 0LL);
  v2->fields._texDl_5__2 = v11;
  sub_B2C2F8(&v2->fields._texDl_5__2, v11);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)_4__this->fields.mBannerWWW;
  if ( !this )
    goto LABEL_39;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__2,
    0LL);
  this = *v10;
  if ( !*v10 )
    goto LABEL_39;
  v12 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v12);
  LOBYTE(v14) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)v14;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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