void __fastcall FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB7F & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FFB7F = 1;
  }
  this->fields.NORMAL_COLOR = (struct UnityEngine_Color_o)xmmword_BA42B0;
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
  __int64 v2; // x2
  FriendshipExceedControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_Callback_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  EventDelegate_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_object__o *v23; // x20
  EventDelegate_Callback_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  EventDelegate_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct UITouchPress_o *v36; // x8
  System_Collections_Generic_List_object__o *onLongPress; // x20
  EventDelegate_Callback_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  EventDelegate_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0

  v3 = this;
  if ( (byte_49FFB74 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_CombineMenuControl_OnLongPushListView__, v4);
    sub_1B640C8(&EventDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_FriendshipExceedControl_OnClickExecute__, v6);
    this = (FriendshipExceedControl_o *)sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    byte_49FFB74 = 1;
  }
  if ( !v3->fields.isButtonInitialized )
  {
    executeButton = v3->fields.executeButton;
    if ( !executeButton )
      goto LABEL_24;
    onClick = (System_Collections_Generic_List_object__o *)executeButton->fields.onClick;
    v10 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, method, v2);
    EventDelegate_Callback___ctor(v10, (Il2CppObject *)v3, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v13 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v11, v12);
    EventDelegate___ctor_46508544(v13, v10, 0LL);
    if ( !onClick )
      goto LABEL_24;
    items = onClick->fields._items;
    v17 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++onClick->fields._version;
    if ( !items )
      goto LABEL_24;
    size = onClick->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onClick,
        (Il2CppObject *)v13,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      onClick->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
    }
    baseServantTouchPress = v3->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_24;
    v23 = (System_Collections_Generic_List_object__o *)baseServantTouchPress->fields.onClick;
    v24 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v20, v21);
    EventDelegate_Callback___ctor(v24, (Il2CppObject *)v3, (intptr_t)v3->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v27 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v25, v26);
    EventDelegate___ctor_46508544(v27, v24, 0LL);
    if ( !v23 )
      goto LABEL_24;
    v30 = v23->fields._items;
    v31 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v23->fields._version;
    if ( !v30 )
      goto LABEL_24;
    v32 = v23->fields._size;
    if ( (unsigned int)v32 >= v30->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        (Il2CppObject *)v27,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &v30->obj.klass + v32;
      v23->fields._size = v32 + 1;
      v33[4] = (Il2CppClass *)v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
    }
    v36 = v3->fields.baseServantTouchPress;
    if ( !v36 )
      goto LABEL_24;
    onLongPress = (System_Collections_Generic_List_object__o *)v36->fields.onLongPress;
    v38 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v34, v35);
    EventDelegate_Callback___ctor(
      v38,
      (Il2CppObject *)v3,
      (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
      0LL);
    v41 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v39, v40);
    EventDelegate___ctor_46508544(v41, v38, 0LL);
    if ( !onLongPress
      || (v44 = onLongPress->fields._items,
          v45 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onLongPress->fields._version,
          !v44) )
    {
LABEL_24:
      sub_1B64324(this);
    }
    v46 = onLongPress->fields._size;
    if ( (unsigned int)v46 >= v44->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onLongPress,
        (Il2CppObject *)v41,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      onLongPress->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)v41;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
    }
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
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0

  if ( (byte_49FFB72 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_8720/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, v4);
    byte_49FFB72 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( v5->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
    this->fields._FriendshipEntity_k__BackingField = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipEntity_k__BackingField, 0, v6, v7);
    FriendshipExceedControl__InitButtons(this, v8);
    FriendshipExceedControl__InitInfo(this, v9);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v14; // x6
  int32_t v15; // w20
  const MethodInfo *v16; // x1
  bool v17; // w3

  if ( (byte_49FFB73 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_49FFB73 = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCollectionEntity, 0, v7, v8);
  FriendshipExceedControl__SetUserQpInfo(this, v9);
  FriendshipExceedControl__SetRequiredQpInfo(this, v10);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v11);
  FriendshipExceedControl__ResetCharacterGraphic(this, v12);
  splitImage = this->fields.splitImage;
  if ( !splitImage )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
  if ( !splitImage )
    goto LABEL_23;
  v15 = 0;
  while ( v15 < SLODWORD(splitImage[1].klass) )
  {
    splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)splitImage,
                                               v15,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, v16);
      splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
      if ( splitImage )
      {
        splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)splitImage,
                                                   v15,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                         v15,
                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
                  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
                  ++v15;
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
  v17 = this->fields.isBaseSelected
     && this->fields.isFriendshipRankMax
     && this->fields.isQpEnough
     && this->fields.isItemEnough;
  if ( !splitImage )
LABEL_23:
    sub_1B64324(splitImage);
  FriendshipExceedInfoComponent__SetInfo((FriendshipExceedInfoComponent_o *)splitImage, 0LL, 0LL, v17, 0, 0, v14);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_49FFB7D & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3806/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, v3);
    byte_49FFB7D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3806/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B64324(v4);
  SetRarityDialogControl__SetFriendshipExceedInfo(exeCombineDlg, v4, this->fields.requiredQp, this->fields.userQp, 0LL);
}


void __fastcall FriendshipExceedControl__ResetCharacterGraphic(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *characterGraphic; // x20
  UnityEngine_Component_o **p_characterGraphic; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FFB7C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFB7C = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0LL, 0LL) )
  {
    p_characterGraphic = (UnityEngine_Component_o **)&this->fields.characterGraphic;
    if ( !*p_characterGraphic )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_characterGraphic, 0, v6, v7);
  }
}


void __fastcall FriendshipExceedControl__SetBaseServantCardImage(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantEntity_o **p_baseUserServantEntity; // x20
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w21
  UserServantEntity_o *v12; // x8
  ServantLimitImageMaster_o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v18; // w21
  struct UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FFB7B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, entity);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFB7B = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)entity,
    (int32_t)method,
    v3);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_15;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v12 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_15;
  v13 = (ServantLimitImageMaster_o *)baseUserServantEntity;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v23,
                                                   0LL);
  if ( !v13 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v13,
                                 (int32_t)baseUserServantEntity,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v18 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_37591604 = CharaGraphManager__CreateTexturePrefab_37591604(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v18,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_37591604;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.characterGraphic,
      (int32_t)TexturePrefab_37591604,
      v21,
      v22);
    return;
  }
  baseUserServantEntity = (UserServantEntity_o *)*p_characterGraphic;
  if ( !*p_characterGraphic )
LABEL_15:
    sub_1B64324(baseUserServantEntity);
  UICharaGraphTexture__SetCharacter_40502984(
    (UICharaGraphTexture_o *)baseUserServantEntity,
    *p_baseUserServantEntity,
    v18,
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
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  Il2CppObject *v14; // x20
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  UserServantCollectionMaster_o *v17; // x21
  struct UserServantEntity_o *v18; // x8
  int64_t v19; // x22
  struct UserServantCollectionEntity_o *v20; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int klass_high; // w22
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  struct UserServantCollectionEntity_o *v30; // x8
  __int64 v31; // x21
  __int64 v32; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-70h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_49FFB79 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFB79 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v13;
  *(_QWORD *)&v36.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v36, 0LL);
  if ( !v11 )
    goto LABEL_24;
  v14 = DataMasterBase_object__object__int___GetEntity(
          v11,
          Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v15 = this->fields.baseUserServantEntity;
  if ( !v15 )
    goto LABEL_24;
  v16 = *(_OWORD *)&v15->fields.userId.fields.fakeValue;
  v17 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v15->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v34;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v33, 0LL);
  v18 = this->fields.baseUserServantEntity;
  if ( !v18 )
    goto LABEL_24;
  v19 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18->fields.svtId, 0LL);
  if ( !v17 )
    goto LABEL_24;
  v20 = UserServantCollectionMaster__GetEntity(v17, v19, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v20;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCollectionEntity,
    (int32_t)v20,
    v22,
    v23);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_24;
  if ( !v14 )
    goto LABEL_24;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  klass_high = HIDWORD(v14[6].klass);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               (int32_t)v14[6].klass,
               friendshipExceedCount + klass_high + 1,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    v29 = (int)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipEntity_k__BackingField, v29, v27, v28);
  }
  v30 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_24:
    sub_1B64324(Instance);
  v31 = *(_QWORD *)&v30->fields.friendshipRank.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v31;
  *(_QWORD *)&v37.fields.fakeValue = v32;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v37, 0LL) == HIDWORD(v14[6].klass) + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  UnityEngine_Behaviour_o *v4; // x20
  bool v5; // w1
  bool v6; // w1
  float v7; // s3
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  float v12; // s0
  float v13; // s1
  float v14; // s2

  if ( (byte_49FFB7A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    byte_49FFB7A = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
    goto LABEL_38;
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  combineTextImage,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  v4 = (UnityEngine_Behaviour_o *)combineTextImage;
  v5 = this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough;
  if ( !this->fields.executeButton )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.executeButton, v5, 0LL);
  v6 = this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough;
  if ( !v4 )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled(v4, v6, 0LL);
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonText;
  v7 = 1.0;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v7 = 1.0;
    v8 = 0.5;
    if ( this->fields.isItemEnough )
      v8 = 1.0;
  }
  else
  {
    v8 = 0.5;
  }
  if ( !combineTextImage )
    goto LABEL_38;
  v9 = v8;
  v10 = v8;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v7 - 3), 0LL);
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonBg;
  v11 = 1.0;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v11 = 1.0;
    v12 = 0.5;
    if ( this->fields.isItemEnough )
      v12 = 1.0;
  }
  else
  {
    v12 = 0.5;
  }
  if ( !combineTextImage )
LABEL_38:
    sub_1B64324(combineTextImage);
  v13 = v12;
  v14 = v12;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v11 - 3), 0LL);
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
    sub_1B64324(splitImage);
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
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  _BOOL4 isQpEnough; // w21
  __int64 *v18; // x8

  if ( (byte_49FFB7E & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_1B640C8(&StringLiteral_7328/*"INFO_MSG_FRIENDSHIP_EXCEED"*/, v5);
    sub_1B640C8(&StringLiteral_8715/*"MSG_FRIENDSHIP_EXCEED_BASE"*/, v6);
    sub_1B640C8(&StringLiteral_5727/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/, v8);
    sub_1B640C8(&StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, v9);
    byte_49FFB7E = 1;
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
            v11 = &StringLiteral_5727/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
            goto LABEL_8;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isQpEnough )
            goto LABEL_15;
        }
        v18 = &StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = &StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_8715/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v12 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v12, 0LL);
      v12 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v12 )
      {
        r = 1.0;
        g = 1.0;
        b = 1.0;
        a = 1.0;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B64324(v12);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_7328/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
LABEL_8:
    v12 = LocalizationManager__Get((System_String_o *)*v11, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v12, 0LL);
      v12 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v12 )
      {
        b = this->fields.NORMAL_COLOR.fields.b;
        a = this->fields.NORMAL_COLOR.fields.a;
        r = this->fields.NORMAL_COLOR.fields.r;
        g = this->fields.NORMAL_COLOR.fields.g;
LABEL_28:
        UIWidget__set_color((UIWidget_o *)v12, *(UnityEngine_Color_o *)&r, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t limitCntUpItemComponentList; // x0
  __int64 v7; // x25
  unsigned __int64 v8; // x20
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct FriendshipEntity_o *v11; // x8
  struct System_Int32_array *v12; // x8
  __int64 v13; // x1
  struct FriendshipEntity_o *v14; // x9
  struct System_Int32_array *v15; // x8
  unsigned __int64 max_length; // x10
  struct System_Int32_array *itemNums; // x9
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v19; // q0
  LimitCntUpItemComponent_o *v20; // x21
  const MethodInfo *v21; // x4
  struct FriendshipEntity_o *v22; // x9
  struct System_Int32_array *v23; // x8
  struct System_Int32_array *v24; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]

  if ( (byte_49FFB78 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49FFB78 = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_36:
      sub_1B64324(limitCntUpItemComponentList);
    v7 = 8LL;
    while ( 1 )
    {
      v8 = v7 - 8;
      if ( v7 - 8 >= *(int *)(limitCntUpItemComponentList + 24) )
        break;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v8,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
        (__int64)v8 < (int)itemIds->max_length,
        0LL);
      limitCntUpItemComponentList = (int64_t)this->fields.materialImages;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v8,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v11 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v11 )
        goto LABEL_36;
      v12 = v11->fields.itemIds;
      if ( !v12 )
        goto LABEL_36;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)limitCntUpItemComponentList,
        (__int64)v8 >= (int)v12->max_length,
        0LL);
      v14 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v14 )
        goto LABEL_36;
      v15 = v14->fields.itemIds;
      if ( !v15 )
        goto LABEL_36;
      max_length = v15->max_length;
      if ( (__int64)v8 < (int)max_length )
      {
        if ( v8 >= max_length )
          goto LABEL_39;
        itemNums = v14->fields.itemNums;
        if ( !itemNums )
          goto LABEL_36;
        if ( v8 >= itemNums->max_length )
          goto LABEL_39;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *((_DWORD *)&v15->obj.klass + v7),
          *((_DWORD *)&itemNums->obj.klass + v7),
          0LL);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v8,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_36;
        v19 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v20 = (LimitCntUpItemComponent_o *)limitCntUpItemComponentList;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v26.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        limitCntUpItemComponentList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v25, 0LL);
        v22 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v22 )
          goto LABEL_36;
        v23 = v22->fields.itemIds;
        if ( !v23 )
          goto LABEL_36;
        if ( v8 >= v23->max_length )
          goto LABEL_39;
        v24 = v22->fields.itemNums;
        if ( !v24 )
          goto LABEL_36;
        if ( v8 >= v24->max_length )
LABEL_39:
          sub_1B6432C(limitCntUpItemComponentList, v13);
        if ( !v20 )
          goto LABEL_36;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v20,
          limitCntUpItemComponentList,
          *((_DWORD *)&v23->obj.klass + v7),
          *((_DWORD *)&v24->obj.klass + v7),
          v21);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v8,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        if ( !*(_BYTE *)(limitCntUpItemComponentList + 112) )
          this->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
      ++v7;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
    }
    CombineMenuControl__SortCombineItemInfoList((CombineMenuControl_o *)this, 0LL);
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x9
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v5; // x0
  float v6; // s1
  float v7; // s0
  float v8; // s3
  float v9; // s2

  if ( (byte_49FFB76 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    byte_49FFB76 = 1;
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
  v5 = System_Int32__ToString_62180668((int)this + 324, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_11;
  UILabel__set_text(requiredQpLabel, v5, 0LL);
  v5 = (System_String_o *)this->fields.requiredQpLabel;
  v6 = 0.0;
  if ( this->fields.userQp >= this->fields.requiredQp )
    v6 = 1.0;
  if ( !v5 )
LABEL_11:
    sub_1B64324(v5);
  v7 = 1.0;
  v8 = 1.0;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)v5, *(UnityEngine_Color_o *)(&v6 - 1), 0LL);
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

  if ( (byte_49FFB77 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData);
    byte_49FFB77 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v13, 0LL);
      v9 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v12, 0LL) )
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectData,
    (int32_t)method,
    v3);
}


void __fastcall FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  UILabel_o *userQpLabel; // x20

  if ( (byte_49FFB75 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    byte_49FFB75 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62180668((int)this + 320, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
        !userQpLabel) )
  {
    sub_1B64324(SelfUserGame);
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
    sub_1B64324(preSelectBaseLabel);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}