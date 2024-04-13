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
  __int64 v11; // x1
  const MethodInfo *v12; // x1

  *(_QWORD *)&this->fields.rareRewardSize.fields.x = rewardInfo;
  p_rareRewardSize = &this->fields.rareRewardSize;
  sub_B5D560(
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
    sub_B5D69C(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  DiggingRewardComponent__SetRewardImage(this, v12);
}


bool __fastcall DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v2 )
    sub_B5D69C(this, method);
  return *(_DWORD *)(v2 + 32) == 1;
}


bool __fastcall DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v2 )
    sub_B5D69C(this, method);
  return *(_DWORD *)(v2 + 24) == 0;
}


void __fastcall DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardIconSprite; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int v5; // s0

  rewardIconSprite = (UIWidget_o *)this->fields.rewardIconSprite;
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_gray(0LL);
  if ( !rewardIconSprite )
    sub_B5D69C(v3, v4);
  UIWidget__set_color(rewardIconSprite, *(UnityEngine_Color_o *)&v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  WarEntity_o *v38; // x0
  WarEntity_o *v39; // x22
  int32_t age_high; // w20
  const MethodInfo *v41; // x2
  DataManager_o *v42; // x21
  char v43; // w8
  UISprite_o *v44; // x21
  __int64 v45; // x8
  UIWidget_o *v46; // x20
  int v47; // s0
  int v51; // w8
  struct System_String_o *age; // x22
  __int64 v53; // x23
  struct System_String_o *v54; // x22
  __int64 v55; // x23
  int32_t v56; // w22
  int32_t v57; // w22
  UISprite_o *rewardIconSprite; // x22
  int32_t ImageId; // w23
  UISprite_o *v60; // x23
  struct System_String_o *v61; // x24
  __int64 v62; // x25
  int32_t v63; // w24
  WarEntity_o *v64; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_42EA9A5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(
      &Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v23, v24, v25);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42EA9A5 = 1;
  }
  entity = 0LL;
  v64 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  v37 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v37 || !Instance )
    goto LABEL_70;
  v38 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          *(_DWORD *)(v37 + 28),
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v38 )
    return;
  v39 = v38;
  age_high = HIDWORD(v38->fields.age);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v39->fields.age, 0LL);
  if ( !Instance )
    goto LABEL_70;
  v42 = Instance;
  if ( HIDWORD(v39->fields.age) )
  {
LABEL_11:
    v43 = 0;
    goto LABEL_12;
  }
  v51 = *(_DWORD *)&Instance->fields._DispLog;
  if ( (unsigned int)(v51 - 6) < 2 )
  {
LABEL_27:
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_70;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  (int32_t)v42->fields.datalist,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_11;
    if ( !entity )
      goto LABEL_70;
    v53 = *(_QWORD *)&entity->fields.id;
    age = entity->fields.age;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v66.fields.currentCryptoKey = v53;
    *(_QWORD *)&v66.fields.fakeValue = age;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
    if ( (int)Instance < 1 )
    {
      v57 = 0;
    }
    else
    {
      if ( !entity )
        goto LABEL_70;
      v55 = *(_QWORD *)&entity->fields.id;
      v54 = entity->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v67.fields.currentCryptoKey = v55;
      *(_QWORD *)&v67.fields.fakeValue = v54;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v67, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v56, 0, 0LL);
      v57 = (int)Instance;
    }
    if ( entity )
    {
      v60 = *(UISprite_o **)&this->fields.rewardDepth;
      v62 = *(_QWORD *)&entity->fields.id;
      v61 = entity->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v68.fields.currentCryptoKey = v62;
      *(_QWORD *)&v68.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v60, v63, v57, 0LL);
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
    sub_B5D69C(Instance, v36);
  }
  if ( v51 != 2 )
  {
    if ( v51 == 1 )
      goto LABEL_27;
    Instance = (DataManager_o *)GiftEntity__getIconImageId((GiftEntity_o *)Instance, 0LL);
LABEL_55:
    age_high = (int)Instance;
    goto LABEL_11;
  }
  if ( SLODWORD(Instance->fields.datalist) < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_70;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &v64,
    (int32_t)v42->fields.datalist,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  Instance = (DataManager_o *)v64;
  if ( !v64 )
    goto LABEL_70;
  Instance = (DataManager_o *)ItemEntity__GetImageId((ItemEntity_o *)v64, 0LL);
  if ( (int)Instance < 1 )
    goto LABEL_11;
  Instance = (DataManager_o *)v64;
  if ( !v64 )
    goto LABEL_70;
  if ( v64->fields.bannerId != 29 )
  {
    Instance = (DataManager_o *)ItemEntity__GetImageId((ItemEntity_o *)v64, 0LL);
    goto LABEL_55;
  }
  rewardIconSprite = (UISprite_o *)this->fields.rewardIconSprite;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)v64, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetCoin(rewardIconSprite, ImageId, 0LL);
  v43 = 1;
LABEL_12:
  if ( age_high
    || !(v43 & 1 | ((unsigned int)(*(_DWORD *)&v42->fields._DispLog - 1) < 7) & (0x61u >> (v42->fields._DispLog - 1))) )
  {
    v44 = (UISprite_o *)this->fields.rewardIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = (DataManager_o *)AtlasManager__SetItem(v44, age_high, 0LL);
  }
  v45 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v45 )
    goto LABEL_70;
  if ( *(_DWORD *)(v45 + 32) == 1 )
  {
    v46 = (UIWidget_o *)this->fields.rewardIconSprite;
    *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_gray(0LL);
    if ( !v46 )
      goto LABEL_70;
    UIWidget__set_color(v46, *(UnityEngine_Color_o *)&v47, 0LL);
    v45 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
    if ( !v45 )
      goto LABEL_70;
  }
  DiggingRewardComponent__SetScaleAndDepth(this, *(_DWORD *)(v45 + 24) == 0, v41);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B5D69C(rewardIconSprite, IsRareReward);
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