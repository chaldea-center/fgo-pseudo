void __fastcall DiggingRewardComponent___ctor(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.2S, #1.0 }
  *(_QWORD *)&this->fields.rareRewardSize.fields.x = _D1;
  this->fields.rareRewardSize.fields.z = 0.0;
  *(_QWORD *)&this->fields.rewardDepth = 0xD0000000FLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall DiggingRewardComponent__CheckBlockObjectByIndex(
        DiggingRewardComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.x == x && this->fields.y == y;
}


bool __fastcall DiggingRewardComponent__HasRewardInfo(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  return this->fields.rewardInfo != 0LL;
}


void __fastcall DiggingRewardComponent__Initialize(
        DiggingRewardComponent_o *this,
        DiggingInfo_RewardInfos_o *rewardInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct DiggingInfo_RewardInfos_o **p_rewardInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  this->fields.rewardInfo = rewardInfo;
  p_rewardInfo = &this->fields.rewardInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardInfo, (int32_t)rewardInfo, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*p_rewardInfo
    || !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (*p_rewardInfo)->fields.priority != 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.rewardImageSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.rewardIconSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B8880C(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  DiggingRewardComponent__SetRewardImage(this, v8);
}


bool __fastcall DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_1B8880C(this, method);
  return rewardInfo->fields.isReceived == 1;
}


bool __fastcall DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_1B8880C(this, method);
  return rewardInfo->fields.priority == 0;
}


void __fastcall DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardImageSprite; // x0
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
  if ( !rewardImageSprite )
    sub_1B8880C(0LL, method);
  v3.fields.r = 0.5;
  v3.fields.g = 0.5;
  v3.fields.b = 0.5;
  v3.fields.a = 1.0;
  UIWidget__set_color(rewardImageSprite, v3, 0LL);
}


void __fastcall DiggingRewardComponent__SetPosOnArea(
        DiggingRewardComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  this->fields.x = x;
  this->fields.y = y;
}


void __fastcall DiggingRewardComponent__SetPriority(
        DiggingRewardComponent_o *this,
        int32_t priority,
        const MethodInfo *method)
{
  this->fields.priority = priority;
}


void __fastcall DiggingRewardComponent__SetRewardImage(DiggingRewardComponent_o *this, const MethodInfo *method)
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
  int v14; // w8
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

  if ( (byte_4A5F334 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F334 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo || !Instance )
    goto LABEL_63;
  v6 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         rewardInfo->fields.diggingRewardId,
         (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v6 )
    return;
  v7 = v6;
  monitor_high = HIDWORD(v6[1].monitor);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v7[1].monitor, 0LL);
  if ( !Instance )
    goto LABEL_63;
  v10 = Instance;
  if ( HIDWORD(v7[1].monitor) )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_12;
  }
  v14 = *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1);
  if ( (unsigned int)(v14 - 6) < 2 )
  {
LABEL_26:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  (int32_t)v10->fields.m_CancellationTokenSource,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
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
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v19, 0, 0LL);
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
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(rewardIconSprite, v26, v20, 0LL);
      Instance = (DataManager_o *)this->fields.rewardIconSprite;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (DataManager_o *)this->fields.rewardImageSprite;
          if ( Instance )
          {
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              goto LABEL_11;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1B8880C(Instance, v4);
  }
  if ( v14 != 2 )
  {
    if ( v14 == 1 )
      goto LABEL_26;
    Instance = (DataManager_o *)GiftEntity__getIconImageId((GiftEntity_o *)Instance, 0LL);
LABEL_50:
    monitor_high = (int)Instance;
    goto LABEL_11;
  }
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_63;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)&v27,
    (int32_t)v10->fields.m_CancellationTokenSource,
    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)v27;
  if ( !v27 )
    goto LABEL_63;
  Instance = (DataManager_o *)ItemEntity__GetImageId(v27, 0LL);
  if ( (int)Instance < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)v27;
  if ( !v27 )
    goto LABEL_63;
  if ( v27->fields.type != 29 )
  {
    Instance = (DataManager_o *)ItemEntity__GetImageId(v27, 0LL);
    goto LABEL_50;
  }
  rewardImageSprite = this->fields.rewardImageSprite;
  ImageId = ItemEntity__GetImageId(v27, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetCoin(rewardImageSprite, ImageId, 0LL);
  v11 = 1;
LABEL_12:
  if ( monitor_high
    || !(v11 & 1 | (0x61u >> (*((_BYTE *)&v10->fields.UnityEngine_Behaviour_Fields + 4) - 1)) & ((unsigned int)(*((_DWORD *)&v10->fields.UnityEngine_Behaviour_Fields + 1) - 1) < 7)) )
  {
    v12 = this->fields.rewardImageSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetItem(v12, monitor_high, 0LL);
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
    UIWidget__set_color((UIWidget_o *)Instance, v32, 0LL);
    v13 = this->fields.rewardInfo;
    if ( !v13 )
      goto LABEL_63;
  }
  DiggingRewardComponent__SetScaleAndDepth(this, v13->fields.priority == 0, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardComponent__SetScaleAndDepth(
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
      UIWidget__set_depth(rewardImageSprite, this->fields.rewardDepth, 0LL);
      rewardImageSprite = (UIWidget_o *)this->fields.rewardIconSprite;
      if ( rewardImageSprite )
      {
        p_rewardDepth = &this->fields.rewardDepth;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_1B8880C(rewardImageSprite, IsRareReward);
  }
  rewardImageSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !rewardImageSprite )
    goto LABEL_10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rewardImageSprite, this->fields.rareRewardSize, 0LL);
  rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
  if ( !rewardImageSprite )
    goto LABEL_10;
  UIWidget__set_depth(rewardImageSprite, this->fields.rareRewardDepth, 0LL);
  rewardImageSprite = (UIWidget_o *)this->fields.rewardIconSprite;
  if ( !rewardImageSprite )
    goto LABEL_10;
  p_rewardDepth = &this->fields.rareRewardDepth;
LABEL_9:
  UIWidget__set_depth(rewardImageSprite, *p_rewardDepth, 0LL);
}