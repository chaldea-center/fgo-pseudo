void EquipGraphTypeSelectDialog___ctor(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B75 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C22B75 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  if ( (byte_4C22B73 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog_OnClickCancel__);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog__OnClickCancel_b__25_0__);
    byte_4C22B73 = 1;
  }
  v3 = Method_EquipGraphTypeSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EquipGraphTypeSelectDialog_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C22B72 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__long__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_long___);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog_OnClickDecide__);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_0__);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_1__);
    byte_4C22B72 = 1;
  }
  v3 = Method_EquipGraphTypeSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EquipGraphTypeSelectDialog_OnClickDecide__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  equipIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.equipIdList;
  v6 = (System_Action_int__long__o *)sub_1C2D6DC(System_Action_int__long__TypeInfo);
  System_Action_int__long____ctor(
    v6,
    (Il2CppObject *)this,
    Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_0__,
    0);
  BasicHelper__ForEach_long_(
    equipIdList,
    (System_Action_int__T__o *)v6,
    (const MethodInfo_30BA5F8 *)Method_BasicHelper_ForEach_long___);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  PartyListViewItem_o *cloneSelectParty; // x22
  int32_t memberIndex; // w23
  EventUpValSetupInfo_o *eventUpValInfo; // x24
  CommonUI_o *v12; // x25
  EquipGraphListMenu_CallbackFunc_o *v13; // x26
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4C22B71 & 1) == 0 )
  {
    sub_1C2D490(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog_OnClickEquip__);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog__OnClickEquip_b__23_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22B71 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EquipGraphTypeSelectDialog_OnClickEquip__;
    if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickEquip__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_EquipGraphTypeSelectDialog_OnClickEquip__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyList = this->fields.partyList;
    cloneSelectParty = this->fields.cloneSelectParty;
    memberIndex = this->fields.memberIndex;
    eventUpValInfo = this->fields.eventUpValInfo;
    v12 = (CommonUI_o *)Instance;
    v13 = (EquipGraphListMenu_CallbackFunc_o *)sub_1C2D6DC(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphTypeSelectDialog__OnClickEquip_b__23_0__,
      0);
    if ( !v12 )
      sub_1C2D6EC(v14, v15);
    CommonUI__OpenEquipGraphListMenu(v12, partyList, cloneSelectParty, memberIndex, eventUpValInfo, v13, type, 0);
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

  if ( (byte_4C22B74 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C22B74 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
  PartyOrganizationListViewItem_o *EquipSvtIdList; // x0
  __int64 v14; // x1
  struct PartyListViewItem_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EquipList; // x0
  struct System_Int64_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct System_Int64_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  BalanceConfig_c *v33; // x0
  struct System_Boolean_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel1; // x20
  UILabel_o *messageLabel2; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1

  if ( (byte_4C22B6E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5478/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_1"*/);
    sub_1C2D490(&StringLiteral_5479/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_2"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_5482/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_TITLE"*/);
    byte_4C22B6E = 1;
  }
  this->fields.partyList = baseDeckItemList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.partyList,
    (int32_t)baseDeckItemList,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  if ( !partyItem )
    goto LABEL_20;
  v15 = PartyListViewItem__Clone(partyItem, 0);
  this->fields.cloneSelectParty = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cloneSelectParty, (int32_t)v15, v16, v17);
  this->fields.memberIndex = member;
  this->fields.eventUpValInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, (int32_t)setupInfo, v18, v19);
  this->fields.closeCallFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallFunc, (int32_t)callback, v20, v21);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                                        EquipSvtIdList,
                                                        0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  v22 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)EquipSvtIdList,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipSvtIdList = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, (int32_t)v22, v23, v24);
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)this->fields.cloneSelectParty;
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipSvtIdList = PartyListViewItem__GetMember((PartyListViewItem_o *)EquipSvtIdList, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipList = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationListViewItem__GetEquipList(
                                                                     EquipSvtIdList,
                                                                     0);
  v26 = System_Linq_Enumerable__ToArray_long_(
          EquipList,
          (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.equipIdList = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v26, v27, v28);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationListViewItem__GetEquipList(
                                                               EquipSvtIdList,
                                                               0);
  v30 = System_Linq_Enumerable__ToArray_long_(
          v29,
          (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.originalMemberEquipList = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.originalMemberEquipList, (int32_t)v30, v31, v32);
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v34 = (struct System_Boolean_array *)sub_1C2D538(bool___TypeInfo, (unsigned int)v33->static_fields->GrandSvtEquipMax);
  this->fields.updateFlagList = v34;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.updateFlagList, (int32_t)v34, v35, v36);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  this->fields.equipBondSkillChange = EquipSvtIdList->fields._EquipFriendShipSkillChange_k__BackingField;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5482/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)EquipSvtIdList, 0);
  messageLabel1 = this->fields.messageLabel1;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5478/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_1"*/, 0);
  if ( !messageLabel1 )
    goto LABEL_20;
  UILabel__set_text(messageLabel1, (System_String_o *)EquipSvtIdList, 0);
  messageLabel2 = this->fields.messageLabel2;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5479/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_2"*/, 0);
  if ( !messageLabel2
    || (UILabel__set_text(messageLabel2, (System_String_o *)EquipSvtIdList, 0),
        decideLabel = this->fields.decideLabel,
        EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)EquipSvtIdList, 0),
        cancelLabel = this->fields.cancelLabel,
        EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0),
        !cancelLabel) )
  {
LABEL_20:
    sub_1C2D6EC(EquipSvtIdList, v14);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)EquipSvtIdList, 0);
  EquipGraphTypeSelectDialog__SetEquipSvtLabel(this, v42);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  EquipGraphTypeSelectDialog__SetEquipSprite(this, v43);
}


void EquipGraphTypeSelectDialog__SetEquipSprite(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *gameObject; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x2
  struct PartyListViewItem_o *cloneSelectParty; // x9
  struct System_Int32_array *equipSvtIdList; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 max_length_low; // x10
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *equipSvtInfoList; // x9
  int32_t v13; // w2
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v14; // x29
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v17; // w24
  UnityEngine_Object_o *friendShipSvtEquipSkillIconSprite; // x24
  UISprite_o *noneEquipSprite; // x24
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v20; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v21; // x8
  UISprite_o *equipSprite; // x25
  UnityEngine_Object_o *v23; // x24
  int32_t equipBondSkillChange; // w25
  UISprite_o *v25; // x24
  struct System_Int64_array *equipIdList; // x8
  void *v27; // x24
  Il2CppClass *v28; // x25
  bool v29; // w24
  void *v30; // x24
  Il2CppClass *v31; // x25
  struct System_Int64_array *v32; // x8
  int32_t v33; // [xsp+4h] [xbp-7Ch]
  System_Collections_ICollection_o *self; // [xsp+8h] [xbp-78h]
  Il2CppObject *v35; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C22B70 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_long___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_19702/*"func_group_icon_385"*/);
    sub_1C2D490(&StringLiteral_20325/*"img_bond_category"*/);
    byte_4C22B70 = 1;
  }
  v35 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !this->fields.cloneSelectParty
    || (v6 = gameObject,
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)PartyListViewItem__CheckDuplicationGrandQuestEquipment(
                                                                     this->fields.cloneSelectParty,
                                                                     0),
        (cloneSelectParty = this->fields.cloneSelectParty) == 0)
    || (equipSvtIdList = this->fields.equipSvtIdList) == 0 )
  {
LABEL_83:
    sub_1C2D6EC(gameObject, v5);
  }
  v10 = 0;
  self = (System_Collections_ICollection_o *)cloneSelectParty->fields.duplicatedEquipmentUserSvtIdList;
  while ( 1 )
  {
    max_length_low = LODWORD(equipSvtIdList->max_length);
    if ( (__int64)v10 >= (int)max_length_low )
      break;
    equipSvtInfoList = this->fields.equipSvtInfoList;
    if ( !equipSvtInfoList )
      goto LABEL_83;
    if ( v10 >= LODWORD(equipSvtInfoList->max_length) || v10 >= max_length_low )
      goto LABEL_85;
    v13 = equipSvtIdList->m_Items[v10];
    v14 = equipSvtInfoList->m_Items[v10];
    if ( v13 < 1 )
    {
      if ( !v14 )
        goto LABEL_83;
      friendShipSvtEquipSkillIconSprite = (UnityEngine_Object_o *)v14->fields.friendShipSvtEquipSkillIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipSkillIconSprite, 0, 0) )
      {
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.friendShipSvtEquipSkillIconSprite;
        if ( !gameObject )
          goto LABEL_83;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0);
        if ( !gameObject )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      noneEquipSprite = v14->fields.noneEquipSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEmptyEquipSprite(noneEquipSprite, v10, 0, 0);
    }
    else
    {
      if ( !Master_object )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v13,
                                                                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_83;
        klass = entity[1].klass;
        monitor = entity[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v37.fields.currentCryptoKey = klass;
        *(_QWORD *)&v37.fields.fakeValue = monitor;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                     v37,
                                                                     0);
        v17 = (int)gameObject;
      }
      else
      {
        v17 = 0;
      }
      v20 = this->fields.equipSvtInfoList;
      if ( !v20 )
        goto LABEL_83;
      if ( v10 >= LODWORD(v20->max_length) )
        goto LABEL_85;
      v21 = v20->m_Items[v10];
      if ( !v21 )
        goto LABEL_83;
      equipSprite = v21->fields.equipSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEquipFace(equipSprite, v17, 0, 0);
      if ( !v14 )
        goto LABEL_83;
      v23 = (UnityEngine_Object_o *)v14->fields.friendShipSvtEquipSkillIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.friendShipSvtEquipSkillIconSprite;
        if ( !gameObject )
          goto LABEL_83;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0);
        if ( !gameObject )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10 == 1, 0);
        if ( v10 == 1 )
        {
          equipBondSkillChange = this->fields.equipBondSkillChange;
          v25 = v14->fields.friendShipSvtEquipSkillIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( equipBondSkillChange < 1 )
          {
            AtlasManager__SetCommon(v25, 0);
            gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.friendShipSvtEquipSkillIconSprite;
            if ( !gameObject )
              goto LABEL_83;
            UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20325/*"img_bond_category"*/, 0);
          }
          else
          {
            AtlasManager__SetEventUI(v25, (System_String_o *)StringLiteral_19702/*"func_group_icon_385"*/, 0);
          }
        }
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      equipIdList = this->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_83;
      if ( v10 >= LODWORD(equipIdList->max_length) )
        goto LABEL_85;
      if ( !v6 )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   v6,
                                                                   &v35,
                                                                   equipIdList->m_Items[v10],
                                                                   (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_65;
      if ( !v35 )
        goto LABEL_83;
      v28 = v35[6].klass;
      v27 = v35[6].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = v28;
      *(_QWORD *)&v38.fields.fakeValue = v27;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                   v38,
                                                                   0);
      if ( (int)gameObject >= 4 )
      {
        if ( !entity || !v35 )
          goto LABEL_83;
        v31 = v35[6].klass;
        v30 = v35[6].monitor;
        v33 = (int32_t)entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v31;
        *(_QWORD *)&v39.fields.fakeValue = v30;
        v29 = v33 >= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0);
      }
      else
      {
LABEL_65:
        v29 = 0;
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v29, 0);
    }
    gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(self, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      goto LABEL_80;
    v32 = this->fields.equipIdList;
    if ( !v32 )
      goto LABEL_83;
    if ( v10 >= LODWORD(v32->max_length) )
LABEL_85:
      sub_1C2D6F4(gameObject, v5, v7);
    if ( !System_Linq_Enumerable__Contains_long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)self,
            v32->m_Items[v10],
            (const MethodInfo_30EBAF8 *)Method_System_Linq_Enumerable_Contains_long___) )
    {
LABEL_80:
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.duplicationEquipMarkWarningIcon;
      if ( !gameObject )
        goto LABEL_83;
      FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
    }
    else
    {
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.duplicationEquipMarkWarningIcon;
      if ( !gameObject )
        goto LABEL_83;
      FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    ++v10;
    if ( !equipSvtIdList )
      goto LABEL_83;
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
  if ( (byte_4C22B6F & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5477/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_BOND"*/);
    sub_1C2D490(&StringLiteral_5480/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_NORMAL"*/);
    this = (EquipGraphTypeSelectDialog_o *)sub_1C2D490(&StringLiteral_5481/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_REWARD_UP"*/);
    byte_4C22B6F = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5480/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_NORMAL"*/, 0);
  if ( !equipLabel )
    goto LABEL_18;
  UILabel__set_text(equipLabel, (System_String_o *)this, 0);
  v7 = v3->fields.equipSvtInfoList;
  if ( !v7 )
    goto LABEL_18;
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_19;
  v8 = v7->m_Items[1];
  if ( !v8
    || (v9 = v8->fields.equipLabel,
        this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5477/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_BOND"*/, 0),
        !v9)
    || (UILabel__set_text(v9, (System_String_o *)this, 0), (v10 = v3->fields.equipSvtInfoList) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(this, method);
  }
  if ( LODWORD(v10->max_length) <= 2 )
LABEL_19:
    sub_1C2D6F4(this, method, v2);
  v11 = v10->m_Items[2];
  if ( !v11 )
    goto LABEL_18;
  v12 = v11->fields.equipLabel;
  this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5481/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_REWARD_UP"*/, 0);
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
    sub_1C2D6EC(v3, v4);
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
    sub_1C2D6EC(this, i);
  if ( LODWORD(updateFlagList->max_length) <= i )
LABEL_9:
    sub_1C2D6F4(this, *(_QWORD *)&i, equipId);
  updateFlagList->m_Items[i] = 1;
}


void EquipGraphTypeSelectDialog___OnClickDecide_b__24_1(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  EquipGraphTypeSelectDialog___c_c *v3; // x0
  struct System_Action_bool__long____bool____int__o *closeCallFunc; // x24
  System_Boolean_array *updateFlagList; // x20
  System_Func_bool__bool__o *_9__24_2; // x21
  Il2CppObject *v7; // x22
  struct EquipGraphTypeSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4C22B77 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_bool___);
    sub_1C2D490(&System_Func_bool__bool__TypeInfo);
    sub_1C2D490(&Method_EquipGraphTypeSelectDialog___c__OnClickDecide_b__24_2__);
    sub_1C2D490(&EquipGraphTypeSelectDialog___c_TypeInfo);
    byte_4C22B77 = 1;
  }
  v3 = EquipGraphTypeSelectDialog___c_TypeInfo;
  closeCallFunc = this->fields.closeCallFunc;
  updateFlagList = this->fields.updateFlagList;
  if ( !EquipGraphTypeSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphTypeSelectDialog___c_TypeInfo);
    v3 = EquipGraphTypeSelectDialog___c_TypeInfo;
  }
  _9__24_2 = v3->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EquipGraphTypeSelectDialog___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__24_2 = (System_Func_bool__bool__o *)sub_1C2D6DC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__24_2, v7, Method_EquipGraphTypeSelectDialog___c__OnClickDecide_b__24_2__, 0);
    static_fields = EquipGraphTypeSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__24_2 = _9__24_2;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__24_2, (int32_t)_9__24_2, v9, v10);
  }
  v11 = BasicHelper__Any_bool_(
          updateFlagList,
          (System_Func_T__bool__o *)_9__24_2,
          (const MethodInfo_30B7928 *)Method_BasicHelper_Any_bool___);
  if ( !closeCallFunc )
    sub_1C2D6EC(v11, v12);
  ((void (__fastcall *)(intptr_t, _BOOL8, struct System_Int64_array *, struct System_Boolean_array *, _QWORD, intptr_t))closeCallFunc->fields.invoke_impl)(
    closeCallFunc->fields.method_code,
    v11,
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
  __int128 v10; // q0
  __int128 v11; // q0
  __int64 v12; // x2
  int v13; // w8
  int32_t EquipFriendShipSkillChange_k__BackingField; // w9
  struct System_Boolean_array *updateFlagList; // x10
  int v16; // w22
  struct System_Int64_array *equipIdList; // x8
  int64_t v18; // x25
  int64_t v19; // x0
  PartyListViewItem_o *cloneSelectParty; // x22
  int32_t memberIndex; // w23
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Int64_array *EquipList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+80h] [xbp-60h] BYREF

  v8 = this;
  if ( (byte_4C22B76 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (EquipGraphTypeSelectDialog_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22B76 = 1;
  }
  if ( result != 1 )
    goto LABEL_30;
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v10;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v11;
    this = (EquipGraphTypeSelectDialog_o *)EquipGraphListViewItem__IsNeedUpdateDuplication(item, 0);
    v13 = (unsigned __int8)this & 1;
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
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (EquipGraphTypeSelectDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0, 0);
    v13 = 0;
    EquipFriendShipSkillChange_k__BackingField = 0;
    v32 = v33;
    if ( equipGraphType == 1 )
      goto LABEL_11;
  }
  updateFlagList = v8->fields.updateFlagList;
  if ( !updateFlagList )
    goto LABEL_32;
  if ( LODWORD(updateFlagList->max_length) <= equipGraphType )
    goto LABEL_33;
  v16 = v13 | (v8->fields.equipBondSkillChange >= 0);
  updateFlagList->m_Items[equipGraphType] |= (unsigned __int8)v13 | (v8->fields.equipBondSkillChange >= 0);
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_32;
  if ( LODWORD(equipIdList->max_length) <= equipGraphType )
LABEL_33:
    sub_1C2D6F4(this, *(_QWORD *)&result, v12);
  v18 = equipIdList->m_Items[equipGraphType];
  v31 = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v30 = v31;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
  if ( v16 || v18 != v19 )
  {
    cloneSelectParty = v8->fields.cloneSelectParty;
    memberIndex = v8->fields.memberIndex;
    v31 = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v31;
    this = (EquipGraphTypeSelectDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
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
                  (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
          v8->fields.equipSvtIdList = v22,
          sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.equipSvtIdList, (int32_t)v22, v23, v24),
          (this = (EquipGraphTypeSelectDialog_o *)v8->fields.cloneSelectParty) == 0)
      || (this = (EquipGraphTypeSelectDialog_o *)PartyListViewItem__GetMember(
                                                   (PartyListViewItem_o *)this,
                                                   v8->fields.memberIndex,
                                                   0)) == 0 )
    {
LABEL_32:
      sub_1C2D6EC(this, *(_QWORD *)&result);
    }
    EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)this, 0);
    v8->fields.equipIdList = EquipList;
    sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.equipIdList, (int32_t)EquipList, v26, v27);
    EquipGraphTypeSelectDialog__SetEquipSprite(v8, v28);
  }
LABEL_30:
  this = (EquipGraphTypeSelectDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C22B78 & 1) == 0 )
  {
    sub_1C2D490(&EquipGraphTypeSelectDialog___c_TypeInfo);
    byte_4C22B78 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EquipGraphTypeSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphTypeSelectDialog___c_TypeInfo->static_fields->__9 = (struct EquipGraphTypeSelectDialog___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EquipGraphTypeSelectDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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