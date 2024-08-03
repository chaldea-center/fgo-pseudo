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
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v14; // x2

  if ( (byte_49F8762 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_19501/*"formation_select_small"*/, v5);
    sub_1B640C8(&StringLiteral_10961/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, v6);
    sub_1B640C8(&StringLiteral_19475/*"formation_blank_Landscape_select"*/, v7);
    sub_1B640C8(&StringLiteral_19474/*"formation_blank_Landscape"*/, v8);
    sub_1B640C8(&StringLiteral_10967/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, v9);
    byte_49F8762 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10961/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0LL);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0LL),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10967/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0LL),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1B64324(gameObject);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0LL);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19501/*"formation_select_small"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19474/*"formation_blank_Landscape"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19475/*"formation_blank_Landscape_select"*/,
    0LL);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v14);
}


void __fastcall RecommendSupportListViewItemDraw__SetConfirmItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *unSelectedServantSprite; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_49F8763 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, deckData);
    sub_1B640C8(&StringLiteral_19501/*"formation_select_small"*/, v5);
    byte_49F8763 = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v7 = AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19501/*"formation_select_small"*/, 0LL);
  if ( !deckData )
    sub_1B64324(v7);
  RecommendSupportListViewItemDraw__SetupFaceIcon(this, deckData->fields.userSvtId, deckData->fields.userSvtEquipId, v8);
  RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v9);
  RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v10);
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
    sub_1B64324(this);
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

  if ( (byte_49F8765 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, entity);
    sub_1B640C8(&StringLiteral_10985/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, v5);
    byte_49F8765 = 1;
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
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_10985/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0LL);
  }
  if ( !servantNameLabel )
    sub_1B64324(SvtName);
  UILabel__set_text(servantNameLabel, SvtName, 0LL);
}


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
    sub_1B64324(emptyObject);
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
  __int64 v13; // x2
  IconLabelInfo_o *v14; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v17; // x23
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x1
  Il2CppObject *v25; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49F8764 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, userSvtId);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v9);
    sub_1B640C8(&long___TypeInfo, v10);
    byte_49F8764 = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v14 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v12, v13);
    IconLabelInfo___ctor(v14, 0LL);
    Master_object = (System_Int64_array *)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Master_object = (System_Int64_array *)UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v14 )
      {
        IconLabelInfo__Set_37825360(v14, 2, klass, (int32_t)Master_object, 0, 0, 0, 0, 0LL);
        servantFaceIcon = this->fields.servantFaceIcon;
        v17 = entity;
        Master_object = (System_Int64_array *)sub_1B64170(long___TypeInfo, 1LL);
        if ( Master_object )
        {
          if ( !Master_object->max_length )
            sub_1B6432C(Master_object, v18);
          Master_object->m_Items[0] = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_37905936(
              servantFaceIcon,
              (UserServantEntity_o *)v17,
              Master_object,
              v14,
              0LL,
              0LL);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v19);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v20);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1B64324(Master_object);
  }
  Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_24;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Master_object, 0LL);
  RecommendSupportListViewItemDraw__SetServantName(this, 0LL, v21);
  RecommendSupportListViewItemDraw__SetupPush(this, 0LL, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v25,
         userSvtEquipId,
         (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v24 = v25;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v23);
    Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v24 = 0LL;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v24, 0LL);
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
  System_String_o *v13; // x21
  System_String_array *ConvertMessageToId; // x0

  if ( (byte_49F8767 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, ids);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_10962/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, v7);
    sub_1B640C8(&StringLiteral_10952/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, v8);
    byte_49F8767 = 1;
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
                                                          (System_String_o *)StringLiteral_10952/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                          0LL);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10962/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0LL),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v13, ConvertMessageToId, 0LL),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1B64324(Master_object);
  }
LABEL_12:
  UILabel__set_text(selectMessageLabel, (System_String_o *)Master_object, 0LL);
}


void __fastcall RecommendSupportListViewItemDraw__SetupPush(
        RecommendSupportListViewItemDraw_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Component_o *pushSprite; // x0
  UnityEngine_GameObject_o *v6; // x19
  __int128 v7; // q0
  __int128 v8; // q1
  UnityEngine_Component_c *klass; // x20
  bool v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_49F8766 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, entity);
    byte_49F8766 = 1;
  }
  pushSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_11;
  pushSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pushSprite, 0LL);
  v6 = (UnityEngine_GameObject_o *)pushSprite;
  if ( !entity )
  {
    v10 = 0;
    if ( pushSprite )
      goto LABEL_9;
LABEL_11:
    sub_1B64324(pushSprite);
  }
  pushSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !pushSprite )
    goto LABEL_11;
  v7 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v8 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  klass = pushSprite[5].klass;
  *(_OWORD *)&v12.fields.currentCryptoKey = v7;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                            &v11,
                                            0LL);
  v10 = klass == (UnityEngine_Component_c *)pushSprite;
  if ( !v6 )
    goto LABEL_11;
LABEL_9:
  UnityEngine_GameObject__SetActive(v6, v10, 0LL);
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
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x1
  Il2CppClass **v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UILabel_o *v35; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x1
  Il2CppClass **v42; // x0
  Il2CppObject *Item; // x22
  System_String_o *v44; // x0
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x1
  Il2CppClass **v52; // x0
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x1
  Il2CppClass **v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  System_String_o *v64; // x0
  RecommendSupportQuestEntity_o *v65; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v66; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v67; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_49F8768 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_SpotMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__set_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v19);
    sub_1B640C8(&StringLiteral_10978/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, v20);
    sub_1B640C8(&StringLiteral_10966/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/, v21);
    sub_1B640C8(&StringLiteral_1/*""*/, v22);
    byte_49F8768 = 1;
  }
  v67 = 0LL;
  entity = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v67,
          (int32_t)entity[3].klass,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v67 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &v66,
         HIDWORD(v67[1].klass),
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v24,
                                                         v25);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v66;
    if ( !v66 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredName((WarEntity_o *)v66, 0LL);
    if ( !v26 )
      goto LABEL_60;
    items = v26->fields._items;
    v30 = Method_System_Collections_Generic_List_string__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v26->fields._size;
    v32 = Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v26->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
    }
    if ( !v67 )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getChapterSubStr(
                                                                    (QuestEntity_o *)entity,
                                                                    HIDWORD(v67[1].klass),
                                                                    0LL);
    v38 = v26->fields._items;
    v39 = Method_System_Collections_Generic_List_string__Add__;
    ++v26->fields._version;
    if ( !v38 )
      goto LABEL_60;
    v40 = v26->fields._size;
    v41 = Master_object;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v38->obj.klass + v40;
      v26->fields._size = v40 + 1;
      v42[4] = (Il2CppClass *)v41;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v26,
               1,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
      v44 = System_Int32__ToString((int32_t)&questPhasea, 0LL);
      v45 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)Item, v44, 0LL);
      System_Collections_Generic_List_object___set_Item(
        v26,
        1,
        v45,
        (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getQuestName(
                                                                    (QuestEntity_o *)entity,
                                                                    0LL);
    v48 = v26->fields._items;
    v49 = Method_System_Collections_Generic_List_string__Add__;
    ++v26->fields._version;
    if ( !v48 )
      goto LABEL_60;
    v50 = v26->fields._size;
    v51 = Master_object;
    if ( (unsigned int)v50 >= v48->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &v48->obj.klass + v50;
      v26->fields._size = v50 + 1;
      v52[4] = (Il2CppClass *)v51;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)RecommendSupportQuestMaster__TryGetEntity(
                                                                    (RecommendSupportQuestMaster_o *)Master_object,
                                                                    &v65,
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
      if ( !v65 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v65->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v55 = System_String__Replace_61395016(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_61375396(
                                                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                      v55,
                                                                      0LL);
      v58 = v26->fields._items;
      v59 = Method_System_Collections_Generic_List_string__Add__;
      ++v26->fields._version;
      if ( !v58 )
        goto LABEL_60;
      v60 = v26->fields._size;
      v61 = Master_object;
      if ( (unsigned int)v60 >= v58->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &v58->obj.klass + v60;
        v26->fields._size = v60 + 1;
        v62[4] = (Il2CppClass *)v61;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v61, v56, v57);
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
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      GameObjectExtensions__SetLocalPositionY(v63, (float)this->fields.questLabelNormalPosY, 0LL);
    }
    v35 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10978/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Join_61391052(
                                                                    v64,
                                                                    (System_Collections_Generic_IEnumerable_string__o *)v26,
                                                                    0LL);
    if ( !v35 )
LABEL_60:
      sub_1B64324(Master_object);
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
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__SetLocalPositionY(v34, (float)this->fields.questLabelNormalPosY, 0LL);
    v35 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_10966/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/,
                                                                    0LL);
    if ( !v35 )
      goto LABEL_60;
  }
  UILabel__set_text(v35, (System_String_o *)Master_object, 0LL);
}


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
    sub_1B64324(servantFaceIcon);
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