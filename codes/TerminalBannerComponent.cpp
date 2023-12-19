void __fastcall TerminalBannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalBannerComponent_c *v2; // x8

  if ( (byte_40F6C76 & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, v1);
    byte_40F6C76 = 1;
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_mBannerTex2D; // x19
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_Texture2D_o *mBannerTex2D; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F6C6F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6C6F = 1;
  }
  mBannerWWW = this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
    this->fields.mBannerWWW = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.mBannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
  }
  mBannerTex2D = this->fields.mBannerTex2D;
  p_mBannerTex2D = (BattleServantConfConponent_o *)&this->fields.mBannerTex2D;
  v11 = (UnityEngine_Object_o *)mBannerTex2D;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mBannerTex2D->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_mBannerTex2D->klass = 0LL;
    sub_B16F98(p_mBannerTex2D, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_40F6C74 & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, method);
    byte_40F6C74 = 1;
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
  float LocalPositionX; // s0
  float v7; // s8
  float mTgtPos; // s0
  float v9; // s0
  float v10; // s9
  TerminalBannerComponent_c *v11; // x0
  float mPosMin; // s0
  float v13; // s8
  float mPosMax; // s1
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_40F6C73 & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, questBoardDraw);
    byte_40F6C73 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  if ( !questBoardDraw )
    sub_B170D4();
  v7 = LocalPositionX;
  mTgtPos = this->fields.mTgtPos;
  if ( questBoardDraw->fields.mIsEnableDragX )
  {
    v9 = mTgtPos + questBoardDraw->fields.mTouchPosDif;
    this->fields.mTgtPos = v9;
    v10 = v9 - v7;
    if ( questBoardDraw->fields.mIsEnableDragX )
      goto LABEL_12;
  }
  else
  {
    v10 = mTgtPos - v7;
  }
  v11 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v11 = TerminalBannerComponent_TypeInfo;
  }
  v10 = v10 * v11->static_fields->TGT_SPD_RATE;
LABEL_12:
  mPosMin = this->fields.mPosMin;
  v13 = v7 + v10;
  if ( v13 <= mPosMin )
  {
    mPosMax = this->fields.mPosMin;
    mPosMin = this->fields.mPosMax;
  }
  else
  {
    mPosMax = this->fields.mPosMax;
    if ( v13 <= mPosMax )
      goto LABEL_17;
  }
  v13 = mPosMin + (float)(v13 - mPosMax);
  this->fields.mTgtPos = mPosMin + (float)(this->fields.mTgtPos - mPosMax);
LABEL_17:
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, v13, 0LL);
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
    sub_B170D4();
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
  struct UITexture_o *mBannerTex; // x0
  struct UITexture_o *v5; // x0
  UnityEngine_Component_o *mLoadingSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1

  mBannerTex = this->fields.mBannerTex;
  if ( !mBannerTex
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))mBannerTex->klass->vtable._27_set_mainTexture.method)(
          mBannerTex,
          tex,
          mBannerTex->klass->vtable._28_get_shader.methodPtr),
        (v5 = this->fields.mBannerTex) == 0LL)
    || (((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
          v5,
          v5->klass->vtable._34_get_minWidth.methodPtr),
        (mLoadingSp = (UnityEngine_Component_o *)this->fields.mLoadingSp) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(mLoadingSp, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  TerminalBannerComponent__StartLoadAndDisp_BannerNext(this, v8);
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

  if ( (byte_40F6C75 & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&posIndex);
    byte_40F6C75 = 1;
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t BannerId; // w0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  TerminalBannerComponent_c *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TerminalBannerComponent_c *v22; // x8

  if ( (byte_40F6C70 & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, *(_QWORD *)&idx);
    byte_40F6C70 = 1;
  }
  this->fields.mBannerEntity = bannerEnt;
  this->fields.mIdx = idx;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mBannerEntity,
    (System_Int32_array **)bannerEnt,
    (System_String_array **)bannerEnt,
    *(System_String_array ***)&bannerCount,
    (System_Boolean_array **)bannerNext,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !bannerEnt )
    sub_B170D4();
  BannerId = BannerEntity__GetBannerId(bannerEnt, 0LL);
  this->fields.mBannerNext = bannerNext;
  this->fields.mBannerId = BannerId;
  this->fields.mBannerCount = bannerCount;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mBannerNext,
    (System_Int32_array **)bannerNext,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v20 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mTgtPos = v20->static_fields->BANNER_INTERVAL_POS * (float)idx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPos, 0LL);
  v22 = TerminalBannerComponent_TypeInfo;
  this->fields.mPosMin = -TerminalBannerComponent_TypeInfo->static_fields->BANNER_INTERVAL_POS;
  this->fields.mPosMax = v22->static_fields->BANNER_INTERVAL_POS * (float)(bannerCount - 1);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6C6E & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, method);
    byte_40F6C6E = 1;
  }
  v6 = sub_B170CC(TerminalBannerComponent__StartDownloadBanner_d__24_TypeInfo, method, v2, v3, v4);
  TerminalBannerComponent__StartDownloadBanner_d__24___ctor(
    (TerminalBannerComponent__StartDownloadBanner_d__24_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall TerminalBannerComponent__StartLoadAndDisp(TerminalBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mBannerTex2D; // x20
  const MethodInfo *v6; // x2
  System_String_o *WebViewAddress_23699452; // x20
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *mBannerTex; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UITexture_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Component_o *mLoadingSp; // x0
  UnityEngine_GameObject_o *v23; // x0
  int32_t mBannerId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F6C71 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F6C71 = 1;
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
    WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(7, 0LL);
    mBannerId = this->fields.mBannerId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mBannerId);
    v9 = System_String__Format(WebViewAddress_23699452, v8, 0LL);
    this->fields.mBannerUrl = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mBannerUrl,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    mBannerTex = (UnityEngine_Component_o *)this->fields.mBannerTex;
    if ( !mBannerTex )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(mBannerTex, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v18 = this->fields.mBannerTex;
    if ( !v18 )
      goto LABEL_20;
    ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._27_set_mainTexture.method)(
      v18,
      0LL,
      v18->klass->vtable._28_get_shader.methodPtr);
    this->fields.mBannerRetryCount = 0;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v19 )
      goto LABEL_20;
    if ( UnityEngine_GameObject__get_activeInHierarchy(v19, 0LL) )
    {
      started = TerminalBannerComponent__StartDownloadBanner(this, v20);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
    }
    mLoadingSp = (UnityEngine_Component_o *)this->fields.mLoadingSp;
    if ( !mLoadingSp || (v23 = UnityEngine_Component__get_gameObject(mLoadingSp, 0LL)) == 0LL )
LABEL_20:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v23, 1, 0LL);
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

  if ( (byte_40F6C72 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6C72 = 1;
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
      sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct TerminalBannerComponent_o *_4__this; // x19
  System_String_o *mBannerUrl; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UnityEngine_Networking_UnityWebRequest_o *v13; // x22
  UnityEngine_Networking_UnityWebRequest_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Networking_DownloadHandlerTexture_o *v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Networking_UnityWebRequest_o *v32; // x0
  Il2CppObject *v33; // x0
  Il2CppObject **p__2__current; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Networking_UnityWebRequest_o *v41; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  UnityEngine_Networking_UnityWebRequest_o **p_mBannerWWW; // x20
  System_String_o *error; // x0
  UnityEngine_Networking_DownloadHandler_o *texDl_5__2; // x0
  System_Byte_array *data; // x0
  System_Byte_array *v47; // x22
  System_Int32_array **texture; // x21
  System_String_o *v49; // x0
  bool IsNullOrEmpty; // w0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int v57; // w21
  TerminalBannerComponent_c *v58; // x0
  System_Collections_IEnumerator_o *started; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_40F77A8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v5);
    byte_40F77A8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    p_mBannerWWW = &_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_28;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_17;
    if ( !*p_mBannerWWW )
      goto LABEL_39;
    error = UnityEngine_Networking_UnityWebRequest__get_error(*p_mBannerWWW, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      texDl_5__2 = (UnityEngine_Networking_DownloadHandler_o *)this->fields._texDl_5__2;
      if ( !texDl_5__2
        || (data = UnityEngine_Networking_DownloadHandler__get_data(texDl_5__2, 0LL), !this->fields._texDl_5__2) )
      {
LABEL_39:
        sub_B170D4();
      }
      v47 = data;
      texture = (System_Int32_array **)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                         this->fields._texDl_5__2,
                                         0LL);
    }
    else
    {
LABEL_17:
      texture = 0LL;
      v47 = 0LL;
    }
    if ( !*p_mBannerWWW || !UnityEngine_Networking_UnityWebRequest__get_isDone(*p_mBannerWWW, 0LL) )
      goto LABEL_28;
    if ( !*p_mBannerWWW )
      goto LABEL_39;
    v49 = UnityEngine_Networking_UnityWebRequest__get_error(*p_mBannerWWW, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v49, 0LL);
    if ( !v47 || !IsNullOrEmpty || !*(_QWORD *)&v47->max_length )
      goto LABEL_28;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)texture, 0LL, 0LL) )
    {
      _4__this->fields.mBannerTex2D = (struct UnityEngine_Texture2D_o *)texture;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.mBannerTex2D, texture, v51, v52, v53, v54, v55, v56);
      TerminalBannerComponent__SetBannerTexture(_4__this, _4__this->fields.mBannerTex2D, 0LL);
    }
    else
    {
LABEL_28:
      v57 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v57;
      v58 = TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        v58 = TerminalBannerComponent_TypeInfo;
      }
      if ( v57 <= v58->static_fields->BANNER_RETRY_MAX )
      {
        started = TerminalBannerComponent__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        TerminalBannerComponent__StartLoadAndDisp_BannerNext(_4__this, 0LL);
      }
    }
    v41 = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      return (char)v41;
    UnityEngine_Networking_UnityWebRequest__Dispose(v41, 0LL);
    *p_mBannerWWW = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.mBannerWWW, 0LL, v60, v61, v62, v63, v64, v65);
LABEL_36:
    LOBYTE(v41) = 0;
    return (char)v41;
  }
  if ( _1__state )
    goto LABEL_36;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  TerminalBannerComponent__DestroyBanner(_4__this, 0LL);
  mBannerUrl = _4__this->fields.mBannerUrl;
  v13 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B170CC(
                                                      UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
  UnityEngine_Networking_UnityWebRequest___ctor(v13, mBannerUrl, 0LL);
  v14 = &_4__this->fields.mBannerWWW;
  _4__this->fields.mBannerWWW = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.mBannerWWW,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B170CC(
                                                             UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                             v21,
                                                             v22,
                                                             v23,
                                                             v24);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v25, 0, 0LL);
  this->fields._texDl_5__2 = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._texDl_5__2,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = _4__this->fields.mBannerWWW;
  if ( !v32 )
    goto LABEL_39;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    v32,
    (UnityEngine_Networking_DownloadHandler_o *)this->fields._texDl_5__2,
    0LL);
  if ( !*v14 )
    goto LABEL_39;
  v33 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(*v14, 0LL);
  this->fields.__2__current = v33;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
  LOBYTE(v41) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)v41;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_TerminalBannerComponent__StartDownloadBanner_d__24_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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