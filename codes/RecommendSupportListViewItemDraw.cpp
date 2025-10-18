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
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3

  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v2);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, 0, 0, v4);
  RecommendSupportListViewItemDraw__SetupMessage(this, 0, v5);
  RecommendSupportListViewItemDraw__SetupQuest(this, 0, 0, v6);
}


void RecommendSupportListViewItemDraw__Init(
        RecommendSupportListViewItemDraw_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4C3EEEE & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_19615/*"formation_select_small"*/);
    sub_1C37058(&StringLiteral_11035/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/);
    sub_1C37058(&StringLiteral_19571/*"formation_blank_Landscape_select"*/);
    sub_1C37058(&StringLiteral_19570/*"formation_blank_Landscape"*/);
    sub_1C37058(&StringLiteral_11041/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/);
    byte_4C3EEEE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11035/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11041/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1C372B4(gameObject);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19615/*"formation_select_small"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19570/*"formation_blank_Landscape"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19571/*"formation_blank_Landscape_select"*/,
    0);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v8);
}


void RecommendSupportListViewItemDraw__SetConfirmItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  UISprite_o *unSelectedServantSprite; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_4C3EEEF & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&StringLiteral_19615/*"formation_select_small"*/);
    byte_4C3EEEF = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19615/*"formation_select_small"*/, 0);
  if ( !deckData )
    sub_1C372B4(v6);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, deckData->fields.userSvtId, deckData->fields.userSvtEquipId, v7);
  RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v8);
  RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v9);
}


void RecommendSupportListViewItemDraw__SetItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3

  if ( !deckData )
    sub_1C372B4(this);
  if ( deckData->fields.userSvtId <= 0 && deckData->fields.userSvtEquipId <= 0 && deckData->fields.questId < 1 )
  {
    RecommendSupportListViewItemDraw__ClearItem(this, (const MethodInfo *)deckData);
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
    RecommendSupportListViewItemDraw__SetupFaceIcon(
      this,
      deckData->fields.userSvtId,
      deckData->fields.userSvtEquipId,
      v5);
    RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v6);
    RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v7);
  }
}


void RecommendSupportListViewItemDraw__SetServantName(
        RecommendSupportListViewItemDraw_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  UILabel_o *servantNameLabel; // x19
  System_String_o *SvtName; // x0

  if ( (byte_4C3EEF1 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11063/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/);
    byte_4C3EEF1 = 1;
  }
  servantNameLabel = this->fields.servantNameLabel;
  if ( entity )
  {
    SvtName = UserServantEntity__GetSvtName(entity, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11063/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0);
  }
  if ( !servantNameLabel )
    sub_1C372B4(SvtName);
  UILabel__set_text(servantNameLabel, SvtName, 0);
}


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
    sub_1C372B4(emptyObject);
  }
  UnityEngine_GameObject__SetActive(emptyObject, !isEmpty, 0);
}


void RecommendSupportListViewItemDraw__SetupFaceIcon(
        RecommendSupportListViewItemDraw_o *this,
        int64_t userSvtId,
        int64_t userSvtEquipId,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  IconLabelInfo_o *v8; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v11; // x23
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x1
  Il2CppObject *v18; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C3EEF0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    byte_4C3EEF0 = 1;
  }
  entity = 0;
  v18 = 0;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v8 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v8, 0);
    Master_object = (__int64)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Master_object = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0);
      if ( v8 )
      {
        IconLabelInfo__Set_40917868(v8, 2, klass, Master_object, 0, 0, 0, 0, 0, 0);
        servantFaceIcon = this->fields.servantFaceIcon;
        v11 = entity;
        Master_object = sub_1C37100(long___TypeInfo, 1);
        if ( Master_object )
        {
          if ( !*(_DWORD *)(Master_object + 24) )
            sub_1C372BC(Master_object);
          *(_QWORD *)(Master_object + 32) = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_41005348(
              servantFaceIcon,
              (UserServantEntity_o *)v11,
              (System_Int64_array *)Master_object,
              v8,
              0,
              0);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v12);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v13);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C372B4(Master_object);
  }
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_24;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Master_object, 0);
  RecommendSupportListViewItemDraw__SetServantName(this, 0, v14);
  RecommendSupportListViewItemDraw__SetupPush(this, 0, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v18,
         userSvtEquipId,
         (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v17 = v18;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v16);
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v17 = 0;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v17, 0);
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
  System_String_o *v9; // x21
  System_String_array *ConvertMessageToId; // x0

  if ( (byte_4C3EEF3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11036/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_1C37058(&StringLiteral_11027/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4C3EEF3 = 1;
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
                                                          (System_String_o *)StringLiteral_11027/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                          0);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v9, ConvertMessageToId, 0),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1C372B4(Master_object);
  }
LABEL_12:
  UILabel__set_text(selectMessageLabel, (System_String_o *)Master_object, 0);
}


void RecommendSupportListViewItemDraw__SetupPush(
        RecommendSupportListViewItemDraw_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Component_o *pushSprite; // x0
  UnityEngine_GameObject_o *v6; // x19
  __int128 v7; // q0
  __int128 v8; // q1
  UnityEngine_Component_o *monitor; // x20
  bool v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_4C3EEF2 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3EEF2 = 1;
  }
  pushSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_11;
  pushSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pushSprite, 0);
  v6 = (UnityEngine_GameObject_o *)pushSprite;
  if ( !entity )
  {
    v10 = 0;
    if ( pushSprite )
      goto LABEL_9;
LABEL_11:
    sub_1C372B4(pushSprite);
  }
  pushSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !pushSprite )
    goto LABEL_11;
  v7 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v8 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  monitor = (UnityEngine_Component_o *)pushSprite[5].monitor;
  *(_OWORD *)&v12.fields.currentCryptoKey = v7;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v11, 0);
  v10 = monitor == pushSprite;
  if ( !v6 )
    goto LABEL_11;
LABEL_9:
  UnityEngine_GameObject__SetActive(v6, v10, 0);
}


void RecommendSupportListViewItemDraw__SetupQuest(
        RecommendSupportListViewItemDraw_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x1
  Il2CppClass **v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x1
  Il2CppClass **v23; // x0
  Il2CppObject *Item; // x22
  System_String_o *v25; // x0
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x1
  Il2CppClass **v33; // x0
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x1
  Il2CppClass **v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  System_String_o *v45; // x0
  RecommendSupportQuestEntity_o *v46; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v47; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v48; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_4C3EEF4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_11056/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/);
    sub_1C37058(&StringLiteral_11040/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3EEF4 = 1;
  }
  v48 = 0;
  entity = 0;
  v46 = 0;
  v47 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v48,
          (int32_t)entity[3].klass,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v48 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &v47,
         HIDWORD(v48[1].klass),
         (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v47;
    if ( !v47 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredName((WarEntity_o *)v47, 0);
    if ( !v7 )
      goto LABEL_60;
    items = v7->fields._items;
    v11 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v7->fields._size;
    v13 = Master_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v14[4] = (Il2CppClass *)v13;
      sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
    }
    if ( !v48 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getChapterSubStr(
                                                                    (QuestEntity_o *)entity,
                                                                    HIDWORD(v48[1].klass),
                                                                    0);
    v19 = v7->fields._items;
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v19 )
      goto LABEL_60;
    v21 = v7->fields._size;
    v22 = Master_object;
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &v19->obj.klass + v21;
      v7->fields._size = v21 + 1;
      v23[4] = (Il2CppClass *)v22;
      sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v7,
               1,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
      v25 = System_Int32__ToString((int32_t)&questPhasea, 0);
      v26 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)Item, v25, 0);
      System_Collections_Generic_List_object___set_Item(
        v7,
        1,
        v26,
        (const MethodInfo_37A2DA8 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getQuestName((QuestEntity_o *)entity, 0);
    v29 = v7->fields._items;
    v30 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v29 )
      goto LABEL_60;
    v31 = v7->fields._size;
    v32 = Master_object;
    if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &v29->obj.klass + v31;
      v7->fields._size = v31 + 1;
      v33[4] = (Il2CppClass *)v32;
      sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)RecommendSupportQuestMaster__TryGetEntity(
                                                                    (RecommendSupportQuestMaster_o *)Master_object,
                                                                    &v46,
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
      if ( !v46 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v46->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v36 = System_String__Replace_63608204(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63561656(
                                                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                      v36,
                                                                      0);
      v39 = v7->fields._items;
      v40 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( !v39 )
        goto LABEL_60;
      v41 = v7->fields._size;
      v42 = Master_object;
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &v39->obj.klass + v41;
        v7->fields._size = v41 + 1;
        v43[4] = (Il2CppClass *)v42;
        sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v42, v37, v38);
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
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      GameObjectExtensions__SetLocalPositionY(v44, (float)this->fields.questLabelNormalPosY, 0);
    }
    v16 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Join_63604232(
                                                                    v45,
                                                                    (System_Collections_Generic_IEnumerable_string__o *)v7,
                                                                    0);
    if ( !v16 )
LABEL_60:
      sub_1C372B4(Master_object);
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
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetLocalPositionY(v15, (float)this->fields.questLabelNormalPosY, 0);
    v16 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11040/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/,
                                                                    0);
    if ( !v16 )
      goto LABEL_60;
  }
  UILabel__set_text(v16, (System_String_o *)Master_object, 0);
}


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
    sub_1C372B4(servantFaceIcon);
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