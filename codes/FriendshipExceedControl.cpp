void __fastcall FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E968 & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E968 = 1;
  }
  this->fields.NORMAL_COLOR = (struct UnityEngine_Color_o)xmmword_BB5AE0;
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
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
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_Callback_o *v5; // x22
  EventDelegate_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_object__o *v14; // x20
  EventDelegate_Callback_o *v15; // x22
  EventDelegate_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct UITouchPress_o *v23; // x8
  System_Collections_Generic_List_object__o *onLongPress; // x20
  EventDelegate_Callback_o *v25; // x22
  EventDelegate_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  v2 = this;
  if ( (byte_4A5E95D & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_CombineMenuControl_OnLongPushListView__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_FriendshipExceedControl_OnClickExecute__);
    this = (FriendshipExceedControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    byte_4A5E95D = 1;
  }
  if ( !v2->fields.isButtonInitialized )
  {
    executeButton = v2->fields.executeButton;
    if ( !executeButton )
      goto LABEL_24;
    onClick = (System_Collections_Generic_List_object__o *)executeButton->fields.onClick;
    v5 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v6 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v6, v5, 0LL);
    if ( !onClick )
      goto LABEL_24;
    items = onClick->fields._items;
    v10 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++onClick->fields._version;
    if ( !items )
      goto LABEL_24;
    size = onClick->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onClick,
        (Il2CppObject *)v6,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = &items->obj.klass + size;
      onClick->fields._size = size + 1;
      v12[4] = (Il2CppClass *)v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)v6, v7, v8);
    }
    baseServantTouchPress = v2->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_24;
    v14 = (System_Collections_Generic_List_object__o *)baseServantTouchPress->fields.onClick;
    v15 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v15, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v16 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v16, v15, 0LL);
    if ( !v14 )
      goto LABEL_24;
    v19 = v14->fields._items;
    v20 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v14->fields._version;
    if ( !v19 )
      goto LABEL_24;
    v21 = v14->fields._size;
    if ( (unsigned int)v21 >= v19->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)v16,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &v19->obj.klass + v21;
      v14->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
    }
    v23 = v2->fields.baseServantTouchPress;
    if ( !v23 )
      goto LABEL_24;
    onLongPress = (System_Collections_Generic_List_object__o *)v23->fields.onLongPress;
    v25 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v25,
      (Il2CppObject *)v2,
      (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
      0LL);
    v26 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v26, v25, 0LL);
    if ( !onLongPress
      || (v29 = onLongPress->fields._items,
          v30 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onLongPress->fields._version,
          !v29) )
    {
LABEL_24:
      sub_1B8880C(this, method);
    }
    v31 = onLongPress->fields._size;
    if ( (unsigned int)v31 >= v29->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onLongPress,
        (Il2CppObject *)v26,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &v29->obj.klass + v31;
      onLongPress->fields._size = v31 + 1;
      v32[4] = (Il2CppClass *)v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
    }
    v2->fields.isButtonInitialized = 1;
  }
}


void __fastcall FriendshipExceedControl__InitFriendshipExceed(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0
  __int64 v10; // x1

  if ( (byte_4A5E95B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8762/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/);
    byte_4A5E95B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
    this->fields._FriendshipEntity_k__BackingField = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipEntity_k__BackingField, 0, v4, v5);
    FriendshipExceedControl__InitButtons(this, v6);
    FriendshipExceedControl__InitInfo(this, v7);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8762/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_1B8880C(gameObject, v10);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v13; // x6
  int32_t v14; // w20
  bool v15; // w3

  if ( (byte_4A5E95C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4A5E95C = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCollectionEntity, 0, v5, v6);
  FriendshipExceedControl__SetUserQpInfo(this, v7);
  FriendshipExceedControl__SetRequiredQpInfo(this, v8);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v9);
  FriendshipExceedControl__ResetCharacterGraphic(this, v10);
  splitImage = this->fields.splitImage;
  if ( !splitImage )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
  if ( !splitImage )
    goto LABEL_23;
  v14 = 0;
  while ( v14 < SLODWORD(splitImage[1].klass) )
  {
    splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)splitImage,
                                               v14,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, v11);
      splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
      if ( splitImage )
      {
        splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)splitImage,
                                                   v14,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( splitImage )
        {
          splitImage = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)splitImage, 0LL);
          if ( splitImage )
          {
            UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
            splitImage = (UnityEngine_GameObject_o *)this->fields.materialImages;
            if ( splitImage )
            {
              splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)splitImage,
                                                         v14,
                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
                  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
                  ++v14;
                  if ( splitImage )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent;
  v15 = this->fields.isBaseSelected
     && this->fields.isFriendshipRankMax
     && this->fields.isQpEnough
     && this->fields.isItemEnough;
  if ( !splitImage )
LABEL_23:
    sub_1B8880C(splitImage, v11);
  FriendshipExceedInfoComponent__SetInfo((FriendshipExceedInfoComponent_o *)splitImage, 0LL, 0LL, v15, 0, 0, v13);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A5E966 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3829/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_4A5E966 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(v3, v4);
  SetRarityDialogControl__SetFriendshipExceedInfo(exeCombineDlg, v3, this->fields.requiredQp, this->fields.userQp, 0LL);
}


void __fastcall FriendshipExceedControl__ResetCharacterGraphic(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *characterGraphic; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_characterGraphic; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E965 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E965 = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0LL, 0LL) )
  {
    p_characterGraphic = (UnityEngine_Component_o **)&this->fields.characterGraphic;
    if ( !*p_characterGraphic )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_characterGraphic, 0, v7, v8);
  }
}


void __fastcall FriendshipExceedControl__SetBaseServantCardImage(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UserServantEntity_o **p_baseUserServantEntity; // x20
  __int64 v7; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w21
  UserServantEntity_o *v10; // x8
  ServantLimitImageMaster_o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v16; // w21
  struct UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5E964 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E964 = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)entity,
    (int32_t)method,
    v3);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_15;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v10 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_15;
  v11 = (ServantLimitImageMaster_o *)baseUserServantEntity;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   v21,
                                                   0LL);
  if ( !v11 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v11,
                                 (int32_t)baseUserServantEntity,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v16 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v16,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_37906428;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.characterGraphic,
      (int32_t)TexturePrefab_37906428,
      v19,
      v20);
    return;
  }
  baseUserServantEntity = (UserServantEntity_o *)*p_characterGraphic;
  if ( !*p_characterGraphic )
LABEL_15:
    sub_1B8880C(baseUserServantEntity, v7);
  UICharaGraphTexture__SetCharacter_40836020(
    (UICharaGraphTexture_o *)baseUserServantEntity,
    *p_baseUserServantEntity,
    v16,
    0LL,
    0,
    0LL);
}


void __fastcall FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  Il2CppObject *v9; // x20
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  UserServantCollectionMaster_o *v12; // x21
  struct UserServantEntity_o *v13; // x8
  int64_t v14; // x22
  struct UserServantCollectionEntity_o *v15; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int klass_high; // w22
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct UserServantCollectionEntity_o *v25; // x8
  __int64 v26; // x21
  __int64 v27; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A5E962 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E962 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v8;
  *(_QWORD *)&v31.fields.fakeValue = v7;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
  if ( !v6 )
    goto LABEL_24;
  v9 = DataMasterBase_object__object__int___GetEntity(
         v6,
         Instance,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v10 = this->fields.baseUserServantEntity;
  if ( !v10 )
    goto LABEL_24;
  v11 = *(_OWORD *)&v10->fields.userId.fields.fakeValue;
  v12 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v10->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v28 = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v28, 0LL);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_24;
  v14 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13->fields.svtId, 0LL);
  if ( !v12 )
    goto LABEL_24;
  v15 = UserServantCollectionMaster__GetEntity(v12, v14, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v15;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCollectionEntity,
    (int32_t)v15,
    v17,
    v18);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_24;
  if ( !v9 )
    goto LABEL_24;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  klass_high = HIDWORD(v9[6].klass);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               (int32_t)v9[6].klass,
               friendshipExceedCount + klass_high + 1,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    v24 = (int)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipEntity_k__BackingField, v24, v22, v23);
  }
  v25 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_24:
    sub_1B8880C(Instance, v4);
  v26 = *(_QWORD *)&v25->fields.friendshipRank.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v26;
  *(_QWORD *)&v32.fields.fakeValue = v27;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL) == HIDWORD(v9[6].klass) + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  UnityEngine_Behaviour_o *v4; // x20
  float v5; // s3
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  float v10; // s0
  float v11; // s1
  float v12; // s2

  if ( (byte_4A5E963 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_4A5E963 = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
    goto LABEL_38;
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  combineTextImage,
                                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  v4 = (UnityEngine_Behaviour_o *)combineTextImage;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
    method = (const MethodInfo *)this->fields.isItemEnough;
  else
    method = 0LL;
  if ( !this->fields.executeButton )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.executeButton, (bool)method, 0LL);
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
    method = (const MethodInfo *)this->fields.isItemEnough;
  else
    method = 0LL;
  if ( !v4 )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled(v4, (bool)method, 0LL);
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonText;
  v5 = 1.0;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v5 = 1.0;
    v6 = 0.5;
    if ( this->fields.isItemEnough )
      v6 = 1.0;
  }
  else
  {
    v6 = 0.5;
  }
  if ( !combineTextImage )
    goto LABEL_38;
  v7 = v6;
  v8 = v6;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v5 - 3), 0LL);
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonBg;
  v9 = 1.0;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v9 = 1.0;
    v10 = 0.5;
    if ( this->fields.isItemEnough )
      v10 = 1.0;
  }
  else
  {
    v10 = 0.5;
  }
  if ( !combineTextImage )
LABEL_38:
    sub_1B8880C(combineTextImage, method);
  v11 = v10;
  v12 = v10;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v9 - 3), 0LL);
  if ( this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough )
  {
    UITweener__PlayForward((UITweener_o *)v4, 0LL);
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
  if ( !splitImage
    || ((UnityEngine_GameObject__SetActive(splitImage, 1, 0LL),
         FriendshipExceedControl__SetEntities(this, v4),
         splitImage = (UnityEngine_GameObject_o *)this->fields.friendshipExceedInfoComponent,
         !this->fields.isBaseSelected)
     || !this->fields.isFriendshipRankMax
     || !this->fields.isQpEnough
      ? (isItemEnough = 0)
      : (isItemEnough = this->fields.isItemEnough),
        !splitImage) )
  {
    sub_1B8880C(splitImage, method);
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
  UILabel_o *detailInfoLabel; // x20
  __int64 *v6; // x8
  System_String_o *v7; // x0
  __int64 v8; // x1
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  _BOOL4 isQpEnough; // w21
  __int64 *v14; // x8

  if ( (byte_4A5E967 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7358/*"INFO_MSG_FRIENDSHIP_EXCEED"*/);
    sub_1B885B0(&StringLiteral_8757/*"MSG_FRIENDSHIP_EXCEED_BASE"*/);
    sub_1B885B0(&StringLiteral_5753/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    byte_4A5E967 = 1;
  }
  if ( state == 2 )
  {
    if ( this->fields.isFriendshipRankMax )
    {
      if ( this->fields.isItemEnough )
      {
        isQpEnough = this->fields.isQpEnough;
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( this->fields.isQpEnough )
          {
LABEL_15:
            v6 = &StringLiteral_5753/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
            goto LABEL_8;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isQpEnough )
            goto LABEL_15;
        }
        v14 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_8757/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v7 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v7, 0LL);
      v7 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v7 )
      {
        r = 1.0;
        g = 1.0;
        b = 1.0;
        a = 1.0;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B8880C(v7, v8);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_7358/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
LABEL_8:
    v7 = LocalizationManager__Get((System_String_o *)*v6, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v7, 0LL);
      v7 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v7 )
      {
        b = this->fields.NORMAL_COLOR.fields.b;
        a = this->fields.NORMAL_COLOR.fields.a;
        r = this->fields.NORMAL_COLOR.fields.r;
        g = this->fields.NORMAL_COLOR.fields.g;
LABEL_28:
        UIWidget__set_color((UIWidget_o *)v7, *(UnityEngine_Color_o *)&r, 0LL);
        return;
      }
    }
    goto LABEL_29;
  }
}


void __fastcall FriendshipExceedControl__SetLimitCntUpItemComponents(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
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
  unsigned __int64 max_length; // x10
  struct System_Int32_array *itemNums; // x9
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v15; // q0
  LimitCntUpItemComponent_o *v16; // x21
  const MethodInfo *v17; // x4
  struct FriendshipEntity_o *v18; // x9
  struct System_Int32_array *v19; // x8
  struct System_Int32_array *v20; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]

  if ( (byte_4A5E961 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E961 = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_36:
      sub_1B8880C(limitCntUpItemComponentList, method);
    v4 = 8LL;
    while ( 1 )
    {
      v5 = v4 - 8;
      if ( v4 - 8 >= *(int *)(limitCntUpItemComponentList + 24) )
        break;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v5,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      limitCntUpItemComponentList = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)limitCntUpItemComponentList,
                                               0LL);
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
        (__int64)v5 < (int)itemIds->max_length,
        0LL);
      limitCntUpItemComponentList = (int64_t)this->fields.materialImages;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v5,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
        (__int64)v5 >= (int)v9->max_length,
        0LL);
      v10 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v10 )
        goto LABEL_36;
      v11 = v10->fields.itemIds;
      if ( !v11 )
        goto LABEL_36;
      max_length = v11->max_length;
      if ( (__int64)v5 < (int)max_length )
      {
        if ( v5 >= max_length )
          goto LABEL_39;
        itemNums = v10->fields.itemNums;
        if ( !itemNums )
          goto LABEL_36;
        if ( v5 >= itemNums->max_length )
          goto LABEL_39;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *((_DWORD *)&v11->obj.klass + v4),
          *((_DWORD *)&itemNums->obj.klass + v4),
          0LL);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v5,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_36;
        v15 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v16 = (LimitCntUpItemComponent_o *)limitCntUpItemComponentList;
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v22.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        limitCntUpItemComponentList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v21, 0LL);
        v18 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v18 )
          goto LABEL_36;
        v19 = v18->fields.itemIds;
        if ( !v19 )
          goto LABEL_36;
        if ( v5 >= v19->max_length )
          goto LABEL_39;
        v20 = v18->fields.itemNums;
        if ( !v20 )
          goto LABEL_36;
        if ( v5 >= v20->max_length )
LABEL_39:
          sub_1B88814(limitCntUpItemComponentList, method);
        if ( !v16 )
          goto LABEL_36;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v16,
          limitCntUpItemComponentList,
          *((_DWORD *)&v19->obj.klass + v4),
          *((_DWORD *)&v20->obj.klass + v4),
          v17);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v5,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x9
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  float v7; // s1
  float v8; // s0
  float v9; // s3
  float v10; // s2

  if ( (byte_4A5E95F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E95F = 1;
  }
  LODWORD(FriendshipEntity_k__BackingField) = this->fields.isBaseSelected;
  if ( this->fields.isBaseSelected )
  {
    FriendshipEntity_k__BackingField = this->fields._FriendshipEntity_k__BackingField;
    if ( FriendshipEntity_k__BackingField )
      LODWORD(FriendshipEntity_k__BackingField) = FriendshipEntity_k__BackingField->fields.qp;
  }
  this->fields.requiredQp = (int)FriendshipEntity_k__BackingField;
  requiredQpLabel = this->fields.requiredQpLabel;
  v5 = System_Int32__ToString_62512312((int)this + 324, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_11;
  UILabel__set_text(requiredQpLabel, v5, 0LL);
  v5 = (System_String_o *)this->fields.requiredQpLabel;
  v7 = 0.0;
  if ( this->fields.userQp >= this->fields.requiredQp )
    v7 = 1.0;
  if ( !v5 )
LABEL_11:
    sub_1B8880C(v5, v6);
  v8 = 1.0;
  v9 = 1.0;
  v10 = v7;
  UIWidget__set_color((UIWidget_o *)v5, *(UnityEngine_Color_o *)(&v7 - 1), 0LL);
  this->fields.isQpEnough = this->fields.userQp >= this->fields.requiredQp;
}


void __fastcall FriendshipExceedControl__SetSelectedBaseServantId(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *selectData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4A5E960 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E960 = 1;
  }
  if ( selectData )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
      v9 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL) )
        FriendshipExceedControl__InitInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    FriendshipExceedControl__InitInfo(this, (const MethodInfo *)selectData);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectData;
  this->fields.isBaseSelected = v11;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectData,
    (int32_t)method,
    v3);
}


void __fastcall FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *userQpLabel; // x20

  if ( (byte_4A5E95E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E95E = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 320, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !userQpLabel) )
  {
    sub_1B8880C(SelfUserGame, v4);
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
    sub_1B8880C(preSelectBaseLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLabel, !this->fields.isBaseSelected, 0LL);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
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
  int32_t v3; // w3

  this->fields._FriendshipEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}