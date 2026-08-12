void EquipGraphTypeSelectDialog___ctor(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BE4C & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BE4C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EquipGraphTypeSelectDialog__OnClickBondEquip(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphTypeSelectDialog__OnClickEquip(this, 1, v2);
}


void EquipGraphTypeSelectDialog__OnClickCancel(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596BE4A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog_OnClickCancel__);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog__OnClickCancel_b__25_0__);
    byte_596BE4A = 1;
  }
  v3 = Method_EquipGraphTypeSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EquipGraphTypeSelectDialog_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphTypeSelectDialog__OnClickCancel_b__25_0__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
}


void EquipGraphTypeSelectDialog__OnClickDecide(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *equipIdList; // x20
  System_Action_int__long__o *v6; // x21
  System_Action_o *v7; // x20

  if ( (byte_596BE49 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__long__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_long___);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog_OnClickDecide__);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_0__);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_1__);
    byte_596BE49 = 1;
  }
  v3 = Method_EquipGraphTypeSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EquipGraphTypeSelectDialog_OnClickDecide__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  equipIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.equipIdList;
  v6 = (System_Action_int__long__o *)sub_2213CCC(System_Action_int__long__TypeInfo);
  System_Action_int__long____ctor(
    v6,
    (Il2CppObject *)this,
    Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_0__,
    0);
  BasicHelper__ForEach_long_(
    equipIdList,
    (System_Action_int__T__o *)v6,
    (const MethodInfo_3812554 *)Method_BasicHelper_ForEach_long___);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_1__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0);
}


void EquipGraphTypeSelectDialog__OnClickEquip(
        EquipGraphTypeSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  PartyListViewItem_array *partyList; // x21
  CommonUI_o *v9; // x25
  PartyListViewItem_o *cloneSelectParty; // x22
  int32_t memberIndex; // w23
  EventUpValSetupInfo_o *eventUpValInfo; // x24
  EquipGraphListMenu_CallbackFunc_o *v13; // x26
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_596BE48 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog_OnClickEquip__);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog__OnClickEquip_b__23_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BE48 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EquipGraphTypeSelectDialog_OnClickEquip__;
    if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickEquip__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EquipGraphTypeSelectDialog_OnClickEquip__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyList = this->fields.partyList;
    v9 = (CommonUI_o *)Instance;
    cloneSelectParty = this->fields.cloneSelectParty;
    memberIndex = this->fields.memberIndex;
    eventUpValInfo = this->fields.eventUpValInfo;
    v13 = (EquipGraphListMenu_CallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphTypeSelectDialog__OnClickEquip_b__23_0__,
      0);
    if ( !v9 )
      sub_2213CDC(v14, v15);
    CommonUI__OpenEquipGraphListMenu(v9, partyList, cloneSelectParty, memberIndex, eventUpValInfo, v13, type, 0);
  }
}


void EquipGraphTypeSelectDialog__OnClickNormalEquip(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphTypeSelectDialog__OnClickEquip(this, 0, v2);
}


void EquipGraphTypeSelectDialog__OnClickRewardUpEquip(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphTypeSelectDialog__OnClickEquip(this, 2, v2);
}


void EquipGraphTypeSelectDialog__OnEnable(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596BE4B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596BE4B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphTypeSelectDialog__Open(
        EquipGraphTypeSelectDialog_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        System_Action_bool__long____bool____int__o *callback,
        const MethodInfo *method)
{
  bool v7; // w7
  PartyOrganizationListViewItem_o *EquipSvtIdList; // x0
  __int64 v15; // x1
  struct PartyListViewItem_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Int32_array *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_IEnumerable_TSource__o *EquipList; // x0
  struct System_Int64_array *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  struct System_Int64_array *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  __int64 v59; // x2
  BalanceConfig_c *v60; // x0
  struct System_Boolean_array *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x2
  int32_t EquipFriendShipSkillChange_k__BackingField; // w8
  LocalizationManager_c *v70; // x0
  int v71; // w9
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel1; // x20
  UILabel_o *messageLabel2; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x1

  if ( (byte_596BE45 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5687/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_1"*/);
    sub_2213A60(&StringLiteral_5688/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_2"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_5691/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_TITLE"*/);
    byte_596BE45 = 1;
  }
  this->fields.partyList = baseDeckItemList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.partyList,
    (int32_t)baseDeckItemList,
    (System_String_o *)partyItem,
    *(System_String_o **)&member,
    (int32_t)setupInfo,
    (int32_t)callback,
    (bool)method,
    v7);
  if ( !partyItem )
    goto LABEL_20;
  v16 = PartyListViewItem__Clone(partyItem, 0);
  this->fields.cloneSelectParty = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cloneSelectParty,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.memberIndex = member;
  this->fields.eventUpValInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValInfo,
    (int32_t)setupInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.closeCallFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallFunc,
    (int32_t)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                                        EquipSvtIdList,
                                                        0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  v35 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)EquipSvtIdList,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipSvtIdList = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSvtIdList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)this->fields.cloneSelectParty;
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipSvtIdList = PartyListViewItem__GetMember((PartyListViewItem_o *)EquipSvtIdList, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipList = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationListViewItem__GetEquipList(
                                                                     EquipSvtIdList,
                                                                     0);
  v43 = System_Linq_Enumerable__ToArray_long_(
          EquipList,
          (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.equipIdList = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, (int32_t)v43, v44, v45, v46, v47, v48, v49);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationListViewItem__GetEquipList(
                                                               EquipSvtIdList,
                                                               0);
  v51 = System_Linq_Enumerable__ToArray_long_(
          v50,
          (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.originalMemberEquipList = v51;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalMemberEquipList,
    (int32_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v60 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v58, v59);
    v60 = BalanceConfig_TypeInfo;
  }
  v61 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, (unsigned int)v60->static_fields->GrandSvtEquipMax);
  this->fields.updateFlagList = v61;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.updateFlagList,
    (int32_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipFriendShipSkillChange_k__BackingField = EquipSvtIdList->fields._EquipFriendShipSkillChange_k__BackingField;
  v70 = LocalizationManager_TypeInfo;
  v71 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  titleLabel = this->fields.titleLabel;
  this->fields.equipBondSkillChange = EquipFriendShipSkillChange_k__BackingField;
  if ( !v71 )
    j_il2cpp_runtime_class_init_0(v70, v15, v68);
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)EquipSvtIdList, 0);
  messageLabel1 = this->fields.messageLabel1;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_1"*/, 0);
  if ( !messageLabel1 )
    goto LABEL_20;
  UILabel__set_text(messageLabel1, (System_String_o *)EquipSvtIdList, 0);
  messageLabel2 = this->fields.messageLabel2;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_2"*/, 0);
  if ( !messageLabel2
    || (UILabel__set_text(messageLabel2, (System_String_o *)EquipSvtIdList, 0),
        decideLabel = this->fields.decideLabel,
        EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)EquipSvtIdList, 0),
        cancelLabel = this->fields.cancelLabel,
        EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0),
        !cancelLabel) )
  {
LABEL_20:
    sub_2213CDC(EquipSvtIdList, v15);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)EquipSvtIdList, 0);
  EquipGraphTypeSelectDialog__SetEquipSvtLabel(this, v77);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  EquipGraphTypeSelectDialog__SetEquipSprite(this, v78);
}


void EquipGraphTypeSelectDialog__SetEquipSprite(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *gameObject; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  struct PartyListViewItem_o *cloneSelectParty; // x9
  struct System_Int32_array *equipSvtIdList; // x8
  unsigned __int64 v11; // x23
  unsigned __int64 max_length_low; // x10
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *equipSvtInfoList; // x9
  __int64 v14; // x2
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v15; // x29
  __int64 v16; // x2
  Il2CppClass *klass; // x24
  void *monitor; // x25
  int32_t v19; // w24
  UnityEngine_Object_o *friendShipSvtEquipSkillIconSprite; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  UISprite_o *noneEquipSprite; // x24
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v24; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v25; // x8
  UISprite_o *equipSprite; // x25
  __int64 v27; // x2
  UnityEngine_Object_o *v28; // x24
  __int64 v29; // x2
  UISprite_o *v30; // x24
  int v31; // w8
  struct System_Int64_array *equipIdList; // x8
  __int64 v33; // x2
  Il2CppClass *v34; // x24
  void *v35; // x25
  __int64 v36; // x2
  bool v37; // w24
  Il2CppClass *v38; // x24
  void *v39; // x25
  struct System_Int64_array *v40; // x8
  int32_t v41; // [xsp+4h] [xbp-7Ch]
  System_Collections_ICollection_o *self; // [xsp+8h] [xbp-78h]
  Il2CppObject *v43; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_596BE47 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_long___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_20647/*"func_group_icon_385"*/);
    sub_2213A60(&StringLiteral_21323/*"img_bond_category"*/);
    byte_596BE47 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v43 = 0;
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !this->fields.cloneSelectParty
    || (v8 = gameObject,
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)PartyListViewItem__CheckDuplicationGrandQuestEquipment(
                                                                     this->fields.cloneSelectParty,
                                                                     0),
        (cloneSelectParty = this->fields.cloneSelectParty) == 0)
    || (equipSvtIdList = this->fields.equipSvtIdList) == 0 )
  {
LABEL_85:
    sub_2213CDC(gameObject, v7);
  }
  v11 = 0;
  self = (System_Collections_ICollection_o *)cloneSelectParty->fields.duplicatedEquipmentUserSvtIdList;
  while ( 1 )
  {
    max_length_low = LODWORD(equipSvtIdList->max_length);
    if ( (__int64)v11 >= (int)max_length_low )
      break;
    equipSvtInfoList = this->fields.equipSvtInfoList;
    if ( !equipSvtInfoList )
      goto LABEL_85;
    if ( v11 >= LODWORD(equipSvtInfoList->max_length) || v11 >= max_length_low )
      goto LABEL_87;
    v14 = (unsigned int)equipSvtIdList->m_Items[v11];
    v15 = equipSvtInfoList->m_Items[v11];
    if ( (int)v14 < 1 )
    {
      if ( !v15 )
        goto LABEL_85;
      friendShipSvtEquipSkillIconSprite = (UnityEngine_Object_o *)v15->fields.friendShipSvtEquipSkillIconSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v14);
      if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipSkillIconSprite, 0, 0) )
      {
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.friendShipSvtEquipSkillIconSprite;
        if ( !gameObject )
          goto LABEL_85;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0);
        if ( !gameObject )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      noneEquipSprite = v15->fields.noneEquipSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
      AtlasManager__SetEmptyEquipSprite(noneEquipSprite, v11, 0, 0);
    }
    else
    {
      if ( !Master_object )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v14,
                                                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_85;
        klass = entity[1].klass;
        monitor = entity[1].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v16);
        *(_QWORD *)&v45.fields.currentCryptoKey = klass;
        *(_QWORD *)&v45.fields.fakeValue = monitor;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                     v45,
                                                                     0);
        v19 = (int)gameObject;
      }
      else
      {
        v19 = 0;
      }
      v24 = this->fields.equipSvtInfoList;
      if ( !v24 )
        goto LABEL_85;
      if ( v11 >= LODWORD(v24->max_length) )
        goto LABEL_87;
      v25 = v24->m_Items[v11];
      if ( !v25 )
        goto LABEL_85;
      equipSprite = v25->fields.equipSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v16);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEquipFace(equipSprite, v19, 0, 0);
      if ( !v15 )
        goto LABEL_85;
      v28 = (UnityEngine_Object_o *)v15->fields.friendShipSvtEquipSkillIconSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v27);
      if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
      {
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.friendShipSvtEquipSkillIconSprite;
        if ( !gameObject )
          goto LABEL_85;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0);
        if ( !gameObject )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11 == 1, 0);
        if ( v11 == 1 )
        {
          v30 = v15->fields.friendShipSvtEquipSkillIconSprite;
          v31 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
          if ( this->fields.equipBondSkillChange < 1 )
          {
            if ( !v31 )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v29);
            AtlasManager__SetCommon(v30, 0);
            gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.friendShipSvtEquipSkillIconSprite;
            if ( !gameObject )
              goto LABEL_85;
            UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_21323/*"img_bond_category"*/, 0);
          }
          else
          {
            if ( !v31 )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v29);
            AtlasManager__SetEventUI(v30, (System_String_o *)StringLiteral_20647/*"func_group_icon_385"*/, 0);
          }
        }
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      equipIdList = this->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_85;
      if ( v11 >= LODWORD(equipIdList->max_length) )
        goto LABEL_87;
      if ( !v8 )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   v8,
                                                                   &v43,
                                                                   equipIdList->m_Items[v11],
                                                                   (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_67;
      if ( !v43 )
        goto LABEL_85;
      v34 = v43[6].klass;
      v35 = v43[6].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v33);
      *(_QWORD *)&v46.fields.currentCryptoKey = v34;
      *(_QWORD *)&v46.fields.fakeValue = v35;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v46,
                                                                   0);
      if ( (int)gameObject >= 4 )
      {
        if ( !entity || !v43 )
          goto LABEL_85;
        v38 = v43[6].klass;
        v39 = v43[6].monitor;
        v41 = (int32_t)entity[5].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v36);
        *(_QWORD *)&v47.fields.currentCryptoKey = v38;
        *(_QWORD *)&v47.fields.fakeValue = v39;
        v37 = v41 >= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
      }
      else
      {
LABEL_67:
        v37 = 0;
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_85;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v37, 0);
    }
    gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(self, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      goto LABEL_82;
    v40 = this->fields.equipIdList;
    if ( !v40 )
      goto LABEL_85;
    if ( v11 >= LODWORD(v40->max_length) )
LABEL_87:
      sub_2213CE4(gameObject);
    if ( !System_Linq_Enumerable__Contains_long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)self,
            v40->m_Items[v11],
            (const MethodInfo_3876840 *)Method_System_Linq_Enumerable_Contains_long___) )
    {
LABEL_82:
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.duplicationEquipMarkWarningIcon;
      if ( !gameObject )
        goto LABEL_85;
      FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    }
    else
    {
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.duplicationEquipMarkWarningIcon;
      if ( !gameObject )
        goto LABEL_85;
      FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    ++v11;
    if ( !equipSvtIdList )
      goto LABEL_85;
  }
}


void EquipGraphTypeSelectDialog__SetEquipSvtLabel(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EquipGraphTypeSelectDialog_o *v3; // x19
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *equipSvtInfoList; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v5; // x8
  UILabel_o *equipLabel; // x20
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v7; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v8; // x8
  UILabel_o *v9; // x20
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v10; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v11; // x8
  UILabel_o *v12; // x19

  v3 = this;
  if ( (byte_596BE46 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5686/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_BOND"*/);
    sub_2213A60(&StringLiteral_5689/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_NORMAL"*/);
    this = (EquipGraphTypeSelectDialog_o *)sub_2213A60(&StringLiteral_5690/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_REWARD_UP"*/);
    byte_596BE46 = 1;
  }
  equipSvtInfoList = v3->fields.equipSvtInfoList;
  if ( !equipSvtInfoList )
    goto LABEL_18;
  if ( !LODWORD(equipSvtInfoList->max_length) )
    goto LABEL_19;
  v5 = equipSvtInfoList->m_Items[0];
  if ( !v5 )
    goto LABEL_18;
  equipLabel = v5->fields.equipLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_NORMAL"*/, 0);
  if ( !equipLabel )
    goto LABEL_18;
  UILabel__set_text(equipLabel, (System_String_o *)this, 0);
  v7 = v3->fields.equipSvtInfoList;
  if ( !v7 )
    goto LABEL_18;
  if ( (v7->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  v8 = v7->m_Items[1];
  if ( !v8
    || (v9 = v8->fields.equipLabel,
        this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5686/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_BOND"*/, 0),
        !v9)
    || (UILabel__set_text(v9, (System_String_o *)this, 0), (v10 = v3->fields.equipSvtInfoList) == 0) )
  {
LABEL_18:
    sub_2213CDC(this, method);
  }
  if ( LODWORD(v10->max_length) <= 2 )
LABEL_19:
    sub_2213CE4(this);
  v11 = v10->m_Items[2];
  if ( !v11 )
    goto LABEL_18;
  v12 = v11->fields.equipLabel;
  this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_REWARD_UP"*/, 0);
  if ( !v12 )
    goto LABEL_18;
  UILabel__set_text(v12, (System_String_o *)this, 0);
}


void EquipGraphTypeSelectDialog___OnClickCancel_b__25_0(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Action_bool__long____bool____int__o *closeCallFunc; // x8

  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallFunc = this->fields.closeCallFunc;
  if ( !closeCallFunc )
    sub_2213CDC(v3, v4);
  ((void (__fastcall *)(intptr_t, _QWORD, struct System_Int64_array *, struct System_Boolean_array *, __int64, intptr_t))closeCallFunc->fields.invoke_impl)(
    closeCallFunc->fields.method_code,
    0,
    this->fields.equipIdList,
    this->fields.updateFlagList,
    0xFFFFFFFFLL,
    closeCallFunc->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphTypeSelectDialog___OnClickDecide_b__24_0(
        EquipGraphTypeSelectDialog_o *this,
        int32_t i,
        int64_t equipId,
        const MethodInfo *method)
{
  struct System_Int64_array *originalMemberEquipList; // x9
  struct System_Boolean_array *updateFlagList; // x9

  originalMemberEquipList = this->fields.originalMemberEquipList;
  if ( !originalMemberEquipList )
    goto LABEL_8;
  if ( LODWORD(originalMemberEquipList->max_length) <= i )
    goto LABEL_9;
  if ( originalMemberEquipList->m_Items[i] == equipId )
    return;
  updateFlagList = this->fields.updateFlagList;
  if ( !updateFlagList )
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&i);
  if ( LODWORD(updateFlagList->max_length) <= i )
LABEL_9:
    sub_2213CE4(this);
  updateFlagList->m_Items[i] = 1;
}


void EquipGraphTypeSelectDialog___OnClickDecide_b__24_1(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EquipGraphTypeSelectDialog___c_c *v4; // x0
  struct System_Action_bool__long____bool____int__o *closeCallFunc; // x24
  System_Boolean_array *updateFlagList; // x20
  struct EquipGraphTypeSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__24_2; // x21
  Il2CppObject *v9; // x22
  struct EquipGraphTypeSelectDialog___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  _BOOL8 v17; // x0
  __int64 v18; // x1

  if ( (byte_596BE4E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_bool___);
    sub_2213A60(&System_Func_bool__bool__TypeInfo);
    sub_2213A60(&Method_EquipGraphTypeSelectDialog___c__OnClickDecide_b__24_2__);
    sub_2213A60(&EquipGraphTypeSelectDialog___c_TypeInfo);
    byte_596BE4E = 1;
  }
  v4 = EquipGraphTypeSelectDialog___c_TypeInfo;
  closeCallFunc = this->fields.closeCallFunc;
  updateFlagList = this->fields.updateFlagList;
  if ( !*(&EquipGraphTypeSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphTypeSelectDialog___c_TypeInfo, method, v2);
    v4 = EquipGraphTypeSelectDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__24_2 = static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EquipGraphTypeSelectDialog___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__24_2 = (System_Func_bool__bool__o *)sub_2213CCC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__24_2, v9, Method_EquipGraphTypeSelectDialog___c__OnClickDecide_b__24_2__, 0);
    v10 = EquipGraphTypeSelectDialog___c_TypeInfo->static_fields;
    v10->__9__24_2 = _9__24_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__24_2, (int32_t)_9__24_2, v11, v12, v13, v14, v15, v16);
  }
  v17 = BasicHelper__Any_bool_(
          updateFlagList,
          (System_Func_T__bool__o *)_9__24_2,
          (const MethodInfo_380FA18 *)Method_BasicHelper_Any_bool___);
  if ( !closeCallFunc )
    sub_2213CDC(v17, v18);
  ((void (__fastcall *)(intptr_t, _BOOL8, struct System_Int64_array *, struct System_Boolean_array *, _QWORD, intptr_t))closeCallFunc->fields.invoke_impl)(
    closeCallFunc->fields.method_code,
    v17,
    this->fields.equipIdList,
    this->fields.updateFlagList,
    (unsigned int)this->fields.equipBondSkillChange,
    closeCallFunc->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphTypeSelectDialog___OnClickEquip_b__23_0(
        EquipGraphTypeSelectDialog_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        int32_t equipGraphType,
        const MethodInfo *method)
{
  EquipGraphTypeSelectDialog_o *v8; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v10; // q1
  __int64 v11; // x2
  int v12; // w8
  int32_t EquipFriendShipSkillChange_k__BackingField; // w9
  struct System_Boolean_array *updateFlagList; // x10
  int v15; // w22
  struct System_Int64_array *equipIdList; // x8
  int64_t v17; // x25
  __int64 v18; // x1
  __int64 v19; // x2
  PartyListViewItem_o *cloneSelectParty; // x22
  int32_t memberIndex; // w23
  System_Int32_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Int64_array *EquipList; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo *v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39[2]; // [xsp+40h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_596BE4D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (EquipGraphTypeSelectDialog_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BE4D = 1;
  }
  memset(v39, 0, sizeof(v39));
  if ( result != 1 )
    goto LABEL_30;
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v39[0].fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v39[0].fields.fakeValue = v10;
    *(_OWORD *)&v39[1].fields.currentCryptoKey = *(_OWORD *)&v39[0].fields.currentCryptoKey;
    *(_OWORD *)&v39[1].fields.fakeValue = v10;
    this = (EquipGraphTypeSelectDialog_o *)EquipGraphListViewItem__IsNeedUpdateDuplication(item, 0);
    v12 = (unsigned __int8)this & 1;
    if ( equipGraphType == 1 )
    {
      EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
LABEL_11:
      if ( !v8 )
        goto LABEL_32;
      v8->fields.equipBondSkillChange = EquipFriendShipSkillChange_k__BackingField;
    }
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&result, item);
    this = (EquipGraphTypeSelectDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v39, 0, 0);
    v12 = 0;
    EquipFriendShipSkillChange_k__BackingField = 0;
    v39[1] = v39[0];
    if ( equipGraphType == 1 )
      goto LABEL_11;
  }
  updateFlagList = v8->fields.updateFlagList;
  if ( !updateFlagList )
    goto LABEL_32;
  if ( LODWORD(updateFlagList->max_length) <= equipGraphType )
    goto LABEL_33;
  v15 = v12 | (v8->fields.equipBondSkillChange >= 0);
  updateFlagList->m_Items[equipGraphType] |= (unsigned __int8)v12 | (v8->fields.equipBondSkillChange >= 0);
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_32;
  if ( LODWORD(equipIdList->max_length) <= equipGraphType )
LABEL_33:
    sub_2213CE4(this);
  v17 = equipIdList->m_Items[equipGraphType];
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&result, v11);
  v38 = v39[1];
  if ( v17 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v38, 0) || v15 )
  {
    cloneSelectParty = v8->fields.cloneSelectParty;
    memberIndex = v8->fields.memberIndex;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
    v37 = v39[1];
    this = (EquipGraphTypeSelectDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v37, 0);
    if ( !cloneSelectParty )
      goto LABEL_32;
    PartyListViewItem__SetEquipRemoveIncludeSelf(cloneSelectParty, memberIndex, (int64_t)this, equipGraphType, 0);
    this = (EquipGraphTypeSelectDialog_o *)v8->fields.cloneSelectParty;
    if ( !this
      || (this = (EquipGraphTypeSelectDialog_o *)PartyListViewItem__GetMember(
                                                   (PartyListViewItem_o *)this,
                                                   v8->fields.memberIndex,
                                                   0)) == 0
      || (this = (EquipGraphTypeSelectDialog_o *)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                                   (PartyOrganizationListViewItem_o *)this,
                                                   0)) == 0
      || (v22 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)this,
                  (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
          v8->fields.equipSvtIdList = v22,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v8->fields.equipSvtIdList,
            (int32_t)v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28),
          (this = (EquipGraphTypeSelectDialog_o *)v8->fields.cloneSelectParty) == 0)
      || (this = (EquipGraphTypeSelectDialog_o *)PartyListViewItem__GetMember(
                                                   (PartyListViewItem_o *)this,
                                                   v8->fields.memberIndex,
                                                   0)) == 0 )
    {
LABEL_32:
      sub_2213CDC(this, *(_QWORD *)&result);
    }
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)this, 0);
    v8->fields.equipIdList = EquipList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.equipIdList,
      (int32_t)EquipList,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    EquipGraphTypeSelectDialog__SetEquipSprite(v8, v36);
  }
LABEL_30:
  this = (EquipGraphTypeSelectDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_32;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)this, 0, 0);
}


void EquipGraphTypeSelectDialog_EquipSvtInfo___ctor(
        EquipGraphTypeSelectDialog_EquipSvtInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphTypeSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BE4F & 1) == 0 )
  {
    sub_2213A60(&EquipGraphTypeSelectDialog___c_TypeInfo);
    byte_596BE4F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EquipGraphTypeSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphTypeSelectDialog___c_TypeInfo->static_fields->__9 = (struct EquipGraphTypeSelectDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EquipGraphTypeSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EquipGraphTypeSelectDialog___c___ctor(EquipGraphTypeSelectDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EquipGraphTypeSelectDialog___c___OnClickDecide_b__24_2(
        EquipGraphTypeSelectDialog___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}