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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v15; // x24
  float v16; // s0
  struct FriendshipGauge_GaugeData_o *v17; // x8
  int32_t v18; // w23
  int32_t FriendShipRank; // w0
  int32_t v20; // w3
  const MethodInfo *v21; // x4
  struct FriendshipGauge_GaugeData_o *v22; // x8

  if ( (byte_4A5E478 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E478 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v15 = (FriendshipMaster_o *)Instance;
  v16 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  Instance = (Il2CppObject *)BattleUtility__FloorToInt(v16, 0LL);
  v17 = this->fields.nowGauge;
  if ( !v17 || !v15 )
    goto LABEL_16;
  v18 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v15,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     v17->fields.friendshipRank,
                     0LL);
  if ( FriendShipRank == this->fields.maxFriendShipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v18 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v18;
  }
  FriendshipGauge__ChangeGaugeData(this, this->fields.friendshipId, v18, v20, v21);
  v22 = this->fields.nowGauge;
  if ( !v22 )
LABEL_16:
    sub_1B8880C(Instance, v12);
  return v18 - v22->fields.friendship;
}


void __fastcall FriendshipGauge__ChangeGaugeData(
        FriendshipGauge_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v11; // x22
  int v12; // w27
  __int64 v13; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v15; // x28
  int32_t v16; // w8
  _DWORD *v17; // x23
  struct UISprite_array *v18; // x10
  float v19; // s0
  struct UISprite_array *v20; // x8
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8

  if ( (byte_4A5E477 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20272/*"img_bondsgage_point"*/);
    byte_4A5E477 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_1B8880C(Instance, v9);
  }
  v11 = (FriendshipMaster_o *)Instance;
  v12 = 0;
  v13 = 4LL;
  while ( 1 )
  {
    max_length = gaugeIcons->max_length;
    v15 = v13 - 4;
    if ( v13 - 4 >= (int)max_length )
      break;
    if ( (__int64)v15 >= this->fields.maxFriendShipRank )
    {
      if ( v15 >= max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v13);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0LL);
      v20 = this->fields.gaugeIcons;
      if ( !v20 )
        goto LABEL_36;
      if ( v15 >= v20->max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v20->obj.klass + v13);
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
                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20272/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v11 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v11, friendshipId, (int)v13 - 4, 0LL);
      if ( !Instance )
        goto LABEL_36;
      v16 = *((_DWORD *)Instance + 6);
      v17 = Instance;
      if ( v16 <= friendship )
      {
        v21 = this->fields.gaugeIcons;
        if ( !v21 )
          goto LABEL_36;
        if ( v15 >= v21->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v21->obj.klass + v13);
        if ( !Instance )
          goto LABEL_36;
        v19 = 1.0;
      }
      else if ( friendship - v12 <= 0 )
      {
        v22 = this->fields.gaugeIcons;
        if ( !v22 )
          goto LABEL_36;
        if ( v15 >= v22->max_length )
LABEL_38:
          sub_1B88814(Instance, v9);
        Instance = (void *)*((_QWORD *)&v22->obj.klass + v13);
        if ( !Instance )
          goto LABEL_36;
        v19 = 0.0;
      }
      else
      {
        v18 = this->fields.gaugeIcons;
        if ( !v18 )
          goto LABEL_36;
        if ( v15 >= v18->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v18->obj.klass + v13);
        if ( !Instance )
          goto LABEL_36;
        v19 = (float)(friendship - v12) / (float)(v16 - v12);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v19, 0LL);
      v12 = v17[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v13;
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
    sub_1B8880C(0LL, v3);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w3
  const MethodInfo *v19; // x4
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8

  if ( (byte_4A5E475 & 1) == 0 )
  {
    sub_1B885B0(&FriendshipGauge_GaugeData_TypeInfo);
    byte_4A5E475 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (Il2CppObject *)sub_1B887FC(FriendshipGauge_GaugeData_TypeInfo);
  System_Object___ctor(v13, 0LL);
  this->fields.nowGauge = (struct FriendshipGauge_GaugeData_o *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowGauge, (int32_t)v13, v14, v15);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    sub_1B8880C(v16, v17);
  nowGauge->fields.friendship = friendship;
  nowGauge->fields.friendshipRank = friendshipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v18, v19);
}


void __fastcall FriendshipGauge__SetNextGaugeData(
        FriendshipGauge_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  struct FriendshipGauge_GaugeData_o **p_nextGauge; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  struct FriendshipGauge_GaugeData_o *v13; // x8

  if ( (byte_4A5E476 & 1) == 0 )
  {
    sub_1B885B0(&FriendshipGauge_GaugeData_TypeInfo);
    byte_4A5E476 = 1;
  }
  v7 = (Il2CppObject *)sub_1B887FC(FriendshipGauge_GaugeData_TypeInfo);
  System_Object___ctor(v7, 0LL);
  this->fields.nextGauge = (struct FriendshipGauge_GaugeData_o *)v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_nextGauge, (int32_t)v7, v9, v10);
  v13 = *p_nextGauge;
  if ( !*p_nextGauge )
    sub_1B8880C(v11, v12);
  v13->fields.friendship = friendship;
  v13->fields.friendshipRank = friendshipRank;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}