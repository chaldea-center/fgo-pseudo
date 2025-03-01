void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BFB52F & 1) == 0 )
  {
    sub_1C2E12C(&BaseMenu_TypeInfo, method);
    byte_4BFB52F = 1;
  }
  this->fields.selectMemberIndex = -1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__ChangeFocusPiece(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4BFB528 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v5);
    byte_4BFB528 = 1;
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
    v8 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C2E378(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      v9);
    if ( !partyListViewManager )
      sub_1C2E388(v10, v11);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v8, v12);
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
    sub_1C2E388(this, method);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C2E390(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  signed int max_length; // w8
  __int64 v13; // x24
  PartyOrganizationListViewItem_o *v14; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w29
  __int128 v17; // q0
  int64_t v18; // x22
  int64_t EquipUserSvtId; // x23
  int64_t v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-80h]

  if ( (byte_4BFB52E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__, items);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v6);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C2E12C(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v8);
    byte_4BFB52E = 1;
  }
  if ( !items )
    return 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_1C2E390(v10, v11);
      v14 = items->m_Items[v13];
      if ( !v14 )
        break;
      userServantEntity = v14->fields.userServantEntity;
      warBoardPieceIndex = v14->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v17;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0LL, 0LL);
        v34 = v33;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v34;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v32, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v14, 0LL);
      v20 = sub_1C2E378(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v20, 0LL);
      *(_DWORD *)(v20 + 16) = warBoardPieceIndex;
      *(_QWORD *)(v20 + 24) = v18;
      *(_QWORD *)(v20 + 32) = EquipUserSvtId;
      if ( !v9 )
        break;
      v27 = v9->fields._items;
      v28 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__;
      ++v9->fields._version;
      if ( !v27 )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= v27->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v20,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &v27->obj.klass + size;
        v9->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v20;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
      }
      max_length = items->max_length;
      if ( (int)++v13 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                                     v9,
                                                                     (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_26:
    sub_1C2E388(v10, v11);
  }
  if ( !v9 )
    goto LABEL_26;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                               v9,
                                                               (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
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

  if ( (byte_4BFB525 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, method);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_1C2E12C(&StringLiteral_10761/*"PartyOrganization/PartyServantSelectMenu"*/, v6);
    byte_4BFB525 = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_10761/*"PartyOrganization/PartyServantSelectMenu"*/,
               (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50692032(
                                               object,
                                               transform,
                                               (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
    if ( !gameObject )
LABEL_14:
      sub_1C2E388(gameObject, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    *p_servantSelectMenu = (struct PartyServantSelectMenu_o *)Component_object;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.servantSelectMenu,
      (int64_t)Component_object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_14;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.onFinishedEditMember, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.partyItem = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.partyItem, 0LL, v33, v34, v35, v36, v37, v38);
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
    sub_1C2E388(this, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  WarBoardPartyListViewItem_o *ResponseData; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  PartyOrganizationListViewItem_o *v27; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v29; // q0
  int64_t v30; // x23
  const MethodInfo *v31; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v33; // x23
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  int32_t v36; // w8
  struct WarBoardPartyListViewItem_o *v37; // x8
  System_Object_array *v38; // x20
  System_Predicate_object__o *v39; // x22
  WarBoardPartyOrganizationMenu_o *All_object; // x0
  const MethodInfo *v41; // x2
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-60h]

  if ( (byte_4BFB52B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, *(_QWORD *)&result);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C2E12C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v8);
    sub_1C2E12C(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__, v11);
    sub_1C2E12C(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v12);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v13);
    byte_4BFB52B = 1;
  }
  v14 = sub_1C2E378(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_31;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
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
      sub_1C2E390(ResponseData, v16);
    v27 = memberItemList->m_Items[selectMemberIndex];
    if ( !equipItem )
      goto LABEL_10;
  }
  else
  {
    v27 = 0LL;
    if ( !equipItem )
    {
LABEL_10:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v44, 0LL, 0LL);
      v45 = v44;
      goto LABEL_16;
    }
  }
  userSvtEntity = equipItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_31;
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v29;
LABEL_16:
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v45;
  ResponseData = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(
                                                  &v43,
                                                  0LL);
  if ( !v27 )
    goto LABEL_31;
  v30 = (int64_t)ResponseData;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v27, 0LL) == ResponseData )
    goto LABEL_29;
  ResponseData = this->fields.partyItem;
  if ( !ResponseData )
    goto LABEL_31;
  WarBoardPartyListViewItem__SetEquip(ResponseData, this->fields.selectMemberIndex, v30, v31);
  partyListViewManager = this->fields.partyListViewManager;
  v33 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C2E378(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v33,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v34);
  if ( !partyListViewManager )
    goto LABEL_31;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v33, v35);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_29;
  v36 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v14 + 24) = v36;
  v37 = this->fields.partyItem;
  if ( !v37
    || (v38 = (System_Object_array *)v37->fields.memberItemList,
        v39 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_object____ctor(
          v39,
          (Il2CppObject *)v14,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          0LL),
        All_object = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_object_(
                                                          v38,
                                                          (System_Predicate_T__o *)v39,
                                                          (const MethodInfo_30CD680 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        ResponseData = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                        All_object,
                                                        (PartyOrganizationListViewItem_array *)All_object,
                                                        v41),
        (onFinishedEditMember = this->fields.onFinishedEditMember) == 0LL) )
  {
LABEL_31:
    sub_1C2E388(ResponseData, v16);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyListViewItem_o *, _QWORD))onFinishedEditMember->fields.m_target)(
    onFinishedEditMember->fields.original_method_info,
    ResponseData,
    *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
LABEL_29:
  ResponseData = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4BFB52A & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify);
    byte_4BFB52A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
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
  const MethodInfo *v8; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct WarBoardPartyListViewItem_o *v15; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8

  v5 = result;
  v6 = this;
  if ( (byte_4BFB52D & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, *(_QWORD *)&result);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v7);
    byte_4BFB52D = 1;
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
        WarBoardPartyListViewItem__SwapMember(v6->fields.partyItem, result, item->fields.partyIndex, v8);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(v6->fields.partyItem, result, item, v8);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v11 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C2E378(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v11,
    (Il2CppObject *)v6,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v12);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v11, v13);
  v15 = v6->fields.partyItem;
  if ( !v15 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v15->fields.memberItemList, v14);
  onFinishedEditMember = v6->fields.onFinishedEditMember;
  if ( onFinishedEditMember )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))onFinishedEditMember->fields.m_target)(
      onFinishedEditMember->fields.original_method_info,
      ResponseData,
      *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_1C2E388(this, *(_QWORD *)&result);
  PartyServantSelectMenu__Close((PartyServantSelectMenu_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__OnTapPartyMember(
        WarBoardPartyOrganizationMenu_o *this,
        PartyOrganizationListViewItem_o *member,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v21; // x22
  FollowerInfo_o *followerInfo; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  Il2CppObject *v25; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v28; // x22
  ServantStatusDialog_EndDelegate_o *v29; // x23
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  FollowerInfo_o *v34; // x8
  CommonUI_o *v35; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  ServantStatusDialog_EndDelegate_o *v37; // x22
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  Il2CppObject *v40; // x0
  WarBoardPartyListViewItem_o *v41; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v44; // x23
  EquipGraphListMenu_CallbackFunc_o *v45; // x24
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  int32_t v48; // w21
  PartyServantSelectMenu_o *servantSelectMenu; // x23
  WarBoardPartyListViewItem_o *v50; // x24
  EventUpValSetupInfo_o *v51; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyServantSelectMenu_CallbackFunc_o *v53; // x25

  if ( (byte_4BFB529 & 1) == 0 )
  {
    sub_1C2E12C(&EquipGraphListMenu_CallbackFunc_TypeInfo, member);
    sub_1C2E12C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_1C2E12C(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v12);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v13);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v14);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v15);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v16);
    byte_4BFB529 = 1;
  }
  if ( isLongTap )
  {
    if ( isSvtEquip )
    {
      if ( member )
      {
        if ( PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL) >= 1 )
        {
          v17 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
          if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
            v17 = (_QWORD *)sub_1C2E144(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
          v18 = (System_Reflection_MethodBase_o *)sub_1C2E110(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0LL);
          this->fields.selectMemberIndex = member->fields.index;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v21,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v21, 0LL, 0LL);
            return;
          }
LABEL_45:
          sub_1C2E388(followerInfo, member);
        }
        if ( member->fields.isFollower )
        {
          followerInfo = member->fields.followerInfo;
          if ( !followerInfo )
            goto LABEL_45;
          if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0LL) )
          {
            v32 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
            if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
              v32 = (_QWORD *)sub_1C2E144(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
            v33 = (System_Reflection_MethodBase_o *)sub_1C2E110(v32, v32[4]);
            OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v34 = member->fields.followerInfo;
            if ( !v34 )
              goto LABEL_45;
            v35 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v34, 0, 1, 0LL);
            v37 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v37,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v35 )
              goto LABEL_45;
            CommonUI__OpenServantEquipStatusDialog_31192452(v35, 19, EquipTarget1, v37, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_25:
      v30 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
      if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1C2E144(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
      v31 = (System_Reflection_MethodBase_o *)sub_1C2E110(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 2, 0, 0LL);
      return;
    }
    if ( !member || !member->fields.userServantEntity )
      goto LABEL_25;
    v23 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1C2E144(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C2E110(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v28 = (CommonUI_o *)v25;
    v29 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v28 )
      goto LABEL_45;
    CommonUI__OpenServantStatusDialog_31185772(v28, 1, partyItem, index, v29, 0LL);
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
    v38 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1C2E144(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C2E110(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v41 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v44 = (CommonUI_o *)v40;
    v45 = (EquipGraphListMenu_CallbackFunc_o *)sub_1C2E378(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v44 )
      goto LABEL_45;
    CommonUI__OpenEquipGraphListMenu_31181500(v44, v41, selectMemberIndex, eventUpValSetupInfo, v45, 0LL);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_25;
    v46 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1C2E144(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v47 = (System_Reflection_MethodBase_o *)sub_1C2E110(v46, v46[4]);
    OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0LL);
    v48 = member->fields.index;
    servantSelectMenu = this->fields.servantSelectMenu;
    v50 = this->fields.partyItem;
    v51 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = v48;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v53 = (PartyServantSelectMenu_CallbackFunc_o *)sub_1C2E378(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v53,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_45;
    PartyServantSelectMenu__Open_33482920(servantSelectMenu, v50, v48, 0, v51, questRestrictionInfo, v53, 0LL, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  __int64 v14; // x8
  int64_t v15; // x20
  const MethodInfo *v16; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v18; // x22
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  WarBoardPartyOrganizationMenu_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  WarBoardPartyOrganizationMenu_o *v28; // x0
  const MethodInfo *v29; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v33; // x21
  __int64 v34; // x0

  v4 = this;
  if ( (byte_4BFB52C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isModify);
    sub_1C2E12C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v5);
    sub_1C2E12C(&PartyOrganizationListViewItem___TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v8);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1C2E12C(
                                                &Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
                                                v9);
    byte_4BFB52C = 1;
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
        v14 = (__int64)memberItemList + 8 * selectMemberIndex;
        v15 = *(_QWORD *)(v14 + 32);
        if ( !v15 )
          goto LABEL_15;
        PartyOrganizationListViewItem__Modify(*(PartyOrganizationListViewItem_o **)(v14 + 32), 0LL);
        WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v4, v16);
        partyListViewManager = v4->fields.partyListViewManager;
        v18 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C2E378(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
          v18,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
          v19);
        if ( !partyListViewManager
          || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v18, v20),
              (this = (WarBoardPartyOrganizationMenu_o *)sub_1C2E1D4(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
        {
LABEL_17:
          sub_1C2E388(this, isModify);
        }
        v21 = this;
        this = (WarBoardPartyOrganizationMenu_o *)sub_1C2E268(v15, this->klass->_1.element_class);
        if ( !this )
        {
          v34 = sub_1C2E3AC();
          sub_1C2E254(v34, 0LL);
        }
        if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
LABEL_18:
          sub_1C2E390(this, isModify);
        v21->fields.basePanelList = (struct UIPanel_array *)v15;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.basePanelList, v15, v22, v23, v24, v25, v26, v27);
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         v28,
                         (PartyOrganizationListViewItem_array *)v21,
                         v29);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v33, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__Open(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  long double v26; // q0
  __int64 v27; // x0
  __int64 v28; // x8
  WarBoardData_o *v29; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v32; // x24
  const MethodInfo *v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  WarBoardPartyOrganizationListViewManager_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct WarBoardPartyListViewItem_o *partyItem; // x22
  UnityEngine_GameObject_o *v48; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v49; // x22
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  WarBoardPartyOrganizationListViewManager_o *v52; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v53; // x21
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  __int64 v56; // x0

  if ( (byte_4BFB527 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7);
    sub_1C2E12C(&WarBoardPartyListViewItem___TypeInfo, v8);
    sub_1C2E12C(&WarBoardPartyListViewItem_TypeInfo, v9);
    sub_1C2E12C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v10);
    byte_4BFB527 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.onFinishedEditMember,
    (int64_t)onFinishedEditMember,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C80008(v26);
  gameObject = *(UnityEngine_GameObject_o **)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*((_BYTE *)&gameObject[12].fields + 5) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_1C80008(v26);
  v28 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v28 )
    goto LABEL_20;
  v29 = *(WarBoardData_o **)(v28 + 440);
  if ( !v29 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v28 + 440), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v29, 0LL);
  v32 = (WarBoardPartyListViewItem_o *)sub_1C2E378(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v32, EditableServantPieces, focusPiece, FormationLimitCost, v33);
  this->fields.partyItem = v32;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.partyItem, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_1C2E1D4(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = this->fields.partyItem;
  v48 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2E268(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v56 = sub_1C2E3AC();
      sub_1C2E254(v56, 0LL);
    }
  }
  if ( !LODWORD(v48[1].klass) )
    sub_1C2E390(gameObject, v12);
  v48[1].monitor = partyItem;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v48[1].monitor, (int64_t)partyItem, v41, v42, v43, v44, v45, v46);
  v49 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C2E378(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v49,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v50);
  if ( !v40 )
LABEL_20:
    sub_1C2E388(gameObject, v12);
  WarBoardPartyOrganizationListViewManager__CreateList(v40, (WarBoardPartyListViewItem_array *)v48, v49, v51);
LABEL_18:
  v52 = this->fields.partyListViewManager;
  v53 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C2E378(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v53,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v54);
  if ( !v52 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v52, 2, v53, v55);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__SetEventId(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardDataEntity_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t EventId; // w0
  int32_t v12; // w21
  Il2CppObject *Entity; // x0
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BFB526 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDetailMaster___, data);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1C2E12C(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BFB526 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v12 = EventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_1C2E388(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v12,
             (const MethodInfo_327B180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v16 = (EventUpValSetupInfo_o *)sub_1C2E378(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v16, questId, questPhase, v12, 0LL);
      this->fields.eventUpValSetupInfo = v16;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.eventUpValSetupInfo,
        (int64_t)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
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
  sub_1C2E0D0(
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
  if ( (sub_1C2E1EC(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A6D954;
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
        v15 = sub_1C2E1E4(v10);
        v16 = sub_1C2E6A0(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A6DA50;
          else
            v13 = (Il2CppObject *)sub_1A6DA14;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A6D990;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A6D964;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A6D934;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6D8EC;
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
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, &v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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
  sub_1C2E0D0(
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
  if ( (sub_1C2E1EC(v10) & 1) != 0 )
  {
    if ( v12 == 3 )
    {
      v13 = (Il2CppObject *)sub_1A6D704;
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
        v14 = sub_1C2E1E4(v10);
        v15 = sub_1C2E6A0(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A6D848;
          else
            v13 = (Il2CppObject *)sub_1A6D7F4;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A6D758;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A6D720;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A6D6D8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6D678;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v15[4]; // [xsp+0h] [xbp-60h] BYREF
  char v16[4]; // [xsp+28h] [xbp-38h] BYREF
  char v17[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v17[0] = isSvtEquip;
  v16[0] = isLongTap;
  if ( (byte_4BFB530 & 1) == 0 )
  {
    sub_1C2E12C(&bool_TypeInfo, memberItem);
    byte_4BFB530 = 1;
  }
  v15[3] = 0LL;
  v15[0] = (__int64)memberItem;
  v15[1] = j_il2cpp_value_box_0(bool_TypeInfo, v17, isSvtEquip, isLongTap, callback);
  v15[2] = j_il2cpp_value_box_0(bool_TypeInfo, v16, v11, v12, v13);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v15, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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
    sub_1C2E388(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}