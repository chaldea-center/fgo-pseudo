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
  __int64 v13; // x1
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v16; // x24
  float v17; // s0
  const MethodInfo *v18; // x4
  struct FriendshipGauge_GaugeData_o *v19; // x8
  int32_t v20; // w23
  int32_t FriendShipRank; // w0
  int32_t v22; // w3
  const MethodInfo *v23; // x4
  struct FriendshipGauge_GaugeData_o *v24; // x8

  if ( (byte_418A4B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418A4B4 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v16 = (FriendshipMaster_o *)Instance;
  v17 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  Instance = (DataManager_o *)BattleUtility__FloorToInt(v17, 0LL);
  v19 = this->fields.nowGauge;
  if ( !v19 || !v16 )
    goto LABEL_16;
  v20 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v16,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     v19->fields.friendshipRank,
                     v18);
  if ( FriendShipRank == this->fields.maxFriendShipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v20 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v20;
  }
  FriendshipGauge__ChangeGaugeData(this, this->fields.friendshipId, v20, v22, v23);
  v24 = this->fields.nowGauge;
  if ( !v24 )
LABEL_16:
    sub_B2C434(Instance, v13);
  return v20 - v24->fields.friendship;
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
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v15; // x22
  int v16; // w27
  __int64 v17; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x28
  int32_t v20; // w8
  _DWORD *v21; // x23
  struct UISprite_array *v22; // x10
  float v23; // s0
  struct UISprite_array *v24; // x8
  struct UISprite_array *v25; // x8
  struct UISprite_array *v26; // x8
  __int64 v27; // x0

  if ( (byte_418A4B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_19451/*"img_bondsgage_point"*/, v10);
    byte_418A4B3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_B2C434(Instance, v12);
  }
  v15 = (FriendshipMaster_o *)Instance;
  v16 = 0;
  v17 = 4LL;
  while ( 1 )
  {
    max_length = gaugeIcons->max_length;
    v19 = v17 - 4;
    if ( v17 - 4 >= (int)max_length )
      break;
    if ( (__int64)v19 >= this->fields.maxFriendShipRank )
    {
      if ( v19 >= max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v17);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0LL);
      v24 = this->fields.gaugeIcons;
      if ( !v24 )
        goto LABEL_36;
      if ( v19 >= v24->max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v24->obj.klass + v17);
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
                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19451/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v15 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v15, friendshipId, (int)v17 - 4, v13);
      if ( !Instance )
        goto LABEL_36;
      v20 = *((_DWORD *)Instance + 6);
      v21 = Instance;
      if ( v20 <= friendship )
      {
        v25 = this->fields.gaugeIcons;
        if ( !v25 )
          goto LABEL_36;
        if ( v19 >= v25->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v25->obj.klass + v17);
        if ( !Instance )
          goto LABEL_36;
        v23 = 1.0;
      }
      else if ( friendship - v16 <= 0 )
      {
        v26 = this->fields.gaugeIcons;
        if ( !v26 )
          goto LABEL_36;
        if ( v19 >= v26->max_length )
        {
LABEL_38:
          v27 = sub_B2C460(Instance);
          sub_B2C400(v27, 0LL);
        }
        Instance = (void *)*((_QWORD *)&v26->obj.klass + v17);
        if ( !Instance )
          goto LABEL_36;
        v23 = 0.0;
      }
      else
      {
        v22 = this->fields.gaugeIcons;
        if ( !v22 )
          goto LABEL_36;
        if ( v19 >= v22->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v22->obj.klass + v17);
        if ( !Instance )
          goto LABEL_36;
        v23 = (float)(friendship - v16) / (float)(v20 - v16);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v23, 0LL);
      v16 = v21[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v17;
    if ( !gaugeIcons )
      goto LABEL_36;
  }
}


void __fastcall FriendshipGauge__Hide(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
  __int64 v22; // x1
  int32_t v23; // w3
  const MethodInfo *v24; // x4
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *v26; // x8

  if ( (byte_418A4B1 & 1) == 0 )
  {
    sub_B2C35C(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendshipId);
    byte_418A4B1 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (FriendshipGauge_GaugeData_o *)sub_B2C42C(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v13, 0LL);
  p_nowGauge = &this->fields.nowGauge;
  this->fields.nowGauge = v13;
  sub_B2C2F8(
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
    || ((*p_nowGauge)->fields.friendship = friendship, (v26 = *p_nowGauge) == 0LL) )
  {
    sub_B2C434(v21, v22);
  }
  this->fields.prevRank = v26->fields.friendshipRank;
  this->fields.prevPoint = v26->fields.friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v23, v24);
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
  __int64 v16; // x1

  if ( (byte_418A4B2 & 1) == 0 )
  {
    sub_B2C35C(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendship);
    byte_418A4B2 = 1;
  }
  v7 = (FriendshipGauge_GaugeData_o *)sub_B2C42C(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v7, 0LL);
  this->fields.nextGauge = v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_B2C2F8((BattleServantConfConponent_o *)p_nextGauge, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  if ( !*p_nextGauge || ((*p_nextGauge)->fields.friendshipRank = friendshipRank, !*p_nextGauge) )
    sub_B2C434(v15, v16);
  (*p_nextGauge)->fields.friendship = friendship;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}