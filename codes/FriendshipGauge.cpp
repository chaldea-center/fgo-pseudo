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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v16; // x24
  float v17; // s0
  struct FriendshipGauge_GaugeData_o *v18; // x8
  int32_t v19; // w23
  int32_t FriendShipRank; // w0
  int32_t v21; // w3
  const MethodInfo *v22; // x4
  struct FriendshipGauge_GaugeData_o *v23; // x8

  if ( (byte_4A22CD1 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A22CD1 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v16 = (FriendshipMaster_o *)Instance;
  v17 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  Instance = (Il2CppObject *)BattleUtility__FloorToInt(v17, 0LL);
  v18 = this->fields.nowGauge;
  if ( !v18 || !v16 )
    goto LABEL_16;
  v19 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v16,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     v18->fields.friendshipRank,
                     0LL);
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
    sub_1B71828(Instance, v13);
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
  __int64 v12; // x1
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v14; // x22
  int v15; // w27
  __int64 v16; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x28
  int32_t v19; // w8
  _DWORD *v20; // x23
  struct UISprite_array *v21; // x10
  float v22; // s0
  struct UISprite_array *v23; // x8
  struct UISprite_array *v24; // x8
  struct UISprite_array *v25; // x8

  if ( (byte_4A22CD0 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B715CC(&StringLiteral_20220/*"img_bondsgage_point"*/, v10);
    byte_4A22CD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_1B71828(Instance, v12);
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
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20220/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v14 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v14, friendshipId, (int)v16 - 4, 0LL);
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
LABEL_38:
          sub_1B71830(Instance, v12);
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
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B71828(0LL, v3);
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
  FriendshipGauge_GaugeData_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w3
  const MethodInfo *v19; // x4
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8

  if ( (byte_4A22CCE & 1) == 0 )
  {
    sub_1B715CC(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendshipId);
    byte_4A22CCE = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (FriendshipGauge_GaugeData_o *)sub_1B71818(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v13, 0LL);
  this->fields.nowGauge = v13;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.nowGauge, (int32_t)v13, v14, v15);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    sub_1B71828(v16, v17);
  nowGauge->fields.friendship = friendship;
  nowGauge->fields.friendshipRank = friendshipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v18, v19);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  struct FriendshipGauge_GaugeData_o *v13; // x8

  if ( (byte_4A22CCF & 1) == 0 )
  {
    sub_1B715CC(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendship);
    byte_4A22CCF = 1;
  }
  v7 = (FriendshipGauge_GaugeData_o *)sub_1B71818(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v7, 0LL);
  this->fields.nextGauge = v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_nextGauge, (int32_t)v7, v9, v10);
  v13 = *p_nextGauge;
  if ( !*p_nextGauge )
    sub_1B71828(v11, v12);
  v13->fields.friendship = friendship;
  v13->fields.friendshipRank = friendshipRank;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B71828(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}