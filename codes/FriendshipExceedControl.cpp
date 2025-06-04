void __fastcall FriendshipExceedControl___ctor(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B05D8F & 1) == 0 )
  {
    sub_1BC3008(&CombineMenuControl_TypeInfo, method);
    byte_4B05D8F = 1;
  }
  this->fields.NORMAL_COLOR = (struct UnityEngine_Color_o)xmmword_BDFA60;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIButton_o *executeButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_Callback_o *v9; // x22
  EventDelegate_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_object__o *v18; // x20
  EventDelegate_Callback_o *v19; // x22
  EventDelegate_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  struct UITouchPress_o *v27; // x8
  System_Collections_Generic_List_object__o *onLongPress; // x20
  EventDelegate_Callback_o *v29; // x22
  EventDelegate_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  v2 = this;
  if ( (byte_4B05D85 & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, method);
    sub_1BC3008(&Method_CombineMenuControl_OnLongPushListView__, v3);
    sub_1BC3008(&EventDelegate_TypeInfo, v4);
    sub_1BC3008(&Method_FriendshipExceedControl_OnClickExecute__, v5);
    this = (FriendshipExceedControl_o *)sub_1BC3008(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    byte_4B05D85 = 1;
  }
  if ( !v2->fields.isButtonInitialized )
  {
    executeButton = v2->fields.executeButton;
    if ( !executeButton )
      goto LABEL_24;
    onClick = (System_Collections_Generic_List_object__o *)executeButton->fields.onClick;
    v9 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, Method_FriendshipExceedControl_OnClickExecute__, 0LL);
    v10 = (EventDelegate_o *)sub_1BC3254(EventDelegate_TypeInfo);
    EventDelegate___ctor_48365464(v10, v9, 0LL);
    if ( !onClick )
      goto LABEL_24;
    items = onClick->fields._items;
    v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++onClick->fields._version;
    if ( !items )
      goto LABEL_24;
    size = onClick->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onClick,
        (Il2CppObject *)v10,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      onClick->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v10;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
    }
    baseServantTouchPress = v2->fields.baseServantTouchPress;
    if ( !baseServantTouchPress )
      goto LABEL_24;
    v18 = (System_Collections_Generic_List_object__o *)baseServantTouchPress->fields.onClick;
    v19 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v19, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
    v20 = (EventDelegate_o *)sub_1BC3254(EventDelegate_TypeInfo);
    EventDelegate___ctor_48365464(v20, v19, 0LL);
    if ( !v18 )
      goto LABEL_24;
    v23 = v18->fields._items;
    v24 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v18->fields._version;
    if ( !v23 )
      goto LABEL_24;
    v25 = v18->fields._size;
    if ( (unsigned int)v25 >= v23->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        (Il2CppObject *)v20,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v23->obj.klass + v25;
      v18->fields._size = v25 + 1;
      v26[4] = (Il2CppClass *)v20;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
    }
    v27 = v2->fields.baseServantTouchPress;
    if ( !v27 )
      goto LABEL_24;
    onLongPress = (System_Collections_Generic_List_object__o *)v27->fields.onLongPress;
    v29 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v29,
      (Il2CppObject *)v2,
      (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
      0LL);
    v30 = (EventDelegate_o *)sub_1BC3254(EventDelegate_TypeInfo);
    EventDelegate___ctor_48365464(v30, v29, 0LL);
    if ( !onLongPress
      || (v33 = onLongPress->fields._items,
          v34 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onLongPress->fields._version,
          !v33) )
    {
LABEL_24:
      sub_1BC3264(this, method);
    }
    v35 = onLongPress->fields._size;
    if ( (unsigned int)v35 >= v33->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        onLongPress,
        (Il2CppObject *)v30,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &v33->obj.klass + v35;
      onLongPress->fields._size = v35 + 1;
      v36[4] = (Il2CppClass *)v30;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
    }
    v2->fields.isButtonInitialized = 1;
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UILabel_o *preSelectBaseLabel; // x20
  System_String_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_4B05D83 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_8721/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, v4);
    byte_4B05D83 = 1;
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._FriendshipEntity_k__BackingField, 0, v6, v7);
    FriendshipExceedControl__InitButtons(this, v8);
    FriendshipExceedControl__InitInfo(this, v9);
    preSelectBaseLabel = this->fields.preSelectBaseLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8721/*"MSG_PRESELECT_BASE_FRIENDSHIP_EXCEED"*/, 0LL);
    if ( !preSelectBaseLabel
      || (UILabel__set_text(preSelectBaseLabel, gameObject, 0LL),
          (gameObject = (System_String_o *)this->fields.preSelectBaseLabel) == 0LL)
      || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (System_String_o *)this->fields.baseSelectInfoLabel) == 0LL) )
    {
      sub_1BC3264(gameObject, v12);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendshipExceedControl__InitInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *splitImage; // x0
  const MethodInfo *v15; // x7
  int32_t v16; // w20
  bool v17; // w3

  if ( (byte_4B05D84 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_4B05D84 = 1;
  }
  this->fields.isBaseSelected = 0;
  this->fields.baseUserServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCollectionEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUserServantCollectionEntity, 0, v7, v8);
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
  v16 = 0;
  while ( v16 < SLODWORD(splitImage[1].klass) )
  {
    splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)splitImage,
                                               v16,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( splitImage )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)splitImage, v13);
      splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
      if ( splitImage )
      {
        splitImage = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)splitImage,
                                                   v16,
                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                         v16,
                                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
              if ( splitImage )
              {
                splitImage = UnityEngine_GameObject__get_gameObject(splitImage, 0LL);
                if ( splitImage )
                {
                  UnityEngine_GameObject__SetActive(splitImage, 0, 0LL);
                  splitImage = (UnityEngine_GameObject_o *)this->fields.limitCntUpItemComponentList;
                  ++v16;
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
    sub_1BC3264(splitImage, v13);
  FriendshipExceedInfoComponent__SetInfo((FriendshipExceedInfoComponent_o *)splitImage, 0LL, 0LL, v17, 0, 0, 0, v15);
}


void __fastcall FriendshipExceedControl__OnClickExecute(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B05D8D & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_3730/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, v3);
    byte_4B05D8D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"CONFIRM_TITLE_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BC3264(v4, v5);
  SetRarityDialogControl__SetFriendshipExceedInfo(exeCombineDlg, v4, this->fields.requiredQp, this->fields.userQp, 0LL);
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
  const MethodInfo *v8; // x3

  if ( (byte_4B05D8C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05D8C = 1;
  }
  characterGraphic = (UnityEngine_Object_o *)this->fields.characterGraphic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(characterGraphic, 0LL, 0LL) )
  {
    p_characterGraphic = (UnityEngine_Component_o **)&this->fields.characterGraphic;
    if ( !*p_characterGraphic )
      sub_1BC3264(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_characterGraphic, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    *p_characterGraphic = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_characterGraphic, 0, v7, v8);
  }
}


void __fastcall FriendshipExceedControl__SetBaseServantCardImage(
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)entity, (int32_t)method, v3);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(FriendshipExceedControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.characterGraphic,
                                         *p_baseUserServantEntity,
                                         this->klass[1]._1.image);
  this->fields.characterGraphic = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.characterGraphic, (int32_t)v6, v7, v8);
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
  __int64 v10; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  Il2CppObject *v15; // x20
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  UserServantCollectionMaster_o *v18; // x21
  struct UserServantEntity_o *v19; // x8
  int64_t v20; // x22
  struct UserServantCollectionEntity_o *v21; // x0
  struct UserServantCollectionEntity_o **p_baseUserServantCollectionEntity; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UserServantCollectionEntity_o *baseUserServantCollectionEntity; // x8
  int32_t friendshipExceedCount; // w25
  int klass_high; // w22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  struct UserServantCollectionEntity_o *v31; // x8
  __int64 v32; // x21
  __int64 v33; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B05D8A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B05D8A = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v14;
  *(_QWORD *)&v37.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v37, 0LL);
  if ( !v12 )
    goto LABEL_24;
  v15 = DataMasterBase_object__object__int___GetEntity(
          v12,
          Instance,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v16 = this->fields.baseUserServantEntity;
  if ( !v16 )
    goto LABEL_24;
  v17 = *(_OWORD *)&v16->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v16->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v35;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v34, 0LL);
  v19 = this->fields.baseUserServantEntity;
  if ( !v19 )
    goto LABEL_24;
  v20 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19->fields.svtId, 0LL);
  if ( !v18 )
    goto LABEL_24;
  v21 = UserServantCollectionMaster__GetEntity(v18, v20, Instance, 0LL);
  p_baseUserServantCollectionEntity = &this->fields.baseUserServantCollectionEntity;
  this->fields.baseUserServantCollectionEntity = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUserServantCollectionEntity, (int32_t)v21, v23, v24);
  baseUserServantCollectionEntity = this->fields.baseUserServantCollectionEntity;
  if ( !baseUserServantCollectionEntity )
    goto LABEL_24;
  if ( !v15 )
    goto LABEL_24;
  friendshipExceedCount = baseUserServantCollectionEntity->fields.friendshipExceedCount;
  klass_high = HIDWORD(v15[6].klass);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = FriendshipMaster__TryGetEntity(
               (FriendshipMaster_o *)Instance,
               &entity,
               (int32_t)v15[6].klass,
               friendshipExceedCount + klass_high + 1,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    v30 = (int)entity;
    this->fields._FriendshipEntity_k__BackingField = entity;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._FriendshipEntity_k__BackingField, v30, v28, v29);
  }
  v31 = *p_baseUserServantCollectionEntity;
  if ( !*p_baseUserServantCollectionEntity )
LABEL_24:
    sub_1BC3264(Instance, v10);
  v32 = *(_QWORD *)&v31->fields.friendshipRank.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v32;
  *(_QWORD *)&v38.fields.fakeValue = v33;
  this->fields.isFriendshipRankMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v38, 0LL) == HIDWORD(v15[6].klass) + friendshipExceedCount;
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

  if ( (byte_4B05D8B & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    byte_4B05D8B = 1;
  }
  combineTextImage = (UnityEngine_Component_o *)this->fields.combineTextImage;
  if ( !combineTextImage )
    goto LABEL_38;
  combineTextImage = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  combineTextImage,
                                                  (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1BC3264(combineTextImage, method);
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
  const MethodInfo *v5; // x7
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
    sub_1BC3264(splitImage, method);
  }
  FriendshipExceedInfoComponent__SetInfo(
    (FriendshipExceedInfoComponent_o *)splitImage,
    this->fields.baseUserServantEntity,
    this->fields.baseUserServantCollectionEntity,
    isItemEnough,
    0,
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
  __int64 v13; // x1
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  _BOOL4 isQpEnough; // w21
  __int64 *v19; // x8

  if ( (byte_4B05D8E & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&StringLiteral_7371/*"INFO_MSG_FRIENDSHIP_EXCEED"*/, v5);
    sub_1BC3008(&StringLiteral_8716/*"MSG_FRIENDSHIP_EXCEED_BASE"*/, v6);
    sub_1BC3008(&StringLiteral_5737/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/, v7);
    sub_1BC3008(&StringLiteral_12075/*"SHORT_ITEM_INFO_MSG"*/, v8);
    sub_1BC3008(&StringLiteral_12076/*"SHORT_QP_INFO_MSG"*/, v9);
    byte_4B05D8E = 1;
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
            v11 = &StringLiteral_5737/*"EXE_FRIENDSHIP_EXCEED_COMBINE_TXT"*/;
            goto LABEL_8;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isQpEnough )
            goto LABEL_15;
        }
        v19 = &StringLiteral_12076/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        detailInfoLabel = this->fields.detailInfoLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_12075/*"SHORT_ITEM_INFO_MSG"*/;
      }
    }
    else
    {
      detailInfoLabel = this->fields.detailInfoLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_8716/*"MSG_FRIENDSHIP_EXCEED_BASE"*/;
    }
    v12 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
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
    sub_1BC3264(v12, v13);
  }
  if ( !state )
  {
    detailInfoLabel = this->fields.detailInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_7371/*"INFO_MSG_FRIENDSHIP_EXCEED"*/;
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
  __int64 v13; // x2
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

  if ( (byte_4B05D89 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B05D89 = 1;
  }
  if ( this->fields._FriendshipEntity_k__BackingField )
  {
    limitCntUpItemComponentList = (int64_t)this->fields.limitCntUpItemComponentList;
    if ( !limitCntUpItemComponentList )
LABEL_36:
      sub_1BC3264(limitCntUpItemComponentList, method);
    v7 = 8LL;
    while ( 1 )
    {
      v8 = v7 - 8;
      if ( v7 - 8 >= *(int *)(limitCntUpItemComponentList + 24) )
        break;
      limitCntUpItemComponentList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)limitCntUpItemComponentList,
                                               v8,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
          goto LABEL_38;
        itemNums = v14->fields.itemNums;
        if ( !itemNums )
          goto LABEL_36;
        if ( v8 >= itemNums->max_length )
          goto LABEL_38;
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
                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
        limitCntUpItemComponentList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v25, 0LL);
        v22 = this->fields._FriendshipEntity_k__BackingField;
        if ( !v22 )
          goto LABEL_36;
        v23 = v22->fields.itemIds;
        if ( !v23 )
          goto LABEL_36;
        if ( v8 >= v23->max_length )
          goto LABEL_38;
        v24 = v22->fields.itemNums;
        if ( !v24 )
          goto LABEL_36;
        if ( v8 >= v24->max_length )
LABEL_38:
          sub_1BC326C(limitCntUpItemComponentList, method, v13);
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
                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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

  if ( (byte_4B05D87 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9150/*"N0"*/, method);
    byte_4B05D87 = 1;
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
  v5 = System_Int32__ToString_63857360((int)this + 328, (System_String_o *)StringLiteral_9150/*"N0"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_11;
  UILabel__set_text(requiredQpLabel, v5, 0LL);
  v5 = (System_String_o *)this->fields.requiredQpLabel;
  v7 = 0.0;
  if ( this->fields.userQp >= this->fields.requiredQp )
    v7 = 1.0;
  if ( !v5 )
LABEL_11:
    sub_1BC3264(v5, v6);
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

  if ( (byte_4B05D88 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectData);
    byte_4B05D88 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v13, 0LL);
      v9 = *(_OWORD *)&selectData->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v12, 0LL) )
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectData, (int32_t)method, v3);
}


void __fastcall FriendshipExceedControl__SetUserQpInfo(FriendshipExceedControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *userQpLabel; // x20

  if ( (byte_4B05D86 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9150/*"N0"*/, method);
    byte_4B05D86 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userQpLabel = this->fields.userQpLabel,
        this->fields.userQp = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_63862536(
                         (int64_t)&this->fields.userQp,
                         (System_String_o *)StringLiteral_9150/*"N0"*/,
                         0LL),
        !userQpLabel) )
  {
    sub_1BC3264(SelfUserGame, v4);
  }
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
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
    sub_1BC3264(preSelectBaseLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLabel, !this->fields.isBaseSelected, 0LL);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  if ( this->fields.isBaseSelected )
    FriendshipExceedControl__SetFriendshipExceedInfo(this, v4);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._FriendshipEntity_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._FriendshipEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}