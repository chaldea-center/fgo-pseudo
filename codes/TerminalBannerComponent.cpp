void __fastcall TerminalBannerComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalBannerComponent_c *v4; // x8

  if ( (byte_42E5B5D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalBannerComponent_TypeInfo, v1, v2, v3);
    byte_42E5B5D = 1;
  }
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS = 480.0;
  v4 = TerminalBannerComponent_TypeInfo;
  TerminalBannerComponent_TypeInfo->static_fields->BANNER_AUTO_MOVE_TIME_START = 4.0;
  v4->static_fields->BANNER_AUTO_MOVE_TIME_INTERVAL = 3.0;
  v4->static_fields->TGT_SPD_RATE = 0.25;
}


void __fastcall TerminalBannerComponent___ctor(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalBannerComponent__DestroyBanner(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  struct UnityEngine_Texture2D_o **p_mBannerTex2D; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  UnityEngine_Object_o *v9; // x20

  if ( (byte_42E5B56 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B56 = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
    this->fields.mBannerWWW = 0LL;
    sub_B5D560(&this->fields.mBannerWWW);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = &this->fields.mBannerTex2D;
  v7 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)*p_mBannerTex2D;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v9, 0LL);
    *p_mBannerTex2D = 0LL;
    sub_B5D560(p_mBannerTex2D);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s8
  TerminalBannerComponent_c *v7; // x0
  float v8; // s0

  if ( (byte_42E5B5B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalBannerComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B5B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v7 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v7 = TerminalBannerComponent_TypeInfo;
  }
  v8 = floorf(
         (float)(LocalPositionX + (float)(v7->static_fields->BANNER_INTERVAL_POS * 0.5))
       / v7->static_fields->BANNER_INTERVAL_POS);
  if ( v8 == INFINITY )
    return (int)-v8;
  else
    return (int)v8;
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  float LocalPositionX; // s0
  float v10; // s8
  float mTgtPos; // s0
  float v12; // s0
  float v13; // s9
  TerminalBannerComponent_c *v14; // x0
  float mPosMin; // s0
  float v16; // s8
  float mPosMax; // s1
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_42E5B5A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalBannerComponent_TypeInfo, (_DWORD)questBoardDraw, (_DWORD)method, v3);
    byte_42E5B5A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( !questBoardDraw )
    sub_B5D69C(v7, v8);
  v10 = LocalPositionX;
  mTgtPos = this->fields.mTgtPos;
  if ( questBoardDraw->fields.mIsEnableDragX )
  {
    v12 = mTgtPos + questBoardDraw->fields.mTouchPosDif;
    this->fields.mTgtPos = v12;
    v13 = v12 - v10;
    if ( questBoardDraw->fields.mIsEnableDragX )
      goto LABEL_12;
  }
  else
  {
    v13 = mTgtPos - v10;
  }
  v14 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v14 = TerminalBannerComponent_TypeInfo;
  }
  v13 = v13 * v14->static_fields->TGT_SPD_RATE;
LABEL_12:
  mPosMin = this->fields.mPosMin;
  v16 = v10 + v13;
  if ( v16 <= mPosMin )
  {
    mPosMax = this->fields.mPosMin;
    mPosMin = this->fields.mPosMax;
  }
  else
  {
    mPosMax = this->fields.mPosMax;
    if ( v16 <= mPosMax )
      goto LABEL_17;
  }
  v16 = mPosMin + (float)(v16 - mPosMax);
  this->fields.mTgtPos = mPosMin + (float)(this->fields.mTgtPos - mPosMax);
LABEL_17:
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, v16, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(mBannerTex, tex);
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
  __int64 v3; // x3
  TerminalBannerComponent_c *v6; // x0

  if ( (byte_42E5B5C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalBannerComponent_TypeInfo, posIndex, (_DWORD)method, v3);
    byte_42E5B5C = 1;
  }
  v6 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v6 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v6->static_fields->BANNER_INTERVAL_POS * (float)posIndex;
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

  if ( (byte_42E5B57 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalBannerComponent_TypeInfo, idx, (_DWORD)bannerEnt, *(_QWORD *)&bannerCount);
    byte_42E5B57 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_B5D560(&this->fields.mBannerEntity);
  if ( !bannerEnt )
    sub_B5D69C(v11, v12);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0LL);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_B5D560(&this->fields.mBannerNext);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E5B55 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B55 = 1;
  }
  v5 = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_B5D694(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
  TerminalBannerComponent__StartDownloadBanner_d__24___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v12; // x2
  System_String_o *WebViewAddress_26091648; // x20
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *mBannerTex; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5B58 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E5B58 = 1;
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
    WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(7, 0LL);
    mBannerId = this->fields.mBannerId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId);
    this->fields.mBannerUrl = System_String__Format(WebViewAddress_26091648, v14, 0LL);
    sub_B5D560(&this->fields.mBannerUrl);
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
      started = TerminalBannerComponent__StartDownloadBanner(this, v15);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL)) == 0LL )
    {
LABEL_20:
      sub_B5D69C(mBannerTex, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0LL);
  }
  else
  {
    TerminalBannerComponent__SetBannerTexture(this, this->fields.mBannerTex2D, v12);
  }
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp_BannerNext(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mBannerNext; // x20
  const MethodInfo *v6; // x1
  TerminalBannerComponent_o *v7; // x0

  if ( (byte_42E5B59 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B59 = 1;
  }
  mBannerNext = (UnityEngine_Object_o *)this->fields.mBannerNext;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mBannerNext, 0LL, 0LL) )
  {
    v7 = this->fields.mBannerNext;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    TerminalBannerComponent__StartLoadAndDisp(v7, v6);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v4; // x21
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct TerminalBannerComponent_o *_4__this; // x19
  System_String_o *mBannerUrl; // x20
  UnityEngine_Networking_UnityWebRequest_o *v17; // x22
  TerminalBannerComponent__StartDownloadBanner_d__24_o **v18; // x20
  UnityEngine_Networking_DownloadHandlerTexture_o *v19; // x23
  Il2CppObject **p__2__current; // x21
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v21; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v25; // x22
  UnityEngine_Object_o *texture; // x21
  System_String_o *v27; // x0
  bool IsNullOrEmpty; // w0
  int v29; // w21
  TerminalBannerComponent_c *v30; // x0
  System_Collections_IEnumerator_o *started; // x0

  v4 = this;
  if ( (byte_42E64A9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TerminalBannerComponent_TypeInfo, v8, v9, v10);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_B5D5C4(
                                                                     &UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                                     v11,
                                                                     v12,
                                                                     v13);
    byte_42E64A9 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
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
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v4->fields._texDl_5__2;
      if ( !this
        || (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                             (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                             0LL),
            !v4->fields._texDl_5__2) )
      {
LABEL_39:
        sub_B5D69C(this, method);
      }
      v25 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v4->fields._texDl_5__2,
                                          0LL);
    }
    else
    {
LABEL_17:
      texture = 0LL;
      v25 = 0LL;
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
    v27 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v27, 0LL);
    if ( !v25 || !IsNullOrEmpty || !v25->fields.__2__current )
      goto LABEL_28;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
    {
      _4__this->fields.mBannerTex2D = (struct UnityEngine_Texture2D_o *)texture;
      sub_B5D560(&_4__this->fields.mBannerTex2D);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, 0LL);
    }
    else
    {
LABEL_28:
      v29 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v29;
      v30 = TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v30 = TerminalBannerComponent_TypeInfo;
      }
      if ( v29 <= v30->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, 0LL);
      }
    }
    v21 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v21;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)v21, 0LL);
    *p_mBannerWWW = 0LL;
    sub_B5D560(&_4__this->fields.mBannerWWW);
LABEL_36:
    LOBYTE(v21) = 0;
    return (char)v21;
  }
  if ( _1__state )
    goto LABEL_36;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  TerminalBannerComponent__DestroyBanner(_4__this, 0LL);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v17 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B5D694(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v17, mBannerUrl, 0LL);
  v18 = (TerminalBannerComponent__StartDownloadBanner_d__24_o **)&_4__this->fields.mBannerWWW;
  _4__this->fields.mBannerWWW = v17;
  sub_B5D560(&_4__this->fields.mBannerWWW);
  v19 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B5D694(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v19, 0, 0LL);
  v4->fields._texDl_5__2 = v19;
  sub_B5D560(&v4->fields._texDl_5__2);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)_4__this->fields.mBannerWWW;
  if ( !this )
    goto LABEL_39;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__2,
    0LL);
  this = *v18;
  if ( !*v18 )
    goto LABEL_39;
  v4->fields.__2__current = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                                              0LL);
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  LOBYTE(v21) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)v21;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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