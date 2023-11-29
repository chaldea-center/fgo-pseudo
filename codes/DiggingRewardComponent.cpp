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
  UnityEngine_Component_o *rewardIconSprite; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x1

  *(_QWORD *)&this->fields.rareRewardSize.fields.x = rewardInfo;
  p_rareRewardSize = &this->fields.rareRewardSize;
  sub_B16F98(
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
        (rewardIconSprite = (UnityEngine_Component_o *)this->fields.rewardIconSprite) == 0LL)
    || (v12 = UnityEngine_Component__get_gameObject(rewardIconSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v12, 1, 0LL),
        (v13 = *(UnityEngine_Component_o **)&this->fields.rewardDepth) == 0LL)
    || (v14 = UnityEngine_Component__get_gameObject(v13, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  DiggingRewardComponent__SetRewardImage(this, v15);
}


bool __fastcall DiggingRewardComponent__IsReveived(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v2 )
    sub_B170D4();
  return *(_DWORD *)(v2 + 32) == 1;
}


bool __fastcall DiggingRewardComponent__IsSize2(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v2 )
    sub_B170D4();
  return *(_DWORD *)(v2 + 24) == 0;
}


void __fastcall DiggingRewardComponent__Reveal(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardComponent__SetImageGray(DiggingRewardComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *rewardIconSprite; // x19
  int v3; // s0

  rewardIconSprite = (UIWidget_o *)this->fields.rewardIconSprite;
  *(UnityEngine_Color_o *)&v3 = UnityEngine_Color__get_gray(0LL);
  if ( !rewardIconSprite )
    sub_B170D4();
  UIWidget__set_color(rewardIconSprite, *(UnityEngine_Color_o *)&v3, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x8
  WarEntity_o *v16; // x0
  WarEntity_o *v17; // x22
  int32_t age_high; // w20
  WebViewManager_o *v19; // x0
  GiftMaster_o *v20; // x0
  GiftEntity_o *DataById; // x0
  const MethodInfo *v22; // x2
  GiftEntity_o *v23; // x21
  char v24; // w8
  UISprite_o *v25; // x21
  __int64 v26; // x8
  UIWidget_o *v27; // x20
  int v28; // s0
  int32_t type; // w8
  WebViewManager_o *v33; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x0
  struct System_String_o *age; // x22
  __int64 v36; // x23
  struct System_String_o *v37; // x22
  __int64 v38; // x23
  int32_t v39; // w22
  int32_t ImageLimitCount; // w22
  WebViewManager_o *v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x0
  UISprite_o *v43; // x22
  int32_t ImageId; // w23
  int32_t IconImageId; // w0
  UISprite_o *v46; // x23
  struct System_String_o *v47; // x24
  __int64 v48; // x25
  int32_t v49; // w24
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *rewardIconSprite; // x0
  UnityEngine_GameObject_o *v53; // x0
  WarEntity_o *v54; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_40FBCC8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FBCC8 = 1;
  }
  entity = 0LL;
  v54 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
  v15 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v15 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_70;
  v16 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          *(_DWORD *)(v15 + 28),
          (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int__GetEntity__);
  if ( !v16 )
    return;
  v17 = v16;
  age_high = HIDWORD(v16->fields.age);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_70;
  v20 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v19,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v20 )
    goto LABEL_70;
  DataById = GiftMaster__getDataById(v20, (int32_t)v17->fields.age, 0LL);
  if ( !DataById )
    goto LABEL_70;
  v23 = DataById;
  if ( HIDWORD(v17->fields.age) )
  {
LABEL_11:
    v24 = 0;
    goto LABEL_12;
  }
  type = DataById->fields.type;
  if ( (unsigned int)(type - 6) < 2 )
  {
LABEL_27:
    v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v33 )
      goto LABEL_70;
    v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v33,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v34 )
      goto LABEL_70;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v34,
            &entity,
            v23->fields.objectId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      goto LABEL_11;
    if ( !entity )
      goto LABEL_70;
    v36 = *(_QWORD *)&entity->fields.id;
    age = entity->fields.age;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v36;
    *(_QWORD *)&v56.fields.fakeValue = age;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL) < 1 )
    {
      ImageLimitCount = 0;
    }
    else
    {
      if ( !entity )
        goto LABEL_70;
      v38 = *(_QWORD *)&entity->fields.id;
      v37 = entity->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v57.fields.currentCryptoKey = v38;
      *(_QWORD *)&v57.fields.fakeValue = v37;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v39, 0, 0LL);
    }
    if ( entity )
    {
      v46 = *(UISprite_o **)&this->fields.rewardDepth;
      v48 = *(_QWORD *)&entity->fields.id;
      v47 = entity->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v58.fields.currentCryptoKey = v48;
      *(_QWORD *)&v58.fields.fakeValue = v47;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v46, v49, ImageLimitCount, 0LL);
      v50 = *(UnityEngine_Component_o **)&this->fields.rewardDepth;
      if ( v50 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v50, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          rewardIconSprite = (UnityEngine_Component_o *)this->fields.rewardIconSprite;
          if ( rewardIconSprite )
          {
            v53 = UnityEngine_Component__get_gameObject(rewardIconSprite, 0LL);
            if ( v53 )
            {
              UnityEngine_GameObject__SetActive(v53, 0, 0LL);
              goto LABEL_11;
            }
          }
        }
      }
    }
LABEL_70:
    sub_B170D4();
  }
  if ( type != 2 )
  {
    if ( type == 1 )
      goto LABEL_27;
    IconImageId = GiftEntity__getIconImageId(DataById, 0LL);
LABEL_55:
    age_high = IconImageId;
    goto LABEL_11;
  }
  if ( DataById->fields.objectId < 1 )
    goto LABEL_11;
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_70;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v41,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v42 )
    goto LABEL_70;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v42,
    &v54,
    v23->fields.objectId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v54 )
    goto LABEL_70;
  if ( ItemEntity__GetImageId((ItemEntity_o *)v54, 0LL) < 1 )
    goto LABEL_11;
  if ( !v54 )
    goto LABEL_70;
  if ( v54->fields.bannerId != 29 )
  {
    IconImageId = ItemEntity__GetImageId((ItemEntity_o *)v54, 0LL);
    goto LABEL_55;
  }
  v43 = (UISprite_o *)this->fields.rewardIconSprite;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)v54, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCoin(v43, ImageId, 0LL);
  v24 = 1;
LABEL_12:
  if ( age_high || !(v24 & 1 | ((unsigned int)(v23->fields.type - 1) < 7) & (0x61u >> (LOBYTE(v23->fields.type) - 1))) )
  {
    v25 = (UISprite_o *)this->fields.rewardIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(v25, age_high, 0LL);
  }
  v26 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
  if ( !v26 )
    goto LABEL_70;
  if ( *(_DWORD *)(v26 + 32) == 1 )
  {
    v27 = (UIWidget_o *)this->fields.rewardIconSprite;
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_gray(0LL);
    if ( !v27 )
      goto LABEL_70;
    UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
    v26 = *(_QWORD *)&this->fields.rareRewardSize.fields.x;
    if ( !v26 )
      goto LABEL_70;
  }
  DiggingRewardComponent__SetScaleAndDepth(this, *(_DWORD *)(v26 + 24) == 0, v22);
}


void __fastcall DiggingRewardComponent__SetScaleAndDepth(
        DiggingRewardComponent_o *this,
        bool IsRareReward,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *v5; // x0
  UIWidget_o *v6; // x0
  int32_t klass; // w1
  UIWidget_o *rewardIconSprite; // x0

  if ( !IsRareReward )
  {
    rewardIconSprite = (UIWidget_o *)this->fields.rewardIconSprite;
    if ( rewardIconSprite )
    {
      UIWidget__set_depth(rewardIconSprite, (int32_t)this[1].klass, 0LL);
      v6 = *(UIWidget_o **)&this->fields.rewardDepth;
      if ( v6 )
      {
        klass = (int32_t)this[1].klass;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B170D4();
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&this->fields.rareRewardSize.fields.z, 0LL);
  v5 = (UIWidget_o *)this->fields.rewardIconSprite;
  if ( !v5 )
    goto LABEL_10;
  UIWidget__set_depth(v5, HIDWORD(this[1].klass), 0LL);
  v6 = *(UIWidget_o **)&this->fields.rewardDepth;
  if ( !v6 )
    goto LABEL_10;
  klass = HIDWORD(this[1].klass);
LABEL_9:
  UIWidget__set_depth(v6, klass, 0LL);
}