void __fastcall FriendshipGauge___ctor(FriendshipGauge_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall FriendshipGauge__ChangeGauge(
        FriendshipGauge_o *this,
        float val,
        bool *isMax,
        bool *isLevelUp,
        bool *isChange,
        int32_t *remainingFriendship,
        const MethodInfo *method)
{
  FriendshipGauge_o *v12; // x19
  __int64 v13; // x1
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  float v16; // s0
  int32_t v17; // w24
  struct FriendshipGauge_GaugeData_o *v18; // x8
  const MethodInfo *v19; // x2
  int32_t prevPoint; // w9
  struct FriendshipGauge_GaugeData_o *v21; // x8

  v12 = this;
  if ( (byte_4A51B03 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_FriendshipMaster___, isMax);
    this = (FriendshipGauge_o *)sub_1B863B8(&DataManager_TypeInfo, v13);
    byte_4A51B03 = 1;
  }
  nowGauge = v12->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_12;
  nextGauge = v12->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_12;
  v16 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  v17 = BattleUtility__FloorToInt(v16, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FriendshipGauge_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_FriendshipMaster___);
  v18 = v12->fields.nowGauge;
  if ( !v18 )
    goto LABEL_12;
  if ( !this )
    goto LABEL_12;
  this = (FriendshipGauge_o *)FriendshipMaster__GetFriendShipRankEntity(
                                (FriendshipMaster_o *)this,
                                v12->fields.friendshipId,
                                v17,
                                v18->fields.friendshipRank,
                                0LL);
  if ( !this )
    goto LABEL_12;
  *remainingFriendship = LODWORD(this->fields.m_CancellationTokenSource) - v17;
  *isMax = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1) == v12->fields.maxFriendShipRank;
  *isLevelUp = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1) != v12->fields.prevRank;
  prevPoint = v12->fields.prevPoint;
  v12->fields.prevRank = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
  *isChange = v17 != prevPoint;
  v12->fields.prevPoint = v17;
  FriendshipGauge__ChangeGaugeData(v12, v17, v19);
  v21 = v12->fields.nowGauge;
  if ( !v21 )
LABEL_12:
    sub_1B86614(this, isMax);
  return v17 - v21->fields.friendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__ChangeGaugeData(FriendshipGauge_o *this, int32_t friendship, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v11; // x21
  int v12; // w26
  __int64 v13; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v15; // x27
  int32_t v16; // w8
  _DWORD *v17; // x22
  struct UISprite_array *v18; // x10
  float v19; // s0
  struct UISprite_array *v20; // x8
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8

  if ( (byte_4A51B02 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_FriendshipMaster___, *(_QWORD *)&friendship);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_20063/*"img_bondsgage_point"*/, v7);
    byte_4A51B02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_1B86614(Instance, v9);
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
                   (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20063/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v11 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v11, this->fields.friendshipId, (int)v13 - 4, 0LL);
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
          sub_1B8661C(Instance, v9);
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
    sub_1B86614(0LL, v3);
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
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8

  if ( (byte_4A51B00 & 1) == 0 )
  {
    sub_1B863B8(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendshipId);
    byte_4A51B00 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (Il2CppObject *)sub_1B86604(FriendshipGauge_GaugeData_TypeInfo);
  System_Object___ctor(v13, 0LL);
  this->fields.nowGauge = (struct FriendshipGauge_GaugeData_o *)v13;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nowGauge, (int32_t)v13, v14, v15);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    sub_1B86614(v16, v17);
  nowGauge->fields.friendship = friendship;
  nowGauge->fields.friendshipRank = friendshipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGauge__ChangeGaugeData(this, friendship, v18);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  struct FriendshipGauge_GaugeData_o *v13; // x8

  if ( (byte_4A51B01 & 1) == 0 )
  {
    sub_1B863B8(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendship);
    byte_4A51B01 = 1;
  }
  v7 = (Il2CppObject *)sub_1B86604(FriendshipGauge_GaugeData_TypeInfo);
  System_Object___ctor(v7, 0LL);
  this->fields.nextGauge = (struct FriendshipGauge_GaugeData_o *)v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_1B8635C((CGThumbnailListItem_o *)p_nextGauge, (int32_t)v7, v9, v10);
  v13 = *p_nextGauge;
  if ( !*p_nextGauge )
    sub_1B86614(v11, v12);
  v13->fields.friendship = friendship;
  v13->fields.friendshipRank = friendshipRank;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}