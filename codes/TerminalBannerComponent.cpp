void __fastcall TerminalBannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TerminalBannerComponent_StaticFields *static_fields; // x8

  if ( (byte_4C1F357 & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, v1);
    byte_4C1F357 = 1;
  }
  static_fields = TerminalBannerComponent_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_OWORD *)&static_fields->BANNER_INTERVAL_POS = xmmword_C0D310;
}


void __fastcall TerminalBannerComponent___ctor(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TerminalBannerComponent__DestroyBanner(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  PartyOrganizationUtility_o *p_mBannerTex2D; // x19
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C1F350 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1F350 = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
    this->fields.mBannerWWW = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mBannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = (PartyOrganizationUtility_o *)&this->fields.mBannerTex2D;
  v11 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mBannerTex2D->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(klass, 0LL);
    p_mBannerTex2D->klass = 0LL;
    sub_1C3B708(p_mBannerTex2D, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4C1F355 & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, method);
    byte_4C1F355 = 1;
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
  __int64 v7; // x1
  float LocalPositionX; // s0
  float v9; // s8
  float mTgtPos; // s0
  float v11; // s0
  float v12; // s1
  float v13; // s9
  TerminalBannerComponent_c *v14; // x0
  float mPosMin; // s0
  float v16; // s8
  float mPosMax; // s1
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_4C1F354 & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, questBoardDraw);
    byte_4C1F354 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( !questBoardDraw )
    sub_1C3B9C0(v6, v7);
  v9 = LocalPositionX;
  mTgtPos = this->fields.mTgtPos;
  if ( questBoardDraw->fields.mIsEnableDragX )
  {
    v11 = mTgtPos + questBoardDraw->fields.mTouchPosDif;
    this->fields.mTgtPos = v11;
    v12 = v11 - v9;
  }
  else
  {
    v13 = mTgtPos - v9;
    v14 = TerminalBannerComponent_TypeInfo;
    if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
      v14 = TerminalBannerComponent_TypeInfo;
    }
    v12 = v13 * v14->static_fields->TGT_SPD_RATE;
  }
  mPosMin = this->fields.mPosMin;
  v16 = v9 + v12;
  if ( v16 <= mPosMin )
  {
    mPosMax = this->fields.mPosMin;
    mPosMin = this->fields.mPosMax;
  }
  else
  {
    mPosMax = this->fields.mPosMax;
    if ( v16 <= mPosMax )
      goto LABEL_14;
  }
  v16 = mPosMin + (float)(v16 - mPosMax);
  this->fields.mTgtPos = mPosMin + (float)(this->fields.mTgtPos - mPosMax);
LABEL_14:
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
  const MethodInfo *v5; // x1
  int32_t PosIdx; // w0
  const MethodInfo *v7; // x2
  int v8; // w8
  bool IsFlickR; // w20
  const MethodInfo *v10; // x1

  if ( !qdraw )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(mBannerTex, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mBannerTex, 0, 0LL);
  TerminalBannerComponent__StartLoadAndDisp_BannerNext(this, v5);
}


void __fastcall TerminalBannerComponent__SetBannerTextureActive(
        TerminalBannerComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.mBannerTex, isActive, 0LL);
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

  if ( (byte_4C1F356 & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&posIndex);
    byte_4C1F356 = 1;
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t BannerId; // w0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  TerminalBannerComponent_c *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float BANNER_INTERVAL_POS; // s0

  if ( (byte_4C1F351 & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&idx);
    byte_4C1F351 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mBannerEntity,
    (int64_t)bannerEnt,
    (int64_t)bannerEnt,
    bannerCount,
    (System_String_o *)bannerNext,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !bannerEnt )
    sub_1C3B9C0(v13, v14);
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0LL);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mBannerNext,
    (int64_t)bannerNext,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = TerminalBannerComponent_TypeInfo;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v22 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v22->static_fields->BANNER_INTERVAL_POS * (float)idx;
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
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C1F34F & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, method);
    byte_4C1F34F = 1;
  }
  v3 = sub_1C3B9B0(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v6; // x2
  System_String_o *WebViewAddress_39999516; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  struct System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  UnityEngine_Component_o *mBannerTex; // x0
  System_Collections_IEnumerator_o *started; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1F352 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1F352 = 1;
  }
  mBannerTex2D = (UnityEngine_Object_o *)this->fields.mBannerTex2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mBannerTex2D, 0LL, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_39999516 = NetworkManager__getWebViewAddress_39999516(7, 0LL);
    mBannerId = this->fields.mBannerId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId, v8, v9, v10);
    v12 = System_String__Format(WebViewAddress_39999516, v11, 0LL);
    this->fields.mBannerUrl = v12;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mBannerUrl, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
      started = TerminalBannerComponent__StartDownloadBanner(this, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
    }
    mBannerTex = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mBannerTex
      || (mBannerTex = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mBannerTex, 0LL)) == 0LL )
    {
LABEL_18:
      sub_1C3B9C0(mBannerTex, v19);
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

  if ( (byte_4C1F353 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1F353 = 1;
  }
  mBannerNext = (UnityEngine_Object_o *)this->fields.mBannerNext;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBannerNext, 0LL, 0LL) )
  {
    v5 = this->fields.mBannerNext;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
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
  UnityEngine_Networking_UnityWebRequest_o *v10; // x22
  PartyOrganizationUtility_o *v11; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Networking_DownloadHandlerTexture_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v25; // x0
  PartyOrganizationUtility_o *p__2__current; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v33; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  TerminalBannerComponent__StartDownloadBanner_d__24_o *v37; // x22
  int32_t v38; // w24
  int32_t v39; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v41; // x23
  System_Byte_array *data; // x0
  System_String_o *v43; // x0
  bool IsNullOrEmpty; // w0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int v51; // w21
  TerminalBannerComponent_c *v52; // x0
  System_Collections_IEnumerator_o *started; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  const MethodInfo *v60; // x2

  v2 = this;
  if ( (byte_4C1F358 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_Texture2D_TypeInfo, v5);
    this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)sub_1C3B764(
                                                                     &UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                                     v6);
    byte_4C1F358 = 1;
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
      v37 = this;
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
      v38 = (int)this;
      this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                       v2->fields._texDl_5__2,
                                                                       0LL);
      if ( !this
        || (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)((__int64 (__fastcall *)(TerminalBannerComponent__StartDownloadBanner_d__24_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                             this,
                                                                             this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr),
            !v2->fields._texDl_5__2)
        || (v39 = (int)this,
            (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                              v2->fields._texDl_5__2,
                                                                              0LL)) == 0LL)
        || (format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL),
            v41 = (UnityEngine_Texture2D_o *)sub_1C3B9B0(UnityEngine_Texture2D_TypeInfo),
            UnityEngine_Texture2D___ctor_71010924(v41, v38, v39, format, 0, 0LL),
            (this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v2->fields._texDl_5__2) == 0LL) )
      {
LABEL_43:
        sub_1C3B9C0(this, method);
      }
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_71227924(v41, data, 0LL);
    }
    else
    {
LABEL_23:
      v41 = 0LL;
      v37 = 0LL;
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
    v43 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v43, 0LL);
    if ( !v37 || !IsNullOrEmpty || !v37->fields.__2__current )
      goto LABEL_33;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
    {
      _4__this->fields.mBannerTex2D = v41;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&_4__this->fields.mBannerTex2D,
        (int64_t)v41,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, v60);
    }
    else
    {
LABEL_33:
      v51 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v51;
      v52 = TerminalBannerComponent_TypeInfo;
      if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v52 = TerminalBannerComponent_TypeInfo;
      }
      if ( v51 <= v52->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, method);
      }
    }
    v33 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v33;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)v33, 0LL);
    *p_mBannerWWW = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW, 0LL, v54, v55, v56, v57, v58, v59);
LABEL_40:
    LOBYTE(v33) = 0;
    return (char)v33;
  }
  if ( _1__state )
    goto LABEL_40;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_43;
  TerminalBannerComponent__DestroyBanner(_4__this, method);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v10 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C3B9B0(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v10, mBannerUrl, 0LL);
  _4__this->fields.mBannerWWW = v10;
  v11 = (PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW;
  sub_1C3B708(v11, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C3B9B0(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v18, 0, 0LL);
  v2->fields._texDl_5__2 = v18;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields._texDl_5__2, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v11->klass;
  if ( !v11->klass )
    goto LABEL_43;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__2,
    0LL);
  this = (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v11->klass;
  if ( !v11->klass )
    goto LABEL_43;
  v25 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  LOBYTE(v33) = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return (char)v33;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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