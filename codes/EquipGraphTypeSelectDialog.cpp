void __fastcall EquipGraphTypeSelectDialog___ctor(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B403EF & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B403EF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EquipGraphTypeSelectDialog__OnClickBondEquip(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphTypeSelectDialog__OnClickEquip(this, 1, v2);
}


void __fastcall EquipGraphTypeSelectDialog__OnClickCancel(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B403ED & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog_OnClickCancel__, v3);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog__OnClickCancel_b__25_0__, v4);
    byte_4B403ED = 1;
  }
  v5 = Method_EquipGraphTypeSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BDB890(Method_EquipGraphTypeSelectDialog_OnClickCancel__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphTypeSelectDialog__OnClickCancel_b__25_0__, 0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall EquipGraphTypeSelectDialog__OnClickDecide(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Collections_Generic_IEnumerable_T__o *equipIdList; // x20
  System_Action_int__long__o *v11; // x21
  System_Action_o *v12; // x20

  if ( (byte_4B403EC & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__long__TypeInfo, method);
    sub_1BDB878(&System_Action_TypeInfo, v3);
    sub_1BDB878(&Method_BasicHelper_ForEach_long___, v4);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog_OnClickDecide__, v5);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_0__, v6);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_1__, v7);
    byte_4B403EC = 1;
  }
  v8 = Method_EquipGraphTypeSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BDB890(Method_EquipGraphTypeSelectDialog_OnClickDecide__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0LL);
  equipIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.equipIdList;
  v11 = (System_Action_int__long__o *)sub_1BDBAC4(System_Action_int__long__TypeInfo);
  System_Action_int__long____ctor(
    v11,
    (Il2CppObject *)this,
    Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_0__,
    0LL);
  BasicHelper__ForEach_long_(
    equipIdList,
    (System_Action_int__T__o *)v11,
    (const MethodInfo_301F704 *)Method_BasicHelper_ForEach_long___);
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphTypeSelectDialog__OnClickDecide_b__24_1__, 0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphTypeSelectDialog__OnClickEquip(
        EquipGraphTypeSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x0
  PartyListViewItem_array *partyList; // x21
  PartyListViewItem_o *cloneSelectParty; // x22
  int32_t memberIndex; // w23
  EventUpValSetupInfo_o *eventUpValInfo; // x19
  CommonUI_o *v21; // x24
  EquipGraphListMenu_CallbackFunc_o *v22; // x25

  if ( (byte_4B403EB & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListMenu_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog_OnClickEquip__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog___c__DisplayClass23_0__OnClickEquip_b__0__, v7);
    sub_1BDB878(&EquipGraphTypeSelectDialog___c__DisplayClass23_0_TypeInfo, v8);
    byte_4B403EB = 1;
  }
  v9 = sub_1BDBAC4(EquipGraphTypeSelectDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = type;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  if ( this->fields.baseState == 2 )
  {
    v14 = Method_EquipGraphTypeSelectDialog_OnClickEquip__;
    if ( (*((_BYTE *)Method_EquipGraphTypeSelectDialog_OnClickEquip__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BDB890(Method_EquipGraphTypeSelectDialog_OnClickEquip__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyList = this->fields.partyList;
    cloneSelectParty = this->fields.cloneSelectParty;
    memberIndex = this->fields.memberIndex;
    eventUpValInfo = this->fields.eventUpValInfo;
    v21 = (CommonUI_o *)Instance;
    v22 = (EquipGraphListMenu_CallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)v9,
      Method_EquipGraphTypeSelectDialog___c__DisplayClass23_0__OnClickEquip_b__0__,
      0LL);
    if ( v21 )
    {
      CommonUI__OpenEquipGraphListMenu(
        v21,
        partyList,
        cloneSelectParty,
        memberIndex,
        eventUpValInfo,
        v22,
        *(_DWORD *)(v9 + 16),
        0LL);
      return;
    }
LABEL_10:
    sub_1BDBAD4(v10, v11);
  }
}


void __fastcall EquipGraphTypeSelectDialog__OnClickNormalEquip(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphTypeSelectDialog__OnClickEquip(this, 0, v2);
}


void __fastcall EquipGraphTypeSelectDialog__OnClickRewardUpEquip(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphTypeSelectDialog__OnClickEquip(this, 2, v2);
}


void __fastcall EquipGraphTypeSelectDialog__OnEnable(EquipGraphTypeSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B403EE & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4B403EE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43873512(transform, (System_String_o *)StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphTypeSelectDialog__Open(
        EquipGraphTypeSelectDialog_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        System_Action_bool__long____bool____int__o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  PartyOrganizationListViewItem_o *EquipSvtIdList; // x0
  __int64 v23; // x1
  struct PartyListViewItem_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Int32_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EquipList; // x0
  struct System_Int64_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  struct System_Int64_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  BalanceConfig_c *v42; // x0
  struct System_Boolean_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel1; // x20
  UILabel_o *messageLabel2; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1

  if ( (byte_4B403E8 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, baseDeckItemList);
    sub_1BDB878(&bool___TypeInfo, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_long___, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1BDB878(&LocalizationManager_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_5520/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_1"*/, v17);
    sub_1BDB878(&StringLiteral_5521/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_2"*/, v18);
    sub_1BDB878(&StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_1BDB878(&StringLiteral_5524/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_TITLE"*/, v21);
    byte_4B403E8 = 1;
  }
  this->fields.partyList = baseDeckItemList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.partyList,
    (int32_t)baseDeckItemList,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  if ( !partyItem )
    goto LABEL_20;
  v24 = PartyListViewItem__Clone(partyItem, 0LL);
  this->fields.cloneSelectParty = v24;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cloneSelectParty, (int32_t)v24, v25, v26);
  this->fields.memberIndex = member;
  this->fields.eventUpValInfo = setupInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, (int32_t)setupInfo, v27, v28);
  this->fields.closeCallFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallFunc, (int32_t)callback, v29, v30);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0LL);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                                        EquipSvtIdList,
                                                        0LL);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  v31 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)EquipSvtIdList,
          (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipSvtIdList = v31;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, (int32_t)v31, v32, v33);
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)this->fields.cloneSelectParty;
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipSvtIdList = PartyListViewItem__GetMember((PartyListViewItem_o *)EquipSvtIdList, member, 0LL);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  EquipList = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationListViewItem__GetEquipList(
                                                                     EquipSvtIdList,
                                                                     0LL);
  v35 = System_Linq_Enumerable__ToArray_long_(
          EquipList,
          (const MethodInfo_3070720 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.equipIdList = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v35, v36, v37);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0LL);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationListViewItem__GetEquipList(
                                                               EquipSvtIdList,
                                                               0LL);
  v39 = System_Linq_Enumerable__ToArray_long_(
          v38,
          (const MethodInfo_3070720 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.originalMemberEquipList = v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.originalMemberEquipList, (int32_t)v39, v40, v41);
  v42 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  v43 = (struct System_Boolean_array *)sub_1BDB920(bool___TypeInfo, (unsigned int)v42->static_fields->GrandSvtEquipMax);
  this->fields.updateFlagList = v43;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.updateFlagList, (int32_t)v43, v44, v45);
  EquipSvtIdList = PartyListViewItem__GetMember(partyItem, member, 0LL);
  if ( !EquipSvtIdList )
    goto LABEL_20;
  this->fields.equipBondSkillChange = EquipSvtIdList->fields._EquipFriendShipSkillChange_k__BackingField;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_5524/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_TITLE"*/,
                                                        0LL);
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)EquipSvtIdList, 0LL);
  messageLabel1 = this->fields.messageLabel1;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_5520/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_1"*/,
                                                        0LL);
  if ( !messageLabel1 )
    goto LABEL_20;
  UILabel__set_text(messageLabel1, (System_String_o *)EquipSvtIdList, 0LL);
  messageLabel2 = this->fields.messageLabel2;
  EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_5521/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_MESSAGE_2"*/,
                                                        0LL);
  if ( !messageLabel2
    || (UILabel__set_text(messageLabel2, (System_String_o *)EquipSvtIdList, 0LL),
        decideLabel = this->fields.decideLabel,
        EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)EquipSvtIdList, 0LL),
        cancelLabel = this->fields.cancelLabel,
        EquipSvtIdList = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL),
        !cancelLabel) )
  {
LABEL_20:
    sub_1BDBAD4(EquipSvtIdList, v23);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)EquipSvtIdList, 0LL);
  EquipGraphTypeSelectDialog__SetEquipSvtLabel(this, v51);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
  EquipGraphTypeSelectDialog__SetEquipSprite(this, v52);
}


void __fastcall EquipGraphTypeSelectDialog__SetEquipSprite(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
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
  Il2CppObject *Master_object; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *gameObject; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  __int64 v17; // x2
  struct PartyListViewItem_o *cloneSelectParty; // x9
  struct System_Int32_array *equipSvtIdList; // x8
  unsigned __int64 v20; // x22
  unsigned __int64 max_length; // x10
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *equipSvtInfoList; // x9
  int32_t v23; // w2
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v24; // x29
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v27; // w24
  UnityEngine_Object_o *friendShipSvtEquipSkillIconSprite; // x24
  UISprite_o *noneEquipSprite; // x24
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v30; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v31; // x8
  UISprite_o *equipSprite; // x25
  UnityEngine_Object_o *v33; // x24
  int32_t equipBondSkillChange; // w25
  UISprite_o *v35; // x24
  struct System_Int64_array *equipIdList; // x8
  void *v37; // x24
  Il2CppClass *v38; // x25
  bool v39; // w24
  void *v40; // x24
  Il2CppClass *v41; // x25
  struct System_Int64_array *v42; // x8
  int32_t v43; // [xsp+4h] [xbp-7Ch]
  System_Collections_ICollection_o *self; // [xsp+8h] [xbp-78h]
  Il2CppObject *v45; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B403EA & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_long___, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_19731/*"func_group_icon_385"*/, v11);
    sub_1BDB878(&StringLiteral_20355/*"img_bond_category"*/, v12);
    byte_4B403EA = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
  gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !this->fields.cloneSelectParty
    || (v16 = gameObject,
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)PartyListViewItem__CheckDuplicationGrandQuestEquipment(
                                                                     this->fields.cloneSelectParty,
                                                                     0LL),
        (cloneSelectParty = this->fields.cloneSelectParty) == 0LL)
    || (equipSvtIdList = this->fields.equipSvtIdList) == 0LL )
  {
LABEL_83:
    sub_1BDBAD4(gameObject, v15);
  }
  v20 = 0LL;
  self = (System_Collections_ICollection_o *)cloneSelectParty->fields.duplicatedEquipmentUserSvtIdList;
  while ( 1 )
  {
    max_length = equipSvtIdList->max_length;
    if ( (__int64)v20 >= (int)max_length )
      break;
    equipSvtInfoList = this->fields.equipSvtInfoList;
    if ( !equipSvtInfoList )
      goto LABEL_83;
    if ( v20 >= equipSvtInfoList->max_length || v20 >= max_length )
      goto LABEL_85;
    v23 = equipSvtIdList->m_Items[v20 + 1];
    v24 = equipSvtInfoList->m_Items[v20];
    if ( v23 < 1 )
    {
      if ( !v24 )
        goto LABEL_83;
      friendShipSvtEquipSkillIconSprite = (UnityEngine_Object_o *)v24->fields.friendShipSvtEquipSkillIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipSkillIconSprite, 0LL, 0LL) )
      {
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.friendShipSvtEquipSkillIconSprite;
        if ( !gameObject )
          goto LABEL_83;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0LL);
        if ( !gameObject )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      noneEquipSprite = v24->fields.noneEquipSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEmptyEquipSprite(noneEquipSprite, v20, 0, 0LL);
    }
    else
    {
      if ( !Master_object )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v23,
                                                                   (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_83;
        klass = entity[1].klass;
        monitor = entity[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v47.fields.currentCryptoKey = klass;
        *(_QWORD *)&v47.fields.fakeValue = monitor;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                     v47,
                                                                     0LL);
        v27 = (int)gameObject;
      }
      else
      {
        v27 = 0;
      }
      v30 = this->fields.equipSvtInfoList;
      if ( !v30 )
        goto LABEL_83;
      if ( v20 >= v30->max_length )
        goto LABEL_85;
      v31 = v30->m_Items[v20];
      if ( !v31 )
        goto LABEL_83;
      equipSprite = v31->fields.equipSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEquipFace(equipSprite, v27, 0LL, 0LL);
      if ( !v24 )
        goto LABEL_83;
      v33 = (UnityEngine_Object_o *)v24->fields.friendShipSvtEquipSkillIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
      {
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.friendShipSvtEquipSkillIconSprite;
        if ( !gameObject )
          goto LABEL_83;
        gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0LL);
        if ( !gameObject )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20 == 1, 0LL);
        if ( v20 == 1 )
        {
          equipBondSkillChange = this->fields.equipBondSkillChange;
          v35 = v24->fields.friendShipSvtEquipSkillIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( equipBondSkillChange < 1 )
          {
            AtlasManager__SetCommon(v35, 0LL);
            gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.friendShipSvtEquipSkillIconSprite;
            if ( !gameObject )
              goto LABEL_83;
            UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20355/*"img_bond_category"*/, 0LL);
          }
          else
          {
            AtlasManager__SetEventUI(v35, (System_String_o *)StringLiteral_19731/*"func_group_icon_385"*/, 0LL);
          }
        }
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      equipIdList = this->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_83;
      if ( v20 >= equipIdList->max_length )
        goto LABEL_85;
      if ( !v16 )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                   v16,
                                                                   &v45,
                                                                   equipIdList->m_Items[v20],
                                                                   (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_65;
      if ( !v45 )
        goto LABEL_83;
      v38 = v45[6].klass;
      v37 = v45[6].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v38;
      *(_QWORD *)&v48.fields.fakeValue = v37;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                   v48,
                                                                   0LL);
      if ( (int)gameObject >= 4 )
      {
        if ( !entity || !v45 )
          goto LABEL_83;
        v41 = v45[6].klass;
        v40 = v45[6].monitor;
        v43 = (int32_t)entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v41;
        *(_QWORD *)&v49.fields.fakeValue = v40;
        v39 = v43 >= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v49, 0LL);
      }
      else
      {
LABEL_65:
        v39 = 0;
      }
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_83;
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
      if ( !gameObject )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v39, 0LL);
    }
    gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(self, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      goto LABEL_80;
    v42 = this->fields.equipIdList;
    if ( !v42 )
      goto LABEL_83;
    if ( v20 >= v42->max_length )
LABEL_85:
      sub_1BDBADC(gameObject, v15, v17);
    if ( !System_Linq_Enumerable__Contains_long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)self,
            v42->m_Items[v20],
            (const MethodInfo_304CC48 *)Method_System_Linq_Enumerable_Contains_long___) )
    {
LABEL_80:
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.duplicationEquipMarkWarningIcon;
      if ( !gameObject )
        goto LABEL_83;
      FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
    }
    else
    {
      gameObject = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.duplicationEquipMarkWarningIcon;
      if ( !gameObject )
        goto LABEL_83;
      FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    ++v20;
    if ( !equipSvtIdList )
      goto LABEL_83;
  }
}


void __fastcall EquipGraphTypeSelectDialog__SetEquipSvtLabel(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EquipGraphTypeSelectDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *equipSvtInfoList; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v8; // x8
  UILabel_o *equipLabel; // x20
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v10; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v11; // x8
  UILabel_o *v12; // x20
  struct EquipGraphTypeSelectDialog_EquipSvtInfo_array *v13; // x8
  EquipGraphTypeSelectDialog_EquipSvtInfo_o *v14; // x8
  UILabel_o *v15; // x19

  v3 = this;
  if ( (byte_4B403E9 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_5519/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_BOND"*/, v4);
    sub_1BDB878(&StringLiteral_5522/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_NORMAL"*/, v5);
    this = (EquipGraphTypeSelectDialog_o *)sub_1BDB878(&StringLiteral_5523/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_REWARD_UP"*/, v6);
    byte_4B403E9 = 1;
  }
  equipSvtInfoList = v3->fields.equipSvtInfoList;
  if ( !equipSvtInfoList )
    goto LABEL_18;
  if ( !equipSvtInfoList->max_length )
    goto LABEL_19;
  v8 = equipSvtInfoList->m_Items[0];
  if ( !v8 )
    goto LABEL_18;
  equipLabel = v8->fields.equipLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5522/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_NORMAL"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_18;
  UILabel__set_text(equipLabel, (System_String_o *)this, 0LL);
  v10 = v3->fields.equipSvtInfoList;
  if ( !v10 )
    goto LABEL_18;
  if ( v10->max_length <= 1 )
    goto LABEL_19;
  v11 = v10->m_Items[1];
  if ( !v11
    || (v12 = v11->fields.equipLabel,
        this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_BOND"*/, 0LL),
        !v12)
    || (UILabel__set_text(v12, (System_String_o *)this, 0LL), (v13 = v3->fields.equipSvtInfoList) == 0LL) )
  {
LABEL_18:
    sub_1BDBAD4(this, method);
  }
  if ( v13->max_length <= 2 )
LABEL_19:
    sub_1BDBADC(this, method, v2);
  v14 = v13->m_Items[2];
  if ( !v14 )
    goto LABEL_18;
  v15 = v14->fields.equipLabel;
  this = (EquipGraphTypeSelectDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5523/*"EQUIP_GRAPH_TYPE_SELECT_DIALOG_REWARD_UP"*/, 0LL);
  if ( !v15 )
    goto LABEL_18;
  UILabel__set_text(v15, (System_String_o *)this, 0LL);
}


void __fastcall EquipGraphTypeSelectDialog___OnClickCancel_b__25_0(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Action_bool__long____bool____int__o *closeCallFunc; // x8

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallFunc = this->fields.closeCallFunc;
  if ( !closeCallFunc )
    sub_1BDBAD4(v3, v4);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, struct System_Int64_array *, struct System_Boolean_array *, __int64, _QWORD))closeCallFunc->fields.m_target)(
    closeCallFunc->fields.original_method_info,
    0LL,
    this->fields.equipIdList,
    this->fields.updateFlagList,
    0xFFFFFFFFLL,
    *(_QWORD *)&closeCallFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphTypeSelectDialog___OnClickDecide_b__24_0(
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
  if ( originalMemberEquipList->max_length <= i )
    goto LABEL_9;
  if ( originalMemberEquipList->m_Items[i] == equipId )
    return;
  updateFlagList = this->fields.updateFlagList;
  if ( !updateFlagList )
LABEL_8:
    sub_1BDBAD4(this, i);
  if ( updateFlagList->max_length <= i )
LABEL_9:
    sub_1BDBADC(this, *(_QWORD *)&i, equipId);
  updateFlagList->m_Items[i + 4] = 1;
}


void __fastcall EquipGraphTypeSelectDialog___OnClickDecide_b__24_1(
        EquipGraphTypeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EquipGraphTypeSelectDialog___c_c *v6; // x0
  struct System_Action_bool__long____bool____int__o *closeCallFunc; // x24
  System_Boolean_array *updateFlagList; // x20
  System_Func_bool__bool__o *_9__24_2; // x21
  Il2CppObject *v10; // x22
  struct EquipGraphTypeSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _BOOL8 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B403F0 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_bool___, method);
    sub_1BDB878(&System_Func_bool__bool__TypeInfo, v3);
    sub_1BDB878(&Method_EquipGraphTypeSelectDialog___c__OnClickDecide_b__24_2__, v4);
    sub_1BDB878(&EquipGraphTypeSelectDialog___c_TypeInfo, v5);
    byte_4B403F0 = 1;
  }
  v6 = EquipGraphTypeSelectDialog___c_TypeInfo;
  closeCallFunc = this->fields.closeCallFunc;
  updateFlagList = this->fields.updateFlagList;
  if ( !EquipGraphTypeSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphTypeSelectDialog___c_TypeInfo);
    v6 = EquipGraphTypeSelectDialog___c_TypeInfo;
  }
  _9__24_2 = v6->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EquipGraphTypeSelectDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v6->static_fields->__9;
    _9__24_2 = (System_Func_bool__bool__o *)sub_1BDBAC4(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__24_2, v10, Method_EquipGraphTypeSelectDialog___c__OnClickDecide_b__24_2__, 0LL);
    static_fields = EquipGraphTypeSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__24_2 = _9__24_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__24_2, (int32_t)_9__24_2, v12, v13);
  }
  v14 = BasicHelper__Any_bool_(
          updateFlagList,
          (System_Func_T__bool__o *)_9__24_2,
          (const MethodInfo_301CA34 *)Method_BasicHelper_Any_bool___);
  if ( !closeCallFunc )
    sub_1BDBAD4(v14, v15);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _BOOL8, struct System_Int64_array *, struct System_Boolean_array *, _QWORD, _QWORD))closeCallFunc->fields.m_target)(
    closeCallFunc->fields.original_method_info,
    v14,
    this->fields.equipIdList,
    this->fields.updateFlagList,
    (unsigned int)this->fields.equipBondSkillChange,
    *(_QWORD *)&closeCallFunc->fields.extra_arg);
}


void __fastcall EquipGraphTypeSelectDialog_EquipSvtInfo___ctor(
        EquipGraphTypeSelectDialog_EquipSvtInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipGraphTypeSelectDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B403F1 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphTypeSelectDialog___c_TypeInfo, v1);
    byte_4B403F1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EquipGraphTypeSelectDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EquipGraphTypeSelectDialog___c_TypeInfo->static_fields->__9 = (struct EquipGraphTypeSelectDialog___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EquipGraphTypeSelectDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EquipGraphTypeSelectDialog___c___ctor(EquipGraphTypeSelectDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EquipGraphTypeSelectDialog___c___OnClickDecide_b__24_2(
        EquipGraphTypeSelectDialog___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall EquipGraphTypeSelectDialog___c__DisplayClass23_0___ctor(
        EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphTypeSelectDialog___c__DisplayClass23_0___OnClickEquip_b__0(
        EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        const MethodInfo *method)
{
  EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v10; // q0
  __int128 v11; // q0
  int32_t type; // w20
  __int64 v13; // x2
  int v14; // w8
  int32_t EquipFriendShipSkillChange_k__BackingField; // w9
  struct EquipGraphTypeSelectDialog_o *_4__this; // x10
  struct EquipGraphTypeSelectDialog_o *v17; // x10
  struct System_Boolean_array *updateFlagList; // x11
  int v19; // w10
  int v20; // w21
  struct EquipGraphTypeSelectDialog_o *v21; // x8
  struct System_Int64_array *equipIdList; // x8
  EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *v23; // x24
  struct EquipGraphTypeSelectDialog_o *v24; // x8
  PartyListViewItem_o *cloneSelectParty; // x21
  int32_t memberIndex; // w22
  struct EquipGraphTypeSelectDialog_o *v27; // x20
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct EquipGraphTypeSelectDialog_o *v31; // x20
  System_Int64_array *EquipList; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+80h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_4B403F2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&result);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)sub_1BDB878(
                                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                   v8);
    byte_4B403F2 = 1;
  }
  if ( result != 1 )
    goto LABEL_37;
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_39;
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v10;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v39.fields.fakeValue = v11;
    type = v6->fields.type;
    this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)EquipGraphListViewItem__IsNeedUpdateDuplication(
                                                                   item,
                                                                   0LL);
    v14 = (unsigned __int8)this & 1;
    if ( v6->fields.type == 1 )
    {
      EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
LABEL_12:
      _4__this = v6->fields.__4__this;
      if ( !_4__this )
        goto LABEL_39;
      _4__this->fields.equipBondSkillChange = EquipFriendShipSkillChange_k__BackingField;
    }
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(
                                                                   &v39,
                                                                   0LL,
                                                                   0LL);
    v14 = 0;
    v38 = v39;
    type = v6->fields.type;
    if ( type == 1 )
    {
      type = 1;
      EquipFriendShipSkillChange_k__BackingField = 0;
      goto LABEL_12;
    }
  }
  v17 = v6->fields.__4__this;
  if ( !v17 )
    goto LABEL_39;
  updateFlagList = v17->fields.updateFlagList;
  if ( !updateFlagList )
    goto LABEL_39;
  if ( type >= updateFlagList->max_length )
    goto LABEL_40;
  v19 = ~v17->fields.equipBondSkillChange;
  v20 = v14 | ((unsigned int)v19 >> 31);
  updateFlagList->m_Items[type + 4] |= (unsigned __int8)v14 | (v19 < 0);
  v21 = v6->fields.__4__this;
  if ( !v21 )
    goto LABEL_39;
  equipIdList = v21->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_39;
  if ( type >= equipIdList->max_length )
LABEL_40:
    sub_1BDBADC(this, *(_QWORD *)&result, v13);
  v23 = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)equipIdList->m_Items[type];
  v37 = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v37;
  this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                 &v36,
                                                                 0LL);
  if ( v20 || v23 != this )
  {
    v24 = v6->fields.__4__this;
    if ( v24 )
    {
      cloneSelectParty = v24->fields.cloneSelectParty;
      memberIndex = v24->fields.memberIndex;
      v37 = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v35 = v37;
      this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                     &v35,
                                                                     0LL);
      if ( cloneSelectParty )
      {
        PartyListViewItem__SetEquipRemoveIncludeSelf(cloneSelectParty, memberIndex, (int64_t)this, type, 0LL);
        v27 = v6->fields.__4__this;
        if ( v27 )
        {
          this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)v27->fields.cloneSelectParty;
          if ( this )
          {
            this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)PartyListViewItem__GetMember(
                                                                           (PartyListViewItem_o *)this,
                                                                           v27->fields.memberIndex,
                                                                           0LL);
            if ( this )
            {
              this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)PartyOrganizationListViewItem__get_EquipSvtIdList(
                                                                             (PartyOrganizationListViewItem_o *)this,
                                                                             0LL);
              if ( this )
              {
                v28 = System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)this,
                        (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
                v27->fields.equipSvtIdList = v28;
                sub_1BDB81C((CGThumbnailListItem_o *)&v27->fields.equipSvtIdList, (int32_t)v28, v29, v30);
                v31 = v6->fields.__4__this;
                if ( v31 )
                {
                  this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)v31->fields.cloneSelectParty;
                  if ( this )
                  {
                    this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)PartyListViewItem__GetMember(
                                                                                   (PartyListViewItem_o *)this,
                                                                                   v31->fields.memberIndex,
                                                                                   0LL);
                    if ( this )
                    {
                      EquipList = PartyOrganizationListViewItem__GetEquipList(
                                    (PartyOrganizationListViewItem_o *)this,
                                    0LL);
                      v31->fields.equipIdList = EquipList;
                      sub_1BDB81C((CGThumbnailListItem_o *)&v31->fields.equipIdList, (int32_t)EquipList, v33, v34);
                      this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)v6->fields.__4__this;
                      if ( this )
                      {
                        EquipGraphTypeSelectDialog__SetEquipSprite(
                          (EquipGraphTypeSelectDialog_o *)this,
                          *(const MethodInfo **)&result);
                        goto LABEL_37;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BDBAD4(this, *(_QWORD *)&result);
  }
LABEL_37:
  this = (EquipGraphTypeSelectDialog___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_39;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)this, 0LL, 0LL);
}