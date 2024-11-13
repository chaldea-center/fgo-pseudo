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
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v17; // x24
  float v18; // s0
  struct FriendshipGauge_GaugeData_o *v19; // x8
  int32_t v20; // w23
  int32_t FriendShipRank; // w0
  int32_t v22; // w3
  const MethodInfo *v23; // x4
  struct FriendshipGauge_GaugeData_o *v24; // x8

  if ( (byte_4B195A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, max, isLevelUp);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B195A6 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v17 = (FriendshipMaster_o *)Instance;
  v18 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  Instance = (Il2CppObject *)BattleUtility__FloorToInt(v18, 0LL);
  v19 = this->fields.nowGauge;
  if ( !v19 || !v17 )
    goto LABEL_16;
  v20 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v17,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     v19->fields.friendshipRank,
                     0LL);
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
    sub_1BCAA3C(Instance, v14);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *Instance; // x0
  __int64 v15; // x1
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v17; // x22
  int v18; // w27
  __int64 v19; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x28
  int32_t v22; // w8
  _DWORD *v23; // x23
  struct UISprite_array *v24; // x10
  float v25; // s0
  struct UISprite_array *v26; // x8
  struct UISprite_array *v27; // x8
  struct UISprite_array *v28; // x8

  if ( (byte_4B195A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, *(_QWORD *)&friendshipId, *(_QWORD *)&friendship);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_20487/*"img_bondsgage_point"*/, v12, v13);
    byte_4B195A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_1BCAA3C(Instance, v15);
  }
  v17 = (FriendshipMaster_o *)Instance;
  v18 = 0;
  v19 = 4LL;
  while ( 1 )
  {
    max_length = gaugeIcons->max_length;
    v21 = v19 - 4;
    if ( v19 - 4 >= (int)max_length )
      break;
    if ( (__int64)v21 >= this->fields.maxFriendShipRank )
    {
      if ( v21 >= max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v19);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0LL);
      v26 = this->fields.gaugeIcons;
      if ( !v26 )
        goto LABEL_36;
      if ( v21 >= v26->max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v26->obj.klass + v19);
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
                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20487/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v17 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v17, friendshipId, (int)v19 - 4, 0LL);
      if ( !Instance )
        goto LABEL_36;
      v22 = *((_DWORD *)Instance + 6);
      v23 = Instance;
      if ( v22 <= friendship )
      {
        v27 = this->fields.gaugeIcons;
        if ( !v27 )
          goto LABEL_36;
        if ( v21 >= v27->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v27->obj.klass + v19);
        if ( !Instance )
          goto LABEL_36;
        v25 = 1.0;
      }
      else if ( friendship - v18 <= 0 )
      {
        v28 = this->fields.gaugeIcons;
        if ( !v28 )
          goto LABEL_36;
        if ( v21 >= v28->max_length )
LABEL_38:
          sub_1BCAA44(Instance, v15);
        Instance = (void *)*((_QWORD *)&v28->obj.klass + v19);
        if ( !Instance )
          goto LABEL_36;
        v25 = 0.0;
      }
      else
      {
        v24 = this->fields.gaugeIcons;
        if ( !v24 )
          goto LABEL_36;
        if ( v21 >= v24->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v24->obj.klass + v19);
        if ( !Instance )
          goto LABEL_36;
        v25 = (float)(friendship - v18) / (float)(v22 - v18);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v25, 0LL);
      v18 = v23[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v19;
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
    sub_1BCAA3C(0LL, v3);
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
  Il2CppObject *v13; // x23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w3
  const MethodInfo *v23; // x4
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8

  if ( (byte_4B195A3 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendshipId, *(_QWORD *)&friendship);
    byte_4B195A3 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (Il2CppObject *)sub_1BCAA2C(
                          FriendshipGauge_GaugeData_TypeInfo,
                          *(_QWORD *)&friendshipId,
                          *(_QWORD *)&friendship,
                          *(_QWORD *)&friendshipRank);
  System_Object___ctor(v13, 0LL);
  this->fields.nowGauge = (struct FriendshipGauge_GaugeData_o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowGauge, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    sub_1BCAA3C(v20, v21);
  nowGauge->fields.friendship = friendship;
  nowGauge->fields.friendshipRank = friendshipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__SetNextGaugeData(
        FriendshipGauge_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  struct FriendshipGauge_GaugeData_o **p_nextGauge; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct FriendshipGauge_GaugeData_o *v17; // x8

  if ( (byte_4B195A4 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendship, *(_QWORD *)&friendshipRank);
    byte_4B195A4 = 1;
  }
  v7 = (Il2CppObject *)sub_1BCAA2C(
                         FriendshipGauge_GaugeData_TypeInfo,
                         *(_QWORD *)&friendship,
                         *(_QWORD *)&friendshipRank,
                         method);
  System_Object___ctor(v7, 0LL);
  this->fields.nextGauge = (struct FriendshipGauge_GaugeData_o *)v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_1BCA784((PartyOrganizationUtility_o *)p_nextGauge, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  v17 = *p_nextGauge;
  if ( !*p_nextGauge )
    sub_1BCAA3C(v15, v16);
  v17->fields.friendship = friendship;
  v17->fields.friendshipRank = friendshipRank;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}