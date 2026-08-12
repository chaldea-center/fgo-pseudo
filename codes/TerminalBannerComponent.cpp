void TerminalBannerComponent___cctor(const MethodInfo *method)
{
  struct TerminalBannerComponent_StaticFields *static_fields; // x8

  if ( (byte_596D978 & 1) == 0 )
  {
    sub_2213A60(&TerminalBannerComponent_TypeInfo);
    byte_596D978 = 1;
  }
  static_fields = TerminalBannerComponent_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_OWORD *)&static_fields->BANNER_INTERVAL_POS = xmmword_E9D000;
}


void TerminalBannerComponent___ctor(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TerminalBannerComponent__DestroyBanner(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_mBannerTex2D; // x19
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596D971 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D971 = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0);
    this->fields.mBannerWWW = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mBannerWWW, 0, v5, v6, v7, v8, v9, v10);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = (MissionNaviTransitionBoardItem_o *)&this->fields.mBannerTex2D;
  v12 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_mBannerTex2D->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_mBannerTex2D->klass = 0;
    sub_2213A04(p_mBannerTex2D, 0, v17, v18, v19, v20, v21, v22);
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
  __int64 v4; // x1
  __int64 v5; // x2
  float LocalPositionX; // s0
  TerminalBannerComponent_c *v7; // x0
  float v8; // s8
  float v9; // s0
  int32_t v10; // w9

  if ( (byte_596D976 & 1) == 0 )
  {
    sub_2213A60(&TerminalBannerComponent_TypeInfo);
    byte_596D976 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  v7 = TerminalBannerComponent_TypeInfo;
  v8 = LocalPositionX;
  if ( !*(&TerminalBannerComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo, v4, v5);
    v7 = TerminalBannerComponent_TypeInfo;
  }
  v9 = (float)(v8 + (float)(v7->static_fields->BANNER_INTERVAL_POS * 0.5)) / v7->static_fields->BANNER_INTERVAL_POS;
  v10 = vcvtms_s32_f32(v9);
  if ( floorf(v9) == INFINITY )
    return 0x80000000;
  else
    return v10;
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
  __int64 v7; // x1
  __int64 v8; // x2
  float LocalPositionX; // s0
  float v10; // s8
  float mTgtPos; // s0
  float v12; // s1
  float v13; // s0
  float v14; // s9
  TerminalBannerComponent_c *v15; // x0
  float v16; // s8
  float mPosMax; // s0
  float mPosMin; // s3
  float v19; // s1
  float v20; // s2
  float v21; // s4
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_596D975 & 1) == 0 )
  {
    sub_2213A60(&TerminalBannerComponent_TypeInfo);
    byte_596D975 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  if ( !questBoardDraw )
    sub_2213CDC(v6, v7);
  v10 = LocalPositionX;
  mTgtPos = this->fields.mTgtPos;
  if ( questBoardDraw->fields.mIsEnableDragX )
  {
    v12 = mTgtPos + questBoardDraw->fields.mTouchPosDif;
    v13 = v12 - v10;
    this->fields.mTgtPos = v12;
  }
  else
  {
    v14 = mTgtPos - v10;
    v15 = TerminalBannerComponent_TypeInfo;
    if ( !*(&TerminalBannerComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo, v7, v8);
      v15 = TerminalBannerComponent_TypeInfo;
    }
    v13 = v14 * v15->static_fields->TGT_SPD_RATE;
  }
  v16 = v10 + v13;
  mPosMin = this->fields.mPosMin;
  mPosMax = this->fields.mPosMax;
  if ( v16 <= mPosMin )
  {
    v20 = v16 - mPosMin;
    v19 = this->fields.mPosMax;
    v21 = this->fields.mPosMin;
    goto LABEL_13;
  }
  if ( v16 > mPosMax )
  {
    v19 = v16 - mPosMax;
    v20 = this->fields.mPosMin;
    v21 = this->fields.mPosMax;
    mPosMax = v20;
LABEL_13:
    v16 = v20 + v19;
    this->fields.mTgtPos = mPosMax + (float)(this->fields.mTgtPos - v21);
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v22, v16, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(mBannerTex, tex);
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


// local variable allocation has failed, the output may be wrong!
void TerminalBannerComponent__SetTgtPos_ByPosIdx(
        TerminalBannerComponent_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v5; // x0

  if ( (byte_596D977 & 1) == 0 )
  {
    sub_2213A60(&TerminalBannerComponent_TypeInfo);
    byte_596D977 = 1;
  }
  v5 = TerminalBannerComponent_TypeInfo;
  if ( !*(&TerminalBannerComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo, *(_QWORD *)&posIndex, method);
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
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t BannerId; // w0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  TerminalBannerComponent_c *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float BANNER_INTERVAL_POS; // s1

  if ( (byte_596D972 & 1) == 0 )
  {
    sub_2213A60(&TerminalBannerComponent_TypeInfo);
    byte_596D972 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mBannerEntity,
    (int32_t)bannerEnt,
    (System_String_o *)bannerEnt,
    *(System_String_o **)&bannerCount,
    (int32_t)bannerNext,
    (int32_t)method,
    v6,
    v7);
  if ( !bannerEnt )
    sub_2213CDC(v13, v14);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mBannerNext,
    (int32_t)bannerNext,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = TerminalBannerComponent_TypeInfo;
  if ( !*(&TerminalBannerComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo, v22, v23);
    v24 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v24->static_fields->BANNER_INTERVAL_POS * (float)idx;
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
  int32_t PosIdx; // w8
  const MethodInfo *v4; // x2

  PosIdx = TerminalBannerComponent__GetPosIdx(this, method);
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, PosIdx - 1, v4);
}


void TerminalBannerComponent__StartAutoMoveR(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  int32_t PosIdx; // w8
  const MethodInfo *v4; // x2

  PosIdx = TerminalBannerComponent__GetPosIdx(this, method);
  TerminalBannerComponent__SetTgtPos_ByPosIdx(this, PosIdx + 1, v4);
}


System_Collections_IEnumerator_o *TerminalBannerComponent__StartDownloadBanner(
        TerminalBannerComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596D970 & 1) == 0 )
  {
    sub_2213A60(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
    byte_596D970 = 1;
  }
  v3 = sub_2213CCC(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mBannerTex2D; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *WebViewAddress_48359816; // x20
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  UnityEngine_Component_o *mBannerTex; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596D973 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D973 = 1;
  }
  mBannerTex2D = (UnityEngine_Object_o *)this->fields.mBannerTex2D;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mBannerTex2D, 0, 0) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(7, 0);
    mBannerId = this->fields.mBannerId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &mBannerId);
    v9 = System_String__Format(WebViewAddress_48359816, v8, 0);
    this->fields.mBannerUrl = v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mBannerUrl, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
      started = TerminalBannerComponent__StartDownloadBanner(this, v16);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0)) == 0 )
    {
LABEL_18:
      sub_2213CDC(mBannerTex, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 1, 0);
  }
  else
  {
    TerminalBannerComponent__SetBannerTexture(this, this->fields.mBannerTex2D, v6);
  }
}


void TerminalBannerComponent__StartLoadAndDisp_BannerNext(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mBannerNext; // x20
  const MethodInfo *v5; // x1
  TerminalBannerComponent_o *v6; // x0

  if ( (byte_596D974 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D974 = 1;
  }
  mBannerNext = (UnityEngine_Object_o *)this->fields.mBannerNext;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mBannerNext, 0, 0) )
  {
    v6 = this->fields.mBannerNext;
    if ( !v6 )
      sub_2213CDC(0, v5);
    TerminalBannerComponent__StartLoadAndDisp(v6, v5);
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
  System_String_o *v2; // x2
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v3; // x21
  int32_t _1__state; // w27
  struct TerminalBannerComponent_o *_4__this; // x19
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **v7; // x20
  UnityEngine_Texture2D_o *v8; // x23
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v9; // x22
  System_String_o *error; // x0
  int32_t v11; // w24
  int32_t v12; // w25
  int32_t format; // w26
  System_Byte_array *data; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  TerminalBannerComponent_c *v21; // x0
  int v22; // w21
  System_String_o *mBannerUrl; // x20
  UnityEngine_Networking_UnityWebRequest_o *v24; // x22
  MissionNaviTransitionBoardItem_o *p_mBannerWWW; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Networking_DownloadHandlerTexture_o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v39; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x21
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_IEnumerator_o *started; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  const MethodInfo *v55; // x2

  v3 = this;
  if ( (byte_596D979 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalBannerComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_2213A60(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    byte_596D979 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      TerminalBannerComponent__DestroyBanner(_4__this, method);
      mBannerUrl = _4__this->fields.mBannerUrl;
      v24 = (UnityEngine_Networking_UnityWebRequest_o *)sub_2213CCC(UnityEngine_Networking_UnityWebRequest_TypeInfo);
      UnityEngine_Networking_UnityWebRequest___ctor_86736180(v24, mBannerUrl, 0);
      _4__this->fields.mBannerWWW = v24;
      p_mBannerWWW = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mBannerWWW;
      sub_2213A04(p_mBannerWWW, (int32_t)v24, v26, v27, v28, v29, v30, v31);
      v32 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_2213CCC(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
      UnityEngine_Networking_DownloadHandlerTexture___ctor(v32, 0, 0);
      v3->fields._texDl_5__2 = v32;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v3->fields._texDl_5__2,
        (int32_t)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)p_mBannerWWW->klass;
      if ( p_mBannerWWW->klass )
      {
        UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
          (UnityEngine_Networking_UnityWebRequest_o *)this,
          (UnityEngine_Networking_DownloadHandler_o *)v3->fields._texDl_5__2,
          0);
        this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)p_mBannerWWW->klass;
        if ( p_mBannerWWW->klass )
        {
          v39 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                  0);
          v3->fields.__2__current = (Il2CppObject *)v39;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)v39, v41, v42, v43, v44, v45, v46);
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return _1__state == 0;
        }
      }
    }
    goto LABEL_41;
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
LABEL_41:
    sub_2213CDC(this, method);
  v7 = (TerminalBannerComponent__StartDownloadBanner_d__24_o **)&_4__this->fields.mBannerWWW;
  mBannerWWW = _4__this->fields.mBannerWWW;
  if ( !mBannerWWW )
  {
LABEL_28:
    v21 = TerminalBannerComponent_TypeInfo;
    v22 = _4__this->fields.mBannerRetryCount + 1;
    _4__this->fields.mBannerRetryCount = v22;
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, method, v2);
      v21 = TerminalBannerComponent_TypeInfo;
    }
    if ( v22 <= v21->static_fields->BANNER_RETRY_MAX )
    {
      started = TerminalBannerComponent__StartDownloadBanner(_4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
    }
    else
    {
      TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, method);
    }
    goto LABEL_37;
  }
  v8 = 0;
  v9 = 0;
  if ( UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0) )
  {
    this = *v7;
    if ( !*v7 )
      goto LABEL_41;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v8 = 0;
    v9 = 0;
    if ( System_String__IsNullOrEmpty(error, 0) )
    {
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v3->fields._texDl_5__2;
      if ( this )
      {
        this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                         (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                         0);
        if ( v3->fields._texDl_5__2 )
        {
          v9 = this;
          this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                           v3->fields._texDl_5__2,
                                                                           0);
          if ( this )
          {
            this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                             this,
                                                                             this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
            if ( v3->fields._texDl_5__2 )
            {
              v11 = (int)this;
              this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                               v3->fields._texDl_5__2,
                                                                               0);
              if ( this )
              {
                this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                                 this,
                                                                                 this->klass->vtable._6_MoveNext.method);
                if ( v3->fields._texDl_5__2 )
                {
                  v12 = (int)this;
                  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                                   v3->fields._texDl_5__2,
                                                                                   0);
                  if ( this )
                  {
                    format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0);
                    v8 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
                    UnityEngine_Texture2D___ctor_83318944(v8, v11, v12, format, 0, 0);
                    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v3->fields._texDl_5__2;
                    if ( this )
                    {
                      data = UnityEngine_Networking_DownloadHandler__get_data(
                               (UnityEngine_Networking_DownloadHandler_o *)this,
                               0);
                      UnityEngine_ImageConversion__LoadImage_83620268(v8, data, 0);
                      goto LABEL_19;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_41;
    }
  }
LABEL_19:
  if ( !*v7 || !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)*v7, 0) )
    goto LABEL_28;
  this = *v7;
  if ( !*v7 )
    goto LABEL_41;
  v15 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  if ( !System_String__IsNullOrEmpty(v15, 0) || !v9 || !v9->fields.__2__current )
    goto LABEL_28;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0) )
    goto LABEL_28;
  _4__this->fields.mBannerTex2D = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mBannerTex2D,
    (int32_t)v8,
    v2,
    v16,
    v17,
    v18,
    v19,
    v20);
  TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, v55);
LABEL_37:
  if ( *v7 )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v7, 0);
    *v7 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.mBannerWWW, 0, v48, v49, v50, v51, v52, v53);
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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