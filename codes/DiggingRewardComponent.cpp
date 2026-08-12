void DiggingRewardComponent___ctor(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.rareRewardSize.fields.z = 0.0;
  *(_QWORD *)&this->fields.rewardDepth = 0xD0000000FLL;
  *(_QWORD *)&this->fields.rareRewardSize.fields.x = _D0;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct DiggingInfo_RewardInfos_o **p_rewardInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1

  this->fields.rewardInfo = rewardInfo;
  p_rewardInfo = &this->fields.rewardInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardInfo,
    (int32_t)rewardInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  DiggingRewardComponent__SetRewardImage(this, v12);
}


bool DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_2213CDC(this, method);
  return rewardInfo->fields.isReceived == 1;
}


bool DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_2213CDC(this, method);
  return rewardInfo->fields.priority == 0;
}


void DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardImageSprite; // x0
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
  if ( !rewardImageSprite )
    sub_2213CDC(0, method);
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
  Il2CppClass *klass; // x22
  void *monitor; // x23
  __int64 v17; // x2
  Il2CppClass *v18; // x22
  void *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t v22; // w22
  int32_t v23; // w22
  UISprite_o *rewardImageSprite; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t ImageId; // w23
  Il2CppClass *v28; // x24
  void *v29; // x25
  UISprite_o *rewardIconSprite; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t v33; // w24
  ItemEntity_o *v34; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596AAA0 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AAA0 = 1;
  }
  v34 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo || !Instance )
    goto LABEL_63;
  v6 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         rewardInfo->fields.diggingRewardId,
         (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v6 )
    return;
  v7 = v6;
  monitor_high = HIDWORD(v6[1].monitor);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  (int32_t)v10->fields.m_CancellationTokenSource,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_11;
    if ( !entity )
      goto LABEL_63;
    klass = entity[1].klass;
    monitor = entity[1].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v9);
    *(_QWORD *)&v36.fields.currentCryptoKey = klass;
    *(_QWORD *)&v36.fields.fakeValue = monitor;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
    if ( (int)Instance < 1 )
    {
      v23 = 0;
    }
    else
    {
      if ( !entity )
        goto LABEL_63;
      v18 = entity[1].klass;
      v19 = entity[1].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v17);
      *(_QWORD *)&v37.fields.currentCryptoKey = v18;
      *(_QWORD *)&v37.fields.fakeValue = v19;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v20, v21);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v22, 0, 0);
      v23 = (int)Instance;
    }
    if ( entity )
    {
      v28 = entity[1].klass;
      v29 = entity[1].monitor;
      rewardIconSprite = (UISprite_o *)this->fields.rewardIconSprite;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v17);
      *(_QWORD *)&v38.fields.currentCryptoKey = v28;
      *(_QWORD *)&v38.fields.fakeValue = v29;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31, v32);
      AtlasManager__SetFaceImage(rewardIconSprite, v33, v23, 1, 0, 0, 0);
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
    sub_2213CDC(Instance, v4);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_63;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)&v34,
    (int32_t)v10->fields.m_CancellationTokenSource,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)v34;
  if ( !v34 )
    goto LABEL_63;
  Instance = (DataManager_o *)ItemEntity__GetImageId(v34, 0);
  if ( (int)Instance < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)v34;
  if ( !v34 )
    goto LABEL_63;
  if ( v34->fields.type != 29 )
  {
    Instance = (DataManager_o *)ItemEntity__GetImageId(v34, 0);
    goto LABEL_50;
  }
  rewardImageSprite = this->fields.rewardImageSprite;
  ImageId = ItemEntity__GetImageId(v34, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25, v26);
  Instance = (DataManager_o *)AtlasManager__SetCoin(rewardImageSprite, ImageId, 0);
  v11 = 1;
LABEL_12:
  if ( monitor_high || !(v11 & 1 | (HIDWORD(v10->fields.m_CachedPtr) < 8) & (0xC2u >> HIDWORD(v10->fields.m_CachedPtr))) )
  {
    v12 = this->fields.rewardImageSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v9);
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
    v39.fields.r = 0.5;
    v39.fields.g = 0.5;
    v39.fields.b = 0.5;
    v39.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v39, 0);
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
  int32_t rewardDepth; // w1

  if ( !IsRareReward )
  {
    rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
    if ( rewardImageSprite )
    {
      UIWidget__set_depth(rewardImageSprite, this->fields.rewardDepth, 0);
      rewardImageSprite = (UIWidget_o *)this->fields.rewardIconSprite;
      if ( rewardImageSprite )
      {
        rewardDepth = this->fields.rewardDepth;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_2213CDC(rewardImageSprite, IsRareReward);
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
  rewardDepth = this->fields.rareRewardDepth;
LABEL_9:
  UIWidget__set_depth(rewardImageSprite, rewardDepth, 0);
}