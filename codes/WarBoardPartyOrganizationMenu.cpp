void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1404E & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B1404E = 1;
  }
  this->fields.selectMemberIndex = -1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__ChangeFocusPiece(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v10; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_4B14047 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece, method);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v6, v7);
    byte_4B14047 = 1;
  }
  if ( this->fields.isOpen )
  {
    if ( focusPiece )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
        WarBoardPartyListViewItem__ChangeFocusMember(partyItem, focusPiece->fields._index_k__BackingField, method);
    }
    partyListViewManager = this->fields.partyListViewManager;
    v10 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                     WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                     focusPiece,
                                                                     method,
                                                                     v3);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      v11);
    if ( !partyListViewManager )
      sub_1BCAA3C(v12, v13);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v10, v14);
  }
}


void __fastcall WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x20
  __int64 v4; // x8
  WarBoardPartyOrganizationMenu_o *v5; // x19
  unsigned __int64 v6; // x21
  PartyOrganizationListViewItem_o *v7; // x23
  const MethodInfo *v8; // x2

  partyItem = this->fields.partyItem;
  if ( !partyItem || (memberItemList = partyItem->fields.memberItemList) == 0LL )
LABEL_14:
    sub_1BCAA3C(this, method);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1BCAA44(this, method);
      v7 = memberItemList->m_Items[v6];
      if ( v7 )
      {
        this = (WarBoardPartyOrganizationMenu_o *)v7->fields.userServantEntity;
        if ( this )
        {
          this = (WarBoardPartyOrganizationMenu_o *)UserServantEntity__getQuestRestriction(
                                                      (UserServantEntity_o *)this,
                                                      v7->fields.questRestrictionInfo,
                                                      1,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (WarBoardPartyOrganizationMenu_o *)v5->fields.partyItem;
            if ( !this )
              goto LABEL_14;
            WarBoardPartyListViewItem__ClearMember((WarBoardPartyListViewItem_o *)this, v7->fields.index, v8);
          }
        }
      }
      LODWORD(v4) = memberItemList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v4 );
  }
}


void __fastcall WarBoardPartyOrganizationMenu__Close(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu__Init(this, method);
  BaseMenu__Close((BaseMenu_o *)this, 0LL, 0LL);
}


WarBoardPartyOrganizationMenu_ResponseData_array *__fastcall WarBoardPartyOrganizationMenu__CreateResponseData(
        WarBoardPartyOrganizationMenu_o *this,
        PartyOrganizationListViewItem_array *items,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  signed int max_length; // w8
  __int64 v19; // x24
  PartyOrganizationListViewItem_o *v20; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w29
  __int128 v23; // q0
  int64_t v24; // x22
  int64_t EquipUserSvtId; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  int64_t v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1404D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__,
      items,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v13, v14);
    byte_4B1404D = 1;
  }
  if ( !items )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo,
                                                       items,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= max_length )
        sub_1BCAA44(v16, v17);
      v20 = items->m_Items[v19];
      if ( !v20 )
        break;
      userServantEntity = v20->fields.userServantEntity;
      warBoardPieceIndex = v20->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v43.fields.fakeValue = v23;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v42, 0LL, 0LL);
        v43 = v42;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
      v41 = v43;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v20, 0LL);
      v29 = sub_1BCAA2C(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v26, v27, v28);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      *(_DWORD *)(v29 + 16) = warBoardPieceIndex;
      *(_QWORD *)(v29 + 24) = v24;
      *(_QWORD *)(v29 + 32) = EquipUserSvtId;
      if ( !v15 )
        break;
      v36 = v15->fields._items;
      v37 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__;
      ++v15->fields._version;
      if ( !v36 )
        break;
      size = v15->fields._size;
      if ( (unsigned int)size >= v36->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &v36->obj.klass + size;
        v15->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v29, v30, v31, v32, v33, v34, v35);
      }
      max_length = items->max_length;
      if ( (int)++v19 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                                     v15,
                                                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_26:
    sub_1BCAA3C(v16, v17);
  }
  if ( !v15 )
    goto LABEL_26;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                               v15,
                                                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
}


WarBoardPartyListViewItem_o *__fastcall WarBoardPartyOrganizationMenu__GetCurrentPartyItem(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


int32_t __fastcall WarBoardPartyOrganizationMenu__GetDisplaySquareIndex(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_o *focusMemberItem; // x8

  if ( this->fields.isOpen
    && (partyItem = this->fields.partyItem) != 0LL
    && (focusMemberItem = partyItem->fields.focusMemberItem) != 0LL )
  {
    return focusMemberItem->fields.warBoardPieceIndex;
  }
  else
  {
    return -1;
  }
}


void __fastcall WarBoardPartyOrganizationMenu__Init(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  Il2CppObject *object; // x21
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B14044 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v8, v9);
    sub_1BCA7E0(&StringLiteral_10695/*"PartyOrganization/PartyServantSelectMenu"*/, v10, v11);
    byte_4B14044 = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_10695/*"PartyOrganization/PartyServantSelectMenu"*/,
               (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49903816(
                                               object,
                                               transform,
                                               (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    if ( !gameObject )
LABEL_14:
      sub_1BCAA3C(gameObject, v18);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    *p_servantSelectMenu = (struct PartyServantSelectMenu_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.servantSelectMenu,
      (int64_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_14;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_14;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onFinishedEditMember, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.partyItem = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.partyItem, 0LL, v39, v40, v41, v42, v43, v44);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall WarBoardPartyOrganizationMenu__IsOpenSamePiece(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_o *focusMemberItem; // x8

  if ( !this->fields.isOpen )
    return 0;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    return 0;
  focusMemberItem = partyItem->fields.focusMemberItem;
  if ( !focusMemberItem )
    return 0;
  if ( !piece )
    sub_1BCAA3C(this, 0LL);
  return piece->fields._index_k__BackingField == focusMemberItem->fields.warBoardPieceIndex;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnFinishedSelectServantEquip(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  WarBoardPartyListViewItem_o *ResponseData; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  PartyOrganizationListViewItem_o *v34; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v36; // q0
  int64_t v37; // x23
  const MethodInfo *v38; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v43; // x23
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  __int64 v46; // x2
  __int64 v47; // x3
  int32_t v48; // w8
  struct WarBoardPartyListViewItem_o *v49; // x8
  System_Object_array *v50; // x20
  System_Predicate_object__o *v51; // x22
  WarBoardPartyOrganizationMenu_o *All_object; // x0
  const MethodInfo *v53; // x2
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+40h] [xbp-60h]

  if ( (byte_4B1404A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, *(_QWORD *)&result, equipItem);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(
      &Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v19, v20);
    byte_4B1404A = 1;
  }
  v21 = sub_1BCAA2C(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, *(_QWORD *)&result, equipItem, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_31;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  if ( result != 1 )
    goto LABEL_29;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_31;
  memberItemList = partyItem->fields.memberItemList;
  if ( memberItemList
    && (selectMemberIndex = this->fields.selectMemberIndex,
        max_length = memberItemList->max_length,
        (int)selectMemberIndex < max_length) )
  {
    if ( (unsigned int)selectMemberIndex >= max_length )
      sub_1BCAA44(ResponseData, v23);
    v34 = memberItemList->m_Items[selectMemberIndex];
    if ( !equipItem )
      goto LABEL_10;
  }
  else
  {
    v34 = 0LL;
    if ( !equipItem )
    {
LABEL_10:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v56, 0LL, 0LL);
      v57 = v56;
      goto LABEL_16;
    }
  }
  userSvtEntity = equipItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_31;
  v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v36;
LABEL_16:
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
  v55 = v57;
  ResponseData = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v55,
                                                  0LL);
  if ( !v34 )
    goto LABEL_31;
  v37 = (int64_t)ResponseData;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v34, 0LL) == ResponseData )
    goto LABEL_29;
  ResponseData = this->fields.partyItem;
  if ( !ResponseData )
    goto LABEL_31;
  WarBoardPartyListViewItem__SetEquip(ResponseData, this->fields.selectMemberIndex, v37, v38);
  partyListViewManager = this->fields.partyListViewManager;
  v43 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v40,
                                                                   v41,
                                                                   v42);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v44);
  if ( !partyListViewManager )
    goto LABEL_31;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v43, v45);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_29;
  v48 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v21 + 24) = v48;
  v49 = this->fields.partyItem;
  if ( !v49
    || (v50 = (System_Object_array *)v49->fields.memberItemList,
        v51 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_PartyOrganizationListViewItem__TypeInfo,
                                              v23,
                                              v46,
                                              v47),
        System_Predicate_object____ctor(
          v51,
          (Il2CppObject *)v21,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          0LL),
        All_object = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_object_(
                                                          v50,
                                                          (System_Predicate_T__o *)v51,
                                                          (const MethodInfo_300CF94 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        ResponseData = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                        All_object,
                                                        (PartyOrganizationListViewItem_array *)All_object,
                                                        v53),
        (onFinishedEditMember = this->fields.onFinishedEditMember) == 0LL) )
  {
LABEL_31:
    sub_1BCAA3C(ResponseData, v23);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyListViewItem_o *, _QWORD))onFinishedEditMember->fields.m_target)(
    onFinishedEditMember->fields.original_method_info,
    ResponseData,
    *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
LABEL_29:
  ResponseData = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ResponseData )
    goto LABEL_31;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)ResponseData, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B14049 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify, method);
    byte_4B14049 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnSelectServant(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  WarBoardPartyOrganizationMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  struct WarBoardPartyListViewItem_o *v19; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8

  v5 = result;
  v6 = this;
  if ( (byte_4B1404C & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, *(_QWORD *)&result, item);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1BCA7E0(
                                                &Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
                                                v7,
                                                v8);
    byte_4B1404C = 1;
  }
  if ( v5 )
  {
    if ( !item )
      goto LABEL_19;
    if ( item->fields.isBase )
    {
      this = (WarBoardPartyOrganizationMenu_o *)v6->fields.partyItem;
      if ( !this )
        goto LABEL_19;
      WarBoardPartyListViewItem__ClearMember(
        (WarBoardPartyListViewItem_o *)this,
        v6->fields.selectMemberIndex,
        (const MethodInfo *)item);
    }
    else
    {
      this = (WarBoardPartyOrganizationMenu_o *)PartyServantListViewItem__get_IsParty(item, 0LL);
      partyItem = v6->fields.partyItem;
      *(_QWORD *)&result = (unsigned int)v6->fields.selectMemberIndex;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SwapMember(v6->fields.partyItem, result, item->fields.partyIndex, v9);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(v6->fields.partyItem, result, item, v9);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v15 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v15,
    (Il2CppObject *)v6,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v16);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v15, v17);
  v19 = v6->fields.partyItem;
  if ( !v19 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v19->fields.memberItemList, v18);
  onFinishedEditMember = v6->fields.onFinishedEditMember;
  if ( onFinishedEditMember )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))onFinishedEditMember->fields.m_target)(
      onFinishedEditMember->fields.original_method_info,
      ResponseData,
      *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_1BCAA3C(this, *(_QWORD *)&result);
  PartyServantSelectMenu__Close((PartyServantSelectMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnTapPartyMember(
        WarBoardPartyOrganizationMenu_o *this,
        PartyOrganizationListViewItem_o *member,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ServantStatusDialog_EndDelegate_o *v32; // x22
  FollowerInfo_o *followerInfo; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  Il2CppObject *v36; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  ServantStatusDialog_EndDelegate_o *v43; // x23
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  FollowerInfo_o *v48; // x8
  CommonUI_o *v49; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  ServantStatusDialog_EndDelegate_o *v54; // x22
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  Il2CppObject *v57; // x0
  WarBoardPartyListViewItem_o *v58; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v61; // x23
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  EquipGraphListMenu_CallbackFunc_o *v65; // x24
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  int32_t v68; // w21
  PartyServantSelectMenu_o *servantSelectMenu; // x23
  WarBoardPartyListViewItem_o *v70; // x24
  EventUpValSetupInfo_o *v71; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  PartyServantSelectMenu_CallbackFunc_o *v76; // x25

  if ( (byte_4B14048 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListMenu_CallbackFunc_TypeInfo, member, isSvtEquip);
    sub_1BCA7E0(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v15, v16);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v19, v20);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v21, v22);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v23, v24);
    byte_4B14048 = 1;
  }
  if ( isLongTap )
  {
    if ( isSvtEquip )
    {
      if ( member )
      {
        if ( PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL) >= 1 )
        {
          v25 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
          if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
            v25 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
          v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
          OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
          this->fields.selectMemberIndex = member->fields.index;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v32, 0LL, 0LL);
            return;
          }
LABEL_45:
          sub_1BCAA3C(followerInfo, member);
        }
        if ( member->fields.isFollower )
        {
          followerInfo = member->fields.followerInfo;
          if ( !followerInfo )
            goto LABEL_45;
          if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0LL) )
          {
            v46 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
            if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
              v46 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
            v47 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v46, v46[4]);
            OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v48 = member->fields.followerInfo;
            if ( !v48 )
              goto LABEL_45;
            v49 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v48, 0, 1, 0LL);
            v54 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v51,
                                                         v52,
                                                         v53);
            ServantStatusDialog_EndDelegate___ctor(
              v54,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v49 )
              goto LABEL_45;
            CommonUI__OpenServantEquipStatusDialog_30781828(v49, 19, EquipTarget1, v54, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_25:
      v44 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
      if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
      v45 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0LL);
      return;
    }
    if ( !member || !member->fields.userServantEntity )
      goto LABEL_25;
    v34 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v39 = (CommonUI_o *)v36;
    v43 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v40, v41, v42);
    ServantStatusDialog_EndDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v39 )
      goto LABEL_45;
    CommonUI__OpenServantStatusDialog_30775148(v39, 1, partyItem, index, v43, 0LL);
  }
  else if ( isSvtEquip )
  {
    if ( !member )
      return;
    if ( member->fields.isFollower )
    {
      followerInfo = member->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_45;
      if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0LL) )
        return;
      goto LABEL_25;
    }
    v55 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v56 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v55, v55[4]);
    OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v58 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v61 = (CommonUI_o *)v57;
    v65 = (EquipGraphListMenu_CallbackFunc_o *)sub_1BCAA2C(EquipGraphListMenu_CallbackFunc_TypeInfo, v62, v63, v64);
    EquipGraphListMenu_CallbackFunc___ctor(
      v65,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v61 )
      goto LABEL_45;
    CommonUI__OpenEquipGraphListMenu_30770876(v61, v58, selectMemberIndex, eventUpValSetupInfo, v65, 0LL);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_25;
    v66 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v66 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v67 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v66, v66[4]);
    OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0LL);
    v68 = member->fields.index;
    servantSelectMenu = this->fields.servantSelectMenu;
    v70 = this->fields.partyItem;
    v71 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = v68;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v76 = (PartyServantSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                     PartyServantSelectMenu_CallbackFunc_TypeInfo,
                                                     v73,
                                                     v74,
                                                     v75);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v76,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_45;
    PartyServantSelectMenu__Open_32883852(servantSelectMenu, v70, v68, 0, v71, questRestrictionInfo, v76, 0LL, 0LL);
  }
}


void __fastcall WarBoardPartyOrganizationMenu__OnfinishedCloseServantDetail(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnfinishedShowServantDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  __int64 v19; // x8
  int64_t v20; // x20
  const MethodInfo *v21; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v26; // x22
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  WarBoardPartyOrganizationMenu_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  WarBoardPartyOrganizationMenu_o *v36; // x0
  const MethodInfo *v37; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  Il2CppObject *Instance; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x21
  __int64 v45; // x0

  v4 = this;
  if ( (byte_4B1404B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isModify, method);
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v5, v6);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v11, v12);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1BCA7E0(
                                                &Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
                                                v13,
                                                v14);
    byte_4B1404B = 1;
  }
  if ( isModify )
  {
    partyItem = v4->fields.partyItem;
    if ( !partyItem )
      goto LABEL_17;
    memberItemList = partyItem->fields.memberItemList;
    if ( memberItemList )
    {
      selectMemberIndex = v4->fields.selectMemberIndex;
      max_length = memberItemList->max_length;
      if ( (int)selectMemberIndex < max_length )
      {
        if ( (unsigned int)selectMemberIndex >= max_length )
          goto LABEL_18;
        v19 = (__int64)memberItemList + 8 * selectMemberIndex;
        v20 = *(_QWORD *)(v19 + 32);
        if ( !v20 )
          goto LABEL_15;
        PartyOrganizationListViewItem__Modify(*(PartyOrganizationListViewItem_o **)(v19 + 32), 0LL);
        WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v4, v21);
        partyListViewManager = v4->fields.partyListViewManager;
        v26 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                         WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                         v23,
                                                                         v24,
                                                                         v25);
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
          v26,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
          v27);
        if ( !partyListViewManager
          || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v26, v28),
              (this = (WarBoardPartyOrganizationMenu_o *)sub_1BCA888(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
        {
LABEL_17:
          sub_1BCAA3C(this, isModify);
        }
        v29 = this;
        this = (WarBoardPartyOrganizationMenu_o *)sub_1BCA91C(v20, this->klass->_1.element_class);
        if ( !this )
        {
          v45 = sub_1BCAA60(0LL);
          sub_1BCA908(v45, 0LL);
        }
        if ( !LODWORD(v29->fields.m_CancellationTokenSource) )
LABEL_18:
          sub_1BCAA44(this, isModify);
        v29->fields.basePanelList = (struct UIPanel_array *)v20;
        sub_1BCA784((PartyOrganizationUtility_o *)&v29->fields.basePanelList, v20, v30, v31, v32, v33, v34, v35);
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         v36,
                         (PartyOrganizationListViewItem_array *)v29,
                         v37);
        onFinishedEditMember = v4->fields.onFinishedEditMember;
        if ( onFinishedEditMember )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))onFinishedEditMember->fields.m_target)(
            onFinishedEditMember->fields.original_method_info,
            ResponseData,
            *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
      }
    }
  }
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v4,
    Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v44, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__Open(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x3
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  long double v32; // q0
  __int64 v33; // x0
  __int64 v34; // x8
  WarBoardData_o *v35; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  WarBoardPartyListViewItem_o *v41; // x24
  const MethodInfo *v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  WarBoardPartyOrganizationListViewManager_o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct WarBoardPartyListViewItem_o *partyItem; // x22
  UnityEngine_GameObject_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v61; // x22
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  WarBoardPartyOrganizationListViewManager_o *v64; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v65; // x21
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  __int64 v68; // x0

  if ( (byte_4B14046 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece, onFinishedEditMember);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7, v8);
    sub_1BCA7E0(&WarBoardPartyListViewItem___TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardPartyListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v13, v14);
    byte_4B14046 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onFinishedEditMember,
    (int64_t)onFinishedEditMember,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC(v32);
  gameObject = *(UnityEngine_GameObject_o **)(*(_QWORD *)(v33 + 192) + 16LL);
  if ( (*((_BYTE *)&gameObject[12].fields + 5) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_1C1C6BC(v32);
  v34 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v34 )
    goto LABEL_20;
  v35 = *(WarBoardData_o **)(v34 + 440);
  if ( !v35 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v34 + 440), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v35, 0LL);
  v41 = (WarBoardPartyListViewItem_o *)sub_1BCAA2C(WarBoardPartyListViewItem_TypeInfo, v38, v39, v40);
  WarBoardPartyListViewItem___ctor(v41, EditableServantPieces, focusPiece, FormationLimitCost, v42);
  this->fields.partyItem = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.partyItem, (int64_t)v41, v43, v44, v45, v46, v47, v48);
  v49 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_1BCA888(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = this->fields.partyItem;
  v57 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v68 = sub_1BCAA60(0LL);
      sub_1BCA908(v68, 0LL);
    }
  }
  if ( !LODWORD(v57[1].klass) )
    sub_1BCAA44(gameObject, v16);
  v57[1].monitor = partyItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57[1].monitor, (int64_t)partyItem, v50, v51, v52, v53, v54, v55);
  v61 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v58,
                                                                   v59,
                                                                   v60);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v61,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v62);
  if ( !v49 )
LABEL_20:
    sub_1BCAA3C(gameObject, v16);
  WarBoardPartyOrganizationListViewManager__CreateList(v49, (WarBoardPartyListViewItem_array *)v57, v61, v63);
LABEL_18:
  v64 = this->fields.partyListViewManager;
  v65 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v16,
                                                                   v23,
                                                                   v24);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v65,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v66);
  if ( !v64 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v64, 2, v65, v67);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__SetEventId(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardDataEntity_o *data,
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t EventId; // w0
  int32_t v16; // w21
  Il2CppObject *Entity; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B14045 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, data, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B14045 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v16 = EventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v16,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v23 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v18, v19, v20);
      EventUpValSetupInfo___ctor(v23, questId, questPhase, v16, 0LL);
      this->fields.eventUpValSetupInfo = v23;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.eventUpValSetupInfo,
        (int64_t)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember___ctor(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0B0C0;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0B1BC;
          else
            v13 = (Il2CppObject *)sub_1A0B180;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0B0FC;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0B0D0;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0B0A0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0B058;
}


System_IAsyncResult_o *__fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__BeginInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_ResponseData_array *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = data;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    data,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 3 )
    {
      v13 = (Il2CppObject *)sub_1A0AE70;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 2 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0AFB4;
          else
            v13 = (Il2CppObject *)sub_1A0AF60;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0AEC4;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0AE8C;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0AE44;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0ADE4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__BeginInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        PartyOrganizationListViewItem_o *memberItem,
        bool isSvtEquip,
        bool isLongTap,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v12[4]; // [xsp+0h] [xbp-60h] BYREF
  char v13[4]; // [xsp+28h] [xbp-38h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = isSvtEquip;
  v13[0] = isLongTap;
  if ( (byte_4B1404F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, memberItem, isSvtEquip);
    byte_4B1404F = 1;
  }
  v12[3] = 0LL;
  v12[0] = (__int64)memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        PartyOrganizationListViewItem_o *memberItem,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    memberItem,
    isSvtEquip,
    isLongTap,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WarBoardPartyOrganizationMenu_ResponseData___ctor(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int32_t pieceIndex,
        int64_t userServantId,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._PieceIndex_k__BackingField = pieceIndex;
  this->fields._UserServantId_k__BackingField = userServantId;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
}


int32_t __fastcall WarBoardPartyOrganizationMenu_ResponseData__get_PieceIndex(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        const MethodInfo *method)
{
  return this->fields._PieceIndex_k__BackingField;
}


int64_t __fastcall WarBoardPartyOrganizationMenu_ResponseData__get_UserServantEquipId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEquipId_k__BackingField;
}


int64_t __fastcall WarBoardPartyOrganizationMenu_ResponseData__get_UserServantId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantId_k__BackingField;
}


void __fastcall WarBoardPartyOrganizationMenu_ResponseData__set_PieceIndex(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PieceIndex_k__BackingField = value;
}


void __fastcall WarBoardPartyOrganizationMenu_ResponseData__set_UserServantEquipId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserServantEquipId_k__BackingField = value;
}


void __fastcall WarBoardPartyOrganizationMenu_ResponseData__set_UserServantId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserServantId_k__BackingField = value;
}


void __fastcall WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
        WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPartyOrganizationMenu___c__DisplayClass19_0___OnFinishedSelectServantEquip_b__0(
        WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *this,
        PartyOrganizationListViewItem_o *x,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_o *_4__this; // x9
  int32_t index; // w8

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}