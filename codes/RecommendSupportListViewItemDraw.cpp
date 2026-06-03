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


void RecommendSupportListViewItemDraw__Init(
        RecommendSupportListViewItemDraw_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4E733EC & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19979/*"formation_select_small"*/);
    sub_1D0F0B4(&StringLiteral_11194/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_19934/*"formation_blank_Landscape_select"*/);
    sub_1D0F0B4(&StringLiteral_19933/*"formation_blank_Landscape"*/);
    sub_1D0F0B4(&StringLiteral_11200/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/);
    byte_4E733EC = 1;
  }
  *(_QWORD *)&this->fields.savedQuestId = -1;
  this->fields.isGrandEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11194/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11200/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1D0F30C(gameObject, v5);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19979/*"formation_select_small"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19933/*"formation_blank_Landscape"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19934/*"formation_blank_Landscape_select"*/,
    0);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v9);
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

  if ( (byte_4E733EE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E733EE = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !deckData || !Instance )
    sub_1D0F30C(Instance, v6);
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


void RecommendSupportListViewItemDraw__SetEmptyServantSprite(
        RecommendSupportListViewItemDraw_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UISprite_o *unSelectedServantSprite; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  System_String_o *v8; // x1

  if ( (byte_4E733F4 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19979/*"formation_select_small"*/);
    sub_1D0F0B4(&StringLiteral_19976/*"formation_grand_select_small"*/);
    byte_4E733F4 = 1;
  }
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  v6 = StringLiteral_19976/*"formation_grand_select_small"*/;
  v7 = StringLiteral_19979/*"formation_select_small"*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  int32_t questPhase; // w8
  int32_t questId; // w9
  bool IsSupportGrandEnableQuest; // w0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_4E733ED & 1) == 0 )
  {
    this = (RecommendSupportListViewItemDraw_o *)sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E733ED = 1;
  }
  if ( !deckData )
    goto LABEL_13;
  questId = deckData->fields.questId;
  questPhase = deckData->fields.questPhase;
  if ( questId != v4->fields.savedQuestId || questPhase != v4->fields.savedQuestPhase )
  {
    v4->fields.savedQuestId = questId;
    v4->fields.savedQuestPhase = questPhase;
    this = (RecommendSupportListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_1D0F30C(this, deckData);
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

  if ( (byte_4E733F0 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11223/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/);
    byte_4E733F0 = 1;
  }
  servantNameLabel = this->fields.servantNameLabel;
  if ( entity )
  {
    SvtName = UserServantEntity__GetSvtName(entity, 0, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11223/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0);
  }
  if ( !servantNameLabel )
    sub_1D0F30C(SvtName, SvtName);
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
    sub_1D0F30C(emptyObject, isEmpty);
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
  __int64 Master_object; // x0
  __int64 v10; // x1
  IconLabelInfo_o *v11; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v14; // x23
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x1
  Il2CppObject *v21; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E733EF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&IconLabelInfo_TypeInfo);
    sub_1D0F0B4(&long___TypeInfo);
    byte_4E733EF = 1;
  }
  v21 = 0;
  entity = 0;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v11 = (IconLabelInfo_o *)sub_1D0F300(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v11, 0);
    Master_object = (__int64)entity;
    if ( entity )
    {
      klass = (int32_t)entity[25].klass;
      Master_object = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0);
      if ( v11 )
      {
        IconLabelInfo__Set_42279788(v11, 2, klass, Master_object, 0, 0, 0, 0, 0, 0);
        servantFaceIcon = this->fields.servantFaceIcon;
        v14 = entity;
        Master_object = sub_1D0F15C(long___TypeInfo, 1);
        if ( Master_object )
        {
          if ( !*(_DWORD *)(Master_object + 24) )
            sub_1D0F314(Master_object);
          *(_QWORD *)(Master_object + 32) = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_42455016(
              servantFaceIcon,
              (UserServantEntity_o *)v14,
              (System_Int64_array *)Master_object,
              v11,
              0,
              0,
              0);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v15);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v16);
            return;
          }
        }
      }
    }
LABEL_27:
    sub_1D0F30C(Master_object, v10);
  }
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_27;
  if ( isGrand )
    ServantFaceIconComponent__NoMountRecommendGrandSupport((ServantFaceIconComponent_o *)Master_object, 0);
  else
    ServantFaceIconComponent__NoMountRecommendSupport((ServantFaceIconComponent_o *)Master_object, 0);
  RecommendSupportListViewItemDraw__SetServantName(this, 0, v17);
  RecommendSupportListViewItemDraw__SetupPush(this, 0, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v21,
         userSvtEquipId,
         (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_27;
    v20 = v21;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v19);
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_27;
    v20 = 0;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v20, 0);
}


void RecommendSupportListViewItemDraw__SetupMessage(
        RecommendSupportListViewItemDraw_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  UILabel_o *selectMessageLabel; // x20
  bool v7; // w21
  RecommendAdviceMessageMaster_o *Master_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  System_String_array *ConvertMessageToId; // x0

  if ( (byte_4E733F2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11195/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_1D0F0B4(&StringLiteral_11186/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4E733F2 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0);
  selectMessageLabel = this->fields.selectMessageLabel;
  v7 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_5;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v7 )
    {
LABEL_5:
      Master_object = (RecommendAdviceMessageMaster_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_11186/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                          0);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11195/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v10, ConvertMessageToId, 0),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1D0F30C(Master_object, v9);
  }
LABEL_12:
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
  __int128 v7; // q0
  __int128 v8; // q1
  UnityEngine_Component_o *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v3 = entity;
  if ( (byte_4E733F1 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E733F1 = 1;
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
    sub_1D0F30C(pushSprite, entity);
  }
  pushSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !pushSprite )
    goto LABEL_11;
  v7 = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  v8 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  monitor = (UnityEngine_Component_o *)pushSprite[5].monitor;
  *(_OWORD *)&v11.fields.currentCryptoKey = v7;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v10, 0);
  entity = (UserServantEntity_o *)(monitor == pushSprite);
  if ( !v6 )
    goto LABEL_11;
LABEL_9:
  UnityEngine_GameObject__SetActive(v6, (bool)entity, 0);
}


void RecommendSupportListViewItemDraw__SetupQuest(
        RecommendSupportListViewItemDraw_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x1
  Il2CppClass **v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UILabel_o *v21; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x1
  Il2CppClass **v32; // x0
  Il2CppObject *Item; // x22
  System_String_o *v34; // x0
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x1
  Il2CppClass **v46; // x0
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x1
  Il2CppClass **v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  System_String_o *v62; // x0
  RecommendSupportQuestEntity_o *v63; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v64; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v65; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_4E733F3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_43/*"\n"*/);
    sub_1D0F0B4(&StringLiteral_11216/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/);
    sub_1D0F0B4(&StringLiteral_11199/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E733F3 = 1;
  }
  v65 = 0;
  entity = 0;
  v63 = 0;
  v64 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v65,
          (int32_t)entity[3].klass,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v65 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &v64,
         HIDWORD(v65[1].klass),
         (const MethodInfo_3535BC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v64;
    if ( !v64 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredName((WarEntity_o *)v64, 0);
    if ( !v8 )
      goto LABEL_60;
    items = v8->fields._items;
    v16 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v8->fields._size;
    v18 = Master_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v18;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
    }
    if ( !v65 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getChapterSubStr(
                                                                    (QuestEntity_o *)entity,
                                                                    HIDWORD(v65[1].klass),
                                                                    0);
    v28 = v8->fields._items;
    v29 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v28 )
      goto LABEL_60;
    v30 = v8->fields._size;
    v31 = Master_object;
    if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &v28->obj.klass + v30;
      v8->fields._size = v30 + 1;
      v32[4] = (Il2CppClass *)v31;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v31, v22, v23, v24, v25, v26, v27);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               1,
               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_string__get_Item__);
      v34 = System_Int32__ToString((int32_t)&questPhasea, 0);
      v35 = (Il2CppObject *)System_String__Concat_65562772((System_String_o *)Item, v34, 0);
      System_Collections_Generic_List_object___set_Item(
        v8,
        1,
        v35,
        (const MethodInfo_395C194 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getQuestName((QuestEntity_o *)entity, 0);
    v42 = v8->fields._items;
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v42 )
      goto LABEL_60;
    v44 = v8->fields._size;
    v45 = Master_object;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &v42->obj.klass + v44;
      v8->fields._size = v44 + 1;
      v46[4] = (Il2CppClass *)v45;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v45, v36, v37, v38, v39, v40, v41);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)RecommendSupportQuestMaster__TryGetEntity(
                                                                    (RecommendSupportQuestMaster_o *)Master_object,
                                                                    &v63,
                                                                    questId,
                                                                    questPhasea,
                                                                    0);
    selectQuestLabel = this->fields.selectQuestLabel;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !selectQuestLabel )
        goto LABEL_60;
      UILabel__set_fontSize(this->fields.selectQuestLabel, this->fields.questLabelTwoLineFontSize, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
      if ( !Master_object )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.questLabelTwoLinePosY, 0);
      if ( !v63 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v63->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v49 = System_String__Replace_65609336(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_65562772(
                                                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                      v49,
                                                                      0);
      v56 = v8->fields._items;
      v57 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( !v56 )
        goto LABEL_60;
      v58 = v8->fields._size;
      v59 = Master_object;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &v56->obj.klass + v58;
        v8->fields._size = v58 + 1;
        v60[4] = (Il2CppClass *)v59;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v60 + 4), (int32_t)v59, v50, v51, v52, v53, v54, v55);
      }
    }
    else
    {
      if ( !selectQuestLabel )
        goto LABEL_60;
      UILabel__set_fontSize(this->fields.selectQuestLabel, this->fields.questLabelNormalFontSize, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
      if ( !Master_object )
        goto LABEL_60;
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      GameObjectExtensions__SetLocalPositionY(v61, (float)this->fields.questLabelNormalPosY, 0);
    }
    v21 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11216/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Join_65605364(
                                                                    v62,
                                                                    (System_Collections_Generic_IEnumerable_string__o *)v8,
                                                                    0);
    if ( !v21 )
LABEL_60:
      sub_1D0F30C(Master_object, v7);
  }
  else
  {
LABEL_22:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_60;
    UILabel__set_fontSize((UILabel_o *)Master_object, this->fields.questLabelNormalFontSize, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_60;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetLocalPositionY(v20, (float)this->fields.questLabelNormalPosY, 0);
    v21 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11199/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/,
                                                                    0);
    if ( !v21 )
      goto LABEL_60;
  }
  UILabel__set_text(v21, (System_String_o *)Master_object, 0);
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
    goto LABEL_12;
  ServantFaceIconComponent__Clear(servantFaceIcon, 0);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_12;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_12;
  if ( !isMount )
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
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1D0F30C(servantFaceIcon, isMount);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.unSelectedServantSprite;
  if ( !servantFaceIcon )
    goto LABEL_12;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0);
  if ( !servantFaceIcon )
    goto LABEL_12;
  v6 = 0;
LABEL_11:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v6, 0);
}