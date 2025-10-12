void FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B901 & 1) == 0 )
  {
    sub_1C32C20(&CombineMenuControl_TypeInfo);
    byte_4C3B901 = 1;
  }
  this->fields.NORMAL_COLOR = (struct UnityEngine_Color_o)xmmword_C0E040;
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
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
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_Callback_o *v5; // x22
  EventDelegate_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_object__o *v14; // x20
  EventDelegate_Callback_o *v15; // x22
  EventDelegate_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct UITouchPress_o *v23; // x8
  System_Collections_Generic_List_object__o *onLongPress; // x20
  EventDelegate_Callback_o *v25; // x22
  EventDelegate_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  v2 = this;
  if ( (byte_4C3B8F7 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_CombineMenuControl_OnLongPushListView__);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_FriendshipExceedControl_OnClickExecute__);
    this = (FriendshipExceedControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    byte_4C3B8F7 = 1;
  }
  if ( !v2->fields.isButtonInitialized )
  {
    executeButton = v2->fields.executeButton;
    if ( !executeButton )
      goto LABEL_24;
    onClick = (System_Collections_Generic_List_object__o *)executeButton->fields.onClick;
    v5 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, Method_FriendshipExceedControl_OnClickExecute__, 0);
    v6 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor_49230836(v6, v5, 0);
    if ( !onClick )
      goto LABEL_24;
    items = onClick->fields._items;
    v10 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++onClick->fields._version;
    if ( !items )
      goto LABEL_24;
    size = onClick->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onClick,
        (Il2CppObject *)v6,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = &items->obj.klass + size;
      onClick->fields._size = size + 1;
      v12[4] = (Il2CppClass *)v6;
      sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v6, v7, v8);
    }
    baseServantTouchPress = v2->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_24;
    v14 = (System_Collections_Generic_List_object__o *)baseServantTouchPress->fields.onClick;
    v15 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v15, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._4_OnClickBase.method, 0);
    v16 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor_49230836(v16, v15, 0);
    if ( !v14 )
      goto LABEL_24;
    v19 = v14->fields._items;
    v20 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v14->fields._version;
    if ( !v19 )
      goto LABEL_24;
    v21 = v14->fields._size;
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)v16,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &v19->obj.klass + v21;
      v14->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v16;
      sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
    }
    v23 = v2->fields.baseServantTouchPress;
    if ( !v23 )
      goto LABEL_24;
    onLongPress = (System_Collections_Generic_List_object__o *)v23->fields.onLongPress;
    v25 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v25, (Il2CppObject *)v2, (intptr_t)Method_CombineMenuControl_OnLongPushListView__, 0);
    v26 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor_49230836(v26, v25, 0);
    if ( !onLongPress
      || (v29 = onLongPress->fields._items,
          v30 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onLongPress->fields._version,
          !v29) )
    {
LABEL_24:
      sub_1C32E7C(this);
    }
    v31 = onLongPress->fields._size;
    if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onLongPress,
        (Il2CppObject *)v26,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &v29->obj.klass + v31;
      onLongPress->fields._size = v31 + 1;
      v32[4] = (Il2CppClass *)v26;
      sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
    }
    v2->fields.isButtonInitialized = 1;
  }
}


void FriendshipExceedControl__InitFriendshipExceed(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0

  if ( (byte_4C3B8F5 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8802/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/);
    byte_4C3B8F5 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->DisableFriendshipExceed <= 0 )
  {
    CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
    this->fields._FriendshipEntity_k__BackingField = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._FriendshipEntity_k__BackingField, 0, v4, v5);
    FriendshipExceedControl__InitButtons(this, v6);
    FriendshipExceedControl__InitInfo(this, v7);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0) )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}


void FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v12; // x6
  int32_t v13; // w20
  const MethodInfo *v14; // x1
  bool v15; // w3

  if ( (byte_4C3B8F6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C3B8F6 = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCollectionEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantCollectionEntity, 0, v5, v6);
  FriendshipExceedControl__SetUserQpInfo(this, v7);
  FriendshipExceedControl__SetRequiredQpInfo(this, v8);
  *(_WORD *)&this->fields.isFriendshipRankMax = 257;
  this->fields.isItemEnough = 1;
  FriendshipExceedControl__SetExecuteButtonState(this, v9);
  FriendshipExceedControl__ResetCharacterGraphic(this, v10);
  splitImage = this->fields.splitImage;
  if ( !splitImage )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(splitImage, 0, 0);
  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
  if ( !splitImage )
    goto LABEL_23;
  v13 = 0;
  while ( v13 < SLODWORD(splitImage[1].klass) )
  {
    splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)splitImage,
                                               v13,
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, v14);
      splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
      if ( splitImage )
      {
        splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)splitImage,
                                                   v13,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                         v13,
                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0);
                  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
                  ++v13;
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
    sub_1C32E7C(splitImage);
  FriendshipExceedInfoComponent__SetInfo((FriendshipExceedInfoComponent_o *)splitImage, 0, 0, v15, 0, 0, v12);
}


void FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4C3B8FF & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3769/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_4C3B8FF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3769/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C32E7C(v3);
  SetRarityDialogControl__SetFriendshipExceedInfo(exeCombineDlg, v3, this->fields.requiredQp, this->fields.userQp, 0);
}


void FriendshipExceedControl__ResetCharacterGraphic(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *characterGraphic; // x20
  UnityEngine_Component_o **p_characterGraphic; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3B8FE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B8FE = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0, 0) )
  {
    p_characterGraphic = (UnityEngine_Component_o **)&this->fields.characterGraphic;
    if ( !*p_characterGraphic )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_characterGraphic = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_characterGraphic, 0, v6, v7);
  }
}


void FriendshipExceedControl__SetBaseServantCardImage(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o **p_baseUserServantEntity; // x20
  struct UICharaGraphTexture_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseUserServantEntity = entity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)entity, (int32_t)method, v3);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(FriendshipExceedControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.characterGraphic,
                                         *p_baseUserServantEntity,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.characterGraphic = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.characterGraphic, (int32_t)v6, v7, v8);
}


void FriendshipExceedControl__SetEntities(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  Il2CppObject *v8; // x20
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q1
  UserServantCollectionMaster_o *v11; // x21
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x22
  struct UserServantCollectionEntity_o *v14; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int klass_high; // w22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct UserServantCollectionEntity_o *v24; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C3B8FC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B8FC = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v7;
  *(_QWORD *)&v30.fields.fakeValue = v6;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v30, 0);
  if ( !v5 )
    goto LABEL_24;
  v8 = DataMasterBase_object__object__int___GetEntity(
         v5,
         Instance,
         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v9 = this->fields.baseUserServantEntity;
  if ( !v9 )
    goto LABEL_24;
  v10 = *(_OWORD *)&v9->fields.userId.fields.fakeValue;
  v11 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v9->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v27 = v28;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v27, 0);
  v12 = this->fields.baseUserServantEntity;
  if ( !v12 )
    goto LABEL_24;
  v13 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v12->fields.svtId, 0);
  if ( !v11 )
    goto LABEL_24;
  v14 = UserServantCollectionMaster__GetEntity(v11, v13, Instance, 0);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantCollectionEntity, (int32_t)v14, v16, v17);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_24;
  if ( !v8 )
    goto LABEL_24;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  klass_high = HIDWORD(v8[6].klass);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               (int32_t)v8[6].klass,
               friendshipExceedCount + klass_high + 1,
               0);
  if ( (Instance & 1) != 0 )
  {
    v23 = (int)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._FriendshipEntity_k__BackingField, v23, v21, v22);
  }
  v24 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_24:
    sub_1C32E7C(Instance);
  v25 = *(_QWORD *)&v24->fields.friendshipRank.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v25;
  *(_QWORD *)&v31.fields.fakeValue = v26;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v31, 0) == HIDWORD(v8[6].klass) + friendshipExceedCount;
}


// local variable allocation has failed, the output may be wrong!
void FriendshipExceedControl__SetExecuteButtonState(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineTextImage; // x0
  UnityEngine_Behaviour_o *v4; // x20
  bool v5; // w1
  bool v6; // w1
  float v7; // s3 OVERLAPPED
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3 OVERLAPPED
  float v12; // s0
  float v13; // s1
  float v14; // s2

  if ( (byte_4C3B8FD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    byte_4C3B8FD = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
    goto LABEL_38;
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  combineTextImage,
                                                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  v4 = (UnityEngine_Behaviour_o *)combineTextImage;
  v5 = this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough;
  if ( !this->fields.executeButton )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.executeButton, v5, 0);
  v6 = this->fields.isBaseSelected
    && this->fields.isFriendshipRankMax
    && this->fields.isQpEnough
    && this->fields.isItemEnough;
  if ( !v4 )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled(v4, v6, 0);
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
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v7 - 3), 0);
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
    sub_1C32E7C(combineTextImage);
  v13 = v12;
  v14 = v12;
  UIWidget__set_color((UIWidget_o *)combineTextImage, *(UnityEngine_Color_o *)(&v11 - 3), 0);
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
    sub_1C32E7C(splitImage);
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
  float b; // s2
  float a; // s3
  float r; // s0 OVERLAPPED
  float g; // s1
  _BOOL4 isQpEnough; // w21
  __int64 *v13; // x8

  if ( (byte_4C3B900 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7446/*"INFO_MSG_FRIENDSHIP_EXCEED"*/);
    sub_1C32C20(&StringLiteral_8797/*"MSG_FRIENDSHIP_EXCEED_BASE"*/);
    sub_1C32C20(&StringLiteral_5786/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/);
    sub_1C32C20(&StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/);
    byte_4C3B900 = 1;
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
            v6 = &StringLiteral_5786/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
            goto LABEL_8;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isQpEnough )
            goto LABEL_15;
        }
        v13 = &StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_8797/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v7 = LocalizationManager__Get((System_String_o *)*v13, 0);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v7, 0);
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
    sub_1C32E7C(v7);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_7446/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
LABEL_8:
    v7 = LocalizationManager__Get((System_String_o *)*v6, 0);
    if ( detailInfoLabel )
    {
      UILabel__set_text(detailInfoLabel, v7, 0);
      v7 = (System_String_o *)this->fields.detailInfoLabel;
      if ( v7 )
      {
        b = this->fields.NORMAL_COLOR.fields.b;
        a = this->fields.NORMAL_COLOR.fields.a;
        r = this->fields.NORMAL_COLOR.fields.r;
        g = this->fields.NORMAL_COLOR.fields.g;
LABEL_28:
        UIWidget__set_color((UIWidget_o *)v7, *(UnityEngine_Color_o *)&r, 0);
        return;
      }
    }
    goto LABEL_29;
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
  __int128 v15; // q0
  LimitCntUpItemComponent_o *v16; // x21
  const MethodInfo *v17; // x4
  struct FriendshipEntity_o *v18; // x9
  struct System_Int32_array *v19; // x8
  struct System_Int32_array *v20; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]

  if ( (byte_4C3B8FB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3B8FB = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_36:
      sub_1C32E7C(limitCntUpItemComponentList);
    v4 = 8;
    while ( 1 )
    {
      v5 = v4 - 8;
      if ( v4 - 8 >= *(int *)(limitCntUpItemComponentList + 24) )
        break;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v5,
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
        limitCntUpItemComponentList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v21, 0);
        v18 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v18 )
          goto LABEL_36;
        v19 = v18->fields.itemIds;
        if ( !v19 )
          goto LABEL_36;
        if ( v5 >= LODWORD(v19->max_length) )
          goto LABEL_38;
        v20 = v18->fields.itemNums;
        if ( !v20 )
          goto LABEL_36;
        if ( v5 >= LODWORD(v20->max_length) )
LABEL_38:
          sub_1C32E84(limitCntUpItemComponentList);
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
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
void FriendshipExceedControl__SetRequiredQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  struct FriendshipEntity_o *FriendshipEntity_k__BackingField; // x9
  UILabel_o *requiredQpLabel; // x20
  System_String_o *v5; // x0
  float v6; // s1 OVERLAPPED
  float v7; // s0
  float v8; // s3
  float v9; // s2

  if ( (byte_4C3B8F9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C3B8F9 = 1;
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
  v5 = System_Int32__ToString_65028652((int)this + 328, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
  if ( !requiredQpLabel )
    goto LABEL_11;
  UILabel__set_text(requiredQpLabel, v5, 0);
  v5 = (System_String_o *)this->fields.requiredQpLabel;
  v6 = 0.0;
  if ( this->fields.userQp >= this->fields.requiredQp )
    v6 = 1.0;
  if ( !v5 )
LABEL_11:
    sub_1C32E7C(v5);
  v7 = 1.0;
  v8 = 1.0;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)v5, *(UnityEngine_Color_o *)(&v6 - 1), 0);
  this->fields.isQpEnough = this->fields.userQp >= this->fields.requiredQp;
}


void FriendshipExceedControl__SetSelectedBaseServantId(
        FriendshipExceedControl_o *this,
        UserServantEntity_o *selectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4C3B8FA & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3B8FA = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v13, 0);
      v9 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0) )
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectData, (int32_t)method, v3);
}


void FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  UILabel_o *userQpLabel; // x20

  if ( (byte_4C3B8F8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C3B8F8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65033828(
                         (int64_t)&this->fields.userQp,
                         (System_String_o *)StringLiteral_9231/*"N0"*/,
                         0),
        !userQpLabel) )
  {
    sub_1C32E7C(SelfUserGame);
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
    sub_1C32E7C(preSelectBaseLabel);
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
  const MethodInfo *v3; // x3

  this->fields._FriendshipEntity_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._FriendshipEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}