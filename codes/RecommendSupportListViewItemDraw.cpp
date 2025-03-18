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

  if ( (byte_4C1E0AA & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_19967/*"img_craftessence"*/, v5);
    sub_1C3B764(&StringLiteral_11240/*"SELECT_FIGURE_INFO"*/, v6);
    sub_1C3B764(&StringLiteral_19941/*"img_combine_11"*/, v7);
    sub_1C3B764(&StringLiteral_19940/*"img_combine_10"*/, v8);
    sub_1C3B764(&StringLiteral_11246/*"SELECT_NO_SORTIE_FATIGURE"*/, v9);
    byte_4C1E0AA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  messageSelectButtonLabel = this->fields.messageSelectButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11240/*"SELECT_FIGURE_INFO"*/, 0LL);
  if ( !messageSelectButtonLabel
    || (UILabel__set_text(messageSelectButtonLabel, (System_String_o *)gameObject, 0LL),
        questSelectButtonLabel = this->fields.questSelectButtonLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11246/*"SELECT_NO_SORTIE_FATIGURE"*/, 0LL),
        !questSelectButtonLabel) )
  {
LABEL_11:
    sub_1C3B9C0(gameObject, v11);
  }
  UILabel__set_text(questSelectButtonLabel, (System_String_o *)gameObject, 0LL);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19967/*"img_craftessence"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(this->fields.emptyBoardSprite, (System_String_o *)StringLiteral_19940/*"img_combine_10"*/, 0LL);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.emptyBoardSelectSprite,
    (System_String_o *)StringLiteral_19941/*"img_combine_11"*/,
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

  if ( (byte_4C1E0AB & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, deckData);
    sub_1C3B764(&StringLiteral_19967/*"img_craftessence"*/, v5);
    byte_4C1E0AB = 1;
  }
  RecommendSupportListViewItemDraw__SetupBoard(this, 0, method);
  unSelectedServantSprite = this->fields.unSelectedServantSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v7 = AtlasManager__SetPartyOrganizationImage(unSelectedServantSprite, (System_String_o *)StringLiteral_19967/*"img_craftessence"*/, 0LL);
  if ( !deckData )
    sub_1C3B9C0(v7, v8);
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
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C1E0AD & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, entity);
    sub_1C3B764(&StringLiteral_11268/*"SEQ_IDS_20220729"*/, v5);
    byte_4C1E0AD = 1;
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
    SvtName = LocalizationManager__Get((System_String_o *)StringLiteral_11268/*"SEQ_IDS_20220729"*/, 0LL);
  }
  if ( !servantNameLabel )
    sub_1C3B9C0(SvtName, SvtName);
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
    sub_1C3B9C0(emptyObject, isEmpty);
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
  Il2CppObject *v23; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C1E0AC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, userSvtId);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1C3B764(&IconLabelInfo_TypeInfo, v9);
    sub_1C3B764(&long___TypeInfo, v10);
    byte_4C1E0AC = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  RecommendSupportListViewItemDraw__SetupServantSelectState(this, 1, (const MethodInfo *)userSvtEquipId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userSvtId,
         (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v13 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v13, 0LL);
    Master_object = (System_Int64_array *)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Master_object = (System_Int64_array *)UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v13 )
      {
        IconLabelInfo__Set_39561332(v13, 2, klass, (int32_t)Master_object, 0, 0, 0, 0, 0LL);
        servantFaceIcon = this->fields.servantFaceIcon;
        v16 = entity;
        Master_object = (System_Int64_array *)sub_1C3B80C(long___TypeInfo, 1LL);
        if ( Master_object )
        {
          if ( !Master_object->max_length )
            sub_1C3B9C8(Master_object, v12);
          Master_object->m_Items[0] = userSvtEquipId;
          if ( servantFaceIcon )
          {
            ServantFaceIconComponent__Set_39644684(
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
    sub_1C3B9C0(Master_object, v12);
  }
  Master_object = (System_Int64_array *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_24;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Master_object, 0LL);
  RecommendSupportListViewItemDraw__SetServantName(this, 0LL, v19);
  RecommendSupportListViewItemDraw__SetupPush(this, 0LL, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v23,
         userSvtEquipId,
         (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
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

  if ( (byte_4C1E0AF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, ids);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_11241/*"SELECT_FP_NUM_UP"*/, v7);
    sub_1C3B764(&StringLiteral_11232/*"SELECT_BONUS_SKILL_INVALID"*/, v8);
    byte_4C1E0AF = 1;
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
                                                          (System_String_o *)StringLiteral_11232/*"SELECT_BONUS_SKILL_INVALID"*/,
                                                          0LL);
      if ( !selectMessageLabel )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11241/*"SELECT_FP_NUM_UP"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RecommendAdviceMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object
    || (ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(Master_object, ids, 0LL),
        Master_object = (RecommendAdviceMessageMaster_o *)System_String__Join(v14, ConvertMessageToId, 0LL),
        !selectMessageLabel) )
  {
LABEL_13:
    sub_1C3B9C0(Master_object, v13);
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
  if ( (byte_4C1E0AE & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, entity);
    byte_4C1E0AE = 1;
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
    sub_1C3B9C0(pushSprite, entity);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  pushSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
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
  int64_t Master_object; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UILabel_o *v38; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  int64_t v48; // x1
  Il2CppClass **v49; // x0
  Il2CppObject *Item; // x22
  System_String_o *v51; // x0
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  int64_t v62; // x1
  Il2CppClass **v63; // x0
  struct UILabel_o *selectQuestLabel; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  int64_t v76; // x1
  Il2CppClass **v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  System_String_o *v79; // x0
  RecommendSupportQuestEntity_o *v80; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v81; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v82; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-50h] BYREF
  int32_t questPhasea; // [xsp+2Ch] [xbp-44h] BYREF

  questPhasea = questPhase;
  if ( (byte_4C1E0B0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_SpotMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v10);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__set_Item__, v16);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1C3B764(&LocalizationManager_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v19);
    sub_1C3B764(&StringLiteral_11261/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/, v20);
    sub_1C3B764(&StringLiteral_11245/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v21);
    sub_1C3B764(&StringLiteral_1/*""*/, v22);
    byte_4C1E0B0 = 1;
  }
  v82 = 0LL;
  entity = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          questId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &v82,
          (int32_t)entity[3].klass,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v82 || !Master_object )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v81,
         HIDWORD(v82[1].klass),
         (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
    Master_object = (int64_t)v81;
    if ( !v81 )
      goto LABEL_60;
    Master_object = (int64_t)WarEntity__GetPrioredName((WarEntity_o *)v81, 0LL);
    if ( !v25 )
      goto LABEL_60;
    items = v25->fields._items;
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_60;
    size = v25->fields._size;
    v35 = Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      v25->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v35;
      sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
    }
    if ( !v82 )
      goto LABEL_60;
    Master_object = (int64_t)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (int64_t)QuestEntity__getChapterSubStr((QuestEntity_o *)entity, HIDWORD(v82[1].klass), 0LL);
    v45 = v25->fields._items;
    v46 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v45 )
      goto LABEL_60;
    v47 = v25->fields._size;
    v48 = Master_object;
    if ( (unsigned int)v47 >= v45->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v45->obj.klass + v47;
      v25->fields._size = v47 + 1;
      v49[4] = (Il2CppClass *)v48;
      sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 4), v48, v39, v40, v41, v42, v43, v44);
    }
    if ( (questPhasea & 0x80000000) == 0 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               1,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
      v51 = System_Int32__ToString((int32_t)&questPhasea, 0LL);
      v52 = (Il2CppObject *)System_String__Concat_63368612((System_String_o *)Item, v51, 0LL);
      System_Collections_Generic_List_object___set_Item(
        v25,
        1,
        v52,
        (const MethodInfo_368B9F0 *)Method_System_Collections_Generic_List_string__set_Item__);
    }
    Master_object = (int64_t)entity;
    if ( !entity )
      goto LABEL_60;
    Master_object = (int64_t)QuestEntity__getQuestName((QuestEntity_o *)entity, 0LL);
    v59 = v25->fields._items;
    v60 = Method_System_Collections_Generic_List_string__Add__;
    ++v25->fields._version;
    if ( !v59 )
      goto LABEL_60;
    v61 = v25->fields._size;
    v62 = Master_object;
    if ( (unsigned int)v61 >= v59->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)Master_object,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v59->obj.klass + v61;
      v25->fields._size = v61 + 1;
      v63[4] = (Il2CppClass *)v62;
      sub_1C3B708((PartyOrganizationUtility_o *)(v63 + 4), v62, v53, v54, v55, v56, v57, v58);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( !Master_object )
      goto LABEL_60;
    Master_object = RecommendSupportQuestMaster__TryGetEntity(
                      (RecommendSupportQuestMaster_o *)Master_object,
                      &v80,
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
      if ( !v80 )
        goto LABEL_60;
      Master_object = (int64_t)v80->fields.questMessage;
      if ( !Master_object )
        goto LABEL_60;
      v66 = System_String__Replace_63388240(
              (System_String_o *)Master_object,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      Master_object = (int64_t)System_String__Concat_63368612((System_String_o *)StringLiteral_43/*"\n"*/, v66, 0LL);
      v73 = v25->fields._items;
      v74 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !v73 )
        goto LABEL_60;
      v75 = v25->fields._size;
      v76 = Master_object;
      if ( (unsigned int)v75 >= v73->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = &v73->obj.klass + v75;
        v25->fields._size = v75 + 1;
        v77[4] = (Il2CppClass *)v76;
        sub_1C3B708((PartyOrganizationUtility_o *)(v77 + 4), v76, v67, v68, v69, v70, v71, v72);
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
      v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      GameObjectExtensions__SetLocalPositionY(v78, (float)this->fields.questLabelNormalPosY, 0LL);
    }
    v38 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11261/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
    Master_object = (int64_t)System_String__Join_63384268(
                               v79,
                               (System_Collections_Generic_IEnumerable_string__o *)v25,
                               0LL);
    if ( !v38 )
LABEL_60:
      sub_1C3B9C0(Master_object, v24);
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
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__SetLocalPositionY(v37, (float)this->fields.questLabelNormalPosY, 0LL);
    v38 = this->fields.selectQuestLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11245/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, 0LL);
    if ( !v38 )
      goto LABEL_60;
  }
  UILabel__set_text(v38, (System_String_o *)Master_object, 0LL);
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
    sub_1C3B9C0(servantFaceIcon, isMount);
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