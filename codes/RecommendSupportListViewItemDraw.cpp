void __fastcall RecommendSupportListViewItemDraw___ctor(
        RecommendSupportListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecommendSupportListViewItemDraw__Awake(
        RecommendSupportListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportListViewItemDraw__ClearItem(
        RecommendSupportListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3

  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v2);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, 0LL, 0LL, v4);
  RecommendSupportListViewItemDraw__SetupMessage(this, 0LL, v5);
  RecommendSupportListViewItemDraw__SetupQuest(this, 0, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewItemDraw__Init(
        RecommendSupportListViewItemDraw_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B409B4 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_19628/*"formation_select_small"*/, v5);
    sub_1BDB878(&StringLiteral_11016/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, v6);
    sub_1BDB878(&StringLiteral_19583/*"formation_blank_Landscape_select"*/, v7);
    sub_1BDB878(&StringLiteral_19582/*"formation_blank_Landscape"*/, v8);
    sub_1BDB878(&StringLiteral_11022/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, v9);
    byte_4B409B4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11016/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0LL);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0LL),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11022/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0LL),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1BDBAD4(gameObject, v11);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0LL);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19628/*"formation_select_small"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19582/*"formation_blank_Landscape"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19583/*"formation_blank_Landscape_select"*/,
    0LL);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v15);
}


void __fastcall RecommendSupportListViewItemDraw__SetConfirmItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *unSelectedServantSprite; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4B409B5 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, deckData);
    sub_1BDB878(&StringLiteral_19628/*"formation_select_small"*/, v5);
    byte_4B409B5 = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v7 = AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19628/*"formation_select_small"*/, 0LL);
  if ( !deckData )
    sub_1BDBAD4(v7, v8);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, deckData->fields.userSvtId, deckData->fields.userSvtEquipId, v9);
  RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v10);
  RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v11);
}


void __fastcall RecommendSupportListViewItemDraw__SetItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3

  if ( !deckData )
    sub_1BDBAD4(this, 0LL);
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


void __fastcall RecommendSupportListViewItemDraw__SetServantName(
        RecommendSupportListViewItemDraw_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *servantNameLabel; // x19
  System_String_o *SvtName; // x0

  if ( (byte_4B409B7 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, entity);
    sub_1BDB878(&StringLiteral_11044/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, v5);
    byte_4B409B7 = 1;
  }
  servantNameLabel = this->fields.servantNameLabel;
  if ( entity )
  {
    SvtName = UserServantEntity__GetSvtName(entity, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0LL);
  }
  if ( !servantNameLabel )
    sub_1BDBAD4(SvtName, SvtName);
  UILabel__set_text(servantNameLabel, SvtName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewItemDraw__SetupBoard(
        RecommendSupportListViewItemDraw_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyObject; // x0

  emptyObject = this->fields.emptyObject;
  if ( !emptyObject
    || (UnityEngine_GameObject__SetActive(emptyObject, isEmpty, 0LL), (emptyObject = this->fields.baseObject) == 0LL) )
  {
    sub_1BDBAD4(emptyObject, isEmpty);
  }
  UnityEngine_GameObject__SetActive(emptyObject, !isEmpty, 0LL);
}


void __fastcall RecommendSupportListViewItemDraw__SetupFaceIcon(
        RecommendSupportListViewItemDraw_o *this,
        int64_t userSvtId,
        int64_t userSvtEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int64_array *Master_object; // x0
  __int64 v12; // x1
  IconLabelInfo_o *v13; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v16; // x23
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x1
  Il2CppObject *v23; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B409B6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, userSvtId);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BDB878(&IconLabelInfo_TypeInfo, v9);
    sub_1BDB878(&long___TypeInfo, v10);
    byte_4B409B6 = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v13 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v13, 0LL);
    Master_object = (System_Int64_array *)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Master_object = (System_Int64_array *)UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v13 )
      {
        IconLabelInfo__Set_39930232(v13, 2, klass, (int32_t)Master_object, 0, 0, 0, 0, 0, 0LL);
        servantFaceIcon = this->fields.servantFaceIcon;
        v16 = entity;
        Master_object = (System_Int64_array *)sub_1BDB920(long___TypeInfo, 1LL);
        if ( Master_object )
        {
          if ( !Master_object->max_length )
            sub_1BDBADC(Master_object, v12, Master_object);
          Master_object->m_Items[0] = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_40018252(
              servantFaceIcon,
              (UserServantEntity_o *)v16,
              Master_object,
              v13,
              0LL,
              0LL);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v17);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v18);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1BDBAD4(Master_object, v12);
  }
  Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_24;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Master_object, 0LL);
  RecommendSupportListViewItemDraw__SetServantName(this, 0LL, v19);
  RecommendSupportListViewItemDraw__SetupPush(this, 0LL, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v23,
         userSvtEquipId,
         (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v22 = v23;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v21);
    Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v22 = 0LL;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v22, 0LL);
}


void __fastcall RecommendSupportListViewItemDraw__SetupMessage(
        RecommendSupportListViewItemDraw_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool IsNullOrEmpty; // w0
  UILabel_o *selectMessageLabel; // x20
  bool v11; // w21
  RecommendAdviceMessageMaster_o *Master_object; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  System_String_array *ConvertMessageToId; // x0

  if ( (byte_4B409B9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, ids);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_11017/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, v7);
    sub_1BDB878(&StringLiteral_11008/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, v8);
    byte_4B409B9 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0LL);
  selectMessageLabel = this->fields.selectMessageLabel;
  v11 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_5;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v11 )
    {
LABEL_5:
      Master_object = (RecommendAdviceMessageMaster_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_11008/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                          0LL);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11017/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0LL),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v14, ConvertMessageToId, 0LL),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1BDBAD4(Master_object, v13);
  }
LABEL_12:
  UILabel__set_text(selectMessageLabel, (System_String_o *)Master_object, 0LL);
}


void __fastcall RecommendSupportListViewItemDraw__SetupPush(
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
  if ( (byte_4B409B8 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, entity);
    byte_4B409B8 = 1;
  }
  pushSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_11;
  pushSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pushSprite, 0LL);
  v6 = (UnityEngine_GameObject_o *)pushSprite;
  if ( !v3 )
  {
    entity = 0LL;
    if ( pushSprite )
      goto LABEL_9;
LABEL_11:
    sub_1BDBAD4(pushSprite, entity);
  }
  pushSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
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
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                            &v10,
                                            0LL);
  entity = (UserServantEntity_o *)(monitor == pushSprite);
  if ( !v6 )
    goto LABEL_11;
LABEL_9:
  UnityEngine_GameObject__SetActive(v6, (bool)entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewItemDraw__SetupQuest(
        RecommendSupportListViewItemDraw_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x1
  Il2CppClass **v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UILabel_o *v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x1
  Il2CppClass **v41; // x0
  Il2CppObject *Item; // x22
  System_String_o *v43; // x0
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x1
  Il2CppClass **v51; // x0
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x1
  Il2CppClass **v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  System_String_o *v63; // x0
  RecommendSupportQuestEntity_o *v64; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v65; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v66; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_4B409BA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1BDB878(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_SpotMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_1BDB878(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__set_Item__, v16);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v19);
    sub_1BDB878(&StringLiteral_11037/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, v20);
    sub_1BDB878(&StringLiteral_11021/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/, v21);
    sub_1BDB878(&StringLiteral_1/*""*/, v22);
    byte_4B409BA = 1;
  }
  v66 = 0LL;
  entity = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v66,
          (int32_t)entity[3].klass,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v66 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &v65,
         HIDWORD(v66[1].klass),
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v65;
    if ( !v65 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredName((WarEntity_o *)v65, 0LL);
    if ( !v25 )
      goto LABEL_60;
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v25->fields._size;
    v31 = Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      v25->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v31;
      sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
    }
    if ( !v66 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getChapterSubStr(
                                                                    (QuestEntity_o *)entity,
                                                                    HIDWORD(v66[1].klass),
                                                                    0LL);
    v37 = v25->fields._items;
    v38 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v37 )
      goto LABEL_60;
    v39 = v25->fields._size;
    v40 = Master_object;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v37->obj.klass + v39;
      v25->fields._size = v39 + 1;
      v41[4] = (Il2CppClass *)v40;
      sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               1,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
      v43 = System_Int32__ToString((int32_t)&questPhasea, 0LL);
      v44 = (Il2CppObject *)System_String__Concat_62572260((System_String_o *)Item, v43, 0LL);
      System_Collections_Generic_List_object___set_Item(
        v25,
        1,
        v44,
        (const MethodInfo_36D5B48 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getQuestName(
                                                                    (QuestEntity_o *)entity,
                                                                    0LL);
    v47 = v25->fields._items;
    v48 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v47 )
      goto LABEL_60;
    v49 = v25->fields._size;
    v50 = Master_object;
    if ( (unsigned int)v49 >= v47->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &v47->obj.klass + v49;
      v25->fields._size = v49 + 1;
      v51[4] = (Il2CppClass *)v50;
      sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v50, v45, v46);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)RecommendSupportQuestMaster__TryGetEntity(
                                                                    (RecommendSupportQuestMaster_o *)Master_object,
                                                                    &v64,
                                                                    questId,
                                                                    questPhasea,
                                                                    0LL);
    selectQuestLabel = this->fields.selectQuestLabel;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !selectQuestLabel )
        goto LABEL_60;
      UILabel__set_fontSize(this->fields.selectQuestLabel, this->fields.questLabelTwoLineFontSize, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
      if ( !Master_object )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.questLabelTwoLinePosY, 0LL);
      if ( !v64 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v64->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v54 = System_String__Replace_62618808(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_62572260(
                                                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                      v54,
                                                                      0LL);
      v57 = v25->fields._items;
      v58 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v57 )
        goto LABEL_60;
      v59 = v25->fields._size;
      v60 = Master_object;
      if ( (unsigned int)v59 >= v57->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &v57->obj.klass + v59;
        v25->fields._size = v59 + 1;
        v61[4] = (Il2CppClass *)v60;
        sub_1BDB81C((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v60, v55, v56);
      }
    }
    else
    {
      if ( !selectQuestLabel )
        goto LABEL_60;
      UILabel__set_fontSize(this->fields.selectQuestLabel, this->fields.questLabelNormalFontSize, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
      if ( !Master_object )
        goto LABEL_60;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      GameObjectExtensions__SetLocalPositionY(v62, (float)this->fields.questLabelNormalPosY, 0LL);
    }
    v34 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11037/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Join_62614836(
                                                                    v63,
                                                                    (System_Collections_Generic_IEnumerable_string__o *)v25,
                                                                    0LL);
    if ( !v34 )
LABEL_60:
      sub_1BDBAD4(Master_object, v24);
  }
  else
  {
LABEL_22:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_60;
    UILabel__set_fontSize((UILabel_o *)Master_object, this->fields.questLabelNormalFontSize, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_60;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__SetLocalPositionY(v33, (float)this->fields.questLabelNormalPosY, 0LL);
    v34 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11021/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/,
                                                                    0LL);
    if ( !v34 )
      goto LABEL_60;
  }
  UILabel__set_text(v34, (System_String_o *)Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewItemDraw__SetupServantSelectState(
        RecommendSupportListViewItemDraw_o *this,
        bool isMount,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  bool v6; // w1

  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_12;
  ServantFaceIconComponent__Clear(servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_12;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0LL);
  if ( !servantFaceIcon )
    goto LABEL_12;
  if ( !isMount )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.unSelectedServantSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0LL);
      if ( servantFaceIcon )
      {
        v6 = 1;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BDBAD4(servantFaceIcon, isMount);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.unSelectedServantSprite;
  if ( !servantFaceIcon )
    goto LABEL_12;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0LL);
  if ( !servantFaceIcon )
    goto LABEL_12;
  v6 = 0;
LABEL_11:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v6, 0LL);
}