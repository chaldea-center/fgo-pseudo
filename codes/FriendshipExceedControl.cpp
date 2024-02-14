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
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
  FriendshipExceedControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onClick; // x20
  EventDelegate_Callback_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  EventDelegate_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  EventDelegate_Callback_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  EventDelegate_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  struct UITouchPress_o *v24; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onLongPress; // x20
  EventDelegate_Callback_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  EventDelegate_o *v29; // x21

  v3 = this;
  if ( (byte_42171C7 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_CombineMenuControl_OnLongPushListView__, v4);
    sub_B0D8A4(&EventDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_FriendshipExceedControl_OnClickExecute__, v6);
    this = (FriendshipExceedControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    byte_42171C7 = 1;
  }
  if ( !v3->fields.isButtonInitialized )
  {
    executeButton = v3->fields.executeButton;
    if ( !executeButton )
      goto LABEL_12;
    onClick = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)executeButton->fields.onClick;
    v10 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, method, v2);
    EventDelegate_Callback___ctor(v10, (Il2CppObject *)v3, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v13 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v11, v12);
    EventDelegate___ctor_28889248(v13, v10, 0LL);
    if ( !onClick )
      goto LABEL_12;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onClick,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    baseServantTouchPress = v3->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_12;
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseServantTouchPress->fields.onClick;
    v18 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v14, v15);
    EventDelegate_Callback___ctor(v18, (Il2CppObject *)v3, (intptr_t)v3->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v21 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v19, v20);
    EventDelegate___ctor_28889248(v21, v18, 0LL);
    if ( !v17
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
          (v24 = v3->fields.baseServantTouchPress) == 0LL)
      || (onLongPress = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->fields.onLongPress,
          v26 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v22, v23),
          EventDelegate_Callback___ctor(v26, (Il2CppObject *)v3, Method_CombineMenuControl_OnLongPushListView__, 0LL),
          v29 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v27, v28),
          EventDelegate___ctor_28889248(v29, v26, 0LL),
          !onLongPress) )
    {
LABEL_12:
      sub_B0D97C(this);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onLongPress,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v3->fields.isButtonInitialized = 1;
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
  System_String_o *gameObject; // x0

  if ( (byte_42171C5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_8861/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, v4);
    byte_42171C5 = 1;
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
    sub_B0D840(
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8861/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_B0D97C(gameObject);
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
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v27; // x22
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x22
  bool isItemEnough; // w3

  if ( (byte_42171C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    byte_42171C6 = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_B0D840(
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
    sub_B0D97C(splitImage);
  }
  v24 = 4LL;
  while ( 1 )
  {
    size = limitCntUpItemComponentList->fields._size;
    v26 = v24 - 4;
    if ( (int)v24 - 4 >= size )
      break;
    if ( size <= v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&limitCntUpItemComponentList->fields._items->obj.klass + v24);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, 0LL);
      v27 = this->fields.limitCntUpItemComponentList;
      if ( v27 )
      {
        if ( v27->fields._size <= v26 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&v27->fields._items->obj.klass + v24);
        if ( splitImage )
        {
          splitImage = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)splitImage, 0LL);
          if ( splitImage )
          {
            UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
            materialImages = this->fields.materialImages;
            if ( materialImages )
            {
              if ( materialImages->fields._size <= v26 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&materialImages->fields._items->obj.klass + v24);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
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
    v22);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_42171D0 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3345/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, v3);
    byte_42171D0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3345/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B0D97C(v4);
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

  if ( (byte_42171CF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42171CF = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_characterGraphic, 0LL, v6, v7, v8, v9, v10, v11);
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
  UserServantEntity_o *v16; // x8
  ServantLimitImageMaster_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v22; // w21
  struct UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_24036516; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42171CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, entity);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_42171CE = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B0D840(
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
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_17;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v16 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_17;
  v17 = (ServantLimitImageMaster_o *)baseUserServantEntity;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v19;
  *(_QWORD *)&v31.fields.fakeValue = v18;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v31,
                                                   0LL);
  if ( !v17 )
    goto LABEL_17;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v17,
                                 (int32_t)baseUserServantEntity,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v22 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_24036516 = CharaGraphManager__CreateTexturePrefab_24036516(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v22,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_24036516;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.characterGraphic,
      (System_Int32_array **)TexturePrefab_24036516,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  baseUserServantEntity = (UserServantEntity_o *)*p_characterGraphic;
  if ( !*p_characterGraphic )
LABEL_17:
    sub_B0D97C(baseUserServantEntity);
  UICharaGraphTexture__SetCharacter_35242912(
    (UICharaGraphTexture_o *)baseUserServantEntity,
    *p_baseUserServantEntity,
    v22,
    0LL,
    0,
    0LL);
}


void __fastcall FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  WarEntity_o *v14; // x20
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  UserServantCollectionMaster_o *v17; // x21
  struct UserServantEntity_o *v18; // x8
  int64_t v19; // x22
  struct UserServantCollectionEntity_o *v20; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int32_t lastQuestId; // w22
  const MethodInfo *v31; // x4
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  struct UserServantCollectionEntity_o *v39; // x8
  __int64 v40; // x21
  __int64 v41; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42171CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_42171CC = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v13;
  *(_QWORD *)&v45.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
  if ( !v11 )
    goto LABEL_27;
  v14 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v11,
          Instance,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v15 = this->fields.baseUserServantEntity;
  if ( !v15 )
    goto LABEL_27;
  v16 = *(_OWORD *)&v15->fields.userId.fields.fakeValue;
  v17 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v15->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v42 = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v42, 0LL);
  v18 = this->fields.baseUserServantEntity;
  if ( !v18 )
    goto LABEL_27;
  v19 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18->fields.svtId, 0LL);
  if ( !v17 )
    goto LABEL_27;
  v20 = UserServantCollectionMaster__GetEntity(v17, v19, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_27;
  if ( !v14 )
    goto LABEL_27;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  lastQuestId = v14->fields.lastQuestId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               v14->fields.eventId,
               friendshipExceedCount + lastQuestId + 1,
               v31);
  if ( (Instance & 1) != 0 )
  {
    v38 = (System_Int32_array **)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
      v38,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v39 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_27:
    sub_B0D97C(Instance);
  v40 = *(_QWORD *)&v39->fields.friendshipRank.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v40;
  *(_QWORD *)&v46.fields.fakeValue = v41;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v46, 0LL) == v14->fields.lastQuestId + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  struct UIButton_o *executeButton; // x8
  UnityEngine_Behaviour_o *v5; // x20
  bool isItemEnough; // w1
  bool v7; // w1
  UIWidget_o *combineButtonText; // x21
  int v9; // s0
  UIWidget_o *combineButtonBg; // x21
  int v14; // s0

  if ( (byte_42171CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    byte_42171CD = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
LABEL_36:
    sub_B0D97C(combineTextImage);
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  combineTextImage,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  executeButton = this->fields.executeButton;
  v5 = (UnityEngine_Behaviour_o *)combineTextImage;
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
    v7 = this->fields.isItemEnough;
    if ( !v5 )
      goto LABEL_36;
  }
  else
  {
    v7 = 0;
    if ( !v5 )
      goto LABEL_36;
  }
  UnityEngine_Behaviour__set_enabled(v5, v7, 0LL);
  combineButtonText = (UIWidget_o *)this->fields.combineButtonText;
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( !combineButtonText )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_gray(0LL);
    if ( !combineButtonText )
      goto LABEL_36;
  }
  UIWidget__set_color(combineButtonText, *(UnityEngine_Color_o *)&v9, 0LL);
  combineButtonBg = (UIWidget_o *)this->fields.combineButtonBg;
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( !combineButtonBg )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
    if ( !combineButtonBg )
      goto LABEL_36;
  }
  UIWidget__set_color(combineButtonBg, *(UnityEngine_Color_o *)&v14, 0LL);
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
    sub_B0D97C(splitImage);
  UnityEngine_GameObject__SetActive(splitImage, 1, 0LL);
  FriendshipExceedControl__SetEntities(this, v4);
  splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent;
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 *v17; // x8
  struct UILabel_o *v18; // x19

  if ( (byte_42171D1 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_B0D8A4(&StringLiteral_7298/*"INFO_MSG_FRIENDSHIP_EXCEED"*/, v5);
    sub_B0D8A4(&StringLiteral_8856/*"MSG_FRIENDSHIP_EXCEED_BASE"*/, v6);
    sub_B0D8A4(&StringLiteral_5776/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/, v7);
    sub_B0D8A4(&StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, v8);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v9);
    byte_42171D1 = 1;
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
          v11 = &StringLiteral_5776/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
LABEL_9:
          v12 = LocalizationManager__Get((System_String_o *)*v11, 0LL);
          if ( detailInfoLabel )
          {
            UILabel__set_text(detailInfoLabel, v12, 0LL);
            v12 = (System_String_o *)this->fields.detailInfoLabel;
            if ( v12 )
            {
              r = this->fields.NORMAL_COLOR.fields.r;
              g = this->fields.NORMAL_COLOR.fields.g;
              b = this->fields.NORMAL_COLOR.fields.b;
              a = this->fields.NORMAL_COLOR.fields.a;
LABEL_35:
              UIWidget__set_color((UIWidget_o *)v12, *(UnityEngine_Color_o *)&r, 0LL);
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
        v17 = &StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/;
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
      v17 = &StringLiteral_8856/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v12 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v12, 0LL);
      v18 = this->fields.detailInfoLabel;
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( v18 )
      {
        v12 = (System_String_o *)v18;
        goto LABEL_35;
      }
    }
LABEL_36:
    sub_B0D97C(v12);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_7298/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
    goto LABEL_9;
  }
}


void __fastcall FriendshipExceedControl__SetLimitCntUpItemComponents(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  FriendshipExceedControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x20
  __int64 v7; // x21
  int size; // w8
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x20
  struct FriendshipEntity_o *v12; // x8
  struct System_Int32_array *v13; // x8
  struct FriendshipEntity_o *v14; // x8
  struct System_Int32_array *v15; // x8
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v16; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v18; // q1
  LimitCntUpItemComponent_o *v19; // x20
  struct FriendshipEntity_o *v20; // x9
  struct System_Int32_array *v21; // x8
  struct System_Int32_array *itemNums; // x9
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v23; // x20
  LimitCntUpItemComponent_o *v24; // x8
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_42171CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4);
    this = (FriendshipExceedControl_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_42171CB = 1;
  }
  if ( v2->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = v2->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_42:
      sub_B0D97C(this);
    v7 = 0LL;
    while ( 1 )
    {
      size = limitCntUpItemComponentList->fields._size;
      if ( (int)v7 >= size )
        break;
      if ( size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (FriendshipExceedControl_o *)limitCntUpItemComponentList->fields._items->m_Items[v7];
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
        (int)v7 < (signed int)itemIds->max_length,
        0LL);
      materialImages = v2->fields.materialImages;
      if ( !materialImages )
        goto LABEL_42;
      if ( materialImages->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v12 = v2->fields._FriendshipEntity_k__BackingField;
      if ( !v12 )
        goto LABEL_42;
      v13 = v12->fields.itemIds;
      if ( !v13 )
        goto LABEL_42;
      this = (FriendshipExceedControl_o *)materialImages->fields._items->m_Items[v7];
      if ( !this )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v7 >= (signed int)v13->max_length, 0LL);
      v14 = v2->fields._FriendshipEntity_k__BackingField;
      if ( !v14 )
        goto LABEL_42;
      v15 = v14->fields.itemIds;
      if ( !v15 )
        goto LABEL_42;
      if ( (int)v7 < (signed int)v15->max_length )
      {
        v16 = v2->fields.limitCntUpItemComponentList;
        if ( !v16 )
          goto LABEL_42;
        if ( v16->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        baseUserServantEntity = v2->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_42;
        v18 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v19 = v16->fields._items->m_Items[v7];
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v27.fields.fakeValue = v18;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v26 = v27;
        this = (FriendshipExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                              &v26,
                                              0LL);
        v20 = v2->fields._FriendshipEntity_k__BackingField;
        if ( !v20 )
          goto LABEL_42;
        v21 = v20->fields.itemIds;
        if ( !v21 )
          goto LABEL_42;
        if ( (unsigned int)v7 >= v21->max_length )
          goto LABEL_44;
        itemNums = v20->fields.itemNums;
        if ( !itemNums )
          goto LABEL_42;
        if ( (unsigned int)v7 >= itemNums->max_length )
        {
LABEL_44:
          v25 = sub_B0D9A8(this);
          sub_B0D948(v25, 0LL);
        }
        if ( !v19 )
          goto LABEL_42;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v19,
          (int64_t)this,
          v21->m_Items[v7 + 1],
          itemNums->m_Items[v7 + 1],
          0LL);
        v23 = v2->fields.limitCntUpItemComponentList;
        if ( !v23 )
          goto LABEL_42;
        if ( v23->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v24 = v23->fields._items->m_Items[v7];
        if ( !v24 )
          goto LABEL_42;
        if ( !v24->fields.isItemNum )
          v2->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = v2->fields.limitCntUpItemComponentList;
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

  if ( (byte_42171C9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_42171C9 = 1;
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
  v6 = System_Int32__ToString_38473032(v4, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
LABEL_13:
    sub_B0D97C(v6);
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

  if ( (byte_42171CA & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData);
    byte_42171CA = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v17, 0LL);
      v14 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL) )
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
  sub_B0D840(
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
  UILabel_o *userQpLabel; // x20

  if ( (byte_42171C8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_42171C8 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38473032((int)this + 256, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !userQpLabel) )
  {
    sub_B0D97C(SelfUserGame);
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
    sub_B0D97C(preSelectBaseLabel);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}