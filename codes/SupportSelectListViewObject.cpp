void __fastcall SupportSelectListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x19
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x19
  int32_t v56; // w1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w1
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w1
  struct SupportSelectListViewObject_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3

  if ( (byte_49B76F1 & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, v1);
    sub_1B4CF90(&SupportSelectListViewObject_TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_19804/*"icon_class_off1001"*/, v3);
    sub_1B4CF90(&StringLiteral_19814/*"icon_class_on1002"*/, v4);
    sub_1B4CF90(&StringLiteral_19805/*"icon_class_off1002"*/, v5);
    sub_1B4CF90(&StringLiteral_19799/*"icon_class_off003"*/, v6);
    sub_1B4CF90(&StringLiteral_19803/*"icon_class_off007"*/, v7);
    sub_1B4CF90(&StringLiteral_19797/*"icon_class_off001"*/, v8);
    sub_1B4CF90(&StringLiteral_19811/*"icon_class_on006"*/, v9);
    sub_1B4CF90(&StringLiteral_19808/*"icon_class_on003"*/, v10);
    sub_1B4CF90(&StringLiteral_19806/*"icon_class_on001"*/, v11);
    sub_1B4CF90(&StringLiteral_19802/*"icon_class_off006"*/, v12);
    sub_1B4CF90(&StringLiteral_19813/*"icon_class_on1001"*/, v13);
    sub_1B4CF90(&StringLiteral_19809/*"icon_class_on004"*/, v14);
    sub_1B4CF90(&StringLiteral_19810/*"icon_class_on005"*/, v15);
    sub_1B4CF90(&StringLiteral_19807/*"icon_class_on002"*/, v16);
    sub_1B4CF90(&StringLiteral_19812/*"icon_class_on007"*/, v17);
    sub_1B4CF90(&StringLiteral_19801/*"icon_class_off005"*/, v18);
    sub_1B4CF90(&StringLiteral_19798/*"icon_class_off002"*/, v19);
    sub_1B4CF90(&StringLiteral_19800/*"icon_class_off004"*/, v20);
    byte_49B76F1 = 1;
  }
  v21 = sub_1B4D038(string___TypeInfo, 9LL);
  if ( !v21 )
    goto LABEL_25;
  v25 = v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_24;
  v26 = StringLiteral_19804/*"icon_class_off1001"*/;
  *(_QWORD *)(v21 + 32) = StringLiteral_19804/*"icon_class_off1001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 32), v26, v23, v24);
  if ( *(_DWORD *)(v25 + 24) <= 1u )
    goto LABEL_24;
  v29 = StringLiteral_19797/*"icon_class_off001"*/;
  *(_QWORD *)(v25 + 40) = StringLiteral_19797/*"icon_class_off001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 40), v29, v27, v28);
  if ( *(_DWORD *)(v25 + 24) <= 2u )
    goto LABEL_24;
  v32 = StringLiteral_19798/*"icon_class_off002"*/;
  *(_QWORD *)(v25 + 48) = StringLiteral_19798/*"icon_class_off002"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 48), v32, v30, v31);
  if ( *(_DWORD *)(v25 + 24) <= 3u )
    goto LABEL_24;
  v35 = StringLiteral_19799/*"icon_class_off003"*/;
  *(_QWORD *)(v25 + 56) = StringLiteral_19799/*"icon_class_off003"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 56), v35, v33, v34);
  if ( *(_DWORD *)(v25 + 24) <= 4u )
    goto LABEL_24;
  v38 = StringLiteral_19800/*"icon_class_off004"*/;
  *(_QWORD *)(v25 + 64) = StringLiteral_19800/*"icon_class_off004"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 64), v38, v36, v37);
  if ( *(_DWORD *)(v25 + 24) <= 5u )
    goto LABEL_24;
  v41 = StringLiteral_19801/*"icon_class_off005"*/;
  *(_QWORD *)(v25 + 72) = StringLiteral_19801/*"icon_class_off005"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 72), v41, v39, v40);
  if ( *(_DWORD *)(v25 + 24) <= 6u
    || (v44 = StringLiteral_19802/*"icon_class_off006"*/,
        *(_QWORD *)(v25 + 80) = StringLiteral_19802/*"icon_class_off006"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 80), v44, v42, v43),
        *(_DWORD *)(v25 + 24) <= 7u)
    || (v47 = StringLiteral_19803/*"icon_class_off007"*/,
        *(_QWORD *)(v25 + 88) = StringLiteral_19803/*"icon_class_off007"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 88), v47, v45, v46),
        *(_DWORD *)(v25 + 24) <= 8u) )
  {
LABEL_24:
    sub_1B4D1F4(v21, v22);
  }
  v50 = StringLiteral_19805/*"icon_class_off1002"*/;
  *(_QWORD *)(v25 + 96) = StringLiteral_19805/*"icon_class_off1002"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 96), v50, v48, v49);
  SupportSelectListViewObject_TypeInfo->static_fields->upperOffClassIconFileList = (struct System_String_array *)v25;
  sub_1B4CF34((CGThumbnailListItem_o *)SupportSelectListViewObject_TypeInfo->static_fields, v25, v51, v52);
  v21 = sub_1B4D038(string___TypeInfo, 9LL);
  if ( !v21 )
LABEL_25:
    sub_1B4D1EC(v21, v22);
  v55 = v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_24;
  v56 = StringLiteral_19813/*"icon_class_on1001"*/;
  *(_QWORD *)(v21 + 32) = StringLiteral_19813/*"icon_class_on1001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 32), v56, v53, v54);
  if ( *(_DWORD *)(v55 + 24) <= 1u )
    goto LABEL_24;
  v59 = StringLiteral_19806/*"icon_class_on001"*/;
  *(_QWORD *)(v55 + 40) = StringLiteral_19806/*"icon_class_on001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 40), v59, v57, v58);
  if ( *(_DWORD *)(v55 + 24) <= 2u )
    goto LABEL_24;
  v62 = StringLiteral_19807/*"icon_class_on002"*/;
  *(_QWORD *)(v55 + 48) = StringLiteral_19807/*"icon_class_on002"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 48), v62, v60, v61);
  if ( *(_DWORD *)(v55 + 24) <= 3u )
    goto LABEL_24;
  v65 = StringLiteral_19808/*"icon_class_on003"*/;
  *(_QWORD *)(v55 + 56) = StringLiteral_19808/*"icon_class_on003"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 56), v65, v63, v64);
  if ( *(_DWORD *)(v55 + 24) <= 4u )
    goto LABEL_24;
  v68 = StringLiteral_19809/*"icon_class_on004"*/;
  *(_QWORD *)(v55 + 64) = StringLiteral_19809/*"icon_class_on004"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 64), v68, v66, v67);
  if ( *(_DWORD *)(v55 + 24) <= 5u )
    goto LABEL_24;
  v71 = StringLiteral_19810/*"icon_class_on005"*/;
  *(_QWORD *)(v55 + 72) = StringLiteral_19810/*"icon_class_on005"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 72), v71, v69, v70);
  if ( *(_DWORD *)(v55 + 24) <= 6u )
    goto LABEL_24;
  v74 = StringLiteral_19811/*"icon_class_on006"*/;
  *(_QWORD *)(v55 + 80) = StringLiteral_19811/*"icon_class_on006"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 80), v74, v72, v73);
  if ( *(_DWORD *)(v55 + 24) <= 7u )
    goto LABEL_24;
  v77 = StringLiteral_19812/*"icon_class_on007"*/;
  *(_QWORD *)(v55 + 88) = StringLiteral_19812/*"icon_class_on007"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 88), v77, v75, v76);
  if ( *(_DWORD *)(v55 + 24) <= 8u )
    goto LABEL_24;
  v80 = StringLiteral_19814/*"icon_class_on1002"*/;
  *(_QWORD *)(v55 + 96) = StringLiteral_19814/*"icon_class_on1002"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 96), v80, v78, v79);
  static_fields = SupportSelectListViewObject_TypeInfo->static_fields;
  static_fields->upperOnClassIconFileList = (struct System_String_array *)v55;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->upperOnClassIconFileList, v55, v82, v83);
}


void __fastcall SupportSelectListViewObject___ctor(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct SupportSelectObject_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49B76F0 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&ListViewObject_TypeInfo, v3);
    sub_1B4CF90(&SupportSelectObject___TypeInfo, v4);
    byte_49B76F0 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct SupportSelectObject_array *)sub_1B4D038(
                                             SupportSelectObject___TypeInfo,
                                             (unsigned int)v5->static_fields->SupportDeckMemberMax);
  this->fields.supportSelectObject = v6;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.supportSelectObject, (int32_t)v6, v7, v8);
  this->fields.maxAlphaRate = 0.6;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportSelectListViewObject__GetClassIconSpriteName(
        int32_t classPos,
        bool isUpperOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SupportSelectListViewObject_c *v6; // x0
  struct SupportSelectListViewObject_StaticFields *static_fields; // x8
  struct System_String_array *upperOnClassIconFileList; // x8
  struct System_String_array *upperOffClassIconFileList; // x8
  struct System_String_StaticFields *v10; // x8

  if ( (byte_49B76E6 & 1) == 0 )
  {
    sub_1B4CF90(&string_TypeInfo, isUpperOn);
    sub_1B4CF90(&SupportSelectListViewObject_TypeInfo, v5);
    byte_49B76E6 = 1;
  }
  if ( (classPos & 0x80000000) != 0 )
    goto LABEL_19;
  v6 = SupportSelectListViewObject_TypeInfo;
  if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    v6 = SupportSelectListViewObject_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( !isUpperOn )
  {
    upperOffClassIconFileList = static_fields->upperOffClassIconFileList;
    if ( !upperOffClassIconFileList )
      goto LABEL_21;
    if ( (signed int)upperOffClassIconFileList->max_length > classPos )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = SupportSelectListViewObject_TypeInfo;
      }
      upperOnClassIconFileList = v6->static_fields->upperOffClassIconFileList;
      if ( !upperOnClassIconFileList )
LABEL_21:
        sub_1B4D1EC(v6, isUpperOn);
      goto LABEL_17;
    }
LABEL_19:
    v10 = string_TypeInfo->static_fields;
    return v10->Empty;
  }
  upperOnClassIconFileList = static_fields->upperOnClassIconFileList;
  if ( !upperOnClassIconFileList )
    goto LABEL_21;
  if ( (signed int)upperOnClassIconFileList->max_length <= classPos )
    goto LABEL_19;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    upperOnClassIconFileList = SupportSelectListViewObject_TypeInfo->static_fields->upperOnClassIconFileList;
    if ( !upperOnClassIconFileList )
      goto LABEL_21;
  }
LABEL_17:
  if ( upperOnClassIconFileList->max_length <= classPos )
    sub_1B4D1F4(v6, isUpperOn);
  v10 = (struct System_String_StaticFields *)&upperOnClassIconFileList->m_Items[classPos];
  return v10->Empty;
}


SupportSelectListViewItem_o *__fastcall SupportSelectListViewObject__GetItem(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49B76E8 & 1) == 0 )
  {
    sub_1B4CF90(&SupportSelectListViewItem_TypeInfo, method);
    byte_49B76E8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (SupportSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
    return (SupportSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__Init(
        SupportSelectListViewObject_o *this,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        int32_t deckNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *Instance; // x0
  __int64 v17; // x1
  struct SupportServantData_o *v18; // x8
  UILabel_o *explanationLb; // x23
  System_String_o **v20; // x8
  System_String_o *v21; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCampaignMaster_o *v23; // x23
  int32_t questId; // w22
  int32_t questPhase; // w24
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  EventCampaignEntity_array *Data_39647388; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x0
  int32_t v30; // w1
  struct EventCampaignEntity_array *v31; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1

  if ( (byte_49B76E7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventCampaignMaster___, supportServantData);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventQuestMaster___, v9);
    sub_1B4CF90(&EventCampaignEntity___TypeInfo, v10);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B4CF90(&StringLiteral_12207/*"SUPPORT_FOLLOWER_HELP"*/, v13);
    sub_1B4CF90(&StringLiteral_12261/*"SUPPORT_SELECT_HELP"*/, v14);
    sub_1B4CF90(&StringLiteral_12208/*"SUPPORT_INFO_HELP"*/, v15);
    byte_49B76E7 = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    (int32_t)friendPointCampaigns,
    *(const MethodInfo **)&deckNum);
  v18 = this->fields.supportServantData;
  if ( !v18 )
    goto LABEL_28;
  explanationLb = this->fields.explanationLb;
  if ( !v18->fields.isFriendInfo )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SUPPORT_SELECT_HELP"*/, 0LL);
    if ( explanationLb )
    {
      UILabel__set_text(explanationLb, Instance, 0LL);
      goto LABEL_25;
    }
LABEL_28:
    sub_1B4D1EC(Instance, v17);
  }
  if ( v18->fields.isSelectServant )
    v20 = (System_String_o **)&StringLiteral_12207/*"SUPPORT_FOLLOWER_HELP"*/;
  else
    v20 = (System_String_o **)&StringLiteral_12208/*"SUPPORT_INFO_HELP"*/;
  v21 = *v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get(v21, 0LL);
  if ( !explanationLb )
    goto LABEL_28;
  UILabel__set_text(explanationLb, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !supportServantData )
    goto LABEL_28;
  questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
  v23 = (EventCampaignMaster_o *)Instance;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
  }
  else
  {
    questPhase = 0;
    questId = 0;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                  (EventQuestMaster_o *)Instance,
                                  questId,
                                  questPhase,
                                  0LL,
                                  7,
                                  0LL);
  if ( !v23 )
    goto LABEL_28;
  Data_39647388 = EventCampaignMaster__getData_39647388(v23, 24, (EventEntity_array *)Instance, 0LL);
  if ( !Data_39647388 || !*(_QWORD *)&Data_39647388->max_length )
  {
    v31 = (struct EventCampaignEntity_array *)sub_1B4D038(EventCampaignEntity___TypeInfo, 0LL);
    v30 = (int)v31;
    this->fields.eventFriendPoints = v31;
    p_eventFriendPoints = &this->fields.eventFriendPoints;
    goto LABEL_27;
  }
LABEL_25:
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  v30 = (int)friendPointCampaigns;
LABEL_27:
  sub_1B4CF34((CGThumbnailListItem_o *)p_eventFriendPoints, v30, v26, v27);
  SupportSelectListViewObject__clearItemObj(this, v32);
  SupportSelectListViewObject__setItemObj(this, deckNum, v33);
  SupportSelectListViewObject__InitAlphaMask(this, v34);
}


void __fastcall SupportSelectListViewObject__InitAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  System_Object_array *ComponentsInChildren_object__49627240; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *maskSprite; // x20
  Il2CppObject *ComponentInParent_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_49B76EE & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___, v3);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B76EE = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_16;
  ComponentsInChildren_object__49627240 = UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                            dispObject,
                                            (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = (struct UnityEngine_BoxCollider_array *)ComponentsInChildren_object__49627240;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.colliders, (int32_t)ComponentsInChildren_object__49627240, v8, v9);
  SupportSelectListViewObject__UpdateCollider(this, 1, v10);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_16;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
    if ( !dispObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( dispObject )
    {
      ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                   dispObject,
                                   (const MethodInfo_2F53A24 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = (struct UIScrollView_o *)ComponentInParent_object;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scrollView, (int32_t)ComponentInParent_object, v13, v14);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         dispObject,
                                         (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_object;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemSeed, (int32_t)ComponentInChildren_object, v16, v17);
          SupportSelectListViewObject__UpdateAlphaMask(this, v18);
          return;
        }
      }
    }
LABEL_16:
    sub_1B4D1EC(dispObject, method);
  }
}


void __fastcall SupportSelectListViewObject__OnClickListView(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectListViewObject__ResetEventCampaign(
        SupportSelectListViewObject_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SupportServantData_o *supportServantData; // x8
  struct EventCampaignEntity_array **p_eventFriendPoints; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct SupportSelectObject_array *supportSelectObject; // x8
  __int64 v11; // x22
  int max_length; // w9
  SupportSelectObject_o *v13; // x21
  const MethodInfo *v14; // x1

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_10;
  if ( supportServantData->fields.isFriendInfo )
    return;
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
  supportSelectObject = (struct SupportSelectObject_array *)*(p_eventFriendPoints - 5);
  if ( !supportSelectObject )
LABEL_10:
    sub_1B4D1EC(this, friendPointCampaigns);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_1B4D1F4(this, friendPointCampaigns);
    v13 = supportSelectObject->m_Items[v11];
    if ( v13 )
    {
      v13->fields.eventFriendPoints = friendPointCampaigns;
      sub_1B4CF34((CGThumbnailListItem_o *)&v13->fields.eventFriendPoints, (int32_t)friendPointCampaigns, v8, v9);
      SupportSelectObject__ModifyItem(v13, v14);
      supportSelectObject = this->fields.supportSelectObject;
      ++v11;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__SetActiveDragSwapGuide(
        SupportSelectListViewObject_o *this,
        bool flag,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  SupportSelectObject_o *v8; // x8

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_8:
    sub_1B4D1EC(this, flag);
  v4 = this;
  v5 = 0LL;
  v6 = flag;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B4D1F4(this, flag);
    v8 = supportSelectObject->m_Items[v5];
    if ( v8 )
    {
      this = (SupportSelectListViewObject_o *)v8->fields.itemDraw;
      if ( this )
      {
        SupportSelectItemDraw__SetActiveDragSwapGuide((SupportSelectItemDraw_o *)this, v6, method);
        supportSelectObject = v4->fields.supportSelectObject;
        ++v5;
        if ( supportSelectObject )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall SupportSelectListViewObject__SetDragPrefab(
        SupportSelectListViewObject_o *this,
        UnityEngine_GameObject_o *dragPrefab,
        SupportSelectListViewManager_o *manager,
        const MethodInfo *method)
{
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  int max_length; // w8
  unsigned int v8; // w23
  SupportSelectListViewDropObject_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_9;
  max_length = dropObjectList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B4D1F4(this, dragPrefab);
      v9 = dropObjectList->m_Items[v8];
      if ( !v9 )
        break;
      v9->fields.manager = (struct ListViewManager_o *)manager;
      sub_1B4CF34((CGThumbnailListItem_o *)&v9->fields.manager, (int32_t)manager, (int32_t)manager, method);
      v9->fields.dragObjectPrefab = dragPrefab;
      sub_1B4CF34((CGThumbnailListItem_o *)&v9->fields.dragObjectPrefab, (int32_t)dragPrefab, v10, v11);
      max_length = dropObjectList->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_1B4D1EC(this, dragPrefab);
  }
}


// attributes: thunk
void __fastcall SupportSelectListViewObject__Update(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  SupportSelectListViewObject__UpdateAlphaMask(this, method);
}


void __fastcall SupportSelectListViewObject__UpdateAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  float v8; // s8
  float v9; // s0
  struct ListViewItemSeed_o *v10; // x8
  float v11; // s0
  float v12; // s1
  float v13; // s8
  float maxAlphaRate; // s10
  float v15; // s8
  const MethodInfo *v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B76EF & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B76EF = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
        {
          transform = this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          v10 = this->fields.itemSeed;
          if ( !v10 )
            goto LABEL_29;
          transform = this->fields.maskSprite;
          v11 = fabsf(v8 + v9) / v10->fields.arrangementPich.fields.x;
          v12 = fminf(v11, 1.0);
          v13 = v11 < 0.0 ? 0.0 : v12;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          v15 = maxAlphaRate * v13;
          if ( v15 > 0.05 != UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
            SupportSelectListViewObject__UpdateCollider(this, v15 <= 0.05, v16);
          transform = this->fields.maskSprite;
          if ( !transform
            || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v15 > 0.05, 0LL),
                (transform = this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_1B4D1EC(transform, v6);
          }
          v17.fields.r = *((float *)transform + 37);
          v17.fields.g = *((float *)transform + 38);
          v17.fields.b = *((float *)transform + 39);
          v17.fields.a = v15;
          UIWidget__set_color((UIWidget_o *)transform, v17, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__UpdateCollider(
        SupportSelectListViewObject_o *this,
        bool enable,
        const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_array *colliders; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_1B4D1EC(this, enable);
  v4 = this;
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B4D1F4(this, enable);
    this = (SupportSelectListViewObject_o *)colliders->m_Items[v5];
    if ( this )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
      colliders = v4->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__UpdateExplanationLabel(
        SupportSelectListViewObject_o *this,
        bool displaySwapInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  UILabel_o *explanationLb; // x19
  System_String_o *v10; // x0
  __int64 v11; // x1

  if ( (byte_49B76ED & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, displaySwapInfo);
    sub_1B4CF90(&StringLiteral_12261/*"SUPPORT_SELECT_HELP"*/, v5);
    sub_1B4CF90(&StringLiteral_12272/*"SUPPORT_SELECT_SWAP"*/, v6);
    byte_49B76ED = 1;
  }
  if ( displaySwapInfo )
    v7 = (System_String_o **)&StringLiteral_12272/*"SUPPORT_SELECT_SWAP"*/;
  else
    v7 = (System_String_o **)&StringLiteral_12261/*"SUPPORT_SELECT_HELP"*/;
  v8 = *v7;
  explanationLb = this->fields.explanationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v8, 0LL);
  if ( !explanationLb )
    sub_1B4D1EC(v10, v11);
  UILabel__set_text(explanationLb, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__callbackFuncObj(
        SupportSelectListViewObject_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct ListViewManager_o *manager; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  void *monitor; // x8

  if ( (byte_49B76EB & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&result);
    sub_1B4CF90(&SupportSelectListViewManager_TypeInfo, v9);
    byte_49B76EB = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(SupportSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewManager_TypeInfo )
      v12 = (UnityEngine_Object_o *)this->fields.manager;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( v13 )
  {
    if ( !v12 )
      sub_1B4D1EC(v13, v14);
    monitor = v12[14].monitor;
    if ( monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        (unsigned int)result,
        (unsigned int)d,
        (unsigned int)n,
        *((_QWORD *)monitor + 5));
  }
}


void __fastcall SupportSelectListViewObject__clearItemObj(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  const MethodInfo *v6; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_7:
    sub_1B4D1EC(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B4D1F4(this, method);
    this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[v4];
    if ( this )
    {
      SupportSelectObject__ClearItem((SupportSelectObject_o *)this, method);
      SupportSelectListViewObject__setUpperClassIcon(v3, v4, v6);
      supportSelectObject = v3->fields.supportSelectObject;
      ++v4;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__clearItemObj_33682524(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v5; // x19
  const MethodInfo *v6; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
    goto LABEL_5;
  if ( supportSelectObject->max_length <= classPos )
    sub_1B4D1F4(this, *(_QWORD *)&classPos);
  v5 = this;
  this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[classPos];
  if ( !this )
LABEL_5:
    sub_1B4D1EC(this, classPos);
  SupportSelectObject__ClearItem((SupportSelectObject_o *)this, *(const MethodInfo **)&classPos);
  SupportSelectListViewObject__setUpperClassIcon(v5, classPos, v6);
}


SupportSelectListViewDropObject_array *__fastcall SupportSelectListViewObject__get_DropObjectList(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dropObjectList;
}


void __fastcall SupportSelectListViewObject__setDisp(
        SupportSelectListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, disp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  _DWORD *monitor; // x8
  __int64 v7; // x21
  int v8; // w9
  EventCampaignEntity_array *klass; // x22
  SupportServantData_o *v10; // x23
  SupportSelectObject_o *v11; // x24
  SupportSelectMenu_CallbackFunc_o *v12; // x25
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49B76E9 & 1) == 0 )
  {
    sub_1B4CF90(&SupportSelectMenu_CallbackFunc_TypeInfo, *(_QWORD *)&deckNum);
    this = (SupportSelectListViewObject_o *)sub_1B4CF90(&Method_SupportSelectListViewObject_callbackFuncObj__, v5);
    byte_49B76E9 = 1;
  }
  monitor = v4[7].monitor;
  if ( !monitor )
LABEL_9:
    sub_1B4D1EC(this, *(_QWORD *)&deckNum);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = monitor[6];
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      sub_1B4D1F4(this, *(_QWORD *)&deckNum);
    v10 = (SupportServantData_o *)v4[9].monitor;
    klass = (EventCampaignEntity_array *)v4[10].klass;
    v11 = *(SupportSelectObject_o **)&monitor[2 * v7 + 8];
    v12 = (SupportSelectMenu_CallbackFunc_o *)sub_1B4D1DC(SupportSelectMenu_CallbackFunc_TypeInfo);
    SupportSelectMenu_CallbackFunc___ctor(v12, v4, Method_SupportSelectListViewObject_callbackFuncObj__, v13);
    if ( v11 )
    {
      SupportSelectObject__SetItem(v11, v10, deckNum, v7, klass, v12, v14);
      SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v4, v7, v15);
      monitor = v4[7].monitor;
      ++v7;
      if ( monitor )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj_33682764(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  _DWORD *monitor; // x8
  EventCampaignEntity_array *klass; // x22
  SupportServantData_o *v10; // x23
  SupportSelectObject_o *v11; // x24
  SupportSelectMenu_CallbackFunc_o *v12; // x25
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x2

  v6 = (Il2CppObject *)this;
  if ( (byte_49B76EA & 1) == 0 )
  {
    sub_1B4CF90(&SupportSelectMenu_CallbackFunc_TypeInfo, *(_QWORD *)&deckNum);
    this = (SupportSelectListViewObject_o *)sub_1B4CF90(&Method_SupportSelectListViewObject_callbackFuncObj__, v7);
    byte_49B76EA = 1;
  }
  monitor = v6[7].monitor;
  if ( !monitor )
    goto LABEL_7;
  if ( monitor[6] <= (unsigned int)classPos )
    sub_1B4D1F4(this, *(_QWORD *)&deckNum);
  v10 = (SupportServantData_o *)v6[9].monitor;
  klass = (EventCampaignEntity_array *)v6[10].klass;
  v11 = *(SupportSelectObject_o **)&monitor[2 * classPos + 8];
  v12 = (SupportSelectMenu_CallbackFunc_o *)sub_1B4D1DC(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(v12, v6, Method_SupportSelectListViewObject_callbackFuncObj__, v13);
  if ( !v11 )
LABEL_7:
    sub_1B4D1EC(this, *(_QWORD *)&deckNum);
  SupportSelectObject__SetItem(v11, v10, deckNum, classPos, klass, v12, v14);
  SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v6, classPos, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setUpperClassIcon(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *supportServantData; // x0
  struct UISprite_array *v6; // x8
  __int64 v7; // x22
  UISprite_o *v8; // x20
  _DWORD *klass; // x8
  struct UISprite_array *classIconSpriteList; // x8

  if ( (byte_49B76EC & 1) == 0 )
  {
    sub_1B4CF90(&SupportSelectListViewObject_TypeInfo, *(_QWORD *)&classPos);
    byte_49B76EC = 1;
  }
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_20;
  supportServantData = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                 supportServantData,
                                                 classPos,
                                                 0LL);
  if ( !supportServantData || !supportServantData->fields.className )
  {
    classIconSpriteList = this->fields.classIconSpriteList;
    if ( !classIconSpriteList )
      goto LABEL_20;
    if ( classIconSpriteList->max_length <= classPos )
LABEL_21:
      sub_1B4D1F4(supportServantData, *(_QWORD *)&classPos);
    supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
    v7 = classPos;
    v8 = classIconSpriteList->m_Items[classPos];
    if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
    }
    klass = supportServantData[1].fields.oldEquipIdList->obj.klass;
    if ( klass )
      goto LABEL_17;
LABEL_20:
    sub_1B4D1EC(supportServantData, *(_QWORD *)&classPos);
  }
  v6 = this->fields.classIconSpriteList;
  if ( !v6 )
    goto LABEL_20;
  if ( v6->max_length <= classPos )
    goto LABEL_21;
  supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
  v7 = classPos;
  v8 = v6->m_Items[classPos];
  if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
  }
  klass = supportServantData[1].fields.oldEquipIdList->obj.monitor;
  if ( !klass )
    goto LABEL_20;
LABEL_17:
  if ( klass[6] <= (unsigned int)classPos )
    goto LABEL_21;
  if ( !v8 )
    goto LABEL_20;
  UISprite__set_spriteName(v8, *(System_String_o **)&klass[2 * v7 + 8], 0LL);
}