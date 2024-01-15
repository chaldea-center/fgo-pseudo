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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *nextGauge; // x9
  FriendshipMaster_o *v16; // x24
  float v17; // s0
  int32_t v18; // w0
  const MethodInfo *v19; // x4
  struct FriendshipGauge_GaugeData_o *v20; // x8
  int32_t v21; // w23
  int32_t FriendShipRank; // w0
  int32_t v23; // w3
  const MethodInfo *v24; // x4
  struct FriendshipGauge_GaugeData_o *v25; // x8

  if ( (byte_40FB2C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FB2C0 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  nowGauge = this->fields.nowGauge;
  if ( !nowGauge )
    goto LABEL_16;
  nextGauge = this->fields.nextGauge;
  if ( !nextGauge )
    goto LABEL_16;
  v16 = (FriendshipMaster_o *)MasterData_WarQuestSelectionMaster;
  v17 = BattleUtility__Lerp((float)nowGauge->fields.friendship, (float)nextGauge->fields.friendship, val, 0LL);
  v18 = BattleUtility__FloorToInt(v17, 0LL);
  v20 = this->fields.nowGauge;
  if ( !v20 || !v16 )
    goto LABEL_16;
  v21 = v18;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     v16,
                     this->fields.friendshipId,
                     v18,
                     v20->fields.friendshipRank,
                     v19);
  if ( FriendShipRank == this->fields.maxFriendShipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v21 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v21;
  }
  FriendshipGauge__ChangeGaugeData(this, this->fields.friendshipId, v21, v23, v24);
  v25 = this->fields.nowGauge;
  if ( !v25 )
LABEL_16:
    sub_B170D4();
  return v21 - v25->fields.friendship;
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
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  struct UISprite_array *gaugeIcons; // x8
  FriendshipMaster_o *v17; // x22
  int v18; // w27
  __int64 v19; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x28
  int32_t v22; // w8
  _DWORD *v23; // x23
  struct UISprite_array *v24; // x10
  UIBasicSprite_o *v25; // x0
  float v26; // s0
  UIBasicSprite_o *v27; // x0
  struct UISprite_array *v28; // x8
  UnityEngine_Component_o *v29; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *Component_srcLineSprite; // x0
  struct UISprite_array *v34; // x8
  struct UISprite_array *v35; // x8

  if ( (byte_40FB2BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_19377/*"img_bondsgage_point"*/, v10);
    byte_40FB2BF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        (gaugeIcons = this->fields.gaugeIcons) == 0LL) )
  {
LABEL_36:
    sub_B170D4();
  }
  v17 = (FriendshipMaster_o *)MasterData_WarQuestSelectionMaster;
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
      v27 = (UIBasicSprite_o *)*((_QWORD *)&gaugeIcons->obj.klass + v19);
      if ( !v27 )
        goto LABEL_36;
      UIBasicSprite__set_fillAmount(v27, 0.0, 0LL);
      v28 = this->fields.gaugeIcons;
      if ( !v28 )
        goto LABEL_36;
      if ( v21 >= v28->max_length )
        goto LABEL_38;
      v29 = (UnityEngine_Component_o *)*((_QWORD *)&v28->obj.klass + v19);
      if ( !v29 )
        goto LABEL_36;
      transform = UnityEngine_Component__get_transform(v29, 0LL);
      if ( !transform )
        goto LABEL_36;
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        goto LABEL_36;
      gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
      if ( !gameObject )
        goto LABEL_36;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                gameObject,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !Component_srcLineSprite )
        goto LABEL_36;
      UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_19377/*"img_bondsgage_point"*/, 0LL);
    }
    else
    {
      if ( !v17 )
        goto LABEL_36;
      MasterData_WarQuestSelectionMaster = FriendshipMaster__GetEntity(v17, friendshipId, (int)v19 - 4, v15);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_36;
      v22 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
      v23 = MasterData_WarQuestSelectionMaster;
      if ( v22 <= friendship )
      {
        v34 = this->fields.gaugeIcons;
        if ( !v34 )
          goto LABEL_36;
        if ( v21 >= v34->max_length )
          goto LABEL_38;
        v25 = (UIBasicSprite_o *)*((_QWORD *)&v34->obj.klass + v19);
        if ( !v25 )
          goto LABEL_36;
        v26 = 1.0;
      }
      else if ( friendship - v18 <= 0 )
      {
        v35 = this->fields.gaugeIcons;
        if ( !v35 )
          goto LABEL_36;
        if ( v21 >= v35->max_length )
        {
LABEL_38:
          sub_B17100(MasterData_WarQuestSelectionMaster, v13, v14);
          sub_B170A0();
        }
        v25 = (UIBasicSprite_o *)*((_QWORD *)&v35->obj.klass + v19);
        if ( !v25 )
          goto LABEL_36;
        v26 = 0.0;
      }
      else
      {
        v24 = this->fields.gaugeIcons;
        if ( !v24 )
          goto LABEL_36;
        if ( v21 >= v24->max_length )
          goto LABEL_38;
        v25 = (UIBasicSprite_o *)*((_QWORD *)&v24->obj.klass + v19);
        if ( !v25 )
          goto LABEL_36;
        v26 = (float)(friendship - v18) / (float)(v22 - v18);
      }
      UIBasicSprite__set_fillAmount(v25, v26, 0LL);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  int32_t v21; // w3
  const MethodInfo *v22; // x4
  struct FriendshipGauge_GaugeData_o *nowGauge; // x8
  struct FriendshipGauge_GaugeData_o *v24; // x8

  if ( (byte_40FB2BD & 1) == 0 )
  {
    sub_B16FFC(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendshipId);
    byte_40FB2BD = 1;
  }
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendShipRank = exceedCount + inMaxFriendShipRank;
  v13 = (FriendshipGauge_GaugeData_o *)sub_B170CC(
                                         FriendshipGauge_GaugeData_TypeInfo,
                                         *(_QWORD *)&friendshipId,
                                         *(_QWORD *)&friendship,
                                         *(_QWORD *)&friendshipRank,
                                         *(_QWORD *)&inMaxFriendShipRank);
  FriendshipGauge_GaugeData___ctor(v13, 0LL);
  p_nowGauge = &this->fields.nowGauge;
  this->fields.nowGauge = v13;
  sub_B16F98(
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
    || ((*p_nowGauge)->fields.friendship = friendship, (v24 = *p_nowGauge) == 0LL) )
  {
    sub_B170D4();
  }
  this->fields.prevRank = v24->fields.friendshipRank;
  this->fields.prevPoint = v24->fields.friendship;
  FriendshipGauge__ChangeGaugeData(this, friendshipId, friendship, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGauge__SetNextGaugeData(
        FriendshipGauge_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  __int64 v4; // x4
  FriendshipGauge_GaugeData_o *v8; // x22
  struct FriendshipGauge_GaugeData_o **p_nextGauge; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FB2BE & 1) == 0 )
  {
    sub_B16FFC(&FriendshipGauge_GaugeData_TypeInfo, *(_QWORD *)&friendship);
    byte_40FB2BE = 1;
  }
  v8 = (FriendshipGauge_GaugeData_o *)sub_B170CC(
                                        FriendshipGauge_GaugeData_TypeInfo,
                                        *(_QWORD *)&friendship,
                                        *(_QWORD *)&friendshipRank,
                                        method,
                                        v4);
  FriendshipGauge_GaugeData___ctor(v8, 0LL);
  this->fields.nextGauge = v8;
  p_nextGauge = &this->fields.nextGauge;
  sub_B16F98((BattleServantConfConponent_o *)p_nextGauge, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  if ( !*p_nextGauge || ((*p_nextGauge)->fields.friendshipRank = friendshipRank, !*p_nextGauge) )
    sub_B170D4();
  (*p_nextGauge)->fields.friendship = friendship;
}


void __fastcall FriendshipGauge__Show(FriendshipGauge_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGauge_GaugeData___ctor(FriendshipGauge_GaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}