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
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
  int v2; // w2
  __int64 v3; // x3
  FriendshipExceedControl_o *v4; // x19
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
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onClick; // x20
  EventDelegate_Callback_o *v19; // x22
  EventDelegate_o *v20; // x21
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  EventDelegate_Callback_o *v23; // x22
  EventDelegate_o *v24; // x21
  struct UITouchPress_o *v25; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onLongPress; // x20
  EventDelegate_Callback_o *v27; // x22
  EventDelegate_o *v28; // x21

  v4 = this;
  if ( (byte_42EB4F1 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineMenuControl_OnLongPushListView__, v5, v6, v7);
    sub_B5D5C4(&EventDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_FriendshipExceedControl_OnClickExecute__, v11, v12, v13);
    this = (FriendshipExceedControl_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_EventDelegate__Add__,
                                          v14,
                                          v15,
                                          v16);
    byte_42EB4F1 = 1;
  }
  if ( !v4->fields.isButtonInitialized )
  {
    executeButton = v4->fields.executeButton;
    if ( !executeButton )
      goto LABEL_12;
    onClick = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)executeButton->fields.onClick;
    v19 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v19, (Il2CppObject *)v4, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v20 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822308(v20, v19, 0LL);
    if ( !onClick )
      goto LABEL_12;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onClick,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    baseServantTouchPress = v4->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_12;
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseServantTouchPress->fields.onClick;
    v23 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v23, (Il2CppObject *)v4, (intptr_t)v4->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v24 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822308(v24, v23, 0LL);
    if ( !v22
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
          (v25 = v4->fields.baseServantTouchPress) == 0LL)
      || (onLongPress = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v25->fields.onLongPress,
          v27 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
          EventDelegate_Callback___ctor(v27, (Il2CppObject *)v4, Method_CombineMenuControl_OnLongPushListView__, 0LL),
          v28 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo),
          EventDelegate___ctor_29822308(v28, v27, 0LL),
          !onLongPress) )
    {
LABEL_12:
      sub_B5D69C(this, method);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onLongPress,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v4->fields.isButtonInitialized = 1;
  }
}


void __fastcall FriendshipExceedControl__InitFriendshipExceed(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0
  __int64 v22; // x1

  if ( (byte_42EB4EF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8929/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, v8, v9, v10);
    byte_42EB4EF = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( v11->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
    this->fields._FriendshipEntity_k__BackingField = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
      0LL,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    FriendshipExceedControl__InitButtons(this, v18);
    FriendshipExceedControl__InitInfo(this, v19);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8929/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_B5D69C(gameObject, v22);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v27; // x6
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x22
  __int64 v29; // x20
  int size; // w8
  unsigned int v31; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v32; // x22
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x22
  bool isItemEnough; // w3

  if ( (byte_42EB4F0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v12, v13, v14);
    byte_42EB4F0 = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  FriendshipExceedControl__SetUserQpInfo(this, v21);
  FriendshipExceedControl__SetRequiredQpInfo(this, v22);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v23);
  FriendshipExceedControl__ResetCharacterGraphic(this, v24);
  splitImage = this->fields.splitImage;
  if ( !splitImage
    || (UnityEngine_GameObject__SetActive(splitImage, 0, 0LL),
        (limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(splitImage, v25);
  }
  v29 = 4LL;
  while ( 1 )
  {
    size = limitCntUpItemComponentList->fields._size;
    v31 = v29 - 4;
    if ( (int)v29 - 4 >= size )
      break;
    if ( size <= v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&limitCntUpItemComponentList->fields._items->obj.klass + v29);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, 0LL);
      v32 = this->fields.limitCntUpItemComponentList;
      if ( v32 )
      {
        if ( v32->fields._size <= v31 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&v32->fields._items->obj.klass + v29);
        if ( splitImage )
        {
          splitImage = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)splitImage, 0LL);
          if ( splitImage )
          {
            UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
            materialImages = this->fields.materialImages;
            if ( materialImages )
            {
              if ( materialImages->fields._size <= v31 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              splitImage = (UnityEngine_GameObject_o *)*((_QWORD *)&materialImages->fields._items->obj.klass + v29);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
                  limitCntUpItemComponentList = this->fields.limitCntUpItemComponentList;
                  ++v29;
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
    v27);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42EB4FA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3398/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, v5, v6, v7);
    byte_42EB4FA = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3398/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B5D69C(v8, v9);
  SetRarityDialogControl__SetFriendshipExceedInfo(
    this->fields.exeCombineDlg,
    v8,
    this->fields.requiredQp,
    this->fields.userQp,
    0LL);
}


void __fastcall FriendshipExceedControl__ResetCharacterGraphic(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *characterGraphic; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_characterGraphic; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB4F9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB4F9 = 1;
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
      sub_B5D69C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_characterGraphic, 0LL, v9, v10, v11, v12, v13, v14);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UserServantEntity_o **p_baseUserServantEntity; // x20
  __int64 v20; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w21
  UserServantEntity_o *v23; // x8
  ServantLimitImageMaster_o *v24; // x22
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v29; // w21
  struct UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26715804; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_42EB4F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EB4F8 = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B5D560(
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
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_17;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v23 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_17;
  v24 = (ServantLimitImageMaster_o *)baseUserServantEntity;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v26;
  *(_QWORD *)&v38.fields.fakeValue = v25;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v38,
                                                   0LL);
  if ( !v24 )
    goto LABEL_17;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v24,
                                 (int32_t)baseUserServantEntity,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v29 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = CharaGraphManager__CreateTexturePrefab_26715804(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v29,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_26715804;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.characterGraphic,
      (System_Int32_array **)TexturePrefab_26715804,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    return;
  }
  baseUserServantEntity = (UserServantEntity_o *)*p_characterGraphic;
  if ( !*p_characterGraphic )
LABEL_17:
    sub_B5D69C(baseUserServantEntity, v20);
  UICharaGraphTexture__SetCharacter_35988116(
    (UICharaGraphTexture_o *)baseUserServantEntity,
    *p_baseUserServantEntity,
    v29,
    0LL,
    0,
    0LL);
}


void __fastcall FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
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
  int64_t Instance; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x22
  WarEntity_o *v29; // x20
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  UserServantCollectionMaster_o *v32; // x21
  struct UserServantEntity_o *v33; // x8
  int64_t v34; // x22
  struct UserServantCollectionEntity_o *v35; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int32_t lastQuestId; // w22
  const MethodInfo *v46; // x4
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  struct UserServantCollectionEntity_o *v54; // x8
  __int64 v55; // x21
  __int64 v56; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-60h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42EB4F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EB4F6 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v28;
  *(_QWORD *)&v60.fields.fakeValue = v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v60, 0LL);
  if ( !v26 )
    goto LABEL_27;
  v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v26,
          Instance,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v30 = this->fields.baseUserServantEntity;
  if ( !v30 )
    goto LABEL_27;
  v31 = *(_OWORD *)&v30->fields.userId.fields.fakeValue;
  v32 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v30->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v57 = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v57, 0LL);
  v33 = this->fields.baseUserServantEntity;
  if ( !v33 )
    goto LABEL_27;
  v34 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v33->fields.svtId, 0LL);
  if ( !v32 )
    goto LABEL_27;
  v35 = UserServantCollectionMaster__GetEntity(v32, v34, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCollectionEntity,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_27;
  if ( !v29 )
    goto LABEL_27;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  lastQuestId = v29->fields.lastQuestId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               v29->fields.eventId,
               friendshipExceedCount + lastQuestId + 1,
               v46);
  if ( (Instance & 1) != 0 )
  {
    v53 = (System_Int32_array **)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
      v53,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v54 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_27:
    sub_B5D69C(Instance, v24);
  v55 = *(_QWORD *)&v54->fields.friendshipRank.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v55;
  *(_QWORD *)&v61.fields.fakeValue = v56;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL) == v29->fields.lastQuestId + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *combineTextImage; // x0
  struct UIButton_o *executeButton; // x8
  UnityEngine_Behaviour_o *v7; // x20
  UIWidget_o *combineButtonText; // x21
  int v9; // s0
  UIWidget_o *combineButtonBg; // x21
  int v14; // s0

  if ( (byte_42EB4F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    byte_42EB4F7 = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
LABEL_36:
    sub_B5D69C(combineTextImage, method);
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  combineTextImage,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  executeButton = this->fields.executeButton;
  v7 = (UnityEngine_Behaviour_o *)combineTextImage;
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
    if ( !v7 )
      goto LABEL_36;
  }
  else
  {
    method = 0LL;
    if ( !v7 )
      goto LABEL_36;
  }
  UnityEngine_Behaviour__set_enabled(v7, (bool)method, 0LL);
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
    UITweener__PlayForward((UITweener_o *)v7, 0LL);
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
    sub_B5D69C(splitImage, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UILabel_o *detailInfoLabel; // x20
  __int64 *v22; // x8
  System_String_o *v23; // x0
  __int64 v24; // x1
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 *v29; // x8
  struct UILabel_o *v30; // x19

  if ( (byte_42EB4FB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_7360/*"INFO_MSG_FRIENDSHIP_EXCEED"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8924/*"MSG_FRIENDSHIP_EXCEED_BASE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5837/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v18, v19, v20);
    byte_42EB4FB = 1;
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
          v22 = &StringLiteral_5837/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
LABEL_9:
          v23 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
          if ( detailInfoLabel )
          {
            UILabel__set_text(detailInfoLabel, v23, 0LL);
            v23 = (System_String_o *)this->fields.detailInfoLabel;
            if ( v23 )
            {
              r = this->fields.NORMAL_COLOR.fields.r;
              g = this->fields.NORMAL_COLOR.fields.g;
              b = this->fields.NORMAL_COLOR.fields.b;
              a = this->fields.NORMAL_COLOR.fields.a;
LABEL_35:
              UIWidget__set_color((UIWidget_o *)v23, *(UnityEngine_Color_o *)&r, 0LL);
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
        v29 = &StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v29 = &StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/;
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
      v29 = &StringLiteral_8924/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v23 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v23, 0LL);
      v30 = this->fields.detailInfoLabel;
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( v30 )
      {
        v23 = (System_String_o *)v30;
        goto LABEL_35;
      }
    }
LABEL_36:
    sub_B5D69C(v23, v24);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = &StringLiteral_7360/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
    goto LABEL_9;
  }
}


void __fastcall FriendshipExceedControl__SetLimitCntUpItemComponents(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendshipExceedControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemComponentList; // x20
  __int64 v15; // x21
  int size; // w8
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct System_Collections_Generic_List_GameObject__o *materialImages; // x20
  struct FriendshipEntity_o *v20; // x8
  struct System_Int32_array *v21; // x8
  struct FriendshipEntity_o *v22; // x8
  struct System_Int32_array *v23; // x8
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v24; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v26; // q1
  LimitCntUpItemComponent_o *v27; // x20
  struct FriendshipEntity_o *v28; // x9
  struct System_Int32_array *v29; // x8
  struct System_Int32_array *itemNums; // x9
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v31; // x20
  LimitCntUpItemComponent_o *v32; // x8
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_42EB4F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v8, v9, v10);
    this = (FriendshipExceedControl_o *)sub_B5D5C4(
                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                          v11,
                                          v12,
                                          v13);
    byte_42EB4F5 = 1;
  }
  if ( v4->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = v4->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_42:
      sub_B5D69C(this, method);
    v15 = 0LL;
    while ( 1 )
    {
      size = limitCntUpItemComponentList->fields._size;
      if ( (int)v15 >= size )
        break;
      if ( size <= (unsigned int)v15 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (FriendshipExceedControl_o *)limitCntUpItemComponentList->fields._items->m_Items[v15];
      if ( !this )
        goto LABEL_42;
      this = (FriendshipExceedControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      FriendshipEntity_k__BackingField = v4->fields._FriendshipEntity_k__BackingField;
      if ( !FriendshipEntity_k__BackingField )
        goto LABEL_42;
      itemIds = FriendshipEntity_k__BackingField->fields.itemIds;
      if ( !itemIds )
        goto LABEL_42;
      if ( !this )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        (int)v15 < (signed int)itemIds->max_length,
        0LL);
      materialImages = v4->fields.materialImages;
      if ( !materialImages )
        goto LABEL_42;
      if ( materialImages->fields._size <= (unsigned int)v15 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v20 = v4->fields._FriendshipEntity_k__BackingField;
      if ( !v20 )
        goto LABEL_42;
      v21 = v20->fields.itemIds;
      if ( !v21 )
        goto LABEL_42;
      this = (FriendshipExceedControl_o *)materialImages->fields._items->m_Items[v15];
      if ( !this )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v15 >= (signed int)v21->max_length, 0LL);
      v22 = v4->fields._FriendshipEntity_k__BackingField;
      if ( !v22 )
        goto LABEL_42;
      v23 = v22->fields.itemIds;
      if ( !v23 )
        goto LABEL_42;
      if ( (int)v15 < (signed int)v23->max_length )
      {
        v24 = v4->fields.limitCntUpItemComponentList;
        if ( !v24 )
          goto LABEL_42;
        if ( v24->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        baseUserServantEntity = v4->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_42;
        v26 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v27 = v24->fields._items->m_Items[v15];
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        this = (FriendshipExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                              &v34,
                                              0LL);
        v28 = v4->fields._FriendshipEntity_k__BackingField;
        if ( !v28 )
          goto LABEL_42;
        v29 = v28->fields.itemIds;
        if ( !v29 )
          goto LABEL_42;
        if ( (unsigned int)v15 >= v29->max_length )
          goto LABEL_44;
        itemNums = v28->fields.itemNums;
        if ( !itemNums )
          goto LABEL_42;
        if ( (unsigned int)v15 >= itemNums->max_length )
        {
LABEL_44:
          v33 = sub_B5D6C8(this);
          sub_B5D668(v33, 0LL);
        }
        if ( !v27 )
          goto LABEL_42;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v27,
          (int64_t)this,
          v29->m_Items[v15 + 1],
          itemNums->m_Items[v15 + 1],
          0LL);
        v31 = v4->fields.limitCntUpItemComponentList;
        if ( !v31 )
          goto LABEL_42;
        if ( v31->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v32 = v31->fields._items->m_Items[v15];
        if ( !v32 )
          goto LABEL_42;
        if ( !v32->fields.isItemNum )
          v4->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = v4->fields.limitCntUpItemComponentList;
      ++v15;
      if ( !limitCntUpItemComponentList )
        goto LABEL_42;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  int32_t v6; // w0
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UIWidget_o *v10; // x20
  int v11; // s0

  if ( (byte_42EB4F3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42EB4F3 = 1;
  }
  if ( this->fields.isBaseSelected
    && (FriendshipEntity_k__BackingField = this->fields._FriendshipEntity_k__BackingField) != 0LL )
  {
    v6 = (_DWORD)this + 260;
    this->fields.requiredQp = FriendshipEntity_k__BackingField->fields.qp;
  }
  else
  {
    v6 = (_DWORD)this + 260;
    this->fields.requiredQp = 0;
  }
  requiredQpLabel = this->fields.requiredQpLabel;
  v8 = System_Int32__ToString_39741776(v6, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
LABEL_13:
    sub_B5D69C(v8, v9);
  UILabel__set_text(requiredQpLabel, v8, 0LL);
  v10 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( this->fields.userQp >= this->fields.requiredQp )
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( !v10 )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_red(0LL);
    if ( !v10 )
      goto LABEL_13;
  }
  UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v11, 0LL);
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

  if ( (byte_42EB4F4 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)selectData, (_DWORD)method, v3);
    byte_42EB4F4 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v17, 0LL);
      v14 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v16, 0LL) )
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *userQpLabel; // x20

  if ( (byte_42EB4F2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42EB4F2 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39741776((int)this + 256, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !userQpLabel) )
  {
    sub_B5D69C(SelfUserGame, v6);
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
    sub_B5D69C(preSelectBaseLabel, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}