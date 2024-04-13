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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v18; // x24
  float v19; // s0
  const MethodInfo *v20; // x4
  struct FriendshipGauge_GaugeData_o *v21; // x8
  int32_t v22; // w23
  int32_t FriendShipRank; // w0
  int32_t v24; // w3
  const MethodInfo *v25; // x4
  struct FriendshipGauge_GaugeData_o *v26; // x8

  if ( (byte_42EB505 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, (_DWORD)max, (_DWORD)isLevelUp, isChange);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB505 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v18 = (FriendshipMaster_o *)Instance;
  v19 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  Instance = (DataManager_o *)BattleUtility__FloorToInt(v19, 0LL);
  v21 = this->fields.nowGauge;
  if ( !v21 || !v18 )
    goto LABEL_16;
  v22 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v18,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     v21->fields.friendshipRank,
                     v20);
  if ( FriendShipRank == this->fields.maxFriendShipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v22 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v22;
  }
  FriendshipGauge__ChangeGaugeData(this, this->fields.friendshipId, v22, v24, v25);
  v26 = this->fields.nowGauge;
  if ( !v26 )
LABEL_16:
    sub_B5D69C(Instance, v15);
  return v22 - v26->fields.friendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__ChangeGaugeData(
        FriendshipGauge_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v21; // x22
  int v22; // w27
  __int64 v23; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v25; // x28
  int32_t v26; // w8
  _DWORD *v27; // x23
  struct UISprite_array *v28; // x10
  float v29; // s0
  struct UISprite_array *v30; // x8
  struct UISprite_array *v31; // x8
  struct UISprite_array *v32; // x8
  __int64 v33; // x0

  if ( (byte_42EB504 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_FriendshipMaster___,
      friendshipId,
      friendship,
      *(_QWORD *)&friendshipRank);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19696/*"img_bondsgage_point"*/, v14, v15, v16);
    byte_42EB504 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_B5D69C(Instance, v18);
  }
  v21 = (FriendshipMaster_o *)Instance;
  v22 = 0;
  v23 = 4LL;
  while ( 1 )
  {
    max_length = gaugeIcons->max_length;
    v25 = v23 - 4;
    if ( v23 - 4 >= (int)max_length )
      break;
    if ( (__int64)v25 >= this->fields.maxFriendShipRank )
    {
      if ( v25 >= max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&gaugeIcons->obj.klass + v23);
      if ( !Instance )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, 0.0, 0LL);
      v30 = this->fields.gaugeIcons;
      if ( !v30 )
        goto LABEL_36;
      if ( v25 >= v30->max_length )
        goto LABEL_38;
      Instance = (void *)*((_QWORD *)&v30->obj.klass + v23);
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
                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Instance )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19696/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v21 )
        goto LABEL_36;
      Instance = FriendshipMaster__GetEntity(v21, friendshipId, (int)v23 - 4, v19);
      if ( !Instance )
        goto LABEL_36;
      v26 = *((_DWORD *)Instance + 6);
      v27 = Instance;
      if ( v26 <= friendship )
      {
        v31 = this->fields.gaugeIcons;
        if ( !v31 )
          goto LABEL_36;
        if ( v25 >= v31->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v31->obj.klass + v23);
        if ( !Instance )
          goto LABEL_36;
        v29 = 1.0;
      }
      else if ( friendship - v22 <= 0 )
      {
        v32 = this->fields.gaugeIcons;
        if ( !v32 )
          goto LABEL_36;
        if ( v25 >= v32->max_length )
        {
LABEL_38:
          v33 = sub_B5D6C8(Instance);
          sub_B5D668(v33, 0LL);
        }
        Instance = (void *)*((_QWORD *)&v32->obj.klass + v23);
        if ( !Instance )
          goto LABEL_36;
        v29 = 0.0;
      }
      else
      {
        v28 = this->fields.gaugeIcons;
        if ( !v28 )
          goto LABEL_36;
        if ( v25 >= v28->max_length )
          goto LABEL_38;
        Instance = (void *)*((_QWORD *)&v28->obj.klass + v23);
        if ( !Instance )
          goto LABEL_36;
        v29 = (float)(friendship - v22) / (float)(v26 - v22);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v29, 0LL);
      v22 = v27[6];
    }
    gaugeIcons = this->fields.gaugeIcons;
    ++v23;
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
    sub_B5D69C(0LL, v3);
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

  if ( (byte_42EB502 & 1) == 0 )
  {
    sub_B5D5C4(&FriendshipGauge_GaugeData_TypeInfo, friendshipId, friendship, *(_QWORD *)&friendshipRank);
    byte_42EB502 = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (FriendshipGauge_GaugeData_o *)sub_B5D694(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v13, 0LL);
  p_nowGauge = &this->fields.nowGauge;
  this->fields.nowGauge = v13;
  sub_B5D560(
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
    sub_B5D69C(v21, v22);
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

  if ( (byte_42EB503 & 1) == 0 )
  {
    sub_B5D5C4(&FriendshipGauge_GaugeData_TypeInfo, friendship, friendshipRank, method);
    byte_42EB503 = 1;
  }
  v7 = (FriendshipGauge_GaugeData_o *)sub_B5D694(FriendshipGauge_GaugeData_TypeInfo);
  FriendshipGauge_GaugeData___ctor(v7, 0LL);
  this->fields.nextGauge = v7;
  p_nextGauge = &this->fields.nextGauge;
  sub_B5D560((BattleServantConfConponent_o *)p_nextGauge, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  if ( !*p_nextGauge || ((*p_nextGauge)->fields.friendshipRank = friendshipRank, !*p_nextGauge) )
    sub_B5D69C(v15, v16);
  (*p_nextGauge)->fields.friendship = friendship;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}