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
  __int64 v5; // x1
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4C23234 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19600/*"formation_select_small"*/);
    sub_1C2D490(&StringLiteral_11028/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/);
    sub_1C2D490(&StringLiteral_19556/*"formation_blank_Landscape_select"*/);
    sub_1C2D490(&StringLiteral_19555/*"formation_blank_Landscape"*/);
    sub_1C2D490(&StringLiteral_11034/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/);
    byte_4C23234 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11028/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11034/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1C2D6EC(gameObject, v5);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19600/*"formation_select_small"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19555/*"formation_blank_Landscape"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19556/*"formation_blank_Landscape_select"*/,
    0);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v9);
}


void RecommendSupportListViewItemDraw__SetConfirmItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  UISprite_o *unSelectedServantSprite; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4C23235 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19600/*"formation_select_small"*/);
    byte_4C23235 = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19600/*"formation_select_small"*/, 0);
  if ( !deckData )
    sub_1C2D6EC(v6, v7);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, deckData->fields.userSvtId, deckData->fields.userSvtEquipId, v8);
  RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v9);
  RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v10);
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
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C23237 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11056/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/);
    byte_4C23237 = 1;
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
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0);
  }
  if ( !servantNameLabel )
    sub_1C2D6EC(SvtName, SvtName);
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
    sub_1C2D6EC(emptyObject, isEmpty);
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
  __int64 v8; // x1
  IconLabelInfo_o *v9; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v12; // x23
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x1
  Il2CppObject *v19; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C23236 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C23236 = 1;
  }
  entity = 0;
  v19 = 0;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v9 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v9, 0);
    Master_object = (__int64)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Master_object = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0);
      if ( v9 )
      {
        IconLabelInfo__Set_40696284(v9, 2, klass, Master_object, 0, 0, 0, 0, 0, 0);
        servantFaceIcon = this->fields.servantFaceIcon;
        v12 = entity;
        Master_object = sub_1C2D538(long___TypeInfo, 1);
        if ( Master_object )
        {
          if ( !*(_DWORD *)(Master_object + 24) )
            sub_1C2D6F4(Master_object, v8, Master_object);
          *(_QWORD *)(Master_object + 32) = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_40783764(
              servantFaceIcon,
              (UserServantEntity_o *)v12,
              (System_Int64_array *)Master_object,
              v9,
              0,
              0);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v13);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v14);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1C2D6EC(Master_object, v8);
  }
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_24;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Master_object, 0);
  RecommendSupportListViewItemDraw__SetServantName(this, 0, v15);
  RecommendSupportListViewItemDraw__SetupPush(this, 0, v16);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v19,
         userSvtEquipId,
         (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v18 = v19;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v17);
    Master_object = (__int64)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v18 = 0;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v18, 0);
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

  if ( (byte_4C23239 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11029/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_1C2D490(&StringLiteral_11020/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4C23239 = 1;
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
                                                          (System_String_o *)StringLiteral_11020/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                          0);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v10, ConvertMessageToId, 0),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1C2D6EC(Master_object, v9);
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
  if ( (byte_4C23238 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C23238 = 1;
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
    sub_1C2D6EC(pushSprite, entity);
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
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v10, 0);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x1
  Il2CppClass **v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *v17; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x1
  Il2CppClass **v24; // x0
  Il2CppObject *Item; // x22
  System_String_o *v26; // x0
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x1
  Il2CppClass **v34; // x0
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x1
  Il2CppClass **v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  System_String_o *v46; // x0
  RecommendSupportQuestEntity_o *v47; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v48; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v49; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_4C2323A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_11049/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/);
    sub_1C2D490(&StringLiteral_11033/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2323A = 1;
  }
  v49 = 0;
  entity = 0;
  v47 = 0;
  v48 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v49,
          (int32_t)entity[3].klass,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v49 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &v48,
         HIDWORD(v49[1].klass),
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v48;
    if ( !v48 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredName((WarEntity_o *)v48, 0);
    if ( !v8 )
      goto LABEL_60;
    items = v8->fields._items;
    v12 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v8->fields._size;
    v14 = Master_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v14;
      sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
    }
    if ( !v49 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getChapterSubStr(
                                                                    (QuestEntity_o *)entity,
                                                                    HIDWORD(v49[1].klass),
                                                                    0);
    v20 = v8->fields._items;
    v21 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v20 )
      goto LABEL_60;
    v22 = v8->fields._size;
    v23 = Master_object;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &v20->obj.klass + v22;
      v8->fields._size = v22 + 1;
      v24[4] = (Il2CppClass *)v23;
      sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               1,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
      v26 = System_Int32__ToString((int32_t)&questPhasea, 0);
      v27 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)Item, v26, 0);
      System_Collections_Generic_List_object___set_Item(
        v8,
        1,
        v27,
        (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getQuestName((QuestEntity_o *)entity, 0);
    v30 = v8->fields._items;
    v31 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v30 )
      goto LABEL_60;
    v32 = v8->fields._size;
    v33 = Master_object;
    if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v30->obj.klass + v32;
      v8->fields._size = v32 + 1;
      v34[4] = (Il2CppClass *)v33;
      sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)RecommendSupportQuestMaster__TryGetEntity(
                                                                    (RecommendSupportQuestMaster_o *)Master_object,
                                                                    &v47,
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
      if ( !v47 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v47->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v37 = System_String__Replace_63504412(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63457864(
                                                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                      v37,
                                                                      0);
      v40 = v8->fields._items;
      v41 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( !v40 )
        goto LABEL_60;
      v42 = v8->fields._size;
      v43 = Master_object;
      if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &v40->obj.klass + v42;
        v8->fields._size = v42 + 1;
        v44[4] = (Il2CppClass *)v43;
        sub_1C2D434((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
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
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      GameObjectExtensions__SetLocalPositionY(v45, (float)this->fields.questLabelNormalPosY, 0);
    }
    v17 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11049/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Join_63500440(
                                                                    v46,
                                                                    (System_Collections_Generic_IEnumerable_string__o *)v8,
                                                                    0);
    if ( !v17 )
LABEL_60:
      sub_1C2D6EC(Master_object, v7);
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
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetLocalPositionY(v16, (float)this->fields.questLabelNormalPosY, 0);
    v17 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11033/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/,
                                                                    0);
    if ( !v17 )
      goto LABEL_60;
  }
  UILabel__set_text(v17, (System_String_o *)Master_object, 0);
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
    sub_1C2D6EC(servantFaceIcon, isMount);
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