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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct DiggingInfo_RewardInfos_o **p_rewardInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1

  this->fields.rewardInfo = rewardInfo;
  p_rewardInfo = &this->fields.rewardInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.rewardInfo,
    (int64_t)rewardInfo,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BE4D28(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  DiggingRewardComponent__SetRewardImage(this, v12);
}


bool __fastcall DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_1BE4D28(this, method);
  return rewardInfo->fields.isReceived == 1;
}


bool __fastcall DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    sub_1BE4D28(this, method);
  return rewardInfo->fields.priority == 0;
}


void __fastcall DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardImageSprite; // x0
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  rewardImageSprite = (UIWidget_o *)this->fields.rewardImageSprite;
  if ( !rewardImageSprite )
    sub_1BE4D28(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x22
  int32_t monitor_high; // w20
  const MethodInfo *v19; // x2
  DataManager_o *v20; // x21
  char v21; // w8
  UISprite_o *v22; // x21
  struct DiggingInfo_RewardInfos_o *v23; // x8
  int v24; // w8
  void *monitor; // x22
  Il2CppClass *klass; // x23
  void *v27; // x22
  Il2CppClass *v28; // x23
  int32_t v29; // w22
  int32_t v30; // w22
  UISprite_o *rewardImageSprite; // x22
  int32_t ImageId; // w23
  UISprite_o *rewardIconSprite; // x23
  void *v34; // x24
  Il2CppClass *v35; // x25
  int32_t v36; // w24
  ItemEntity_o *v37; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6AEC6 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B6AEC6 = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo || !Instance )
    goto LABEL_63;
  v16 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          rewardInfo->fields.diggingRewardId,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v16 )
    return;
  v17 = v16;
  monitor_high = HIDWORD(v16[1].monitor);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v17[1].monitor, 0LL);
  if ( !Instance )
    goto LABEL_63;
  v20 = Instance;
  if ( HIDWORD(v17[1].monitor) )
  {
LABEL_11:
    v21 = 0;
    goto LABEL_12;
  }
  v24 = *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1);
  if ( (unsigned int)(v24 - 6) < 2 )
  {
LABEL_26:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  (int32_t)v20->fields.m_CancellationTokenSource,
                                  (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_11;
    if ( !entity )
      goto LABEL_63;
    klass = entity[1].klass;
    monitor = entity[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = klass;
    *(_QWORD *)&v39.fields.fakeValue = monitor;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v39, 0LL);
    if ( (int)Instance < 1 )
    {
      v30 = 0;
    }
    else
    {
      if ( !entity )
        goto LABEL_63;
      v28 = entity[1].klass;
      v27 = entity[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v28;
      *(_QWORD *)&v40.fields.fakeValue = v27;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v40, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v29, 0, 0LL);
      v30 = (int)Instance;
    }
    if ( entity )
    {
      rewardIconSprite = (UISprite_o *)this->fields.rewardIconSprite;
      v35 = entity[1].klass;
      v34 = entity[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v41.fields.currentCryptoKey = v35;
      *(_QWORD *)&v41.fields.fakeValue = v34;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v41, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(rewardIconSprite, v36, v30, 0LL);
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
    sub_1BE4D28(Instance, v14);
  }
  if ( v24 != 2 )
  {
    if ( v24 == 1 )
      goto LABEL_26;
    Instance = (DataManager_o *)GiftEntity__getIconImageId((GiftEntity_o *)Instance, 0LL);
LABEL_50:
    monitor_high = (int)Instance;
    goto LABEL_11;
  }
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_63;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)&v37,
    (int32_t)v20->fields.m_CancellationTokenSource,
    (const MethodInfo_31FD818 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)v37;
  if ( !v37 )
    goto LABEL_63;
  Instance = (DataManager_o *)ItemEntity__GetImageId(v37, 0LL);
  if ( (int)Instance < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)v37;
  if ( !v37 )
    goto LABEL_63;
  if ( v37->fields.type != 29 )
  {
    Instance = (DataManager_o *)ItemEntity__GetImageId(v37, 0LL);
    goto LABEL_50;
  }
  rewardImageSprite = this->fields.rewardImageSprite;
  ImageId = ItemEntity__GetImageId(v37, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetCoin(rewardImageSprite, ImageId, 0LL);
  v21 = 1;
LABEL_12:
  if ( monitor_high
    || !(v21 & 1 | (0x61u >> (*((_BYTE *)&v20->fields.UnityEngine_Behaviour_Fields + 4) - 1)) & ((unsigned int)(*((_DWORD *)&v20->fields.UnityEngine_Behaviour_Fields + 1) - 1) < 7)) )
  {
    v22 = this->fields.rewardImageSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetItem(v22, monitor_high, 0LL);
  }
  v23 = this->fields.rewardInfo;
  if ( !v23 )
    goto LABEL_63;
  if ( v23->fields.isReceived == 1 )
  {
    Instance = (DataManager_o *)this->fields.rewardImageSprite;
    if ( !Instance )
      goto LABEL_63;
    v42.fields.r = 0.5;
    v42.fields.g = 0.5;
    v42.fields.b = 0.5;
    v42.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v42, 0LL);
    v23 = this->fields.rewardInfo;
    if ( !v23 )
      goto LABEL_63;
  }
  DiggingRewardComponent__SetScaleAndDepth(this, v23->fields.priority == 0, v19);
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
    sub_1BE4D28(rewardImageSprite, IsRareReward);
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