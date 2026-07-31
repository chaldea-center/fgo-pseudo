void RecommendSupportListViewItemDraw___ctor(RecommendSupportListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportListViewItemDraw__Awake(RecommendSupportListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void RecommendSupportListViewItemDraw__ClearItem(RecommendSupportListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3

  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v2);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, 0, 0, 0, v4);
  RecommendSupportListViewItemDraw__SetupMessage(this, 0, v5);
  RecommendSupportListViewItemDraw__SetupQuest(this, 0, 0, v6);
}


void RecommendSupportListViewItemDraw__Init(RecommendSupportListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IEnumerable_T__o *downloadAtlasSprites; // x20
  RecommendSupportListViewItemDraw___c_c *v5; // x0
  struct RecommendSupportListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__27_0; // x21
  Il2CppObject *v8; // x22
  struct RecommendSupportListViewItemDraw___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v25; // x2

  if ( (byte_59343DD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportListViewItemDraw___c__Init_b__27_0__);
    sub_21FFC50(&RecommendSupportListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_20503/*"formation_select_small"*/);
    sub_21FFC50(&StringLiteral_11492/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/);
    sub_21FFC50(&StringLiteral_20458/*"formation_blank_Landscape_select"*/);
    sub_21FFC50(&StringLiteral_20457/*"formation_blank_Landscape"*/);
    sub_21FFC50(&StringLiteral_11500/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/);
    byte_59343DD = 1;
  }
  downloadAtlasSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.downloadAtlasSprites;
  this->fields.isGrandEnable = 0;
  *(_QWORD *)&this->fields.savedQuestId = -1;
  if ( downloadAtlasSprites )
  {
    v5 = RecommendSupportListViewItemDraw___c_TypeInfo;
    if ( !*(&RecommendSupportListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportListViewItemDraw___c_TypeInfo, method, v2);
      v5 = RecommendSupportListViewItemDraw___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__27_0 = (System_Action_object__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, method, v2);
        static_fields = RecommendSupportListViewItemDraw___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
      System_Action_object____ctor(_9__27_0, v8, Method_RecommendSupportListViewItemDraw___c__Init_b__27_0__, 0);
      v9 = RecommendSupportListViewItemDraw___c_TypeInfo->static_fields;
      v9->__9__27_0 = (struct System_Action_UISprite__o *)_9__27_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__27_0, (int32_t)_9__27_0, v10, v11, v12, v13, v14, v15);
    }
    BasicHelper__ForEach_object_(
      downloadAtlasSprites,
      (System_Action_T__o *)_9__27_0,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11492/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11500/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0),
        !questSelectButtonLabel) )
  {
LABEL_19:
    sub_21FFECC(gameObject, v17);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22, v23);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_20503/*"formation_select_small"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_20457/*"formation_blank_Landscape"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_20458/*"formation_blank_Landscape_select"*/,
    0);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v25);
}


void RecommendSupportListViewItemDraw__SetConfirmItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool IsSupportGrandEnableQuest; // w21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_59343DF & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59343DF = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !deckData || !Instance )
    sub_21FFECC(Instance, v6);
  IsSupportGrandEnableQuest = PartyOrganizationUtility__IsSupportGrandEnableQuest(
                                (PartyOrganizationUtility_o *)Instance,
                                deckData->fields.questId,
                                deckData->fields.questPhase,
                                0,
                                0);
  RecommendSupportListViewItemDraw__SetEmptyServantSprite(this, IsSupportGrandEnableQuest, v8);
  RecommendSupportListViewItemDraw__SetupFaceIcon(
    this,
    deckData->fields.userSvtId,
    deckData->fields.userSvtEquipId,
    IsSupportGrandEnableQuest,
    v9);
  RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v10);
  RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v11);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewItemDraw__SetEmptyServantSprite(
        RecommendSupportListViewItemDraw_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UISprite_o *unSelectedServantSprite; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  System_String_o *v8; // x1

  if ( (byte_59343E5 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20503/*"formation_select_small"*/);
    sub_21FFC50(&StringLiteral_20500/*"formation_grand_select_small"*/);
    byte_59343E5 = 1;
  }
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  v6 = StringLiteral_20500/*"formation_grand_select_small"*/;
  v7 = StringLiteral_20503/*"formation_select_small"*/;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, isGrand, method);
  if ( isGrand )
    v8 = (System_String_o *)v6;
  else
    v8 = (System_String_o *)v7;
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, v8, 0);
}


void RecommendSupportListViewItemDraw__SetItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  RecommendSupportListViewItemDraw_o *v4; // x20
  int32_t questId; // w8
  int32_t questPhase; // w9
  bool IsSupportGrandEnableQuest; // w0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_59343DE & 1) == 0 )
  {
    this = (RecommendSupportListViewItemDraw_o *)sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59343DE = 1;
  }
  if ( !deckData )
    goto LABEL_13;
  questId = deckData->fields.questId;
  questPhase = deckData->fields.questPhase;
  if ( questId != v4->fields.savedQuestId || questPhase != v4->fields.savedQuestPhase )
  {
    v4->fields.savedQuestId = questId;
    v4->fields.savedQuestPhase = questPhase;
    this = (RecommendSupportListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( this )
    {
      IsSupportGrandEnableQuest = PartyOrganizationUtility__IsSupportGrandEnableQuest(
                                    (PartyOrganizationUtility_o *)this,
                                    deckData->fields.questId,
                                    deckData->fields.questPhase,
                                    0,
                                    0);
      v4->fields.isGrandEnable = IsSupportGrandEnableQuest;
      RecommendSupportListViewItemDraw__SetEmptyServantSprite(v4, IsSupportGrandEnableQuest, v8);
      goto LABEL_8;
    }
LABEL_13:
    sub_21FFECC(this, deckData);
  }
LABEL_8:
  if ( deckData->fields.userSvtId <= 0 && deckData->fields.userSvtEquipId <= 0 && deckData->fields.questId < 1 )
  {
    RecommendSupportListViewItemDraw__ClearItem(v4, (const MethodInfo *)deckData);
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupBoard(v4, 0, method);
    RecommendSupportListViewItemDraw__SetupFaceIcon(
      v4,
      deckData->fields.userSvtId,
      deckData->fields.userSvtEquipId,
      v4->fields.isGrandEnable,
      v9);
    RecommendSupportListViewItemDraw__SetupMessage(v4, deckData->fields.adviceMessageIds, v10);
    RecommendSupportListViewItemDraw__SetupQuest(v4, deckData->fields.questId, deckData->fields.questPhase, v11);
  }
}


void RecommendSupportListViewItemDraw__SetServantName(
        RecommendSupportListViewItemDraw_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  UILabel_o *servantNameLabel; // x19
  System_String_o *SvtName; // x0

  if ( (byte_59343E1 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11523/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/);
    byte_59343E1 = 1;
  }
  servantNameLabel = this->fields.servantNameLabel;
  if ( entity )
  {
    SvtName = UserServantEntity__GetSvtName(entity, 0, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, entity, method);
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11523/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0);
  }
  if ( !servantNameLabel )
    sub_21FFECC(SvtName, SvtName);
  UILabel__set_text(servantNameLabel, SvtName, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewItemDraw__SetupBoard(
        RecommendSupportListViewItemDraw_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyObject; // x0

  emptyObject = this->fields.emptyObject;
  if ( !emptyObject
    || (UnityEngine_GameObject__SetActive(emptyObject, isEmpty, 0), (emptyObject = this->fields.baseObject) == 0) )
  {
    sub_21FFECC(emptyObject, isEmpty);
  }
  UnityEngine_GameObject__SetActive(emptyObject, !isEmpty, 0);
}


void RecommendSupportListViewItemDraw__SetupFaceIcon(
        RecommendSupportListViewItemDraw_o *this,
        int64_t userSvtId,
        int64_t userSvtEquipId,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 Master_object; // x0
  __int64 v12; // x1
  IconLabelInfo_o *v13; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v16; // x23
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x1
  Il2CppObject *v25; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59343E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    byte_59343E0 = 1;
  }
  v25 = 0;
  entity = 0;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_28;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v13 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v13, 0);
    Master_object = (__int64)entity;
    if ( entity )
    {
      klass = (int32_t)entity[25].klass;
      Master_object = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0);
      if ( v13 )
      {
        IconLabelInfo__Set_47932852(v13, 2, klass, Master_object, 0, 0, 0, 0, 0, 0);
        servantFaceIcon = this->fields.servantFaceIcon;
        v16 = entity;
        Master_object = sub_21FFD10(long___TypeInfo, 1);
        if ( Master_object )
        {
          if ( !*(_DWORD *)(Master_object + 24) )
            sub_21FFED4(Master_object);
          *(_QWORD *)(Master_object + 32) = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_48018248(
              servantFaceIcon,
              (UserServantEntity_o *)v16,
              (System_Int64_array *)Master_object,
              v13,
              0,
              0,
              0);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v17);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v18);
            return;
          }
        }
      }
    }
    goto LABEL_28;
  }
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( isGrand )
  {
    if ( !Master_object )
      goto LABEL_28;
    ServantFaceIconComponent__NoMountGrandSupport((ServantFaceIconComponent_o *)Master_object, 0);
  }
  else
  {
    if ( !Master_object )
      goto LABEL_28;
    ServantFaceIconComponent__NoMountSupport((ServantFaceIconComponent_o *)Master_object, 0);
  }
  RecommendSupportListViewItemDraw__SetServantName(this, 0, v19);
  RecommendSupportListViewItemDraw__SetupPush(this, 0, v20);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_28:
    sub_21FFECC(Master_object, v12);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v25,
         userSvtEquipId,
         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_28;
    v24 = v25;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v23);
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_28;
    v24 = 0;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v24, 0);
}


void RecommendSupportListViewItemDraw__SetupMessage(
        RecommendSupportListViewItemDraw_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  bool IsNullOrEmpty; // w8
  UILabel_o *selectMessageLabel; // x20
  int v9; // w9
  RecommendAdviceMessageMaster_o *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x21
  System_String_array *ConvertMessageToId; // x0

  if ( (byte_59343E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11493/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_21FFC50(&StringLiteral_11484/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_59343E3 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0);
  selectMessageLabel = this->fields.selectMessageLabel;
  v9 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrEmpty )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    Master_object = (RecommendAdviceMessageMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_11484/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                        0);
    if ( !selectMessageLabel )
      goto LABEL_15;
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
    Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    if ( !Master_object
      || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0),
          Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v14, ConvertMessageToId, 0),
          !selectMessageLabel) )
    {
LABEL_15:
      sub_21FFECC(Master_object, v11);
    }
  }
  UILabel__set_text(selectMessageLabel, (System_String_o *)Master_object, 0);
}


void RecommendSupportListViewItemDraw__SetupPush(
        RecommendSupportListViewItemDraw_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  UserServantEntity_o *v3; // x20
  UnityEngine_Component_o *pushSprite; // x0
  UnityEngine_GameObject_o *v6; // x19
  __int64 v7; // x2
  __int128 v8; // q0
  __int128 v9; // q1
  UnityEngine_Component_o *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v3 = entity;
  if ( (byte_59343E2 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59343E2 = 1;
  }
  pushSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_11;
  pushSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pushSprite, 0);
  v6 = (UnityEngine_GameObject_o *)pushSprite;
  if ( !v3 )
  {
    entity = 0;
    if ( pushSprite )
      goto LABEL_9;
LABEL_11:
    sub_21FFECC(pushSprite, entity);
  }
  pushSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !pushSprite )
    goto LABEL_11;
  v8 = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  v9 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  monitor = (UnityEngine_Component_o *)pushSprite[5].monitor;
  *(_OWORD *)&v12.fields.currentCryptoKey = v8;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, entity, v7);
  v11 = v12;
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v11, 0);
  entity = (UserServantEntity_o *)(monitor == pushSprite);
  if ( !v6 )
    goto LABEL_11;
LABEL_9:
  UnityEngine_GameObject__SetActive(v6, (bool)entity, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewItemDraw__SetupQuest(
        RecommendSupportListViewItemDraw_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v6; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x1
  Il2CppClass **v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *selectQuestLabel; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *questExpiredObject; // x20
  bool v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x1
  Il2CppClass **v41; // x0
  RecommendSupportListViewItemDraw_o *v42; // x0
  const MethodInfo *v43; // x4
  int32_t v44; // w3
  Il2CppObject *Item; // x22
  System_String_o *v46; // x0
  Il2CppObject *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x1
  Il2CppClass **v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  bool v61; // w8
  UnityEngine_GameObject_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x1
  Il2CppClass **v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  UnityEngine_GameObject_o *v77; // x0
  UILabel_o *v78; // x20
  System_String_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Object_o *v82; // x20
  struct UnityEngine_GameObject_o *v83; // x19
  RecommendSupportQuestEntity_o *v84; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *overwriteName; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v86; // [xsp+18h] [xbp-68h] BYREF
  Il2CppObject *v87; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF
  int32_t phaseNum; // [xsp+3Ch] [xbp-44h] BYREF

  phaseNum = questPhase;
  if ( (byte_59343E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SpotMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_11516/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/);
    sub_21FFC50(&StringLiteral_11498/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59343E4 = 1;
  }
  v87 = 0;
  entity = 0;
  v86 = 0;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v84 = 0;
  overwriteName = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_76;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_76;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v87,
          (int32_t)entity[3].klass,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v10);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v87 || !Master_object )
    goto LABEL_76;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v86,
          HIDWORD(v87[1].klass),
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
LABEL_22:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_76;
    UILabel__set_fontSize((UILabel_o *)Master_object, this->fields.questLabelNormalFontSize, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_76;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.questLabelNormalPosY, 0);
    selectQuestLabel = this->fields.selectQuestLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11498/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/,
                                                                    0);
    if ( !selectQuestLabel )
      goto LABEL_76;
    UILabel__set_text(selectQuestLabel, (System_String_o *)Master_object, 0);
    questExpiredObject = (UnityEngine_Object_o *)this->fields.questExpiredObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( !UnityEngine_Object__op_Inequality(questExpiredObject, 0, 0) )
      return;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.questExpiredObject;
    if ( Master_object )
    {
      v30 = 0;
LABEL_32:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v30, 0);
      return;
    }
LABEL_76:
    sub_21FFECC(Master_object, v8);
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v86;
  if ( !v86 )
    goto LABEL_76;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredName((WarEntity_o *)v86, 0);
  if ( !v11 )
    goto LABEL_76;
  items = v11->fields._items;
  v19 = Method_System_Collections_Generic_List_string__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_76;
  size = v11->fields._size;
  v21 = Master_object;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
  }
  if ( !v87 )
    goto LABEL_76;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_76;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getChapterSubStr(
                                                                  (QuestEntity_o *)entity,
                                                                  HIDWORD(v87[1].klass),
                                                                  0);
  v37 = v11->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v11->fields._version;
  if ( !v37 )
    goto LABEL_76;
  v39 = v11->fields._size;
  v40 = Master_object;
  if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v37->obj.klass + v39;
    v11->fields._size = v39 + 1;
    v41[4] = (Il2CppClass *)v40;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
  }
  v44 = phaseNum;
  if ( (phaseNum & 0x80000000) == 0 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             1,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
    v46 = System_Int32__ToString((int32_t)&phaseNum, 0);
    v47 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)Item, v46, 0);
    System_Collections_Generic_List_object___set_Item(
      v11,
      1,
      v47,
      (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_string__set_Item__);
    v44 = phaseNum;
  }
  if ( RecommendSupportListViewItemDraw__TryGetChapterSubAndPhaseOverwriteName(v42, &overwriteName, questId, v44, v43) )
  {
    if ( System_String__IsNullOrEmpty(overwriteName, 0) )
      System_Collections_Generic_List_object___RemoveAt(
        v11,
        1,
        (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    else
      System_Collections_Generic_List_object___set_Item(
        v11,
        1,
        (Il2CppObject *)overwriteName,
        (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_string__set_Item__);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_76;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getQuestName((QuestEntity_o *)entity, 0);
  v54 = v11->fields._items;
  v55 = Method_System_Collections_Generic_List_string__Add__;
  ++v11->fields._version;
  if ( !v54 )
    goto LABEL_76;
  v56 = v11->fields._size;
  v57 = Master_object;
  if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v54->obj.klass + v56;
    v11->fields._size = v56 + 1;
    v58[4] = (Il2CppClass *)v57;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v57, v48, v49, v50, v51, v52, v53);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v60);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_76;
  v61 = RecommendSupportQuestMaster__TryGetEntity(
          (RecommendSupportQuestMaster_o *)Master_object,
          &v84,
          questId,
          phaseNum,
          0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
  if ( v61 )
  {
    if ( !Master_object )
      goto LABEL_76;
    UILabel__set_fontSize((UILabel_o *)Master_object, this->fields.questLabelTwoLineFontSize, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_76;
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetLocalPositionY(v62, (float)this->fields.questLabelTwoLinePosY, 0);
    if ( !v84 )
      goto LABEL_76;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v84->fields.questMessage;
    if ( !Master_object )
      goto LABEL_76;
    v63 = System_String__Replace_75490096(
            (System_String_o *)Master_object,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_75438412(
                                                                    (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                    v63,
                                                                    0);
    v70 = v11->fields._items;
    v71 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v70 )
      goto LABEL_76;
    v72 = v11->fields._size;
    v73 = Master_object;
    if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v70->obj.klass + v72;
      v11->fields._size = v72 + 1;
      v74[4] = (Il2CppClass *)v73;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v73, v64, v65, v66, v67, v68, v69);
    }
  }
  else
  {
    if ( !Master_object )
      goto LABEL_76;
    UILabel__set_fontSize((UILabel_o *)Master_object, this->fields.questLabelNormalFontSize, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_76;
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetLocalPositionY(v77, (float)this->fields.questLabelNormalPosY, 0);
  }
  v78 = this->fields.selectQuestLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75, v76);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11516/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Join_75485788(
                                                                  v79,
                                                                  (System_Collections_Generic_IEnumerable_string__o *)v11,
                                                                  0);
  if ( !v78 )
    goto LABEL_76;
  UILabel__set_text(v78, (System_String_o *)Master_object, 0);
  v82 = (UnityEngine_Object_o *)this->fields.questExpiredObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80, v81);
  if ( UnityEngine_Object__op_Inequality(v82, 0, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      v83 = this->fields.questExpiredObject;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__IsOpenByTime(
                                                                      (QuestEntity_o *)entity,
                                                                      0,
                                                                      0);
      if ( v83 )
      {
        v30 = ((unsigned __int8)Master_object & 1) == 0;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v83;
        goto LABEL_32;
      }
    }
    goto LABEL_76;
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewItemDraw__SetupServantSelectState(
        RecommendSupportListViewItemDraw_o *this,
        bool isMount,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  bool v6; // w1

  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_14;
  ServantFaceIconComponent__Clear(servantFaceIcon, 0);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !isMount )
  {
    if ( servantFaceIcon )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.unSelectedServantSprite;
        if ( servantFaceIcon )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0);
          if ( servantFaceIcon )
          {
            v6 = 1;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_14:
    sub_21FFECC(servantFaceIcon, isMount);
  }
  if ( !servantFaceIcon )
    goto LABEL_14;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.unSelectedServantSprite;
  if ( !servantFaceIcon )
    goto LABEL_14;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_14;
  v6 = 0;
LABEL_13:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
bool RecommendSupportListViewItemDraw__TryGetChapterSubAndPhaseOverwriteName(
        RecommendSupportListViewItemDraw_o *this,
        System_String_o **overwriteName,
        int32_t questId,
        int32_t phaseNum,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o **v11; // x8
  System_String_o *v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BalanceConfig_c *v20; // x0
  struct RecommendSupportListViewItemDraw_ChapterSubAndPhaseOverwriteNameData_array *RecommendSupportListChapterSubAndPhaseOverwriteNameData; // x9
  int max_length; // w8
  RecommendSupportListViewItemDraw_ChapterSubAndPhaseOverwriteNameData_o **i; // x9
  RecommendSupportListViewItemDraw_ChapterSubAndPhaseOverwriteNameData_o *v24; // x10
  System_String_o *name; // x1

  if ( (byte_59343E7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59343E7 = 1;
  }
  v11 = *(System_String_o ***)(qword_594C0B8 + 184);
  v12 = *v11;
  *overwriteName = *v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)overwriteName,
    (int32_t)v12,
    *(System_String_o **)&questId,
    *(System_String_o **)&phaseNum,
    (int32_t)method,
    v5,
    v6,
    v7);
  v20 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13, v14);
    v20 = BalanceConfig_TypeInfo;
  }
  RecommendSupportListChapterSubAndPhaseOverwriteNameData = v20->static_fields->RecommendSupportListChapterSubAndPhaseOverwriteNameData;
  if ( !RecommendSupportListChapterSubAndPhaseOverwriteNameData )
    return 0;
  max_length = RecommendSupportListChapterSubAndPhaseOverwriteNameData->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = RecommendSupportListChapterSubAndPhaseOverwriteNameData->m_Items; ; ++i )
  {
    v24 = *i;
    if ( !*i )
      sub_21FFECC(v20, v13);
    if ( v24->fields.questId == questId && v24->fields.phaseNum == phaseNum )
      break;
    if ( !--max_length )
      return 0;
  }
  name = v24->fields.name;
  *overwriteName = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteName, (int32_t)name, v14, v15, v16, v17, v18, v19);
  return 1;
}


void RecommendSupportListViewItemDraw__UpdateQuestExpired(
        RecommendSupportListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *questExpiredObject; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x19
  char v10; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59343E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59343E6 = 1;
  }
  questExpiredObject = (UnityEngine_Object_o *)this->fields.questExpiredObject;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(questExpiredObject, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( Master_object )
    {
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        this->fields.savedQuestId,
                                        (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
      v9 = this->fields.questExpiredObject;
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entity;
        if ( entity )
        {
          Master_object = (Il2CppObject *)QuestEntity__IsOpenByTime((QuestEntity_o *)entity, 0, 0);
          if ( v9 )
          {
            v10 = (unsigned __int8)Master_object ^ 1;
LABEL_15:
            UnityEngine_GameObject__SetActive(v9, v10 & 1, 0);
            return;
          }
        }
      }
      else if ( v9 )
      {
        v10 = 0;
        goto LABEL_15;
      }
    }
    sub_21FFECC(Master_object, v8);
  }
}


void RecommendSupportListViewItemDraw_ChapterSubAndPhaseOverwriteNameData___ctor(
        RecommendSupportListViewItemDraw_ChapterSubAndPhaseOverwriteNameData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59343E8 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportListViewItemDraw___c_TypeInfo);
    byte_59343E8 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RecommendSupportListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportListViewItemDraw___c___ctor(
        RecommendSupportListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportListViewItemDraw___c___Init_b__27_0(
        RecommendSupportListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *mSpriteName; // x20

  if ( (byte_59343E9 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59343E9 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( v4 )
  {
    if ( !sprite )
      sub_21FFECC(v4, v5);
    mSpriteName = sprite->fields.mSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
    AtlasManager__SetPartyOrganizationImage(sprite, mSpriteName, 0);
  }
}