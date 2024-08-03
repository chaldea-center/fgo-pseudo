void __fastcall TerminalBannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TerminalBannerComponent_StaticFields *static_fields; // x8

  if ( (byte_49F9937 & 1) == 0 )
  {
    sub_1B640C8(&TerminalBannerComponent_TypeInfo, v1);
    byte_49F9937 = 1;
  }
  static_fields = TerminalBannerComponent_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_OWORD *)&static_fields->BANNER_INTERVAL_POS = xmmword_BA2BB0;
}


void __fastcall TerminalBannerComponent___ctor(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalBannerComponent__DestroyBanner(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_mBannerTex2D; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F9930 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9930 = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
    this->fields.mBannerWWW = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mBannerWWW, 0, v4, v5);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = (ServantStatusBattleListViewItem_o *)&this->fields.mBannerTex2D;
  v7 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mBannerTex2D->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_mBannerTex2D->klass = 0LL;
    sub_1B6406C(p_mBannerTex2D, 0, v10, v11);
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
  float LocalPositionX; // s0
  TerminalBannerComponent_c *v5; // x0
  float v6; // s8
  float v7; // s0
  int32_t v8; // w8

  if ( (byte_49F9935 & 1) == 0 )
  {
    sub_1B640C8(&TerminalBannerComponent_TypeInfo, method);
    byte_49F9935 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
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

  if ( (byte_49F9934 & 1) == 0 )
  {
    sub_1B640C8(&TerminalBannerComponent_TypeInfo, questBoardDraw);
    byte_49F9934 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( !questBoardDraw )
    sub_1B64324(v6);
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
  const MethodInfo *v5; // x1
  int32_t PosIdx; // w0
  const MethodInfo *v7; // x2
  int v8; // w8
  bool IsFlickR; // w20
  const MethodInfo *v10; // x1

  if ( !qdraw )
    sub_1B64324(this);
  if ( QuestBoardListViewItemDraw__IsFlickL(qdraw, 0LL) )
  {
    PosIdx = TerminalBannerComponent__GetPosIdx(this, v5);
    v8 = -1;
  }
  else
  {
    IsFlickR = QuestBoardListViewItemDraw__IsFlickR(qdraw, 0LL);
    PosIdx = TerminalBannerComponent__GetPosIdx(this, v10);
    v8 = IsFlickR;
  }
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, v8 + PosIdx, v7);
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
    sub_1B64324(mBannerTex);
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

  if ( (byte_49F9936 & 1) == 0 )
  {
    sub_1B640C8(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&posIndex);
    byte_49F9936 = 1;
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
void __fastcall TerminalBannerComponent__Setup(
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
  int32_t v14; // w3
  TerminalBannerComponent_c *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float BANNER_INTERVAL_POS; // s0

  if ( (byte_49F9931 & 1) == 0 )
  {
    sub_1B640C8(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&idx);
    byte_49F9931 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mBannerEntity,
    (int32_t)bannerEnt,
    (int32_t)bannerEnt,
    bannerCount);
  if ( !bannerEnt )
    sub_1B64324(v11);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0LL);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mBannerNext, (int32_t)bannerNext, v13, v14);
  v15 = TerminalBannerComponent_TypeInfo;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v15 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v15->static_fields->BANNER_INTERVAL_POS * (float)idx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPos, 0LL);
  BANNER_INTERVAL_POS = TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS;
  this->fields.mPosMin = -BANNER_INTERVAL_POS;
  this->fields.mPosMax = BANNER_INTERVAL_POS * (float)(bannerCount - 1);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalBannerComponent__StartAutoMove(
        TerminalBannerComponent_o *this,
        int32_t dir,
        const MethodInfo *method)
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
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F992F & 1) == 0 )
  {
    sub_1B640C8(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, method);
    byte_49F992F = 1;
  }
  v4 = sub_1B64314(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v6; // x2
  System_String_o *WebViewAddress_38174564; // x20
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Component_o *mBannerTex; // x0
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9932 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F9932 = 1;
  }
  mBannerTex2D = (UnityEngine_Object_o *)this->fields.mBannerTex2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mBannerTex2D, 0LL, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_38174564 = NetworkManager__getWebViewAddress_38174564(7, 0LL);
    mBannerId = this->fields.mBannerId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId);
    v9 = System_String__Format(WebViewAddress_38174564, v8, 0LL);
    this->fields.mBannerUrl = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mBannerUrl, (int32_t)v9, v10, v11);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_18;
    mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL);
    if ( !mBannerTex )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0LL);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))mBannerTex->klass[2]._1.gc_desc)(
      mBannerTex,
      0LL,
      mBannerTex->klass[2]._1.name);
    this->fields.mBannerRetryCount = 0;
    mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mBannerTex )
      goto LABEL_18;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)mBannerTex, 0LL) )
    {
      started = TerminalBannerComponent__StartDownloadBanner(this, v13);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL)) == 0LL )
    {
LABEL_18:
      sub_1B64324(mBannerTex);
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

  if ( (byte_49F9933 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9933 = 1;
  }
  mBannerNext = (UnityEngine_Object_o *)this->fields.mBannerNext;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBannerNext, 0LL, 0LL) )
  {
    v5 = this->fields.mBannerNext;
    if ( !v5 )
      sub_1B64324(0LL);
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
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct TerminalBannerComponent_o *_4__this; // x19
  System_String_o *mBannerUrl; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Networking_UnityWebRequest_o *v12; // x22
  ServantStatusBattleListViewItem_o *v13; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Networking_DownloadHandlerTexture_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v21; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v25; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v29; // x22
  int32_t v30; // w24
  int32_t v31; // w25
  int32_t format; // w26
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Texture2D_o *v35; // x23
  System_Byte_array *data; // x0
  System_String_o *v37; // x0
  bool IsNullOrEmpty; // w0
  int32_t v39; // w2
  int32_t v40; // w3
  int v41; // w21
  TerminalBannerComponent_c *v42; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x2

  v2 = this;
  if ( (byte_49F9938 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&TerminalBannerComponent_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v5);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_1B640C8(
                                                                     &UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                                     v6);
    byte_49F9938 = 1;
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
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_23;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_43;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v2->fields._texDl_5__2;
      if ( !this )
        goto LABEL_43;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                       (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                       0LL);
      if ( !v2->fields._texDl_5__2 )
        goto LABEL_43;
      v29 = this;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                       v2->fields._texDl_5__2,
                                                                       0LL);
      if ( !this )
        goto LABEL_43;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                       this,
                                                                       this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v2->fields._texDl_5__2 )
        goto LABEL_43;
      v30 = (int)this;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                       v2->fields._texDl_5__2,
                                                                       0LL);
      if ( !this
        || (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                             this,
                                                                             this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr),
            !v2->fields._texDl_5__2)
        || (v31 = (int)this,
            (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                              v2->fields._texDl_5__2,
                                                                              0LL)) == 0LL)
        || (format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL),
            v35 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v33, v34),
            UnityEngine_Texture2D___ctor_69016000(v35, v30, v31, format, 0, 0LL),
            (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v2->fields._texDl_5__2) == 0LL) )
      {
LABEL_43:
        sub_1B64324(this);
      }
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_69232784(v35, data, 0LL);
    }
    else
    {
LABEL_23:
      v35 = 0LL;
      v29 = 0LL;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0LL) )
    {
      goto LABEL_33;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_43;
    v37 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v37, 0LL);
    if ( !v29 || !IsNullOrEmpty || !v29->fields.__2__current )
      goto LABEL_33;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
    {
      _4__this->fields.mBannerTex2D = v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerTex2D, (int32_t)v35, v39, v40);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, v46);
    }
    else
    {
LABEL_33:
      v41 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v41;
      v42 = TerminalBannerComponent_TypeInfo;
      if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v42 = TerminalBannerComponent_TypeInfo;
      }
      if ( v41 <= v42->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, method);
      }
    }
    v25 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v25;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)v25, 0LL);
    *p_mBannerWWW = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerWWW, 0, v44, v45);
LABEL_40:
    LOBYTE(v25) = 0;
    return (char)v25;
  }
  if ( _1__state )
    goto LABEL_40;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_43;
  TerminalBannerComponent__DestroyBanner(_4__this, method);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v12 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1B64314(
                                                      UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                      v10,
                                                      v11);
  UnityEngine_Networking_UnityWebRequest___ctor(v12, mBannerUrl, 0LL);
  _4__this->fields.mBannerWWW = v12;
  v13 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerWWW;
  sub_1B6406C(v13, (int32_t)v12, v14, v15);
  v18 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1B64314(
                                                             UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                             v16,
                                                             v17);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v18, 0, 0LL);
  v2->fields._texDl_5__2 = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._texDl_5__2, (int32_t)v18, v19, v20);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v13->klass;
  if ( !v13->klass )
    goto LABEL_43;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__2,
    0LL);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v13->klass;
  if ( !v13->klass )
    goto LABEL_43;
  v21 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v21, v23, v24);
  LOBYTE(v25) = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return (char)v25;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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