void __fastcall FriendshipGauge___ctor(FriendshipGauge_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall FriendshipGauge__ChangeGauge(
        FriendshipGauge_o *this,
        float val,
        bool *max,
        bool *isLevelUp,
        bool *isChange,
        const MethodInfo *method)
{
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v15; // x24
  float v16; // s0
  const MethodInfo *v17; // x4
  struct FriendshipGauge_GaugeData_o *v18; // x8
  int32_t v19; // w23
  int32_t FriendShipRank; // w0
  int32_t v21; // w3
  const MethodInfo *v22; // x4
  struct FriendshipGauge_GaugeData_o *v23; // x8

  if ( (byte_42171DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_42171DB = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v15 = (FriendshipMaster_o *)Instance;
  v16 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  Instance = (DataManager_o *)BattleUtility__FloorToInt(v16, 0LL);
  v18 = this->fields.nowGauge;
  if ( !v18 || !v15 )
    goto LABEL_16;
  v19 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v15,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     v18->fields.friendshipRank,
                     v17);
  if ( FriendShipRank == this->fields.maxFriendShipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v19 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v19;
  }
  FriendshipGauge__ChangeGaugeData(this, this->fields.friendshipId, v19, v21, v22);
  v23 = this->fields.nowGauge;
  if ( !v23 )
LABEL_16:
    sub_B0D97C(Instance);
  return v19 - v23->fields.friendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__ChangeGaugeData(
        FriendshipGauge_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  const MethodInfo *v12; // x3
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v14; // x22
  int v15; // w27
  __int64 v16; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x28
  int32_t v19; // w8
  _DWORD *v20; // x23
  struct UISprite_array *v21; // x10
  float v22; // s0
  struct UISprite_array *v23; // x8
  struct UISprite_array *v24; // x8
  struct UISprite_array *v25; // x8
  __int64 v26; // x0

  if ( (byte_42171DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_19513/*"img_bondsgage_point"*/, v10);
    byte_42171DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_B0D97C(Instance);
  }
  v14 = (FriendshipMaster_o *)Instance;
  v15 = 0;
  v16 = 4LL;
  while ( 1 )
  {
    max_length = gaugeIcons->max_length;
    v18 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      break;
    if ( (__int64)v18 >= this->fields.maxFriendShipRank )
    {
      if ( v18 >= max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v16);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0LL);
      v23 = this->fields.gaugeIcons;
      if ( !v23 )
        goto LABEL_36;
      if ( v18 >= v23->max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v23->obj.klass + v16);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19513/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v14 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v14, friendshipId, (int)v16 - 4, v12);
      if ( !Instance )
        goto LABEL_36;
      v19 = *((_DWORD *)Instance + 6);
      v20 = Instance;
      if ( v19 <= friendship )
      {
        v24 = this->fields.gaugeIcons;
        if ( !v24 )
          goto LABEL_36;
        if ( v18 >= v24->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v24->obj.klass + v16);
        if ( !Instance )
          goto LABEL_36;
        v22 = 1.0;
      }
      else if ( friendship - v15 <= 0 )
      {
        v25 = this->fields.gaugeIcons;
        if ( !v25 )
          goto LABEL_36;
        if ( v18 >= v25->max_length )
        {
LABEL_38:
          v26 = sub_B0D9A8(Instance);
          sub_B0D948(v26, 0LL);
        }
        Instance = (void *)*((_QWORD *)&v25->obj.klass + v16);
        if ( !Instance )
          goto LABEL_36;
        v22 = 0.0;
      }
      else
      {
        v21 = this->fields.gaugeIcons;
        if ( !v21 )
          goto LABEL_36;
        if ( v18 >= v21->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v21->obj.klass + v16);
        if ( !Instance )
          goto LABEL_36;
        v22 = (float)(friendship - v15) / (float)(v19 - v15);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v22, 0LL);
      v15 = v20[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v16;
    if ( !gaugeIcons )
      goto LABEL_36;
  }
}


void __fastcall FriendshipGauge__Hide(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


bool __fastcall FriendshipGauge__IsChange(FriendshipGauge_o *this, const MethodInfo *method)
{
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9

  nowGauge = this->fields.nowGauge;
  return nowGauge
      && (nextGauge = this->fields.nextGauge) != 0LL
      && nowGauge->fields.friendship != nextGauge->fields.friendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__SetGaugeData(
        FriendshipGauge_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        int32_t inMaxFriendShipRank,
        int32_t exceedCount,
        const MethodInfo *method)
{
  FriendshipGauge_GaugeData_o *v13; // x24
  struct FriendshipGauge_GaugeData_o **p_nowGauge; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  int32_t v22; // w3
  const MethodInfo *v23; // x4
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *v25; // x8

  if ( (byte_42171D8 & 1) == 0 )
  {
    sub_B0D8A4(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendshipId);
    byte_42171D8 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (FriendshipGauge_GaugeData_o *)sub_B0D974(
                                         FriendshipGauge_GaugeData_TypeInfo,
                                         *(_QWORD *)&friendshipId,
                                         *(_QWORD *)&friendship);
  FriendshipGauge_GaugeData___ctor(v13, 0LL);
  p_nowGauge = &this->fields.nowGauge;
  this->fields.nowGauge = v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.nowGauge,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge
    || (nowGauge->fields.friendshipRank = friendshipRank, !*p_nowGauge)
    || ((*p_nowGauge)->fields.friendship = friendship, (v25 = *p_nowGauge) == 0LL) )
  {
    sub_B0D97C(v21);
  }
  this->fields.prevRank = v25->fields.friendshipRank;
  this->fields.prevPoint = v25->fields.friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__SetNextGaugeData(
        FriendshipGauge_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  FriendshipGauge_GaugeData_o *v7; // x22
  struct FriendshipGauge_GaugeData_o **p_nextGauge; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0

  if ( (byte_42171D9 & 1) == 0 )
  {
    sub_B0D8A4(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendship);
    byte_42171D9 = 1;
  }
  v7 = (FriendshipGauge_GaugeData_o *)sub_B0D974(
                                        FriendshipGauge_GaugeData_TypeInfo,
                                        *(_QWORD *)&friendship,
                                        *(_QWORD *)&friendshipRank);
  FriendshipGauge_GaugeData___ctor(v7, 0LL);
  this->fields.nextGauge = v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_B0D840((BattleServantConfConponent_o *)p_nextGauge, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  if ( !*p_nextGauge || ((*p_nextGauge)->fields.friendshipRank = friendshipRank, !*p_nextGauge) )
    sub_B0D97C(v15);
  (*p_nextGauge)->fields.friendship = friendship;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}