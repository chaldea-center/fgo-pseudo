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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  UILabel_o *messageSelectButtonLabel; // x20
  UILabel_o *questSelectButtonLabel; // x20
  __int64 v21; // x1
  UISprite_o *unSelectedServantSprite; // x20
  const MethodInfo *v23; // x2

  if ( (byte_4B1240D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_19781/*"formation_select_small"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11148/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19755/*"formation_blank_Landscape_select"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19754/*"formation_blank_Landscape"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11154/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, v14, v15);
    byte_4B1240D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11148/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SELECT_BUTTON"*/, 0LL);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0LL),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11154/*"RECOMMEND_SUPPORT_QUEST_SELECT_BUTTON"*/, 0LL),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1BCAA3C(gameObject, v17);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0LL);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19781/*"formation_select_small"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19754/*"formation_blank_Landscape"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19755/*"formation_blank_Landscape_select"*/,
    0LL);
  RecommendSupportListViewItemDraw__SetupBoard(this, 1, v23);
}


void __fastcall RecommendSupportListViewItemDraw__SetConfirmItem(
        RecommendSupportListViewItemDraw_o *this,
        RecommendSupportData_RecommendDeckData_o *deckData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UISprite_o *unSelectedServantSprite; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_4B1240E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, deckData, method);
    sub_1BCA7E0(&StringLiteral_19781/*"formation_select_small"*/, v5, v6);
    byte_4B1240E = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
  v9 = AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19781/*"formation_select_small"*/, 0LL);
  if ( !deckData )
    sub_1BCAA3C(v9, v10);
  RecommendSupportListViewItemDraw__SetupFaceIcon(
    this,
    deckData->fields.userSvtId,
    deckData->fields.userSvtEquipId,
    v11);
  RecommendSupportListViewItemDraw__SetupMessage(this, deckData->fields.adviceMessageIds, v12);
  RecommendSupportListViewItemDraw__SetupQuest(this, deckData->fields.questId, deckData->fields.questPhase, v13);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  UILabel_o *servantNameLabel; // x19
  System_String_o *SvtName; // x0

  if ( (byte_4B12410 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, entity, method);
    sub_1BCA7E0(&StringLiteral_11176/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, v5, v6);
    byte_4B12410 = 1;
  }
  servantNameLabel = this->fields.servantNameLabel;
  if ( entity )
  {
    SvtName = UserServantEntity__GetSvtName(entity, 0LL);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, entity);
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11176/*"RECOMMEND_SUPPORT_SERVANT_NAME_NO_SELECT"*/, 0LL);
  }
  if ( !servantNameLabel )
    sub_1BCAA3C(SvtName, SvtName);
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
    sub_1BCAA3C(emptyObject, isEmpty);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  System_Int64_array *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  IconLabelInfo_o *v20; // x21
  int32_t klass; // w22
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  Il2CppObject *v23; // x23
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  Il2CppObject *v30; // x1
  Il2CppObject *v31; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1240F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, userSvtId, userSvtEquipId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&long___TypeInfo, v13, v14);
    byte_4B1240F = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v20 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v17, v18, v19);
    IconLabelInfo___ctor(v20, 0LL);
    Master_object = (System_Int64_array *)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Master_object = (System_Int64_array *)UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v20 )
      {
        IconLabelInfo__Set_38850420(v20, 2, klass, (int32_t)Master_object, 0, 0, 0, 0, 0LL);
        servantFaceIcon = this->fields.servantFaceIcon;
        v23 = entity;
        Master_object = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
        if ( Master_object )
        {
          if ( !Master_object->max_length )
            sub_1BCAA44(Master_object, v17);
          Master_object->m_Items[0] = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_38932288(
              servantFaceIcon,
              (UserServantEntity_o *)v23,
              Master_object,
              v20,
              0LL,
              0LL);
            RecommendSupportListViewItemDraw__SetServantName(this, (UserServantEntity_o *)entity, v24);
            RecommendSupportListViewItemDraw__SetupPush(this, (UserServantEntity_o *)entity, v25);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(Master_object, v17);
  }
  Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_24;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Master_object, 0LL);
  RecommendSupportListViewItemDraw__SetServantName(this, 0LL, v26);
  RecommendSupportListViewItemDraw__SetupPush(this, 0LL, v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v31,
         userSvtEquipId,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v30 = v31;
  }
  else
  {
    RecommendSupportListViewItemDraw__SetupServantSelectState(this, 0, v29);
    Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !Master_object )
      goto LABEL_24;
    v30 = 0LL;
  }
  ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Master_object, (UserServantEntity_o *)v30, 0LL);
}


void __fastcall RecommendSupportListViewItemDraw__SetupMessage(
        RecommendSupportListViewItemDraw_o *this,
        System_Int32_array *ids,
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
  bool IsNullOrEmpty; // w0
  __int64 v14; // x1
  UILabel_o *selectMessageLabel; // x20
  bool v16; // w21
  RecommendAdviceMessageMaster_o *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *v20; // x21
  System_String_array *ConvertMessageToId; // x0

  if ( (byte_4B12412 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, ids, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_11149/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11140/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, v11, v12);
    byte_4B12412 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0LL);
  selectMessageLabel = this->fields.selectMessageLabel;
  v16 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_5;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    if ( v16 )
    {
LABEL_5:
      Master_object = (RecommendAdviceMessageMaster_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_11140/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/,
                                                          0LL);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11149/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0LL),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v20, ConvertMessageToId, 0LL),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1BCAA3C(Master_object, v18);
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
  UnityEngine_Component_c *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v3 = entity;
  if ( (byte_4B12411 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, entity, method);
    byte_4B12411 = 1;
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
    sub_1BCAA3C(pushSprite, entity);
  }
  pushSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !pushSprite )
    goto LABEL_11;
  v7 = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  v8 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  klass = pushSprite[5].klass;
  *(_OWORD *)&v11.fields.currentCryptoKey = v7;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, entity);
  v10 = v11;
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                            &v10,
                                            0LL);
  entity = (UserServantEntity_o *)(klass == (UnityEngine_Component_c *)pushSprite);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  int64_t Master_object; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  int64_t v54; // x1
  Il2CppClass **v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x1
  UILabel_o *v58; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  int64_t v68; // x1
  Il2CppClass **v69; // x0
  Il2CppObject *Item; // x22
  System_String_o *v71; // x0
  Il2CppObject *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  int64_t v82; // x1
  Il2CppClass **v83; // x0
  __int64 v84; // x1
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  int64_t v97; // x1
  Il2CppClass **v98; // x0
  __int64 v99; // x1
  UnityEngine_GameObject_o *v100; // x0
  System_String_o *v101; // x0
  RecommendSupportQuestEntity_o *v102; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v103; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v104; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_4B12413 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__set_Item__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v28, v29);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11169/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11153/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v38, v39);
    byte_4B12413 = 1;
  }
  v104 = 0LL;
  entity = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          questId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &v104,
          (int32_t)entity[3].klass,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v104 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v103,
         HIDWORD(v104[1].klass),
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v41,
                                                         v42,
                                                         v43);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (int64_t)v103;
    if ( !v103 )
      goto LABEL_60;
    Master_object = (int64_t)WarEntity__GetPrioredName((WarEntity_o *)v103, 0LL);
    if ( !v44 )
      goto LABEL_60;
    items = v44->fields._items;
    v52 = Method_System_Collections_Generic_List_string__Add__;
    ++v44->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v44->fields._size;
    v54 = Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v44,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &items->obj.klass + size;
      v44->fields._size = size + 1;
      v55[4] = (Il2CppClass *)v54;
      sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v54, v45, v46, v47, v48, v49, v50);
    }
    if ( !v104 )
      goto LABEL_60;
    Master_object = (int64_t)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (int64_t)QuestEntity__getChapterSubStr((QuestEntity_o *)entity, HIDWORD(v104[1].klass), 0LL);
    v65 = v44->fields._items;
    v66 = Method_System_Collections_Generic_List_string__Add__;
    ++v44->fields._version;
    if ( !v65 )
      goto LABEL_60;
    v67 = v44->fields._size;
    v68 = Master_object;
    if ( (unsigned int)v67 >= v65->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v44,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v65->obj.klass + v67;
      v44->fields._size = v67 + 1;
      v69[4] = (Il2CppClass *)v68;
      sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v68, v59, v60, v61, v62, v63, v64);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v44,
               1,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
      v71 = System_Int32__ToString((int32_t)&questPhasea, 0LL);
      v72 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)Item, v71, 0LL);
      System_Collections_Generic_List_object___set_Item(
        v44,
        1,
        v72,
        (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (int64_t)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (int64_t)QuestEntity__getQuestName((QuestEntity_o *)entity, 0LL);
    v79 = v44->fields._items;
    v80 = Method_System_Collections_Generic_List_string__Add__;
    ++v44->fields._version;
    if ( !v79 )
      goto LABEL_60;
    v81 = v44->fields._size;
    v82 = Master_object;
    if ( (unsigned int)v81 >= v79->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v44,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v79->obj.klass + v81;
      v44->fields._size = v81 + 1;
      v83[4] = (Il2CppClass *)v82;
      sub_1BCA784((PartyOrganizationUtility_o *)(v83 + 4), v82, v73, v74, v75, v76, v77, v78);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v84);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = RecommendSupportQuestMaster__TryGetEntity(
                      (RecommendSupportQuestMaster_o *)Master_object,
                      &v102,
                      questId,
                      questPhasea,
                      0LL);
    selectQuestLabel = this->fields.selectQuestLabel;
    if ( (Master_object & 1) != 0 )
    {
      if ( !selectQuestLabel )
        goto LABEL_60;
      UILabel__set_fontSize(this->fields.selectQuestLabel, this->fields.questLabelTwoLineFontSize, 0LL);
      Master_object = (int64_t)this->fields.selectQuestLabel;
      if ( !Master_object )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.questLabelTwoLinePosY, 0LL);
      if ( !v102 )
        goto LABEL_60;
      Master_object = (int64_t)v102->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v87 = System_String__Replace_62420848(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      Master_object = (int64_t)System_String__Concat_62401220((System_String_o *)StringLiteral_43/*"\n"*/, v87, 0LL);
      v94 = v44->fields._items;
      v95 = Method_System_Collections_Generic_List_string__Add__;
      ++v44->fields._version;
      if ( !v94 )
        goto LABEL_60;
      v96 = v44->fields._size;
      v97 = Master_object;
      if ( (unsigned int)v96 >= v94->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = &v94->obj.klass + v96;
        v44->fields._size = v96 + 1;
        v98[4] = (Il2CppClass *)v97;
        sub_1BCA784((PartyOrganizationUtility_o *)(v98 + 4), v97, v88, v89, v90, v91, v92, v93);
      }
    }
    else
    {
      if ( !selectQuestLabel )
        goto LABEL_60;
      UILabel__set_fontSize(this->fields.selectQuestLabel, this->fields.questLabelNormalFontSize, 0LL);
      Master_object = (int64_t)this->fields.selectQuestLabel;
      if ( !Master_object )
        goto LABEL_60;
      v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      GameObjectExtensions__SetLocalPositionY(v100, (float)this->fields.questLabelNormalPosY, 0LL);
    }
    v58 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99);
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11169/*"RECOMMEND_SUPPORT_QUEST_SEPARATOR"*/, 0LL);
    Master_object = (int64_t)System_String__Join_62416876(
                               v101,
                               (System_Collections_Generic_IEnumerable_string__o *)v44,
                               0LL);
    if ( !v58 )
LABEL_60:
      sub_1BCAA3C(Master_object, v41);
  }
  else
  {
LABEL_22:
    Master_object = (int64_t)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_60;
    UILabel__set_fontSize((UILabel_o *)Master_object, this->fields.questLabelNormalFontSize, 0LL);
    Master_object = (int64_t)this->fields.selectQuestLabel;
    if ( !Master_object )
      goto LABEL_60;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__SetLocalPositionY(v56, (float)this->fields.questLabelNormalPosY, 0LL);
    v58 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11153/*"RECOMMEND_SUPPORT_QUEST_CHANGE_NO_INPUT"*/, 0LL);
    if ( !v58 )
      goto LABEL_60;
  }
  UILabel__set_text(v58, (System_String_o *)Master_object, 0LL);
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
    sub_1BCAA3C(servantFaceIcon, isMount);
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