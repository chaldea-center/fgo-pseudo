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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
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

  if ( (byte_42B2B9C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2B9C = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
    sub_B52A5C(Instance, v12);
  return v19 - v23->fields.friendship;
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
  const MethodInfo *v10; // x3
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v12; // x22
  int v13; // w27
  __int64 v14; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v16; // x28
  int32_t v17; // w8
  _DWORD *v18; // x23
  struct UISprite_array *v19; // x10
  float v20; // s0
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  __int64 v24; // x0

  if ( (byte_42B2B9B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_19598/*"img_bondsgage_point"*/);
    byte_42B2B9B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_B52A5C(Instance, v9);
  }
  v12 = (FriendshipMaster_o *)Instance;
  v13 = 0;
  v14 = 4LL;
  while ( 1 )
  {
    max_length = gaugeIcons->max_length;
    v16 = v14 - 4;
    if ( v14 - 4 >= (int)max_length )
      break;
    if ( (__int64)v16 >= this->fields.maxFriendShipRank )
    {
      if ( v16 >= max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v14);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0LL);
      v21 = this->fields.gaugeIcons;
      if ( !v21 )
        goto LABEL_36;
      if ( v16 >= v21->max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v21->obj.klass + v14);
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
                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19598/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v12 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v12, friendshipId, (int)v14 - 4, v10);
      if ( !Instance )
        goto LABEL_36;
      v17 = *((_DWORD *)Instance + 6);
      v18 = Instance;
      if ( v17 <= friendship )
      {
        v22 = this->fields.gaugeIcons;
        if ( !v22 )
          goto LABEL_36;
        if ( v16 >= v22->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v22->obj.klass + v14);
        if ( !Instance )
          goto LABEL_36;
        v20 = 1.0;
      }
      else if ( friendship - v13 <= 0 )
      {
        v23 = this->fields.gaugeIcons;
        if ( !v23 )
          goto LABEL_36;
        if ( v16 >= v23->max_length )
        {
LABEL_38:
          v24 = sub_B52A88(Instance);
          sub_B52A28(v24, 0LL);
        }
        Instance = (void *)*((_QWORD *)&v23->obj.klass + v14);
        if ( !Instance )
          goto LABEL_36;
        v20 = 0.0;
      }
      else
      {
        v19 = this->fields.gaugeIcons;
        if ( !v19 )
          goto LABEL_36;
        if ( v16 >= v19->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v19->obj.klass + v14);
        if ( !Instance )
          goto LABEL_36;
        v20 = (float)(friendship - v13) / (float)(v17 - v13);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v20, 0LL);
      v13 = v18[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v14;
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
    sub_B52A5C(0LL, v3);
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

  if ( (byte_42B2B99 & 1) == 0 )
  {
    sub_B52984(&FriendshipGauge_GaugeData_TypeInfo);
    byte_42B2B99 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (FriendshipGauge_GaugeData_o *)sub_B52A54(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v13, 0LL);
  p_nowGauge = &this->fields.nowGauge;
  this->fields.nowGauge = v13;
  sub_B52920(
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
    sub_B52A5C(v21, v22);
  }
  this->fields.prevRank = v26->fields.friendshipRank;
  this->fields.prevPoint = v26->fields.friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v23, v24);
}


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

  if ( (byte_42B2B9A & 1) == 0 )
  {
    sub_B52984(&FriendshipGauge_GaugeData_TypeInfo);
    byte_42B2B9A = 1;
  }
  v7 = (FriendshipGauge_GaugeData_o *)sub_B52A54(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v7, 0LL);
  this->fields.nextGauge = v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_B52920((BattleServantConfConponent_o *)p_nextGauge, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  if ( !*p_nextGauge || ((*p_nextGauge)->fields.friendshipRank = friendshipRank, !*p_nextGauge) )
    sub_B52A5C(v15, v16);
  (*p_nextGauge)->fields.friendship = friendship;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}