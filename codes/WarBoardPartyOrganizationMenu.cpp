void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FA305 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49FA305 = 1;
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
  const MethodInfo *v11; // x3

  if ( (byte_49FA2FE & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v5);
    byte_49FA2FE = 1;
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
    v8 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                    focusPiece,
                                                                    method);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      v9);
    if ( !partyListViewManager )
      sub_1B64324(v10);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v8, v11);
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
    sub_1B64324(this);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1B6432C(this, method);
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-80h]

  if ( (byte_49FA304 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__, items);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v8);
    byte_49FA304 = 1;
  }
  if ( !items )
    return 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo,
                                                      items,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_1B6432C(v10, v11);
      v14 = items->m_Items[v13];
      if ( !v14 )
        break;
      userServantEntity = v14->fields.userServantEntity;
      warBoardPieceIndex = v14->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v17;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v31, 0LL, 0LL);
        v32 = v31;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v30 = v32;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v30, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v14, 0LL);
      v22 = sub_1B64314(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v20, v21);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      *(_DWORD *)(v22 + 16) = warBoardPieceIndex;
      *(_QWORD *)(v22 + 24) = v18;
      *(_QWORD *)(v22 + 32) = EquipUserSvtId;
      if ( !v9 )
        break;
      v25 = v9->fields._items;
      v26 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__;
      ++v9->fields._version;
      if ( !v25 )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= v25->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v22,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v25->obj.klass + size;
        v9->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v23, v24);
      }
      max_length = items->max_length;
      if ( (int)++v13 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                                     v9,
                                                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_26:
    sub_1B64324(v10);
  }
  if ( !v9 )
    goto LABEL_26;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                               v9,
                                                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FA2FB & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_1B640C8(&StringLiteral_10511/*"PartyOrganization/PartyServantSelectMenu"*/, v6);
    byte_49FA2FB = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_10511/*"PartyOrganization/PartyServantSelectMenu"*/,
               (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49003980(
                                               object,
                                               transform,
                                               (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    if ( !gameObject )
LABEL_14:
      sub_1B64324(gameObject);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    *p_servantSelectMenu = (struct PartyServantSelectMenu_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.servantSelectMenu,
      (int32_t)Component_object,
      v13,
      v14);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&partyListViewManager->fields.onTapMember, 0, v16, v17);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_14;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onFinishedEditMember, 0, v18, v19);
  this->fields.partyItem = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, 0, v20, v21);
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
    sub_1B64324(this);
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
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  PartyOrganizationListViewItem_o *v23; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q0
  int64_t v26; // x23
  const MethodInfo *v27; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v31; // x23
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  __int64 v35; // x2
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

  if ( (byte_49FA301 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, *(_QWORD *)&result);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v8);
    sub_1B640C8(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__, v11);
    sub_1B640C8(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v13);
    byte_49FA301 = 1;
  }
  v14 = sub_1B64314(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, *(_QWORD *)&result, equipItem);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_31;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
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
      sub_1B6432C(ResponseData, v18);
    v23 = memberItemList->m_Items[selectMemberIndex];
    if ( !equipItem )
      goto LABEL_10;
  }
  else
  {
    v23 = 0LL;
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
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v25;
LABEL_16:
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v45;
  ResponseData = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                  &v43,
                                                  0LL);
  if ( !v23 )
    goto LABEL_31;
  v26 = (int64_t)ResponseData;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v23, 0LL) == ResponseData )
    goto LABEL_29;
  ResponseData = this->fields.partyItem;
  if ( !ResponseData )
    goto LABEL_31;
  WarBoardPartyListViewItem__SetEquip(ResponseData, this->fields.selectMemberIndex, v26, v27);
  partyListViewManager = this->fields.partyListViewManager;
  v31 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v29,
                                                                   v30);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v31,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v32);
  if ( !partyListViewManager )
    goto LABEL_31;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v31, v33);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_29;
  v36 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v14 + 24) = v36;
  v37 = this->fields.partyItem;
  if ( !v37
    || (v38 = (System_Object_array *)v37->fields.memberItemList,
        v39 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_PartyOrganizationListViewItem__TypeInfo,
                                              v34,
                                              v35),
        System_Predicate_object____ctor(
          v39,
          (Il2CppObject *)v14,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          0LL),
        All_object = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_object_(
                                                          v38,
                                                          (System_Predicate_T__o *)v39,
                                                          (const MethodInfo_2F3045C *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        ResponseData = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                        All_object,
                                                        (PartyOrganizationListViewItem_array *)All_object,
                                                        v41),
        (onFinishedEditMember = this->fields.onFinishedEditMember) == 0LL) )
  {
LABEL_31:
    sub_1B64324(ResponseData);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyListViewItem_o *, _QWORD))onFinishedEditMember->fields.m_target)(
    onFinishedEditMember->fields.original_method_info,
    ResponseData,
    *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
LABEL_29:
  ResponseData = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_49FA300 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify);
    byte_49FA300 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnSelectServant(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_o *v6; // x19
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  int32_t selectMemberIndex; // w1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  struct WarBoardPartyListViewItem_o *v18; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8

  v6 = this;
  if ( (byte_49FA303 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, *(_QWORD *)&result);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v7);
    byte_49FA303 = 1;
  }
  if ( result )
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
      selectMemberIndex = v6->fields.selectMemberIndex;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SwapMember(v6->fields.partyItem, selectMemberIndex, item->fields.partyIndex, v8);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(v6->fields.partyItem, selectMemberIndex, item, v8);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v14 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v12,
                                                                   v13);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v14,
    (Il2CppObject *)v6,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v15);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v14, v16);
  v18 = v6->fields.partyItem;
  if ( !v18 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v18->fields.memberItemList, v17);
  onFinishedEditMember = v6->fields.onFinishedEditMember;
  if ( onFinishedEditMember )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))onFinishedEditMember->fields.m_target)(
      onFinishedEditMember->fields.original_method_info,
      ResponseData,
      *(_QWORD *)&onFinishedEditMember->fields.extra_arg);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_1B64324(this);
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
  __int64 v21; // x1
  __int64 v22; // x2
  ServantStatusDialog_EndDelegate_o *v23; // x22
  FollowerInfo_o *followerInfo; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *v27; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  ServantStatusDialog_EndDelegate_o *v33; // x23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  FollowerInfo_o *v38; // x8
  CommonUI_o *v39; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  ServantStatusDialog_EndDelegate_o *v43; // x22
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  Il2CppObject *v46; // x0
  WarBoardPartyListViewItem_o *v47; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  EquipGraphListMenu_CallbackFunc_o *v53; // x24
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  int32_t v56; // w21
  PartyServantSelectMenu_o *servantSelectMenu; // x23
  WarBoardPartyListViewItem_o *v58; // x24
  EventUpValSetupInfo_o *v59; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  PartyServantSelectMenu_CallbackFunc_o *v63; // x25

  if ( (byte_49FA2FF & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphListMenu_CallbackFunc_TypeInfo, member);
    sub_1B640C8(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v12);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v13);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v14);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v15);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v16);
    byte_49FA2FF = 1;
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
            v17 = (_QWORD *)sub_1B640E0(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
          v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
          this->fields.selectMemberIndex = member->fields.index;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v21, v22);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v23, 0LL, 0LL);
            return;
          }
LABEL_45:
          sub_1B64324(followerInfo);
        }
        if ( member->fields.isFollower )
        {
          followerInfo = member->fields.followerInfo;
          if ( !followerInfo )
            goto LABEL_45;
          if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0LL) )
          {
            v36 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
            if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
              v36 = (_QWORD *)sub_1B640E0(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
            v37 = (System_Reflection_MethodBase_o *)sub_1B640AC(v36, v36[4]);
            OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v38 = member->fields.followerInfo;
            if ( !v38 )
              goto LABEL_45;
            v39 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v38, 0, 1, 0LL);
            v43 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v41, v42);
            ServantStatusDialog_EndDelegate___ctor(
              v43,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v39 )
              goto LABEL_45;
            CommonUI__OpenServantEquipStatusDialog_30360564(v39, 19, EquipTarget1, v43, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_25:
      v34 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
      if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1B640E0(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
      v35 = (System_Reflection_MethodBase_o *)sub_1B640AC(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
      return;
    }
    if ( !member || !member->fields.userServantEntity )
      goto LABEL_25;
    v25 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B640E0(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B640AC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v30 = (CommonUI_o *)v27;
    v33 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v31, v32);
    ServantStatusDialog_EndDelegate___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v30 )
      goto LABEL_45;
    CommonUI__OpenServantStatusDialog_30353884(v30, 1, partyItem, index, v33, 0LL);
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
    v44 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1B640E0(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v45 = (System_Reflection_MethodBase_o *)sub_1B640AC(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v47 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v50 = (CommonUI_o *)v46;
    v53 = (EquipGraphListMenu_CallbackFunc_o *)sub_1B64314(EquipGraphListMenu_CallbackFunc_TypeInfo, v51, v52);
    EquipGraphListMenu_CallbackFunc___ctor(
      v53,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v50 )
      goto LABEL_45;
    CommonUI__OpenEquipGraphListMenu_30349612(v50, v47, selectMemberIndex, eventUpValSetupInfo, v53, 0LL);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_25;
    v54 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v54 = (_QWORD *)sub_1B640E0(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v55 = (System_Reflection_MethodBase_o *)sub_1B640AC(v54, v54[4]);
    OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
    v56 = member->fields.index;
    servantSelectMenu = this->fields.servantSelectMenu;
    v58 = this->fields.partyItem;
    v59 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = v56;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v63 = (PartyServantSelectMenu_CallbackFunc_o *)sub_1B64314(PartyServantSelectMenu_CallbackFunc_TypeInfo, v61, v62);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v63,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_45;
    PartyServantSelectMenu__Open_32068156(servantSelectMenu, v58, v56, 0, v59, questRestrictionInfo, v63, 0LL, 0LL);
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
  struct UIPanel_array *v15; // x20
  const MethodInfo *v16; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v20; // x22
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  WarBoardPartyOrganizationMenu_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  WarBoardPartyOrganizationMenu_o *v26; // x0
  const MethodInfo *v27; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  Il2CppObject *Instance; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x21
  __int64 v34; // x0

  v4 = this;
  if ( (byte_49FA302 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isModify);
    sub_1B640C8(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v5);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v8);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1B640C8(
                                                &Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
                                                v9);
    byte_49FA302 = 1;
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
        v15 = *(struct UIPanel_array **)(v14 + 32);
        if ( !v15 )
          goto LABEL_15;
        PartyOrganizationListViewItem__Modify(*(PartyOrganizationListViewItem_o **)(v14 + 32), 0LL);
        WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v4, v16);
        partyListViewManager = v4->fields.partyListViewManager;
        v20 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                         WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                         v18,
                                                                         v19);
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
          v20,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
          v21);
        if ( !partyListViewManager
          || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v20, v22),
              (this = (WarBoardPartyOrganizationMenu_o *)sub_1B64170(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
        {
LABEL_17:
          sub_1B64324(this);
        }
        v23 = this;
        this = (WarBoardPartyOrganizationMenu_o *)sub_1B64204(v15, this->klass->_1.element_class);
        if ( !this )
        {
          v34 = sub_1B64348(0LL);
          sub_1B641F0(v34, 0LL);
        }
        if ( !LODWORD(v23->fields.m_CancellationTokenSource) )
LABEL_18:
          sub_1B6432C(this, isModify);
        v23->fields.basePanelList = v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->fields.basePanelList, (int32_t)v15, v24, v25);
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         v26,
                         (PartyOrganizationListViewItem_array *)v23,
                         v27);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  __int64 v20; // x8
  WarBoardData_o *v21; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardPartyListViewItem_o *v26; // x24
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  int32_t v29; // w3
  WarBoardPartyOrganizationListViewManager_o *v30; // x20
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  struct WarBoardPartyListViewItem_o *partyItem; // x22
  UnityEngine_GameObject_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  WarBoardPartyOrganizationListViewManager_o *v41; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v42; // x21
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  __int64 v45; // x0

  if ( (byte_49FA2FD & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7);
    sub_1B640C8(&WarBoardPartyListViewItem___TypeInfo, v8);
    sub_1B640C8(&WarBoardPartyListViewItem_TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v10);
    byte_49FA2FD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onFinishedEditMember,
    (int32_t)onFinishedEditMember,
    v12,
    v13);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&partyListViewManager->fields.onTapMember, 0, v17, v18);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  gameObject = *(UnityEngine_GameObject_o **)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*((_BYTE *)&gameObject[12].fields + 5) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_1BB5FA4(gameObject);
  v20 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v20 )
    goto LABEL_20;
  v21 = *(WarBoardData_o **)(v20 + 440);
  if ( !v21 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v20 + 440), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v21, 0LL);
  v26 = (WarBoardPartyListViewItem_o *)sub_1B64314(WarBoardPartyListViewItem_TypeInfo, v24, v25);
  WarBoardPartyListViewItem___ctor(v26, EditableServantPieces, focusPiece, FormationLimitCost, v27);
  this->fields.partyItem = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)v26, v28, v29);
  v30 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_1B64170(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = this->fields.partyItem;
  v35 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64204(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v45 = sub_1B64348(0LL);
      sub_1B641F0(v45, 0LL);
    }
  }
  if ( !LODWORD(v35[1].klass) )
    sub_1B6432C(gameObject, v31);
  v35[1].monitor = partyItem;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35[1].monitor, (int32_t)partyItem, v32, v33);
  v38 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v36,
                                                                   v37);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v39);
  if ( !v30 )
LABEL_20:
    sub_1B64324(gameObject);
  WarBoardPartyOrganizationListViewManager__CreateList(v30, (WarBoardPartyListViewItem_array *)v35, v38, v40);
LABEL_18:
  v41 = this->fields.partyListViewManager;
  v42 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v14,
                                                                   v15);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v42,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v43);
  if ( !v41 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v41, 2, v42, v44);
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
  int32_t EventId; // w0
  int32_t v11; // w21
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FA2FC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, data);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FA2FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v11 = EventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v11,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v17 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v13, v14);
      EventUpValSetupInfo___ctor(v17, questId, questPhase, v11, 0LL);
      this->fields.eventUpValSetupInfo = v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValSetupInfo, (int32_t)v17, v18, v19);
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
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AA364;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19AA460;
          else
            v9 = (Il2CppObject *)sub_19AA424;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19AA3A0;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19AA374;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19AA344;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA2FC;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 3 )
    {
      v9 = (Il2CppObject *)sub_19AA114;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 2 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1B64180(v6);
        v11 = sub_1B6463C(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19AA258;
          else
            v9 = (Il2CppObject *)sub_19AA204;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19AA168;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19AA130;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19AA0E8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA088;
}


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
  if ( (byte_49FA306 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, memberItem);
    byte_49FA306 = 1;
  }
  v12[3] = 0LL;
  v12[0] = (__int64)memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
    sub_1B64324(this);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}