void DiggingRewardComponent___ctor(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.2S, #1.0 }
  *(_QWORD *)&this->fields.rareRewardSize.fields.x = _D1;
  this->fields.rareRewardSize.fields.z = 0.0;
  *(_QWORD *)&this->fields.rewardDepth = 0xD0000000FLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool DiggingRewardComponent__CheckBlockObjectByIndex(
        DiggingRewardComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.x == x && this->fields.y == y;
}


bool DiggingRewardComponent__HasRewardInfo(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  return this->fields.rewardInfo != 0;
}


void DiggingRewardComponent__Initialize(
        DiggingRewardComponent_o *this,
        DiggingInfo_RewardInfos_o *rewardInfo,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o **p_rewardInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  this->fields.rewardInfo = rewardInfo;
  p_rewardInfo = &this->fields.rewardInfo;
  sub_1C93A78(&this->fields.rewardInfo, rewardInfo);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*p_rewardInfo
    || !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (*p_rewardInfo)->fields.priority != 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.rewardImageSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.rewardIconSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C93D2C(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  DiggingRewardComponent__SetRewardImage(this, v7);
}


bool DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_1C93D2C(this, method);
  return rewardInfo->fields.isReceived == 1;
}


bool DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_1C93D2C(this, method);
  return rewardInfo->fields.priority == 0;
}


void DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardImageSprite; // x0
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
  if ( !rewardImageSprite )
    sub_1C93D2C(0, method);
  v3.fields.r = 0.5;
  v3.fields.g = 0.5;
  v3.fields.b = 0.5;
  v3.fields.a = 1.0;
  UIWidget__set_color(rewardImageSprite, v3, 0);
}


void DiggingRewardComponent__SetPosOnArea(
        DiggingRewardComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  this->fields.x = x;
  this->fields.y = y;
}


void DiggingRewardComponent__SetPriority(DiggingRewardComponent_o *this, int32_t priority, const MethodInfo *method)
{
  this->fields.priority = priority;
}


void DiggingRewardComponent__SetRewardImage(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x22
  int32_t monitor_high; // w20
  const MethodInfo *v9; // x2
  DataManager_o *v10; // x21
  char v11; // w8
  UISprite_o *v12; // x21
  struct DiggingInfo_RewardInfos_o *v13; // x8
  int m_CachedPtr_high; // w8
  void *monitor; // x22
  Il2CppClass *klass; // x23
  void *v17; // x22
  Il2CppClass *v18; // x23
  int32_t v19; // w22
  int32_t v20; // w22
  UISprite_o *rewardImageSprite; // x22
  int32_t ImageId; // w23
  UISprite_o *rewardIconSprite; // x23
  void *v24; // x24
  Il2CppClass *v25; // x25
  int32_t v26; // w24
  ItemEntity_o *v27; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B0CF & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B0CF = 1;
  }
  v27 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo || !Instance )
    goto LABEL_63;
  v6 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         rewardInfo->fields.diggingRewardId,
         (const MethodInfo_3463274 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v6 )
    return;
  v7 = v6;
  monitor_high = HIDWORD(v6[1].monitor);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v7[1].monitor, 0);
  if ( !Instance )
    goto LABEL_63;
  v10 = Instance;
  if ( HIDWORD(v7[1].monitor) )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_12;
  }
  m_CachedPtr_high = HIDWORD(Instance->fields.m_CachedPtr);
  if ( (unsigned int)(m_CachedPtr_high - 6) < 2 )
  {
LABEL_26:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  (int32_t)v10->fields.m_CancellationTokenSource,
                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_11;
    if ( !entity )
      goto LABEL_63;
    klass = entity[1].klass;
    monitor = entity[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = klass;
    *(_QWORD *)&v29.fields.fakeValue = monitor;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v29, 0);
    if ( (int)Instance < 1 )
    {
      v20 = 0;
    }
    else
    {
      if ( !entity )
        goto LABEL_63;
      v18 = entity[1].klass;
      v17 = entity[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v18;
      *(_QWORD *)&v30.fields.fakeValue = v17;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v30, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v19, 0, 0);
      v20 = (int)Instance;
    }
    if ( entity )
    {
      rewardIconSprite = (UISprite_o *)this->fields.rewardIconSprite;
      v25 = entity[1].klass;
      v24 = entity[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = v25;
      *(_QWORD *)&v31.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v31, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(rewardIconSprite, v26, v20, 1, 0, 0);
      Instance = (DataManager_o *)this->fields.rewardIconSprite;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          Instance = (DataManager_o *)this->fields.rewardImageSprite;
          if ( Instance )
          {
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              goto LABEL_11;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C93D2C(Instance, v4);
  }
  if ( m_CachedPtr_high != 2 )
  {
    if ( m_CachedPtr_high == 1 )
      goto LABEL_26;
    Instance = (DataManager_o *)GiftEntity__getIconImageId((GiftEntity_o *)Instance, 0);
LABEL_50:
    monitor_high = (int)Instance;
    goto LABEL_11;
  }
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_63;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)&v27,
    (int32_t)v10->fields.m_CancellationTokenSource,
    (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)v27;
  if ( !v27 )
    goto LABEL_63;
  Instance = (DataManager_o *)ItemEntity__GetImageId(v27, 0);
  if ( (int)Instance < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)v27;
  if ( !v27 )
    goto LABEL_63;
  if ( v27->fields.type != 29 )
  {
    Instance = (DataManager_o *)ItemEntity__GetImageId(v27, 0);
    goto LABEL_50;
  }
  rewardImageSprite = this->fields.rewardImageSprite;
  ImageId = ItemEntity__GetImageId(v27, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetCoin(rewardImageSprite, ImageId, 0);
  v11 = 1;
LABEL_12:
  if ( monitor_high
    || !(v11 & 1
       | (0x61u >> (BYTE4(v10->fields.m_CachedPtr) - 1)) & ((unsigned int)(HIDWORD(v10->fields.m_CachedPtr) - 1) < 7)) )
  {
    v12 = this->fields.rewardImageSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetItem(v12, monitor_high, 0);
  }
  v13 = this->fields.rewardInfo;
  if ( !v13 )
    goto LABEL_63;
  if ( v13->fields.isReceived == 1 )
  {
    Instance = (DataManager_o *)this->fields.rewardImageSprite;
    if ( !Instance )
      goto LABEL_63;
    v32.fields.r = 0.5;
    v32.fields.g = 0.5;
    v32.fields.b = 0.5;
    v32.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v32, 0);
    v13 = this->fields.rewardInfo;
    if ( !v13 )
      goto LABEL_63;
  }
  DiggingRewardComponent__SetScaleAndDepth(this, v13->fields.priority == 0, v9);
}


// local variable allocation has failed, the output may be wrong!
void DiggingRewardComponent__SetScaleAndDepth(
        DiggingRewardComponent_o *this,
        bool IsRareReward,
        const MethodInfo *method)
{
  UIWidget_o *rewardImageSprite; // x0
  int32_t *p_rewardDepth; // x8

  if ( !IsRareReward )
  {
    rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
    if ( rewardImageSprite )
    {
      UIWidget__set_depth(rewardImageSprite, this->fields.rewardDepth, 0);
      rewardImageSprite = (UIWidget_o *)this->fields.rewardIconSprite;
      if ( rewardImageSprite )
      {
        p_rewardDepth = &this->fields.rewardDepth;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_1C93D2C(rewardImageSprite, IsRareReward);
  }
  rewardImageSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !rewardImageSprite )
    goto LABEL_10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rewardImageSprite, this->fields.rareRewardSize, 0);
  rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
  if ( !rewardImageSprite )
    goto LABEL_10;
  UIWidget__set_depth(rewardImageSprite, this->fields.rareRewardDepth, 0);
  rewardImageSprite = (UIWidget_o *)this->fields.rewardIconSprite;
  if ( !rewardImageSprite )
    goto LABEL_10;
  p_rewardDepth = &this->fields.rareRewardDepth;
LABEL_9:
  UIWidget__set_depth(rewardImageSprite, *p_rewardDepth, 0);
}