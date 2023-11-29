// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s1
  int v7; // s2
  int v9; // s0
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  v6 = 1063321600;
  v7 = 1065156608;
  v9 = 0;
  *(_QWORD *)&v10.fields.r = 0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.NORMAL_COLOR = v10;
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall FriendshipExceedControl__CheckTutorial(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 51, 0LL, 0, 0, 0, 0, 0LL);
}


int32_t __fastcall FriendshipExceedControl__GetTutorialOpenType(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  return 51;
}


void __fastcall FriendshipExceedControl__InitButtons(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onClick; // x20
  EventDelegate_Callback_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  EventDelegate_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  EventDelegate_Callback_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  EventDelegate_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct UITouchPress_o *v34; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onLongPress; // x20
  EventDelegate_Callback_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  EventDelegate_o *v41; // x21

  if ( (byte_40FB2AC & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_CombineMenuControl_OnLongPushListView__, v6);
    sub_B16FFC(&EventDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_FriendshipExceedControl_OnClickExecute__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9);
    byte_40FB2AC = 1;
  }
  if ( !this->fields.isButtonInitialized )
  {
    executeButton = this->fields.executeButton;
    if ( !executeButton )
      goto LABEL_12;
    onClick = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)executeButton->fields.onClick;
    v12 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, method, v2, v3, v4);
    EventDelegate_Callback___ctor(v12, (Il2CppObject *)this, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v17 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v13, v14, v15, v16);
    EventDelegate___ctor_29412484(v17, v12, 0LL);
    if ( !onClick )
      goto LABEL_12;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onClick,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    baseServantTouchPress = this->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_12;
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseServantTouchPress->fields.onClick;
    v24 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v18, v19, v20, v21);
    EventDelegate_Callback___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._5_OnClickHelp.methodPtr,
      0LL);
    v29 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v25, v26, v27, v28);
    EventDelegate___ctor_29412484(v29, v24, 0LL);
    if ( !v23
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
          (v34 = this->fields.baseServantTouchPress) == 0LL)
      || (onLongPress = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->fields.onLongPress,
          v36 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v30, v31, v32, v33),
          EventDelegate_Callback___ctor(v36, (Il2CppObject *)this, Method_CombineMenuControl_OnLongPushListView__, 0LL),
          v41 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v37, v38, v39, v40),
          EventDelegate___ctor_29412484(v41, v36, 0LL),
          !onLongPress) )
    {
LABEL_12:
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onLongPress,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    this->fields.isButtonInitialized = 1;
  }
}


void __fastcall FriendshipExceedControl__InitFriendshipExceed(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLabel; // x0

  if ( (byte_40FB2AA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8809, v4);
    byte_40FB2AA = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( v5->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
    this->fields._FriendshipEntity_k__BackingField = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
      0LL,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    FriendshipExceedControl__InitButtons(this, v12);
    FriendshipExceedControl__InitInfo(this, v13);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8809, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, v15, 0LL),
          (v16 = (UnityEngine_Component_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject(v16, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (baseSelectInfoLabel = this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(baseSelectInfoLabel, 1, 0LL);
  }
}


void __fastcall FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v22; // x6
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x22
  __int64 v24; // x20
  int size; // w8
  unsigned int v26; // w21
  LimitCntUpItemComponent_o *v27; // x0
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v28; // x22
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x22
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  FriendshipExceedInfoComponent_o *friendshipExceedInfoComponent; // x0
  bool isItemEnough; // w3

  if ( (byte_40FB2AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    byte_40FB2AB = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  FriendshipExceedControl__SetUserQpInfo(this, v17);
  FriendshipExceedControl__SetRequiredQpInfo(this, v18);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v19);
  FriendshipExceedControl__ResetCharacterGraphic(this, v20);
  splitImage = this->fields.splitImage;
  if ( !splitImage
    || (UnityEngine_GameObject__SetActive(splitImage, 0, 0LL),
        (limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  v24 = 4LL;
  while ( 1 )
  {
    size = limitCntUpItemComponentList->fields._size;
    v26 = v24 - 4;
    if ( (int)v24 - 4 >= size )
      break;
    if ( size <= v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v27 = (LimitCntUpItemComponent_o *)*((_QWORD *)&limitCntUpItemComponentList->fields._items->obj.klass + v24);
    if ( v27 )
    {
      LimitCntUpItemComponent__enableDispItemInfo(v27, 0LL);
      v28 = this->fields.limitCntUpItemComponentList;
      if ( v28 )
      {
        if ( v28->fields._size <= v26 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v29 = (UnityEngine_Component_o *)*((_QWORD *)&v28->fields._items->obj.klass + v24);
        if ( v29 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            materialImages = this->fields.materialImages;
            if ( materialImages )
            {
              if ( materialImages->fields._size <= v26 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v32 = (UnityEngine_GameObject_o *)*((_QWORD *)&materialImages->fields._items->obj.klass + v24);
              if ( v32 )
              {
                v33 = UnityEngine_GameObject__get_gameObject(v32, 0LL);
                if ( v33 )
                {
                  UnityEngine_GameObject__SetActive(v33, 0, 0LL);
                  limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList;
                  ++v24;
                  if ( limitCntUpItemComponentList )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  friendshipExceedInfoComponent = this->fields.friendshipExceedInfoComponent;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    isItemEnough = this->fields.isItemEnough;
    if ( !friendshipExceedInfoComponent )
      goto LABEL_29;
  }
  else
  {
    isItemEnough = 0;
    if ( !friendshipExceedInfoComponent )
      goto LABEL_29;
  }
  FriendshipExceedInfoComponent__SetInfo(friendshipExceedInfoComponent, 0LL, 0LL, isItemEnough, 0, 0, v22);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_40FB2B5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3323, v3);
    byte_40FB2B5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3323, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B170D4();
  SetRarityDialogControl__SetFriendshipExceedInfo(
    this->fields.exeCombineDlg,
    v4,
    this->fields.requiredQp,
    this->fields.userQp,
    0LL);
}


void __fastcall FriendshipExceedControl__ResetCharacterGraphic(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *characterGraphic; // x20
  UnityEngine_Component_o **p_characterGraphic; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FB2B4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB2B4 = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0LL, 0LL) )
  {
    p_characterGraphic = (UnityEngine_Component_o **)&this->fields.characterGraphic;
    if ( !*p_characterGraphic )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_characterGraphic, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall FriendshipExceedControl__SetBaseServantCardImage(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserServantEntity_o **p_baseUserServantEntity; // x20
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v18; // x8
  ServantLimitImageMaster_o *v19; // x22
  __int64 v20; // x23
  __int64 v21; // x24
  int32_t v22; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v25; // w21
  UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40FB2B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, entity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FB2B3 = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_17;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_17;
  v19 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v21;
  *(_QWORD *)&v34.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
  if ( !v19 )
    goto LABEL_17;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 v22,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v25 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v25,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.characterGraphic,
      (System_Int32_array **)TexturePrefab_26882832,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    return;
  }
  if ( !*p_characterGraphic )
LABEL_17:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_characterGraphic, *p_baseUserServantEntity, v25, 0LL, 0, 0LL);
}


void __fastcall FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w0
  WarEntity_o *Entity; // x20
  WebViewManager_o *v17; // x0
  WarQuestSelectionMaster_o *v18; // x0
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q1
  UserServantCollectionMaster_o *v21; // x21
  int64_t v22; // x0
  struct UserServantEntity_o *v23; // x8
  int64_t v24; // x22
  int32_t v25; // w0
  struct UserServantCollectionEntity_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w21
  int32_t lastQuestId; // w22
  WebViewManager_o *v36; // x0
  FriendshipMaster_o *v37; // x0
  const MethodInfo *v38; // x3
  struct FriendshipEntity_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UserServantCollectionEntity_o *v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_40FB2B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB2B1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_22;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v14;
  *(_QWORD *)&v49.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL);
  if ( !v12 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v12,
             v15,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_22;
  v18 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v17,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v19 = this->fields.baseUserServantEntity;
  if ( !v19 )
    goto LABEL_22;
  v20 = *(_OWORD *)&v19->fields.userId.fields.fakeValue;
  v21 = (UserServantCollectionMaster_o *)v18;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v19->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v48;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
  v23 = this->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_22;
  v24 = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23->fields.svtId, 0LL);
  if ( !v21 )
    goto LABEL_22;
  v26 = UserServantCollectionMaster__GetEntity(v21, v24, v25, 0LL);
  this->fields.baseUserServantCollectionEntity = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_22;
  if ( !Entity )
    goto LABEL_22;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  lastQuestId = Entity->fields.lastQuestId;
  v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v36
    || (v37 = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v36,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___)) == 0LL
    || (v39 = FriendshipMaster__GetEntity(v37, Entity->fields.eventId, friendshipExceedCount + lastQuestId + 1, v38),
        this->fields._FriendshipEntity_k__BackingField = v39,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
          (System_Int32_array **)v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45),
        (v46 = this->fields.baseUserServantCollectionEntity) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                       v46->fields.friendshipRank,
                                       0LL) == Entity->fields.lastQuestId + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct UIButton_o *executeButton; // x8
  UnityEngine_Behaviour_o *v6; // x20
  bool isItemEnough; // w1
  bool v8; // w1
  UIWidget_o *combineButtonText; // x21
  int v10; // s0
  UIWidget_o *combineButtonBg; // x21
  int v15; // s0

  if ( (byte_40FB2B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    byte_40FB2B2 = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
LABEL_36:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineTextImage,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  executeButton = this->fields.executeButton;
  v6 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    isItemEnough = this->fields.isItemEnough;
    if ( !executeButton )
      goto LABEL_36;
  }
  else
  {
    isItemEnough = 0;
    if ( !executeButton )
      goto LABEL_36;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.executeButton, isItemEnough, 0LL);
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v8 = this->fields.isItemEnough;
    if ( !v6 )
      goto LABEL_36;
  }
  else
  {
    v8 = 0;
    if ( !v6 )
      goto LABEL_36;
  }
  UnityEngine_Behaviour__set_enabled(v6, v8, 0LL);
  combineButtonText = (UIWidget_o *)this->fields.combineButtonText;
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( !combineButtonText )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_gray(0LL);
    if ( !combineButtonText )
      goto LABEL_36;
  }
  UIWidget__set_color(combineButtonText, *(UnityEngine_Color_o *)&v10, 0LL);
  combineButtonBg = (UIWidget_o *)this->fields.combineButtonBg;
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
    if ( !combineButtonBg )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_gray(0LL);
    if ( !combineButtonBg )
      goto LABEL_36;
  }
  UIWidget__set_color(combineButtonBg, *(UnityEngine_Color_o *)&v15, 0LL);
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    UITweener__PlayForward((UITweener_o *)v6, 0LL);
  }
}


void __fastcall FriendshipExceedControl__SetFriendshipExceedInfo(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x6
  FriendshipExceedInfoComponent_o *friendshipExceedInfoComponent; // x0
  bool isItemEnough; // w3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  splitImage = this->fields.splitImage;
  if ( !splitImage )
LABEL_9:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(splitImage, 1, 0LL);
  FriendshipExceedControl__SetEntities(this, v4);
  friendshipExceedInfoComponent = this->fields.friendshipExceedInfoComponent;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    isItemEnough = this->fields.isItemEnough;
    if ( !friendshipExceedInfoComponent )
      goto LABEL_9;
  }
  else
  {
    isItemEnough = 0;
    if ( !friendshipExceedInfoComponent )
      goto LABEL_9;
  }
  FriendshipExceedInfoComponent__SetInfo(
    friendshipExceedInfoComponent,
    this->fields.baseUserServantEntity,
    this->fields.baseUserServantCollectionEntity,
    isItemEnough,
    0,
    0,
    v5);
  FriendshipExceedControl__SetUserQpInfo(this, v8);
  FriendshipExceedControl__SetRequiredQpInfo(this, v9);
  FriendshipExceedControl__SetLimitCntUpItemComponents(this, v10);
  FriendshipExceedControl__SetExecuteButtonState(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetInfoMessage(
        FriendshipExceedControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *detailInfoLabel; // x20
  __int64 *v11; // x8
  System_String_o *v12; // x0
  UIWidget_o *v13; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 *v18; // x8
  System_String_o *v19; // x0
  struct UILabel_o *v20; // x19

  if ( (byte_40FB2B6 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&StringLiteral_7250, v5);
    sub_B16FFC(&StringLiteral_8804, v6);
    sub_B16FFC(&StringLiteral_5743, v7);
    sub_B16FFC(&StringLiteral_12161, v8);
    sub_B16FFC(&StringLiteral_12162, v9);
    byte_40FB2B6 = 1;
  }
  if ( state == 2 )
  {
    if ( this->fields.isFriendshipRankMax )
    {
      if ( this->fields.isItemEnough )
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( this->fields.isQpEnough )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v11 = &StringLiteral_5743;
LABEL_9:
          v12 = LocalizationManager__Get((System_String_o *)*v11, 0LL);
          if ( detailInfoLabel )
          {
            UILabel__set_text(detailInfoLabel, v12, 0LL);
            v13 = (UIWidget_o *)this->fields.detailInfoLabel;
            if ( v13 )
            {
              r = this->fields.NORMAL_COLOR.fields.r;
              g = this->fields.NORMAL_COLOR.fields.g;
              b = this->fields.NORMAL_COLOR.fields.b;
              a = this->fields.NORMAL_COLOR.fields.a;
LABEL_35:
              UIWidget__set_color(v13, *(UnityEngine_Color_o *)&r, 0LL);
              return;
            }
          }
          goto LABEL_36;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v18 = &StringLiteral_12162;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v18 = &StringLiteral_12161;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_8804;
    }
    v19 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v19, 0LL);
      v20 = this->fields.detailInfoLabel;
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( v20 )
      {
        v13 = (UIWidget_o *)v20;
        goto LABEL_35;
      }
    }
LABEL_36:
    sub_B170D4();
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_7250;
    goto LABEL_9;
  }
}


void __fastcall FriendshipExceedControl__SetLimitCntUpItemComponents(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x20
  __int64 v7; // x21
  int size; // w8
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x20
  struct FriendshipEntity_o *v14; // x8
  struct System_Int32_array *v15; // x8
  UnityEngine_GameObject_o *v16; // x0
  struct FriendshipEntity_o *v17; // x8
  struct System_Int32_array *v18; // x8
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v19; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v21; // q1
  LimitCntUpItemComponent_o *v22; // x20
  int64_t v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct FriendshipEntity_o *v26; // x9
  struct System_Int32_array *v27; // x8
  struct System_Int32_array *itemNums; // x9
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v29; // x20
  LimitCntUpItemComponent_o *v30; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-40h]

  if ( (byte_40FB2B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40FB2B0 = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_42:
      sub_B170D4();
    v7 = 0LL;
    while ( 1 )
    {
      size = limitCntUpItemComponentList->fields._size;
      if ( (int)v7 >= size )
        break;
      if ( size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = (UnityEngine_Component_o *)limitCntUpItemComponentList->fields._items->m_Items[v7];
      if ( !v9 )
        goto LABEL_42;
      gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
      FriendshipEntity_k__BackingField = this->fields._FriendshipEntity_k__BackingField;
      if ( !FriendshipEntity_k__BackingField )
        goto LABEL_42;
      itemIds = FriendshipEntity_k__BackingField->fields.itemIds;
      if ( !itemIds )
        goto LABEL_42;
      if ( !gameObject )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive(gameObject, (int)v7 < (signed int)itemIds->max_length, 0LL);
      materialImages = this->fields.materialImages;
      if ( !materialImages )
        goto LABEL_42;
      if ( materialImages->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v14 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v14 )
        goto LABEL_42;
      v15 = v14->fields.itemIds;
      if ( !v15 )
        goto LABEL_42;
      v16 = materialImages->fields._items->m_Items[v7];
      if ( !v16 )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive(v16, (int)v7 >= (signed int)v15->max_length, 0LL);
      v17 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_42;
      v18 = v17->fields.itemIds;
      if ( !v18 )
        goto LABEL_42;
      if ( (int)v7 < (signed int)v18->max_length )
      {
        v19 = this->fields.limitCntUpItemComponentList;
        if ( !v19 )
          goto LABEL_42;
        if ( v19->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_42;
        v21 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v22 = v19->fields._items->m_Items[v7];
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v32;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v31, 0LL);
        v26 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v26 )
          goto LABEL_42;
        v27 = v26->fields.itemIds;
        if ( !v27 )
          goto LABEL_42;
        if ( (unsigned int)v7 >= v27->max_length )
          goto LABEL_44;
        itemNums = v26->fields.itemNums;
        if ( !itemNums )
          goto LABEL_42;
        if ( (unsigned int)v7 >= itemNums->max_length )
        {
LABEL_44:
          sub_B17100(v23, v24, v25);
          sub_B170A0();
        }
        if ( !v22 )
          goto LABEL_42;
        LimitCntUpItemComponent__setLimitUpItemInfo(v22, v23, v27->m_Items[v7 + 1], itemNums->m_Items[v7 + 1], 0LL);
        v29 = this->fields.limitCntUpItemComponentList;
        if ( !v29 )
          goto LABEL_42;
        if ( v29->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v30 = v29->fields._items->m_Items[v7];
        if ( !v30 )
          goto LABEL_42;
        if ( !v30->fields.isItemNum )
          this->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList;
      ++v7;
      if ( !limitCntUpItemComponentList )
        goto LABEL_42;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  int32_t v4; // w0
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v6; // x0
  UIWidget_o *v7; // x20
  int v8; // s0

  if ( (byte_40FB2AE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    byte_40FB2AE = 1;
  }
  if ( this->fields.isBaseSelected
    && (FriendshipEntity_k__BackingField = this->fields._FriendshipEntity_k__BackingField) != 0LL )
  {
    v4 = (_DWORD)this + 260;
    this->fields.requiredQp = FriendshipEntity_k__BackingField->fields.qp;
  }
  else
  {
    v4 = (_DWORD)this + 260;
    this->fields.requiredQp = 0;
  }
  requiredQpLabel = this->fields.requiredQpLabel;
  v6 = System_Int32__ToString_38275808(v4, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !requiredQpLabel )
LABEL_13:
    sub_B170D4();
  UILabel__set_text(requiredQpLabel, v6, 0LL);
  v7 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( this->fields.userQp >= this->fields.requiredQp )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( !v7 )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_red(0LL);
    if ( !v7 )
      goto LABEL_13;
  }
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0LL);
  this->fields.isQpEnough = this->fields.userQp >= this->fields.requiredQp;
}


void __fastcall FriendshipExceedControl__SetSelectedBaseServantId(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *selectData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x21
  __int128 v12; // q1
  int64_t v13; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_40FB2AF & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData);
    byte_40FB2AF = 1;
  }
  if ( selectData )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v17 = v18;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL);
      v14 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v16, 0LL) )
        FriendshipExceedControl__InitInfo(this, v15);
    }
    this->fields.isBaseSelected = 1;
  }
  else
  {
    FriendshipExceedControl__InitInfo(this, (const MethodInfo *)selectData);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isBaseSelected = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectData;
  sub_B16F98(
    p_baseUserServantEntity,
    (System_Int32_array **)selectData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *userQpLabel; // x20
  System_String_o *v5; // x0

  if ( (byte_40FB2AD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    byte_40FB2AD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = SelfUserGame->fields.qp,
        v5 = System_Int32__ToString_38275808((int)this + 256, (System_String_o *)StringLiteral_9236, 0LL),
        !userQpLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(userQpLabel, v5, 0LL);
}


void __fastcall FriendshipExceedControl__ShowItemListInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLabel; // x0
  const MethodInfo *v6; // x1

  preSelectBaseLabel = (UnityEngine_Component_o *)this->fields.preSelectBaseLabel;
  if ( !preSelectBaseLabel
    || (gameObject = UnityEngine_Component__get_gameObject(preSelectBaseLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, !this->fields.isBaseSelected, 0LL),
        (baseSelectInfoLabel = this->fields.baseSelectInfoLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(baseSelectInfoLabel, !this->fields.isBaseSelected, 0LL);
  if ( this->fields.isBaseSelected )
    FriendshipExceedControl__SetFriendshipExceedInfo(this, v6);
}


FriendshipEntity_o *__fastcall FriendshipExceedControl__get_FriendshipEntity(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipEntity_k__BackingField;
}


bool __fastcall FriendshipExceedControl__get_IsExecutable(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSelected
      && this->fields.isFriendshipRankMax
      && this->fields.isQpEnough
      && this->fields.isItemEnough;
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *__fastcall FriendshipExceedControl__get_ItemInfoList(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields.limitCntUpItemComponentList;
}


void __fastcall FriendshipExceedControl__set_FriendshipEntity(
        FriendshipExceedControl_o *this,
        FriendshipEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FriendshipEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}