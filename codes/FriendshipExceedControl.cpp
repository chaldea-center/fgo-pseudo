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
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
  FriendshipExceedControl_o *v2; // x19
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onClick; // x20
  EventDelegate_Callback_o *v5; // x22
  EventDelegate_o *v6; // x21
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  EventDelegate_Callback_o *v9; // x22
  EventDelegate_o *v10; // x21
  struct UITouchPress_o *v11; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onLongPress; // x20
  EventDelegate_Callback_o *v13; // x22
  EventDelegate_o *v14; // x21

  v2 = this;
  if ( (byte_42B2B88 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_CombineMenuControl_OnLongPushListView__);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_FriendshipExceedControl_OnClickExecute__);
    this = (FriendshipExceedControl_o *)sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    byte_42B2B88 = 1;
  }
  if ( !v2->fields.isButtonInitialized )
  {
    executeButton = v2->fields.executeButton;
    if ( !executeButton )
      goto LABEL_12;
    onClick = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)executeButton->fields.onClick;
    v5 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v6 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
    EventDelegate___ctor_29649660(v6, v5, 0LL);
    if ( !onClick )
      goto LABEL_12;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onClick,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    baseServantTouchPress = v2->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_12;
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseServantTouchPress->fields.onClick;
    v9 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v10 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
    EventDelegate___ctor_29649660(v10, v9, 0LL);
    if ( !v8
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
          (v11 = v2->fields.baseServantTouchPress) == 0LL)
      || (onLongPress = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v11->fields.onLongPress,
          v13 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo),
          EventDelegate_Callback___ctor(v13, (Il2CppObject *)v2, Method_CombineMenuControl_OnLongPushListView__, 0LL),
          v14 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo),
          EventDelegate___ctor_29649660(v14, v13, 0LL),
          !onLongPress) )
    {
LABEL_12:
      sub_B52A5C(this, method);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onLongPress,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v2->fields.isButtonInitialized = 1;
  }
}


void __fastcall FriendshipExceedControl__InitFriendshipExceed(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0
  __int64 v14; // x1

  if ( (byte_42B2B86 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8892/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/);
    byte_42B2B86 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
    this->fields._FriendshipEntity_k__BackingField = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
      0LL,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    FriendshipExceedControl__InitButtons(this, v10);
    FriendshipExceedControl__InitInfo(this, v11);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8892/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_B52A5C(gameObject, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v21; // x6
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x22
  __int64 v23; // x20
  int size; // w8
  unsigned int v25; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v26; // x22
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x22
  bool isItemEnough; // w3

  if ( (byte_42B2B87 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_42B2B87 = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    0LL,
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
  if ( !splitImage
    || (UnityEngine_GameObject__SetActive(splitImage, 0, 0LL),
        (limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(splitImage, v19);
  }
  v23 = 4LL;
  while ( 1 )
  {
    size = limitCntUpItemComponentList->fields._size;
    v25 = v23 - 4;
    if ( (int)v23 - 4 >= size )
      break;
    if ( size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&limitCntUpItemComponentList->fields._items->obj.klass + v23);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, 0LL);
      v26 = this->fields.limitCntUpItemComponentList;
      if ( v26 )
      {
        if ( v26->fields._size <= v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&v26->fields._items->obj.klass + v23);
        if ( splitImage )
        {
          splitImage = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)splitImage, 0LL);
          if ( splitImage )
          {
            UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
            materialImages = this->fields.materialImages;
            if ( materialImages )
            {
              if ( materialImages->fields._size <= v25 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&materialImages->fields._items->obj.klass + v23);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
                  limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList;
                  ++v23;
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
  splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    isItemEnough = this->fields.isItemEnough;
    if ( !splitImage )
      goto LABEL_29;
  }
  else
  {
    isItemEnough = 0;
    if ( !splitImage )
      goto LABEL_29;
  }
  FriendshipExceedInfoComponent__SetInfo(
    (FriendshipExceedInfoComponent_o *)splitImage,
    0LL,
    0LL,
    isItemEnough,
    0,
    0,
    v21);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42B2B91 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3365/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_42B2B91 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3365/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B52A5C(v3, v4);
  SetRarityDialogControl__SetFriendshipExceedInfo(
    this->fields.exeCombineDlg,
    v3,
    this->fields.requiredQp,
    this->fields.userQp,
    0LL);
}


void __fastcall FriendshipExceedControl__ResetCharacterGraphic(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *characterGraphic; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_characterGraphic; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B2B90 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2B90 = 1;
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
      sub_B52A5C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_characterGraphic, 0LL, v7, v8, v9, v10, v11, v12);
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
  UserServantEntity_o **p_baseUserServantEntity; // x20
  __int64 v11; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w21
  UserServantEntity_o *v14; // x8
  ServantLimitImageMaster_o *v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v20; // w21
  struct UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_24904472; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42B2B8F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2B8F = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B52920(
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
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_17;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v14 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_17;
  v15 = (ServantLimitImageMaster_o *)baseUserServantEntity;
  v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v17;
  *(_QWORD *)&v29.fields.fakeValue = v16;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v29,
                                                   0LL);
  if ( !v15 )
    goto LABEL_17;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v15,
                                 (int32_t)baseUserServantEntity,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v20 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_24904472 = CharaGraphManager__CreateTexturePrefab_24904472(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v20,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_24904472;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.characterGraphic,
      (System_Int32_array **)TexturePrefab_24904472,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    return;
  }
  baseUserServantEntity = (UserServantEntity_o *)*p_characterGraphic;
  if ( !*p_characterGraphic )
LABEL_17:
    sub_B52A5C(baseUserServantEntity, v11);
  UICharaGraphTexture__SetCharacter_35944152(
    (UICharaGraphTexture_o *)baseUserServantEntity,
    *p_baseUserServantEntity,
    v20,
    0LL,
    0,
    0LL);
}


void __fastcall FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  WarEntity_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  UserServantCollectionMaster_o *v12; // x21
  struct UserServantEntity_o *v13; // x8
  int64_t v14; // x22
  struct UserServantCollectionEntity_o *v15; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int32_t lastQuestId; // w22
  const MethodInfo *v26; // x4
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  struct UserServantCollectionEntity_o *v34; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_42B2B8D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2B8D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v8;
  *(_QWORD *)&v40.fields.fakeValue = v7;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v40, 0LL);
  if ( !v6 )
    goto LABEL_27;
  v9 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         v6,
         Instance,
         (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v10 = this->fields.baseUserServantEntity;
  if ( !v10 )
    goto LABEL_27;
  v11 = *(_OWORD *)&v10->fields.userId.fields.fakeValue;
  v12 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v10->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v37, 0LL);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_27;
  v14 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13->fields.svtId, 0LL);
  if ( !v12 )
    goto LABEL_27;
  v15 = UserServantCollectionMaster__GetEntity(v12, v14, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v15;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_27;
  if ( !v9 )
    goto LABEL_27;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  lastQuestId = v9->fields.lastQuestId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               v9->fields.eventId,
               friendshipExceedCount + lastQuestId + 1,
               v26);
  if ( (Instance & 1) != 0 )
  {
    v33 = (System_Int32_array **)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
      v33,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v34 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_27:
    sub_B52A5C(Instance, v4);
  v35 = *(_QWORD *)&v34->fields.friendshipRank.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v35;
  *(_QWORD *)&v41.fields.fakeValue = v36;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v41, 0LL) == v9->fields.lastQuestId + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  struct UIButton_o *executeButton; // x8
  UnityEngine_Behaviour_o *v5; // x20
  UIWidget_o *combineButtonText; // x21
  int v7; // s0
  UIWidget_o *combineButtonBg; // x21
  int v12; // s0

  if ( (byte_42B2B8E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_42B2B8E = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
LABEL_36:
    sub_B52A5C(combineTextImage, method);
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  combineTextImage,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  executeButton = this->fields.executeButton;
  v5 = (UnityEngine_Behaviour_o *)combineTextImage;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    method = (const MethodInfo *)this->fields.isItemEnough;
    if ( !executeButton )
      goto LABEL_36;
  }
  else
  {
    method = 0LL;
    if ( !executeButton )
      goto LABEL_36;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.executeButton, (bool)method, 0LL);
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    method = (const MethodInfo *)this->fields.isItemEnough;
    if ( !v5 )
      goto LABEL_36;
  }
  else
  {
    method = 0LL;
    if ( !v5 )
      goto LABEL_36;
  }
  UnityEngine_Behaviour__set_enabled(v5, (bool)method, 0LL);
  combineButtonText = (UIWidget_o *)this->fields.combineButtonText;
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( !combineButtonText )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
    if ( !combineButtonText )
      goto LABEL_36;
  }
  UIWidget__set_color(combineButtonText, *(UnityEngine_Color_o *)&v7, 0LL);
  combineButtonBg = (UIWidget_o *)this->fields.combineButtonBg;
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( !combineButtonBg )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( !combineButtonBg )
      goto LABEL_36;
  }
  UIWidget__set_color(combineButtonBg, *(UnityEngine_Color_o *)&v12, 0LL);
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    UITweener__PlayForward((UITweener_o *)v5, 0LL);
  }
}


void __fastcall FriendshipExceedControl__SetFriendshipExceedInfo(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
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
  if ( !splitImage )
LABEL_9:
    sub_B52A5C(splitImage, method);
  UnityEngine_GameObject__SetActive(splitImage, 1, 0LL);
  FriendshipExceedControl__SetEntities(this, v4);
  splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent;
  method = (const MethodInfo *)this->fields.baseUserServantEntity;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    isItemEnough = this->fields.isItemEnough;
    if ( !splitImage )
      goto LABEL_9;
  }
  else
  {
    isItemEnough = 0;
    if ( !splitImage )
      goto LABEL_9;
  }
  FriendshipExceedInfoComponent__SetInfo(
    (FriendshipExceedInfoComponent_o *)splitImage,
    (UserServantEntity_o *)method,
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
void __fastcall FriendshipExceedControl__SetInfoMessage(
        FriendshipExceedControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UILabel_o *detailInfoLabel; // x20
  __int64 *v6; // x8
  System_String_o *v7; // x0
  __int64 v8; // x1
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 *v13; // x8
  struct UILabel_o *v14; // x19

  if ( (byte_42B2B92 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_7324/*"INFO_MSG_FRIENDSHIP_EXCEED"*/);
    sub_B52984(&StringLiteral_8887/*"MSG_FRIENDSHIP_EXCEED_BASE"*/);
    sub_B52984(&StringLiteral_5802/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/);
    sub_B52984(&StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    byte_42B2B92 = 1;
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
          v6 = &StringLiteral_5802/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
LABEL_9:
          v7 = LocalizationManager__Get((System_String_o *)*v6, 0LL);
          if ( detailInfoLabel )
          {
            UILabel__set_text(detailInfoLabel, v7, 0LL);
            v7 = (System_String_o *)this->fields.detailInfoLabel;
            if ( v7 )
            {
              r = this->fields.NORMAL_COLOR.fields.r;
              g = this->fields.NORMAL_COLOR.fields.g;
              b = this->fields.NORMAL_COLOR.fields.b;
              a = this->fields.NORMAL_COLOR.fields.a;
LABEL_35:
              UIWidget__set_color((UIWidget_o *)v7, *(UnityEngine_Color_o *)&r, 0LL);
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
        v13 = &StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v13 = &StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/;
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
      v13 = &StringLiteral_8887/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v7 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v7, 0LL);
      v14 = this->fields.detailInfoLabel;
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( v14 )
      {
        v7 = (System_String_o *)v14;
        goto LABEL_35;
      }
    }
LABEL_36:
    sub_B52A5C(v7, v8);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_7324/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
    goto LABEL_9;
  }
}


void __fastcall FriendshipExceedControl__SetLimitCntUpItemComponents(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  FriendshipExceedControl_o *v2; // x19
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x20
  __int64 v4; // x21
  int size; // w8
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x20
  struct FriendshipEntity_o *v9; // x8
  struct System_Int32_array *v10; // x8
  struct FriendshipEntity_o *v11; // x8
  struct System_Int32_array *v12; // x8
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v13; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v15; // q1
  LimitCntUpItemComponent_o *v16; // x20
  struct FriendshipEntity_o *v17; // x9
  struct System_Int32_array *v18; // x8
  struct System_Int32_array *itemNums; // x9
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v20; // x20
  LimitCntUpItemComponent_o *v21; // x8
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_42B2B8C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    this = (FriendshipExceedControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2B8C = 1;
  }
  if ( v2->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = v2->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_42:
      sub_B52A5C(this, method);
    v4 = 0LL;
    while ( 1 )
    {
      size = limitCntUpItemComponentList->fields._size;
      if ( (int)v4 >= size )
        break;
      if ( size <= (unsigned int)v4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (FriendshipExceedControl_o *)limitCntUpItemComponentList->fields._items->m_Items[v4];
      if ( !this )
        goto LABEL_42;
      this = (FriendshipExceedControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      FriendshipEntity_k__BackingField = v2->fields._FriendshipEntity_k__BackingField;
      if ( !FriendshipEntity_k__BackingField )
        goto LABEL_42;
      itemIds = FriendshipEntity_k__BackingField->fields.itemIds;
      if ( !itemIds )
        goto LABEL_42;
      if ( !this )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        (int)v4 < (signed int)itemIds->max_length,
        0LL);
      materialImages = v2->fields.materialImages;
      if ( !materialImages )
        goto LABEL_42;
      if ( materialImages->fields._size <= (unsigned int)v4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = v2->fields._FriendshipEntity_k__BackingField;
      if ( !v9 )
        goto LABEL_42;
      v10 = v9->fields.itemIds;
      if ( !v10 )
        goto LABEL_42;
      this = (FriendshipExceedControl_o *)materialImages->fields._items->m_Items[v4];
      if ( !this )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v4 >= (signed int)v10->max_length, 0LL);
      v11 = v2->fields._FriendshipEntity_k__BackingField;
      if ( !v11 )
        goto LABEL_42;
      v12 = v11->fields.itemIds;
      if ( !v12 )
        goto LABEL_42;
      if ( (int)v4 < (signed int)v12->max_length )
      {
        v13 = v2->fields.limitCntUpItemComponentList;
        if ( !v13 )
          goto LABEL_42;
        if ( v13->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        baseUserServantEntity = v2->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_42;
        v15 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v16 = v13->fields._items->m_Items[v4];
        *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v24.fields.fakeValue = v15;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v23 = v24;
        this = (FriendshipExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                              &v23,
                                              0LL);
        v17 = v2->fields._FriendshipEntity_k__BackingField;
        if ( !v17 )
          goto LABEL_42;
        v18 = v17->fields.itemIds;
        if ( !v18 )
          goto LABEL_42;
        if ( (unsigned int)v4 >= v18->max_length )
          goto LABEL_44;
        itemNums = v17->fields.itemNums;
        if ( !itemNums )
          goto LABEL_42;
        if ( (unsigned int)v4 >= itemNums->max_length )
        {
LABEL_44:
          v22 = sub_B52A88(this);
          sub_B52A28(v22, 0LL);
        }
        if ( !v16 )
          goto LABEL_42;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v16,
          (int64_t)this,
          v18->m_Items[v4 + 1],
          itemNums->m_Items[v4 + 1],
          0LL);
        v20 = v2->fields.limitCntUpItemComponentList;
        if ( !v20 )
          goto LABEL_42;
        if ( v20->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v21 = v20->fields._items->m_Items[v4];
        if ( !v21 )
          goto LABEL_42;
        if ( !v21->fields.isItemNum )
          v2->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = v2->fields.limitCntUpItemComponentList;
      ++v4;
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
  __int64 v7; // x1
  UIWidget_o *v8; // x20
  int v9; // s0

  if ( (byte_42B2B8A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B2B8A = 1;
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
  v6 = System_Int32__ToString_39387012(v4, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
LABEL_13:
    sub_B52A5C(v6, v7);
  UILabel__set_text(requiredQpLabel, v6, 0LL);
  v8 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( this->fields.userQp >= this->fields.requiredQp )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( !v8 )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_red(0LL);
    if ( !v8 )
      goto LABEL_13;
  }
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
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

  if ( (byte_42B2B8B & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2B8B = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v17, 0LL);
      v14 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v16, 0LL) )
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
  sub_B52920(
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
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *userQpLabel; // x20

  if ( (byte_42B2B89 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B2B89 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39387012((int)this + 256, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
        !userQpLabel) )
  {
    sub_B52A5C(SelfUserGame, v4);
  }
  UILabel__set_text(userQpLabel, SelfUserGame, 0LL);
}


void __fastcall FriendshipExceedControl__ShowItemListInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLabel; // x0
  const MethodInfo *v4; // x1

  preSelectBaseLabel = (UnityEngine_Component_o *)this->fields.preSelectBaseLabel;
  if ( !preSelectBaseLabel
    || (preSelectBaseLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)preSelectBaseLabel,
          !this->fields.isBaseSelected,
          0LL),
        (preSelectBaseLabel = (UnityEngine_Component_o *)this->fields.baseSelectInfoLabel) == 0LL) )
  {
    sub_B52A5C(preSelectBaseLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLabel, !this->fields.isBaseSelected, 0LL);
  if ( this->fields.isBaseSelected )
    FriendshipExceedControl__SetFriendshipExceedInfo(this, v4);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}