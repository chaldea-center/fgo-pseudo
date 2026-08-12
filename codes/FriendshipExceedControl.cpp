void FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_c *v3; // x0

  if ( (byte_5974AF9 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_5974AF9 = 1;
  }
  v3 = CombineMenuControl_TypeInfo;
  this->fields.NORMAL_COLOR = (struct UnityEngine_Color_o)xmmword_E9CD90;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void FriendshipExceedControl__CheckTutorial(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 51, 0, 0, 0, 0, 0, 0);
}


int32_t FriendshipExceedControl__GetTutorialOpenType(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  return 51;
}


void FriendshipExceedControl__InitButtons(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  FriendshipExceedControl_o *v2; // x19
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_Callback_o *v5; // x22
  EventDelegate_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  struct UITouchPress_o *v17; // x8
  System_Collections_Generic_List_object__o *onLongPress; // x20
  EventDelegate_Callback_o *v19; // x22
  EventDelegate_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  v2 = this;
  if ( (byte_5974AEF & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_CombineMenuControl_OnLongPushListView__);
    sub_2213A60(&EventDelegate_TypeInfo);
    this = (FriendshipExceedControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    byte_5974AEF = 1;
  }
  if ( !v2->fields.isButtonInitialized )
  {
    baseServantTouchPress = v2->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_18;
    onClick = (System_Collections_Generic_List_object__o *)baseServantTouchPress->fields.onClick;
    v5 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._4_OnClickBase.method, 0);
    v6 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56337280(v6, v5, 0);
    if ( !onClick )
      goto LABEL_18;
    items = onClick->fields._items;
    v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++onClick->fields._version;
    if ( !items )
      goto LABEL_18;
    size = onClick->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onClick,
        (Il2CppObject *)v6,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      onClick->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)v6, v7, v8, v9, v10, v11, v12);
    }
    v17 = v2->fields.baseServantTouchPress;
    if ( !v17 )
      goto LABEL_18;
    onLongPress = (System_Collections_Generic_List_object__o *)v17->fields.onLongPress;
    v19 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v19, (Il2CppObject *)v2, (intptr_t)Method_CombineMenuControl_OnLongPushListView__, 0);
    v20 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56337280(v20, v19, 0);
    if ( !onLongPress
      || (v27 = onLongPress->fields._items,
          v28 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onLongPress->fields._version,
          !v27) )
    {
LABEL_18:
      sub_2213CDC(this, method);
    }
    v29 = onLongPress->fields._size;
    if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onLongPress,
        (Il2CppObject *)v20,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &v27->obj.klass + v29;
      onLongPress->fields._size = v29 + 1;
      v30[4] = (Il2CppClass *)v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v20, v21, v22, v23, v24, v25, v26);
    }
    v2->fields.isButtonInitialized = 1;
  }
}


void FriendshipExceedControl__InitFriendshipExceed(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0
  __int64 v15; // x1

  if ( (byte_5974AED & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9168/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/);
    byte_5974AED = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
    this->fields._FriendshipEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._FriendshipEntity_k__BackingField,
      0,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    FriendshipExceedControl__InitButtons(this, v10);
    FriendshipExceedControl__InitInfo(this, v11);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9168/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0) )
    {
      sub_2213CDC(gameObject, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}


void FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v21; // x6
  int32_t v22; // w20
  bool v23; // w3

  if ( (byte_5974AEE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974AEE = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCollectionEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantCollectionEntity,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  FriendshipExceedControl__SetUserQpInfo(this, v15);
  FriendshipExceedControl__SetRequiredQpInfo(this, v16);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v17);
  FriendshipExceedControl__ResetCharacterGraphic(this, v18);
  splitImage = this->fields.splitImage;
  if ( !splitImage )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(splitImage, 0, 0);
  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
  if ( !splitImage )
    goto LABEL_15;
  v22 = 0;
  while ( v22 < SLODWORD(splitImage[1].klass) )
  {
    splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)splitImage,
                                               v22,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, v19);
      splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
      if ( splitImage )
      {
        splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)splitImage,
                                                   v22,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( splitImage )
        {
          splitImage = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)splitImage, 0);
          if ( splitImage )
          {
            UnityEngine_GameObject__SetActive(splitImage, 0, 0);
            splitImage = (UnityEngine_GameObject_o *)this->fields.materialImages;
            if ( splitImage )
            {
              splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)splitImage,
                                                         v22,
                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0);
                  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
                  ++v22;
                  if ( splitImage )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent;
  v23 = this->fields.isBaseSelected
     && this->fields.isFriendshipRankMax
     && this->fields.isQpEnough
     && this->fields.isItemEnough;
  if ( !splitImage )
LABEL_15:
    sub_2213CDC(splitImage, v19);
  FriendshipExceedInfoComponent__SetInfo((FriendshipExceedInfoComponent_o *)splitImage, 0, 0, v23, 0, 0, v21);
}


void FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_5974AF7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3913/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_5974AF7 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_2213CDC(v3, v4);
  SetRarityDialogControl__SetFriendshipExceedInfo(exeCombineDlg, v3, this->fields.requiredQp, this->fields.userQp, 0);
}


void FriendshipExceedControl__ResetCharacterGraphic(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *characterGraphic; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5974AF6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974AF6 = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.characterGraphic;
    if ( !v5 )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.characterGraphic = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.characterGraphic, 0, v8, v9, v10, v11, v12, v13);
  }
}


void FriendshipExceedControl__SetBaseServantCardImage(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_baseUserServantEntity; // x20
  struct UICharaGraphTexture_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(FriendshipExceedControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                          this,
                                          this->fields.characterGraphic,
                                          *p_baseUserServantEntity,
                                          this->klass->vtable._7_SetCharaGraph.method);
  this->fields.characterGraphic = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.characterGraphic,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  Il2CppObject *v9; // x20
  struct UserServantEntity_o *v10; // x8
  UserServantCollectionMaster_o *v11; // x21
  __int128 v12; // q1
  struct UserServantEntity_o *v13; // x8
  int64_t v14; // x22
  struct UserServantCollectionEntity_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int klass_high; // w21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  struct UserServantCollectionEntity_o *v32; // x8
  __int64 v33; // x21
  __int64 v34; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-70h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_5974AF4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AF4 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v38.fields.currentCryptoKey = v7;
  *(_QWORD *)&v38.fields.fakeValue = v8;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
  if ( !v6 )
    goto LABEL_24;
  v9 = DataMasterBase_object__object__int___GetEntity(
         v6,
         Instance,
         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v10 = this->fields.baseUserServantEntity;
  if ( !v10 )
    goto LABEL_24;
  v11 = (UserServantCollectionMaster_o *)Instance;
  v12 = *(_OWORD *)&v10->fields.userId.fields.fakeValue;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v10->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v12;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
  v35 = v36;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v35, 0);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_24;
  v14 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13->fields.svtId, 0);
  if ( !v11 )
    goto LABEL_24;
  v15 = UserServantCollectionMaster__GetEntity(v11, v14, Instance, 0);
  this->fields.baseUserServantCollectionEntity = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantCollectionEntity,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_24;
  if ( !v9 )
    goto LABEL_24;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  klass_high = HIDWORD(v9[6].klass);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               (int32_t)v9[6].klass,
               friendshipExceedCount + klass_high + 1,
               0);
  if ( (Instance & 1) != 0 )
  {
    v31 = (int)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._FriendshipEntity_k__BackingField,
      v31,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v32 = this->fields.baseUserServantCollectionEntity;
  if ( !v32 )
LABEL_24:
    sub_2213CDC(Instance, v4);
  v33 = *(_QWORD *)&v32->fields.friendshipRank.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.friendshipRank.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v39.fields.currentCryptoKey = v33;
  *(_QWORD *)&v39.fields.fakeValue = v34;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v39, 0) == HIDWORD(v9[6].klass) + friendshipExceedCount;
}


void FriendshipExceedControl__SetExecuteButtonState(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  UnityEngine_Behaviour_o *v4; // x20
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974AF5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_5974AF5 = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
    goto LABEL_38;
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  combineTextImage,
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  v4 = (UnityEngine_Behaviour_o *)combineTextImage;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
    method = (const MethodInfo *)this->fields.isItemEnough;
  else
    method = 0;
  if ( !this->fields.executeButton )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.executeButton, (bool)method, 0);
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
    method = (const MethodInfo *)this->fields.isItemEnough;
  else
    method = 0;
  if ( !v4 )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled(v4, (bool)method, 0);
  v7.fields.a = 1.0;
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonText;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v7.fields.r = 0.5;
    if ( this->fields.isItemEnough )
      v7.fields.r = 1.0;
  }
  else
  {
    v7.fields.r = 0.5;
  }
  if ( !combineTextImage )
    goto LABEL_38;
  v7.fields.g = v7.fields.r;
  v7.fields.b = v7.fields.r;
  UIWidget__set_color((UIWidget_o *)combineTextImage, v7, 0);
  v8.fields.a = 1.0;
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonBg;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v8.fields.r = 0.5;
    if ( this->fields.isItemEnough )
      v8.fields.r = 1.0;
  }
  else
  {
    v8.fields.r = 0.5;
  }
  if ( !combineTextImage )
LABEL_38:
    sub_2213CDC(combineTextImage, method);
  v8.fields.g = v8.fields.r;
  v8.fields.b = v8.fields.r;
  UIWidget__set_color((UIWidget_o *)combineTextImage, v8, 0);
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    UITweener__PlayForward((UITweener_o *)v4, 0);
  }
}


void FriendshipExceedControl__SetFriendshipExceedInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x6
  bool isItemEnough; // w3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  splitImage = this->fields.splitImage;
  if ( !splitImage
    || ((UnityEngine_GameObject__SetActive(splitImage, 1, 0),
         FriendshipExceedControl__SetEntities(this, v4),
         splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent,
         !this->fields.isBaseSelected)
     || !this->fields.isFriendshipRankMax
     || !this->fields.isQpEnough
      ? (isItemEnough = 0)
      : (isItemEnough = this->fields.isItemEnough),
        !splitImage) )
  {
    sub_2213CDC(splitImage, method);
  }
  FriendshipExceedInfoComponent__SetInfo(
    (FriendshipExceedInfoComponent_o *)splitImage,
    this->fields.baseUserServantEntity,
    this->fields.baseUserServantCollectionEntity,
    isItemEnough,
    0,
    0,
    v5);
  FriendshipExceedControl__SetUserQpInfo(this, v7);
  FriendshipExceedControl__SetRequiredQpInfo(this, v8);
  FriendshipExceedControl__SetLimitCntUpItemComponents(this, v9);
  FriendshipExceedControl__SetExecuteButtonState(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipExceedControl__SetInfoMessage(FriendshipExceedControl_o *this, int32_t state, const MethodInfo *method)
{
  UILabel_o *detailInfoLabel; // x20
  __int64 *v6; // x8
  System_String_o *v7; // x0
  __int64 v8; // x1
  int v12; // w8
  __int64 *v13; // x8
  UnityEngine_Color_o NORMAL_COLOR; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974AF8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7768/*"INFO_MSG_FRIENDSHIP_EXCEED"*/);
    sub_2213A60(&StringLiteral_9163/*"MSG_FRIENDSHIP_EXCEED_BASE"*/);
    sub_2213A60(&StringLiteral_6018/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    byte_5974AF8 = 1;
  }
  if ( state == 2 )
  {
    if ( this->fields.isFriendshipRankMax )
    {
      if ( this->fields.isItemEnough )
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( this->fields.isQpEnough )
        {
          if ( !v12 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
          v6 = &StringLiteral_6018/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
LABEL_8:
          v7 = LocalizationManager__Get((System_String_o *)*v6, 0);
          if ( detailInfoLabel )
          {
            UILabel__set_text(detailInfoLabel, v7, 0);
            v7 = (System_String_o *)this->fields.detailInfoLabel;
            if ( v7 )
            {
              NORMAL_COLOR = this->fields.NORMAL_COLOR;
LABEL_30:
              UIWidget__set_color((UIWidget_o *)v7, NORMAL_COLOR, 0);
              return;
            }
          }
          goto LABEL_31;
        }
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        v13 = &StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        v13 = &StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      v13 = &StringLiteral_9163/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v7 = LocalizationManager__Get((System_String_o *)*v13, 0);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v7, 0);
      v7 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v7 )
      {
        NORMAL_COLOR.fields.r = 1.0;
        NORMAL_COLOR.fields.g = 1.0;
        NORMAL_COLOR.fields.b = 1.0;
        NORMAL_COLOR.fields.a = 1.0;
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_2213CDC(v7, v8);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v6 = &StringLiteral_7768/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
    goto LABEL_8;
  }
}


void FriendshipExceedControl__SetLimitCntUpItemComponents(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int64_t limitCntUpItemComponentList; // x0
  __int64 v4; // x25
  unsigned __int64 v5; // x20
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct FriendshipEntity_o *v8; // x8
  struct System_Int32_array *v9; // x8
  struct FriendshipEntity_o *v10; // x9
  struct System_Int32_array *v11; // x8
  unsigned __int64 max_length_low; // x10
  struct System_Int32_array *itemNums; // x9
  struct UserServantEntity_o *baseUserServantEntity; // x8
  LimitCntUpItemComponent_o *v15; // x21
  __int128 v16; // q0
  __int128 v17; // q1
  int v18; // w8
  const MethodInfo *v19; // x4
  struct FriendshipEntity_o *v20; // x9
  struct System_Int32_array *v21; // x8
  struct System_Int32_array *v22; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]

  if ( (byte_5974AF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974AF3 = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_36:
      sub_2213CDC(limitCntUpItemComponentList, method);
    v4 = 8;
    while ( 1 )
    {
      v5 = v4 - 8;
      if ( v4 - 8 >= *(int *)(limitCntUpItemComponentList + 24) )
        break;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v5,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      limitCntUpItemComponentList = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)limitCntUpItemComponentList,
                                               0);
      FriendshipEntity_k__BackingField = this->fields._FriendshipEntity_k__BackingField;
      if ( !FriendshipEntity_k__BackingField )
        goto LABEL_36;
      itemIds = FriendshipEntity_k__BackingField->fields.itemIds;
      if ( !itemIds )
        goto LABEL_36;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)limitCntUpItemComponentList,
        (__int64)v5 < SLODWORD(itemIds->max_length),
        0);
      limitCntUpItemComponentList = (int64_t)this->fields.materialImages;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v5,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v8 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v8 )
        goto LABEL_36;
      v9 = v8->fields.itemIds;
      if ( !v9 )
        goto LABEL_36;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)limitCntUpItemComponentList,
        (__int64)v5 >= SLODWORD(v9->max_length),
        0);
      v10 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v10 )
        goto LABEL_36;
      v11 = v10->fields.itemIds;
      if ( !v11 )
        goto LABEL_36;
      max_length_low = LODWORD(v11->max_length);
      if ( (__int64)v5 < (int)max_length_low )
      {
        if ( v5 >= max_length_low )
          goto LABEL_38;
        itemNums = v10->fields.itemNums;
        if ( !itemNums )
          goto LABEL_36;
        if ( v5 >= LODWORD(itemNums->max_length) )
          goto LABEL_38;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *((_DWORD *)&v11->obj.klass + v4),
          *((_DWORD *)&itemNums->obj.klass + v4),
          0);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v5,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_36;
        v15 = (LimitCntUpItemComponent_o *)limitCntUpItemComponentList;
        v16 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        v17 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v24.fields.currentCryptoKey = v16;
        *(_OWORD *)&v24.fields.fakeValue = v17;
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
        v23 = v24;
        limitCntUpItemComponentList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0);
        v20 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v20 )
          goto LABEL_36;
        v21 = v20->fields.itemIds;
        if ( !v21 )
          goto LABEL_36;
        if ( v5 >= LODWORD(v21->max_length) )
          goto LABEL_38;
        v22 = v20->fields.itemNums;
        if ( !v22 )
          goto LABEL_36;
        if ( v5 >= LODWORD(v22->max_length) )
LABEL_38:
          sub_2213CE4(limitCntUpItemComponentList);
        if ( !v15 )
          goto LABEL_36;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v15,
          limitCntUpItemComponentList,
          *((_DWORD *)&v21->obj.klass + v4),
          *((_DWORD *)&v22->obj.klass + v4),
          v19);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v5,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        if ( !*(_BYTE *)(limitCntUpItemComponentList + 112) )
          this->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
      ++v4;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
    }
  }
}


void FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x9
  System_String_o *v4; // x1
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974AF1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974AF1 = 1;
  }
  LODWORD(FriendshipEntity_k__BackingField) = this->fields.isBaseSelected;
  if ( this->fields.isBaseSelected )
  {
    FriendshipEntity_k__BackingField = this->fields._FriendshipEntity_k__BackingField;
    if ( FriendshipEntity_k__BackingField )
      LODWORD(FriendshipEntity_k__BackingField) = FriendshipEntity_k__BackingField->fields.qp;
  }
  v4 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  requiredQpLabel = this->fields.requiredQpLabel;
  this->fields.requiredQp = (int)FriendshipEntity_k__BackingField;
  v6 = System_Int32__ToString_77138656((int)this + 400, v4, 0);
  if ( !requiredQpLabel
    || (UILabel__set_text(requiredQpLabel, v6, 0), (v6 = (System_String_o *)this->fields.requiredQpLabel) == 0) )
  {
    sub_2213CDC(v6, v7);
  }
  v9.fields.g = 1.0;
  v9.fields.a = 1.0;
  if ( this->fields.userQp < this->fields.requiredQp )
    v9.fields.g = 0.0;
  v9.fields.r = 1.0;
  v9.fields.b = v9.fields.g;
  UIWidget__set_color((UIWidget_o *)v6, v9, 0);
  this->fields.isQpEnough = this->fields.userQp >= this->fields.requiredQp;
}


void FriendshipExceedControl__SetSelectedBaseServantId(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *selectData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  bool v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_5974AF2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974AF2 = 1;
  }
  if ( selectData )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v11;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v17, 0);
      v13 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0) )
        FriendshipExceedControl__InitInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    FriendshipExceedControl__InitInfo(this, (const MethodInfo *)selectData);
    v15 = 0;
  }
  this->fields.baseUserServantEntity = selectData;
  this->fields.isBaseSelected = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *userQpLabel; // x20
  System_String_o *v6; // x1

  if ( (byte_5974AF0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974AF0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.userQp = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.userQp, v6, 0),
        !userQpLabel) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0);
}


void FriendshipExceedControl__ShowItemListInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLabel; // x0
  const MethodInfo *v4; // x1

  preSelectBaseLabel = (UnityEngine_Component_o *)this->fields.preSelectBaseLabel;
  if ( !preSelectBaseLabel
    || (preSelectBaseLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)preSelectBaseLabel,
          !this->fields.isBaseSelected,
          0),
        (preSelectBaseLabel = (UnityEngine_Component_o *)this->fields.baseSelectInfoLabel) == 0) )
  {
    sub_2213CDC(preSelectBaseLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLabel, !this->fields.isBaseSelected, 0);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  if ( this->fields.isBaseSelected )
    FriendshipExceedControl__SetFriendshipExceedInfo(this, v4);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


FriendshipEntity_o *FriendshipExceedControl__get_FriendshipEntity(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipEntity_k__BackingField;
}


bool FriendshipExceedControl__get_IsExecutable(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSelected
      && this->fields.isFriendshipRankMax
      && this->fields.isQpEnough
      && this->fields.isItemEnough;
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *FriendshipExceedControl__get_ItemInfoList(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields.limitCntUpItemComponentList;
}


void FriendshipExceedControl__set_FriendshipEntity(
        FriendshipExceedControl_o *this,
        FriendshipEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FriendshipEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FriendshipEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}