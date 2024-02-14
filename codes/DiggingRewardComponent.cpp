void __fastcall DiggingRewardComponent___ctor(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.2S, #1.0 }
  *(_QWORD *)&this->fields.rareRewardSize.fields.z = _D1;
  LODWORD(this->fields.rewardImageSprite) = 0;
  this[1].klass = (DiggingRewardComponent_c *)0xD0000000FLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall DiggingRewardComponent__CheckBlockObjectByIndex(
        DiggingRewardComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.y == x && this->fields.priority == y;
}


bool __fastcall DiggingRewardComponent__HasRewardInfo(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  return *(_QWORD *)&this->fields.rareRewardSize.fields.x != 0LL;
}


void __fastcall DiggingRewardComponent__Initialize(
        DiggingRewardComponent_o *this,
        DiggingInfo_RewardInfos_o *rewardInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UnityEngine_Vector3_o *p_rareRewardSize; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1

  *(_QWORD *)&this->fields.rareRewardSize.fields.x = rewardInfo;
  p_rareRewardSize = &this->fields.rareRewardSize;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rareRewardSize,
    (System_Int32_array **)rewardInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)&p_rareRewardSize->fields.x
    || !gameObject
    || (UnityEngine_GameObject__SetActive(
          gameObject,
          *(_DWORD *)(*(_QWORD *)&p_rareRewardSize->fields.x + 24LL) != 0,
          0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.rewardIconSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = *(UnityEngine_GameObject_o **)&this->fields.rewardDepth) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_B0D97C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  DiggingRewardComponent__SetRewardImage(this, v11);
}


bool __fastcall DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v2 )
    sub_B0D97C(this);
  return *(_DWORD *)(v2 + 32) == 1;
}


bool __fastcall DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v2 )
    sub_B0D97C(this);
  return *(_DWORD *)(v2 + 24) == 0;
}


void __fastcall DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardIconSprite; // x19
  __int64 v3; // x0
  int v4; // s0

  rewardIconSprite = (UIWidget_o *)this->fields.rewardIconSprite;
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_gray(0LL);
  if ( !rewardIconSprite )
    sub_B0D97C(v3);
  UIWidget__set_color(rewardIconSprite, *(UnityEngine_Color_o *)&v4, 0LL);
}


void __fastcall DiggingRewardComponent__SetPosOnArea(
        DiggingRewardComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  this->fields.y = x;
  this->fields.priority = y;
}


void __fastcall DiggingRewardComponent__SetPriority(
        DiggingRewardComponent_o *this,
        int32_t priority,
        const MethodInfo *method)
{
  LODWORD(this->fields.rewardInfo) = priority;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x8
  WarEntity_o *v15; // x0
  WarEntity_o *v16; // x22
  int32_t age_high; // w20
  const MethodInfo *v18; // x2
  DataManager_o *v19; // x21
  char v20; // w8
  UISprite_o *v21; // x21
  __int64 v22; // x8
  UIWidget_o *v23; // x20
  int v24; // s0
  int v28; // w8
  struct System_String_o *age; // x22
  __int64 v30; // x23
  struct System_String_o *v31; // x22
  __int64 v32; // x23
  int32_t v33; // w22
  int32_t v34; // w22
  UISprite_o *rewardIconSprite; // x22
  int32_t ImageId; // w23
  UISprite_o *v37; // x23
  struct System_String_o *v38; // x24
  __int64 v39; // x25
  int32_t v40; // w24
  WarEntity_o *v41; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42162BD & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_42162BD = 1;
  }
  entity = 0LL;
  v41 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  v14 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v14 || !Instance )
    goto LABEL_70;
  v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          *(_DWORD *)(v14 + 28),
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v15 )
    return;
  v16 = v15;
  age_high = HIDWORD(v15->fields.age);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v16->fields.age, 0LL);
  if ( !Instance )
    goto LABEL_70;
  v19 = Instance;
  if ( HIDWORD(v16->fields.age) )
  {
LABEL_11:
    v20 = 0;
    goto LABEL_12;
  }
  v28 = *(_DWORD *)&Instance->fields._DispLog;
  if ( (unsigned int)(v28 - 6) < 2 )
  {
LABEL_27:
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_70;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  (int32_t)v19->fields.datalist,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_11;
    if ( !entity )
      goto LABEL_70;
    v30 = *(_QWORD *)&entity->fields.id;
    age = entity->fields.age;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v30;
    *(_QWORD *)&v43.fields.fakeValue = age;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v43, 0LL);
    if ( (int)Instance < 1 )
    {
      v34 = 0;
    }
    else
    {
      if ( !entity )
        goto LABEL_70;
      v32 = *(_QWORD *)&entity->fields.id;
      v31 = entity->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = v32;
      *(_QWORD *)&v44.fields.fakeValue = v31;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v33, 0, 0LL);
      v34 = (int)Instance;
    }
    if ( entity )
    {
      v37 = *(UISprite_o **)&this->fields.rewardDepth;
      v39 = *(_QWORD *)&entity->fields.id;
      v38 = entity->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v39;
      *(_QWORD *)&v45.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v37, v40, v34, 0LL);
      Instance = *(DataManager_o **)&this->fields.rewardDepth;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (DataManager_o *)this->fields.rewardIconSprite;
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
LABEL_70:
    sub_B0D97C(Instance);
  }
  if ( v28 != 2 )
  {
    if ( v28 == 1 )
      goto LABEL_27;
    Instance = (DataManager_o *)GiftEntity__getIconImageId((GiftEntity_o *)Instance, 0LL);
LABEL_55:
    age_high = (int)Instance;
    goto LABEL_11;
  }
  if ( SLODWORD(Instance->fields.datalist) < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_70;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &v41,
    (int32_t)v19->fields.datalist,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)v41;
  if ( !v41 )
    goto LABEL_70;
  Instance = (DataManager_o *)ItemEntity__GetImageId((ItemEntity_o *)v41, 0LL);
  if ( (int)Instance < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)v41;
  if ( !v41 )
    goto LABEL_70;
  if ( v41->fields.bannerId != 29 )
  {
    Instance = (DataManager_o *)ItemEntity__GetImageId((ItemEntity_o *)v41, 0LL);
    goto LABEL_55;
  }
  rewardIconSprite = (UISprite_o *)this->fields.rewardIconSprite;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)v41, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetCoin(rewardIconSprite, ImageId, 0LL);
  v20 = 1;
LABEL_12:
  if ( age_high
    || !(v20 & 1 | ((unsigned int)(*(_DWORD *)&v19->fields._DispLog - 1) < 7) & (0x61u >> (v19->fields._DispLog - 1))) )
  {
    v21 = (UISprite_o *)this->fields.rewardIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = (DataManager_o *)AtlasManager__SetItem(v21, age_high, 0LL);
  }
  v22 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v22 )
    goto LABEL_70;
  if ( *(_DWORD *)(v22 + 32) == 1 )
  {
    v23 = (UIWidget_o *)this->fields.rewardIconSprite;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
    if ( !v23 )
      goto LABEL_70;
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
    v22 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
    if ( !v22 )
      goto LABEL_70;
  }
  DiggingRewardComponent__SetScaleAndDepth(this, *(_DWORD *)(v22 + 24) == 0, v18);
}


void __fastcall DiggingRewardComponent__SetScaleAndDepth(
        DiggingRewardComponent_o *this,
        bool IsRareReward,
        const MethodInfo *method)
{
  UIWidget_o *rewardIconSprite; // x0
  int32_t klass; // w1

  if ( !IsRareReward )
  {
    rewardIconSprite = (UIWidget_o *)this->fields.rewardIconSprite;
    if ( rewardIconSprite )
    {
      UIWidget__set_depth(rewardIconSprite, (int32_t)this[1].klass, 0LL);
      rewardIconSprite = *(UIWidget_o **)&this->fields.rewardDepth;
      if ( rewardIconSprite )
      {
        klass = (int32_t)this[1].klass;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B0D97C(rewardIconSprite);
  }
  rewardIconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !rewardIconSprite )
    goto LABEL_10;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)rewardIconSprite,
    *(UnityEngine_Vector3_o *)&this->fields.rareRewardSize.fields.z,
    0LL);
  rewardIconSprite = (UIWidget_o *)this->fields.rewardIconSprite;
  if ( !rewardIconSprite )
    goto LABEL_10;
  UIWidget__set_depth(rewardIconSprite, HIDWORD(this[1].klass), 0LL);
  rewardIconSprite = *(UIWidget_o **)&this->fields.rewardDepth;
  if ( !rewardIconSprite )
    goto LABEL_10;
  klass = HIDWORD(this[1].klass);
LABEL_9:
  UIWidget__set_depth(rewardIconSprite, klass, 0LL);
}