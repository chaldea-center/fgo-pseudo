void FriendshipGauge___ctor(FriendshipGauge_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t FriendshipGauge__ChangeGauge(
        FriendshipGauge_o *this,
        float val,
        bool *isMax,
        bool *isLevelUp,
        bool *isChange,
        int32_t *remainingFriendship,
        const MethodInfo *method)
{
  FriendshipGauge_o *v12; // x19
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  float v15; // s0
  int32_t v16; // w24
  struct FriendshipGauge_GaugeData_o *v17; // x8
  const MethodInfo *v18; // x2
  int32_t prevPoint; // w9
  struct FriendshipGauge_GaugeData_o *v20; // x8

  v12 = this;
  if ( (byte_4CF20DE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_FriendshipMaster___);
    this = (FriendshipGauge_o *)sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF20DE = 1;
  }
  nowGauge = v12->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_12;
  nextGauge = v12->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_12;
  v15 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0);
  v16 = BattleUtility__FloorToInt(v15, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FriendshipGauge_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FriendshipMaster___);
  v17 = v12->fields.nowGauge;
  if ( !v17 )
    goto LABEL_12;
  if ( !this )
    goto LABEL_12;
  this = (FriendshipGauge_o *)FriendshipMaster__GetFriendShipRankEntity(
                                (FriendshipMaster_o *)this,
                                v12->fields.friendshipId,
                                v16,
                                v17->fields.friendshipRank,
                                0);
  if ( !this )
    goto LABEL_12;
  *remainingFriendship = LODWORD(this->fields.m_CancellationTokenSource) - v16;
  *isMax = HIDWORD(this->fields.m_CachedPtr) == v12->fields.maxFriendShipRank;
  *isLevelUp = HIDWORD(this->fields.m_CachedPtr) != v12->fields.prevRank;
  prevPoint = v12->fields.prevPoint;
  v12->fields.prevRank = HIDWORD(this->fields.m_CachedPtr);
  *isChange = v16 != prevPoint;
  v12->fields.prevPoint = v16;
  FriendshipGauge__ChangeGaugeData(v12, v16, v18);
  v20 = v12->fields.nowGauge;
  if ( !v20 )
LABEL_12:
    sub_1C7BD40(this, isMax);
  return v16 - v20->fields.friendship;
}


void FriendshipGauge__ChangeGaugeData(FriendshipGauge_o *this, int32_t friendship, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v8; // x21
  int v9; // w26
  __int64 v10; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v12; // x27
  int32_t v13; // w8
  _DWORD *v14; // x22
  struct UISprite_array *v15; // x10
  float v16; // s0
  struct UISprite_array *v17; // x8
  struct UISprite_array *v18; // x8
  struct UISprite_array *v19; // x8

  if ( (byte_4CF20DD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_20509/*"img_bondsgage_point"*/);
    byte_4CF20DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0) )
  {
LABEL_36:
    sub_1C7BD40(Instance, v6);
  }
  v8 = (FriendshipMaster_o *)Instance;
  v9 = 0;
  v10 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(gaugeIcons->max_length);
    v12 = v10 - 4;
    if ( v10 - 4 >= (int)max_length_low )
      break;
    if ( (__int64)v12 >= this->fields.maxFriendShipRank )
    {
      if ( v12 >= max_length_low )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v10);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0);
      v17 = this->fields.gaugeIcons;
      if ( !v17 )
        goto LABEL_36;
      if ( v12 >= LODWORD(v17->max_length) )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v17->obj.klass + v10);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20509/*"img_bondsgage_point"*/, 0);
    }
    else
    {
      if ( !v8 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v8, this->fields.friendshipId, (int)v10 - 4, 0);
      if ( !Instance )
        goto LABEL_36;
      v13 = *((_DWORD *)Instance + 6);
      v14 = Instance;
      if ( v13 <= friendship )
      {
        v18 = this->fields.gaugeIcons;
        if ( !v18 )
          goto LABEL_36;
        if ( v12 >= LODWORD(v18->max_length) )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v18->obj.klass + v10);
        if ( !Instance )
          goto LABEL_36;
        v16 = 1.0;
      }
      else if ( friendship - v9 <= 0 )
      {
        v19 = this->fields.gaugeIcons;
        if ( !v19 )
          goto LABEL_36;
        if ( v12 >= LODWORD(v19->max_length) )
LABEL_38:
          sub_1C7BD48(Instance);
        Instance = (void *)*((_QWORD *)&v19->obj.klass + v10);
        if ( !Instance )
          goto LABEL_36;
        v16 = 0.0;
      }
      else
      {
        v15 = this->fields.gaugeIcons;
        if ( !v15 )
          goto LABEL_36;
        if ( v12 >= LODWORD(v15->max_length) )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v15->obj.klass + v10);
        if ( !Instance )
          goto LABEL_36;
        v16 = (float)(friendship - v9) / (float)(v13 - v9);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v16, 0);
      v9 = v14[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v10;
    if ( !gaugeIcons )
      goto LABEL_36;
  }
}


void FriendshipGauge__Hide(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


bool FriendshipGauge__IsChange(FriendshipGauge_o *this, const MethodInfo *method)
{
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9

  nowGauge = this->fields.nowGauge;
  return nowGauge
      && (nextGauge = this->fields.nextGauge) != 0
      && nowGauge->fields.friendship != nextGauge->fields.friendship;
}


void FriendshipGauge__SetGaugeData(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8

  if ( (byte_4CF20DB & 1) == 0 )
  {
    sub_1C7BAE8(&FriendshipGauge_GaugeData_TypeInfo);
    byte_4CF20DB = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (Il2CppObject *)sub_1C7BD34(FriendshipGauge_GaugeData_TypeInfo);
  System_Object___ctor(v13, 0);
  this->fields.nowGauge = (struct FriendshipGauge_GaugeData_o *)v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.nowGauge, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    sub_1C7BD40(v20, v21);
  nowGauge->fields.friendship = friendship;
  nowGauge->fields.friendshipRank = friendshipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGauge__ChangeGaugeData(this, friendship, v22);
}


void FriendshipGauge__SetNextGaugeData(
        FriendshipGauge_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  struct FriendshipGauge_GaugeData_o **p_nextGauge; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct FriendshipGauge_GaugeData_o *v17; // x8

  if ( (byte_4CF20DC & 1) == 0 )
  {
    sub_1C7BAE8(&FriendshipGauge_GaugeData_TypeInfo);
    byte_4CF20DC = 1;
  }
  v7 = (Il2CppObject *)sub_1C7BD34(FriendshipGauge_GaugeData_TypeInfo);
  System_Object___ctor(v7, 0);
  this->fields.nextGauge = (struct FriendshipGauge_GaugeData_o *)v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_nextGauge, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v17 = *p_nextGauge;
  if ( !*p_nextGauge )
    sub_1C7BD40(v15, v16);
  v17->fields.friendship = friendship;
  v17->fields.friendshipRank = friendshipRank;
}


void FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}