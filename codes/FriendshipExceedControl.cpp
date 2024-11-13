void __fastcall FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19AB9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19AB9 = 1;
  }
  this->fields.NORMAL_COLOR = (struct UnityEngine_Color_o)xmmword_BD3CE0;
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
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
  FriendshipExceedControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_Callback_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  EventDelegate_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_object__o *v33; // x20
  EventDelegate_Callback_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  EventDelegate_o *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  struct UITouchPress_o *v51; // x8
  System_Collections_Generic_List_object__o *onLongPress; // x20
  EventDelegate_Callback_o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  EventDelegate_o *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0

  v4 = this;
  if ( (byte_4B19AAE & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineMenuControl_OnLongPushListView__, v5, v6);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_FriendshipExceedControl_OnClickExecute__, v9, v10);
    this = (FriendshipExceedControl_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_EventDelegate__Add__,
                                          v11,
                                          v12);
    byte_4B19AAE = 1;
  }
  if ( !v4->fields.isButtonInitialized )
  {
    executeButton = v4->fields.executeButton;
    if ( !executeButton )
      goto LABEL_24;
    onClick = (System_Collections_Generic_List_object__o *)executeButton->fields.onClick;
    v15 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v2, v3);
    EventDelegate_Callback___ctor(v15, (Il2CppObject *)v4, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v19 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v16, v17, v18);
    EventDelegate___ctor_47348668(v19, v15, 0LL);
    if ( !onClick )
      goto LABEL_24;
    items = onClick->fields._items;
    v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++onClick->fields._version;
    if ( !items )
      goto LABEL_24;
    size = onClick->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onClick,
        (Il2CppObject *)v19,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      onClick->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v19;
      sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v20, v21, v22, v23, v24, v25);
    }
    baseServantTouchPress = v4->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_24;
    v33 = (System_Collections_Generic_List_object__o *)baseServantTouchPress->fields.onClick;
    v34 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v30, v31);
    EventDelegate_Callback___ctor(v34, (Il2CppObject *)v4, (intptr_t)v4->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v38 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v35, v36, v37);
    EventDelegate___ctor_47348668(v38, v34, 0LL);
    if ( !v33 )
      goto LABEL_24;
    v45 = v33->fields._items;
    v46 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v33->fields._version;
    if ( !v45 )
      goto LABEL_24;
    v47 = v33->fields._size;
    if ( (unsigned int)v47 >= v45->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)v38,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &v45->obj.klass + v47;
      v33->fields._size = v47 + 1;
      v48[4] = (Il2CppClass *)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v38, v39, v40, v41, v42, v43, v44);
    }
    v51 = v4->fields.baseServantTouchPress;
    if ( !v51 )
      goto LABEL_24;
    onLongPress = (System_Collections_Generic_List_object__o *)v51->fields.onLongPress;
    v53 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v49, v50);
    EventDelegate_Callback___ctor(
      v53,
      (Il2CppObject *)v4,
      (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
      0LL);
    v57 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v54, v55, v56);
    EventDelegate___ctor_47348668(v57, v53, 0LL);
    if ( !onLongPress
      || (v64 = onLongPress->fields._items,
          v65 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onLongPress->fields._version,
          !v64) )
    {
LABEL_24:
      sub_1BCAA3C(this, method);
    }
    v66 = onLongPress->fields._size;
    if ( (unsigned int)v66 >= v64->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onLongPress,
        (Il2CppObject *)v57,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = &v64->obj.klass + v66;
      onLongPress->fields._size = v66 + 1;
      v67[4] = (Il2CppClass *)v57;
      sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v57, v58, v59, v60, v61, v62, v63);
    }
    v4->fields.isButtonInitialized = 1;
  }
}


void __fastcall FriendshipExceedControl__InitFriendshipExceed(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0
  __int64 v20; // x1

  if ( (byte_4B19AAC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8890/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, v6, v7);
    byte_4B19AAC = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( v8->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
    this->fields._FriendshipEntity_k__BackingField = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._FriendshipEntity_k__BackingField,
      0LL,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    FriendshipExceedControl__InitButtons(this, v15);
    FriendshipExceedControl__InitInfo(this, v16);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8890/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v20);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v25; // x6
  int32_t v26; // w20
  bool v27; // w3

  if ( (byte_4B19AAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    byte_4B19AAD = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCollectionEntity,
    0LL,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  FriendshipExceedControl__SetUserQpInfo(this, v19);
  FriendshipExceedControl__SetRequiredQpInfo(this, v20);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v21);
  FriendshipExceedControl__ResetCharacterGraphic(this, v22);
  splitImage = this->fields.splitImage;
  if ( !splitImage )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
  if ( !splitImage )
    goto LABEL_23;
  v26 = 0;
  while ( v26 < SLODWORD(splitImage[1].klass) )
  {
    splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)splitImage,
                                               v26,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, v23);
      splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
      if ( splitImage )
      {
        splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)splitImage,
                                                   v26,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                         v26,
                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
                  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
                  ++v26;
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
  v27 = this->fields.isBaseSelected
     && this->fields.isFriendshipRankMax
     && this->fields.isQpEnough
     && this->fields.isItemEnough;
  if ( !splitImage )
LABEL_23:
    sub_1BCAA3C(splitImage, v23);
  FriendshipExceedInfoComponent__SetInfo((FriendshipExceedInfoComponent_o *)splitImage, 0LL, 0LL, v27, 0, 0, v25);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19AB7 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3862/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, v4, v5);
    byte_4B19AB7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3862/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCAA3C(v6, v7);
  SetRarityDialogControl__SetFriendshipExceedInfo(exeCombineDlg, v6, this->fields.requiredQp, this->fields.userQp, 0LL);
}


void __fastcall FriendshipExceedControl__ResetCharacterGraphic(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *characterGraphic; // x20
  __int64 v5; // x1
  UnityEngine_Component_o **p_characterGraphic; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19AB6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19AB6 = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0LL, 0LL) )
  {
    p_characterGraphic = (UnityEngine_Component_o **)&this->fields.characterGraphic;
    if ( !*p_characterGraphic )
      sub_1BCAA3C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_characterGraphic, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall FriendshipExceedControl__SetBaseServantCardImage(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserServantEntity_o **p_baseUserServantEntity; // x20
  __int64 v17; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w21
  UserServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v25; // x1
  UnityEngine_Object_o *characterGraphic; // x23
  int32_t v27; // w21
  struct UICharaGraphTexture_o **p_characterGraphic; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B19AB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, entity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19AB5 = 1;
  }
  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_15;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = *p_baseUserServantEntity;
  if ( !*p_baseUserServantEntity )
    goto LABEL_15;
  v21 = (ServantLimitImageMaster_o *)baseUserServantEntity;
  v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v36.fields.currentCryptoKey = v23;
  *(_QWORD *)&v36.fields.fakeValue = v22;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v36,
                                                   0LL);
  if ( !v21 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v21,
                                 (int32_t)baseUserServantEntity,
                                 CardImageLimitCount,
                                 0LL);
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  v27 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  p_characterGraphic = &this->fields.characterGraphic;
  if ( UnityEngine_Object__op_Equality(characterGraphic, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               this->fields.characterGraphicBase,
                               this->fields.baseUserServantEntity,
                               v27,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.characterGraphic = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.characterGraphic,
      (int64_t)TexturePrefab_38621628,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    return;
  }
  baseUserServantEntity = (UserServantEntity_o *)*p_characterGraphic;
  if ( !*p_characterGraphic )
LABEL_15:
    sub_1BCAA3C(baseUserServantEntity, v17);
  UICharaGraphTexture__SetCharacter_41557848(
    (UICharaGraphTexture_o *)baseUserServantEntity,
    *p_baseUserServantEntity,
    v27,
    0LL,
    0,
    0LL);
}


void __fastcall FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  __int64 v17; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  Il2CppObject *v22; // x20
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  UserServantCollectionMaster_o *v25; // x21
  struct UserServantEntity_o *v26; // x8
  int64_t v27; // x22
  struct UserServantCollectionEntity_o *v28; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int klass_high; // w22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  FriendshipEntity_o *v45; // x1
  struct UserServantCollectionEntity_o *v46; // x8
  __int64 v47; // x21
  __int64 v48; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-70h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B19AB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19AB3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v52.fields.currentCryptoKey = v21;
  *(_QWORD *)&v52.fields.fakeValue = v20;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
  if ( !v19 )
    goto LABEL_24;
  v22 = DataMasterBase_object__object__int___GetEntity(
          v19,
          Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v23 = this->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_24;
  v24 = *(_OWORD *)&v23->fields.userId.fields.fakeValue;
  v25 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v23->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
  v49 = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v49, 0LL);
  v26 = this->fields.baseUserServantEntity;
  if ( !v26 )
    goto LABEL_24;
  v27 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26->fields.svtId, 0LL);
  if ( !v25 )
    goto LABEL_24;
  v28 = UserServantCollectionMaster__GetEntity(v25, v27, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v28;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCollectionEntity,
    (int64_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_24;
  if ( !v22 )
    goto LABEL_24;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  klass_high = HIDWORD(v22[6].klass);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               (int32_t)v22[6].klass,
               friendshipExceedCount + klass_high + 1,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    v45 = entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._FriendshipEntity_k__BackingField,
      (int64_t)v45,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v46 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_24:
    sub_1BCAA3C(Instance, v17);
  v47 = *(_QWORD *)&v46->fields.friendshipRank.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v53.fields.currentCryptoKey = v47;
  *(_QWORD *)&v53.fields.fakeValue = v48;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL) == HIDWORD(v22[6].klass) + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetExecuteButtonState(
        FriendshipExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *combineTextImage; // x0
  UnityEngine_Behaviour_o *v5; // x20
  float v6; // s3
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  float v11; // s0
  float v12; // s1
  float v13; // s2

  if ( (byte_4B19AB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    byte_4B19AB4 = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
    goto LABEL_38;
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  combineTextImage,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  v5 = (UnityEngine_Behaviour_o *)combineTextImage;
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
  if ( !v5 )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled(v5, (bool)method, 0LL);
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonText;
  v6 = 1.0;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v6 = 1.0;
    v7 = 0.5;
    if ( this->fields.isItemEnough )
      v7 = 1.0;
  }
  else
  {
    v7 = 0.5;
  }
  if ( !combineTextImage )
    goto LABEL_38;
  v8 = v7;
  v9 = v7;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v6 - 3), 0LL);
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineButtonBg;
  v10 = 1.0;
  if ( this->fields.isBaseSelected && this->fields.isFriendshipRankMax && this->fields.isQpEnough )
  {
    v10 = 1.0;
    v11 = 0.5;
    if ( this->fields.isItemEnough )
      v11 = 1.0;
  }
  else
  {
    v11 = 0.5;
  }
  if ( !combineTextImage )
LABEL_38:
    sub_1BCAA3C(combineTextImage, method);
  v12 = v11;
  v13 = v11;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v10 - 3), 0LL);
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
    sub_1BCAA3C(splitImage, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *detailInfoLabel; // x20
  __int64 *v16; // x8
  System_String_o *v17; // x0
  __int64 v18; // x1
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  _BOOL4 isQpEnough; // w21
  __int64 *v24; // x8

  if ( (byte_4B19AB8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&StringLiteral_7483/*"INFO_MSG_FRIENDSHIP_EXCEED"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_8885/*"MSG_FRIENDSHIP_EXCEED_BASE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_5865/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v13, v14);
    byte_4B19AB8 = 1;
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
            v16 = &StringLiteral_5865/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
            goto LABEL_8;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
          if ( isQpEnough )
            goto LABEL_15;
        }
        v24 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        v24 = &StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      v24 = &StringLiteral_8885/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v17 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v17, 0LL);
      v17 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v17 )
      {
        r = 1.0;
        g = 1.0;
        b = 1.0;
        a = 1.0;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1BCAA3C(v17, v18);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v16 = &StringLiteral_7483/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
LABEL_8:
    v17 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v17, 0LL);
      v17 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v17 )
      {
        b = this->fields.NORMAL_COLOR.fields.b;
        a = this->fields.NORMAL_COLOR.fields.a;
        r = this->fields.NORMAL_COLOR.fields.r;
        g = this->fields.NORMAL_COLOR.fields.g;
LABEL_28:
        UIWidget__set_color((UIWidget_o *)v17, *(UnityEngine_Color_o *)&r, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t limitCntUpItemComponentList; // x0
  __int64 v11; // x25
  unsigned __int64 v12; // x20
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x8
  struct System_Int32_array *itemIds; // x8
  struct FriendshipEntity_o *v15; // x8
  struct System_Int32_array *v16; // x8
  struct FriendshipEntity_o *v17; // x9
  struct System_Int32_array *v18; // x8
  unsigned __int64 max_length; // x10
  struct System_Int32_array *itemNums; // x9
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v22; // q0
  LimitCntUpItemComponent_o *v23; // x21
  const MethodInfo *v24; // x4
  struct FriendshipEntity_o *v25; // x9
  struct System_Int32_array *v26; // x8
  struct System_Int32_array *v27; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]

  if ( (byte_4B19AB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B19AB2 = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_36:
      sub_1BCAA3C(limitCntUpItemComponentList, method);
    v11 = 8LL;
    while ( 1 )
    {
      v12 = v11 - 8;
      if ( v11 - 8 >= *(int *)(limitCntUpItemComponentList + 24) )
        break;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v12,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
        (__int64)v12 < (int)itemIds->max_length,
        0LL);
      limitCntUpItemComponentList = (int64_t)this->fields.materialImages;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v12,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v15 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v15 )
        goto LABEL_36;
      v16 = v15->fields.itemIds;
      if ( !v16 )
        goto LABEL_36;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)limitCntUpItemComponentList,
        (__int64)v12 >= (int)v16->max_length,
        0LL);
      v17 = this->fields._FriendshipEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_36;
      v18 = v17->fields.itemIds;
      if ( !v18 )
        goto LABEL_36;
      max_length = v18->max_length;
      if ( (__int64)v12 < (int)max_length )
      {
        if ( v12 >= max_length )
          goto LABEL_39;
        itemNums = v17->fields.itemNums;
        if ( !itemNums )
          goto LABEL_36;
        if ( v12 >= itemNums->max_length )
          goto LABEL_39;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *((_DWORD *)&v18->obj.klass + v11),
          *((_DWORD *)&itemNums->obj.klass + v11),
          0LL);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v12,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          goto LABEL_36;
        v22 = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.fakeValue;
        v23 = (LimitCntUpItemComponent_o *)limitCntUpItemComponentList;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
        v28 = v29;
        limitCntUpItemComponentList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL);
        v25 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v25 )
          goto LABEL_36;
        v26 = v25->fields.itemIds;
        if ( !v26 )
          goto LABEL_36;
        if ( v12 >= v26->max_length )
          goto LABEL_39;
        v27 = v25->fields.itemNums;
        if ( !v27 )
          goto LABEL_36;
        if ( v12 >= v27->max_length )
LABEL_39:
          sub_1BCAA44(limitCntUpItemComponentList, method);
        if ( !v23 )
          goto LABEL_36;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v23,
          limitCntUpItemComponentList,
          *((_DWORD *)&v26->obj.klass + v11),
          *((_DWORD *)&v27->obj.klass + v11),
          v24);
        limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                                 v12,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !limitCntUpItemComponentList )
          goto LABEL_36;
        if ( !*(_BYTE *)(limitCntUpItemComponentList + 112) )
          this->fields.isItemEnough = 0;
      }
      limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
      ++v11;
      if ( !limitCntUpItemComponentList )
        goto LABEL_36;
    }
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x9
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  float v8; // s1
  float v9; // s0
  float v10; // s3
  float v11; // s2

  if ( (byte_4B19AB0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19AB0 = 1;
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
  v6 = System_Int32__ToString_63206828((int)this + 324, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_11;
  UILabel__set_text(requiredQpLabel, v6, 0LL);
  v6 = (System_String_o *)this->fields.requiredQpLabel;
  v8 = 0.0;
  if ( this->fields.userQp >= this->fields.requiredQp )
    v8 = 1.0;
  if ( !v6 )
LABEL_11:
    sub_1BCAA3C(v6, v7);
  v9 = 1.0;
  v10 = 1.0;
  v11 = v8;
  UIWidget__set_color((UIWidget_o *)v6, *(UnityEngine_Color_o *)(&v8 - 1), 0LL);
  this->fields.isQpEnough = this->fields.userQp >= this->fields.requiredQp;
}


void __fastcall FriendshipExceedControl__SetSelectedBaseServantId(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *selectData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  bool v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_4B19AB1 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData, method);
    byte_4B19AB1 = 1;
  }
  if ( selectData )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v17, 0LL);
      v13 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v16, 0LL) )
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *userQpLabel; // x20

  if ( (byte_4B19AAF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19AAF = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 320, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !userQpLabel) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
    sub_1BCAA3C(preSelectBaseLabel, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FriendshipEntity_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FriendshipEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}