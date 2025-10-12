void WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C35629 & 1) == 0 )
  {
    sub_1C32C20(&BaseMenu_TypeInfo);
    byte_4C35629 = 1;
  }
  this->fields.selectMemberIndex = -1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void WarBoardPartyOrganizationMenu__ChangeFocusPiece(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        const MethodInfo *method)
{
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4C35622 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4C35622 = 1;
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
    v7 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C32E6C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      v8);
    if ( !partyListViewManager )
      sub_1C32E7C(v9);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v7, v10);
  }
}


void WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x20
  il2cpp_array_size_t max_length; // x8
  WarBoardPartyOrganizationMenu_o *v5; // x19
  unsigned __int64 v6; // x21
  PartyOrganizationListViewItem_o *v7; // x23
  const MethodInfo *v8; // x2

  partyItem = this->fields.partyItem;
  if ( !partyItem || (memberItemList = partyItem->fields.memberItemList) == 0 )
LABEL_14:
    sub_1C32E7C(this);
  max_length = memberItemList->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C32E84(this);
      v7 = memberItemList->m_Items[v6];
      if ( v7 )
      {
        this = (WarBoardPartyOrganizationMenu_o *)v7->fields.userServantEntity;
        if ( this )
        {
          this = (WarBoardPartyOrganizationMenu_o *)UserServantEntity__getQuestRestriction(
                                                      (UserServantEntity_o *)this,
                                                      v7->fields.questRestrictionInfo,
                                                      v7->fields.rarityId,
                                                      1,
                                                      0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (WarBoardPartyOrganizationMenu_o *)v5->fields.partyItem;
            if ( !this )
              goto LABEL_14;
            WarBoardPartyListViewItem__ClearMember((WarBoardPartyListViewItem_o *)this, v7->fields.index, v8);
          }
        }
      }
      LODWORD(max_length) = memberItemList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void WarBoardPartyOrganizationMenu__Close(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu__Init(this, method);
  BaseMenu__Close((BaseMenu_o *)this, 0, 0);
}


WarBoardPartyOrganizationMenu_ResponseData_array *WarBoardPartyOrganizationMenu__CreateResponseData(
        WarBoardPartyOrganizationMenu_o *this,
        PartyOrganizationListViewItem_array *items,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  int max_length; // w8
  __int64 v7; // x24
  PartyOrganizationListViewItem_o *v8; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w29
  __int128 v11; // q0
  int64_t v12; // x22
  int64_t EquipUserSvtId; // x23
  __int64 v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-80h]

  if ( (byte_4C35628 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
    byte_4C35628 = 1;
  }
  if ( !items )
    return 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_1C32E84(v5);
      v8 = items->m_Items[v7];
      if ( !v8 )
        break;
      userServantEntity = v8->fields.userServantEntity;
      warBoardPieceIndex = v8->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v24.fields.fakeValue = v11;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v23, 0, 0);
        v24 = v23;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v24;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v22, 0);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v8, 0);
      v14 = sub_1C32E6C(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      *(_DWORD *)(v14 + 16) = warBoardPieceIndex;
      *(_QWORD *)(v14 + 24) = v12;
      *(_QWORD *)(v14 + 32) = EquipUserSvtId;
      if ( !v4 )
        break;
      v17 = v4->fields._items;
      v18 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__;
      ++v4->fields._version;
      if ( !v17 )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(v17->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &v17->obj.klass + size;
        v4->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), v14, v15, v16);
      }
      max_length = items->max_length;
      if ( (int)++v7 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                                     v4,
                                                                     (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_26:
    sub_1C32E7C(v5);
  }
  if ( !v4 )
    goto LABEL_26;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                               v4,
                                                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
}


WarBoardPartyListViewItem_o *WarBoardPartyOrganizationMenu__GetCurrentPartyItem(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


int32_t WarBoardPartyOrganizationMenu__GetDisplaySquareIndex(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_o *focusMemberItem; // x8

  if ( this->fields.isOpen
    && (partyItem = this->fields.partyItem) != 0
    && (focusMemberItem = partyItem->fields.focusMemberItem) != 0 )
  {
    return focusMemberItem->fields.warBoardPieceIndex;
  }
  else
  {
    return -1;
  }
}


void WarBoardPartyOrganizationMenu__Init(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3561F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C32C20(&StringLiteral_10565/*"PartyOrganization/PartyServantSelectMenu"*/);
    byte_4C3561F = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_10565/*"PartyOrganization/PartyServantSelectMenu"*/,
               (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51812484(
                                               object,
                                               transform,
                                               (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    if ( !gameObject )
LABEL_14:
      sub_1C32E7C(gameObject);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    *p_servantSelectMenu = (struct PartyServantSelectMenu_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantSelectMenu, (int32_t)Component_object, v9, v10);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_14;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0);
  partyListViewManager->fields.onTapMember = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&partyListViewManager->fields.onTapMember, 0, v12, v13);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_14;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onFinishedEditMember, 0, v14, v15);
  this->fields.partyItem = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.partyItem, 0, v16, v17);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool WarBoardPartyOrganizationMenu__IsOpenSamePiece(
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
    sub_1C32E7C(this);
  return piece->fields._index_k__BackingField == focusMemberItem->fields.warBoardPieceIndex;
}


void WarBoardPartyOrganizationMenu__OnFinishedSelectServantEquip(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x21
  WarBoardPartyListViewItem_o *WearerMemberInfo; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  PartyOrganizationListViewItem_o *v16; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v18; // q0
  int64_t v19; // x23
  const MethodInfo *v20; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v22; // x23
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int selectNum; // w8
  struct WarBoardPartyListViewItem_o *v26; // x8
  System_Object_array *v27; // x20
  System_Predicate_object__o *v28; // x22
  WarBoardPartyOrganizationMenu_o *All_object; // x0
  const MethodInfo *v30; // x2
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-60h]

  if ( (byte_4C35625 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindAll_PartyOrganizationListViewItem___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C32C20(&System_Predicate_PartyOrganizationListViewItem__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__);
    sub_1C32C20(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4C35625 = 1;
  }
  v8 = sub_1C32E6C(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v8,
    0);
  if ( !v8 )
    goto LABEL_32;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  if ( result != 1 )
    goto LABEL_30;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_32;
  memberItemList = partyItem->fields.memberItemList;
  if ( memberItemList
    && (selectMemberIndex = this->fields.selectMemberIndex,
        max_length = memberItemList->max_length,
        (int)selectMemberIndex < max_length) )
  {
    if ( (unsigned int)selectMemberIndex >= max_length )
      sub_1C32E84(WearerMemberInfo);
    v16 = memberItemList->m_Items[selectMemberIndex];
    if ( !equipItem )
      goto LABEL_10;
  }
  else
  {
    v16 = 0;
    if ( !equipItem )
    {
LABEL_10:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0, 0);
      v34 = v33;
      goto LABEL_16;
    }
  }
  userSvtEntity = equipItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_32;
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v18;
LABEL_16:
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v34;
  WearerMemberInfo = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                      &v32,
                                                      0);
  if ( !v16 )
    goto LABEL_32;
  v19 = (int64_t)WearerMemberInfo;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v16, 0) == WearerMemberInfo )
    goto LABEL_30;
  WearerMemberInfo = this->fields.partyItem;
  if ( !WearerMemberInfo )
    goto LABEL_32;
  WarBoardPartyListViewItem__SetEquip(WearerMemberInfo, this->fields.selectMemberIndex, v19, v20);
  partyListViewManager = this->fields.partyListViewManager;
  v22 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C32E6C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v23);
  if ( !partyListViewManager )
    goto LABEL_32;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v22, v24);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_30;
  if ( equipItem )
  {
    WearerMemberInfo = (WarBoardPartyListViewItem_o *)EquipGraphListViewItem__GetWearerMemberInfo(equipItem, 0);
    if ( !WearerMemberInfo )
      goto LABEL_32;
    selectNum = WearerMemberInfo->fields.selectNum;
  }
  else
  {
    selectNum = -1;
  }
  *(_DWORD *)(v8 + 24) = selectNum;
  v26 = this->fields.partyItem;
  if ( !v26
    || (v27 = (System_Object_array *)v26->fields.memberItemList,
        v28 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_object____ctor(
          v28,
          (Il2CppObject *)v8,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          0),
        All_object = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_object_(
                                                          v27,
                                                          (System_Predicate_T__o *)v28,
                                                          (const MethodInfo_31E2A64 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        WearerMemberInfo = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                            All_object,
                                                            (PartyOrganizationListViewItem_array *)All_object,
                                                            v30),
        (onFinishedEditMember = this->fields.onFinishedEditMember) == 0) )
  {
LABEL_32:
    sub_1C32E7C(WearerMemberInfo);
  }
  ((void (__fastcall *)(intptr_t, WarBoardPartyListViewItem_o *, intptr_t))onFinishedEditMember->fields.invoke_impl)(
    onFinishedEditMember->fields.method_code,
    WearerMemberInfo,
    onFinishedEditMember->fields.method);
LABEL_30:
  WearerMemberInfo = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !WearerMemberInfo )
    goto LABEL_32;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)WearerMemberInfo, 0, 0);
}


void WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C35624 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C35624 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationMenu__OnSelectServant(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_o *v6; // x19
  const MethodInfo *v7; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  int32_t selectMemberIndex; // w1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct WarBoardPartyListViewItem_o *v15; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8

  v6 = this;
  if ( (byte_4C35627 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4C35627 = 1;
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
      this = (WarBoardPartyOrganizationMenu_o *)PartyServantListViewItem__get_IsParty(item, 0);
      partyItem = v6->fields.partyItem;
      selectMemberIndex = v6->fields.selectMemberIndex;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SwapMember(v6->fields.partyItem, selectMemberIndex, item->fields.partyIndex, v7);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(v6->fields.partyItem, selectMemberIndex, item, v7);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v11 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C32E6C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
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
    ((void (__fastcall *)(intptr_t, WarBoardPartyOrganizationMenu_ResponseData_array *, intptr_t))onFinishedEditMember->fields.invoke_impl)(
      onFinishedEditMember->fields.method_code,
      ResponseData,
      onFinishedEditMember->fields.method);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_1C32E7C(this);
  PartyServantSelectMenu__Close((PartyServantSelectMenu_o *)this, 0);
}


void WarBoardPartyOrganizationMenu__OnTapPartyMember(
        WarBoardPartyOrganizationMenu_o *this,
        PartyOrganizationListViewItem_o *member,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v13; // x22
  FollowerInfo_o *followerInfo; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *v17; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v20; // x22
  ServantStatusDialog_EndDelegate_o *v21; // x23
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  FollowerInfo_o *v26; // x8
  CommonUI_o *v27; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  ServantStatusDialog_EndDelegate_o *v29; // x22
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  Il2CppObject *v32; // x0
  WarBoardPartyListViewItem_o *v33; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v36; // x23
  EquipGraphListMenu_CallbackFunc_o *v37; // x24
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w21
  PartyServantSelectMenu_o *servantSelectMenu; // x23
  WarBoardPartyListViewItem_o *v42; // x24
  EventUpValSetupInfo_o *v43; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyServantSelectMenu_CallbackFunc_o *v45; // x25

  if ( (byte_4C35623 & 1) == 0 )
  {
    sub_1C32C20(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__);
    byte_4C35623 = 1;
  }
  if ( isLongTap )
  {
    if ( isSvtEquip )
    {
      if ( member )
      {
        if ( PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0) >= 1 )
        {
          v9 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
          if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C32C38(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          this->fields.selectMemberIndex = member->fields.index;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0);
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v13, 0, 0, 0);
            return;
          }
LABEL_45:
          sub_1C32E7C(followerInfo);
        }
        if ( member->fields.isFollower )
        {
          followerInfo = member->fields.followerInfo;
          if ( !followerInfo )
            goto LABEL_45;
          if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0) )
          {
            v24 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
            if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
              v24 = (_QWORD *)sub_1C32C38(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
            v25 = (System_Reflection_MethodBase_o *)sub_1C32C04(v24, v24[4]);
            OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v26 = member->fields.followerInfo;
            if ( !v26 )
              goto LABEL_45;
            v27 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v26, 0, 1, 0);
            v29 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v29,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0);
            if ( !v27 )
              goto LABEL_45;
            CommonUI__OpenServantEquipStatusDialog_31206252(v27, 19, EquipTarget1, v29, 0, 0);
            return;
          }
        }
      }
LABEL_25:
      v22 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
      if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C32C38(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C32C04(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
      return;
    }
    if ( !member || !member->fields.userServantEntity )
      goto LABEL_25;
    v15 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C32C38(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    this->fields.selectMemberIndex = member->fields.index;
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v20 = (CommonUI_o *)v17;
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0);
    if ( !v20 )
      goto LABEL_45;
    CommonUI__OpenServantStatusDialog_31199496(v20, 1, partyItem, index, v21, 0);
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
      if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0) )
        return;
      goto LABEL_25;
    }
    v30 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1C32C38(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v31 = (System_Reflection_MethodBase_o *)sub_1C32C04(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
    this->fields.selectMemberIndex = member->fields.index;
    v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v36 = (CommonUI_o *)v32;
    v37 = (EquipGraphListMenu_CallbackFunc_o *)sub_1C32E6C(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v37,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0);
    if ( !v36 )
      goto LABEL_45;
    CommonUI__OpenEquipGraphListMenu_31195220(v36, v33, selectMemberIndex, eventUpValSetupInfo, v37, 0);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_25;
    v38 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1C32C38(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C32C04(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0);
    v40 = member->fields.index;
    servantSelectMenu = this->fields.servantSelectMenu;
    v42 = this->fields.partyItem;
    v43 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = v40;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v45 = (PartyServantSelectMenu_CallbackFunc_o *)sub_1C32E6C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0);
    if ( !servantSelectMenu )
      goto LABEL_45;
    PartyServantSelectMenu__Open_34590348(servantSelectMenu, v42, v40, 0, v43, questRestrictionInfo, v45, 0, 0);
  }
}


void WarBoardPartyOrganizationMenu__OnfinishedCloseServantDetail(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardPartyOrganizationMenu__OnfinishedShowServantDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_o *v4; // x19
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  __int64 v9; // x8
  struct UIPanel_array *v10; // x20
  const MethodInfo *v11; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  WarBoardPartyOrganizationMenu_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  WarBoardPartyOrganizationMenu_o *v19; // x0
  const MethodInfo *v20; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v24; // x21
  __int64 v25; // x0

  v4 = this;
  if ( (byte_4C35626 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__);
    byte_4C35626 = 1;
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
        v9 = (__int64)memberItemList + 8 * selectMemberIndex;
        v10 = *(struct UIPanel_array **)(v9 + 32);
        if ( !v10 )
          goto LABEL_15;
        PartyOrganizationListViewItem__Modify(*(PartyOrganizationListViewItem_o **)(v9 + 32), 0);
        WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v4, v11);
        partyListViewManager = v4->fields.partyListViewManager;
        v13 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C32E6C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
          v13,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
          v14);
        if ( !partyListViewManager
          || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v13, v15),
              (this = (WarBoardPartyOrganizationMenu_o *)sub_1C32CC8(PartyOrganizationListViewItem___TypeInfo, 1)) == 0) )
        {
LABEL_17:
          sub_1C32E7C(this);
        }
        v16 = this;
        this = (WarBoardPartyOrganizationMenu_o *)sub_1C32D5C(v10, this->klass->_1.element_class);
        if ( !this )
        {
          v25 = sub_1C32EA0();
          sub_1C32D48(v25, 0);
        }
        if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_18:
          sub_1C32E84(this);
        v16->fields.basePanelList = v10;
        sub_1C32BC4((CGThumbnailListItem_o *)&v16->fields.basePanelList, (int32_t)v10, v17, v18);
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         v19,
                         (PartyOrganizationListViewItem_array *)v16,
                         v20);
        onFinishedEditMember = v4->fields.onFinishedEditMember;
        if ( onFinishedEditMember )
          ((void (__fastcall *)(intptr_t, WarBoardPartyOrganizationMenu_ResponseData_array *, intptr_t))onFinishedEditMember->fields.invoke_impl)(
            onFinishedEditMember->fields.method_code,
            ResponseData,
            onFinishedEditMember->fields.method);
      }
    }
  }
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v4, Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v24, 0);
}


void WarBoardPartyOrganizationMenu__Open(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  long double v13; // q0
  __int64 v14; // x0
  __int64 v15; // x8
  WarBoardData_o *v16; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v19; // x24
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  WarBoardPartyOrganizationListViewManager_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x22
  UnityEngine_GameObject_o *v27; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v28; // x22
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  WarBoardPartyOrganizationListViewManager_o *v31; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v32; // x21
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  __int64 v35; // x0

  if ( (byte_4C35621 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&WarBoardPartyListViewItem___TypeInfo);
    sub_1C32C20(&WarBoardPartyListViewItem_TypeInfo);
    sub_1C32C20(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4C35621 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onFinishedEditMember, (int32_t)onFinishedEditMember, v8, v9);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0);
  partyListViewManager->fields.onTapMember = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&partyListViewManager->fields.onTapMember, 0, v11, v12);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C83334(v13);
  gameObject = *(UnityEngine_GameObject_o **)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (gameObject[12].fields.m_CachedPtr & 0x10000000000LL) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_1C83334(v13);
  v15 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v15 )
    goto LABEL_20;
  v16 = *(WarBoardData_o **)(v15 + 440);
  if ( !v16 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v15 + 440), 0);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v16, 0);
  v19 = (WarBoardPartyListViewItem_o *)sub_1C32E6C(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v19, EditableServantPieces, focusPiece, FormationLimitCost, v20);
  this->fields.partyItem = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)v19, v21, v22);
  v23 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_1C32CC8(WarBoardPartyListViewItem___TypeInfo, 1);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = this->fields.partyItem;
  v27 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32D5C(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v35 = sub_1C32EA0();
      sub_1C32D48(v35, 0);
    }
  }
  if ( !LODWORD(v27[1].klass) )
    sub_1C32E84(gameObject);
  v27[1].monitor = partyItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&v27[1].monitor, (int32_t)partyItem, v24, v25);
  v28 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C32E6C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v29);
  if ( !v23 )
LABEL_20:
    sub_1C32E7C(gameObject);
  WarBoardPartyOrganizationListViewManager__CreateList(v23, (WarBoardPartyListViewItem_array *)v27, v28, v30);
LABEL_18:
  v31 = this->fields.partyListViewManager;
  v32 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C32E6C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v33);
  if ( !v31 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v31, 2, v32, v34);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void WarBoardPartyOrganizationMenu__SetEventId(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardDataEntity_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t EventId; // w0
  int32_t v7; // w21
  Il2CppObject *Entity; // x0
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C35620 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&EventUpValSetupInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C35620 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0);
  if ( EventId < 1 )
    return;
  v7 = EventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_13:
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v7,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v11 = (EventUpValSetupInfo_o *)sub_1C32E6C(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v11, questId, questPhase, v7, 0);
      this->fields.eventUpValSetupInfo = v11;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUpValSetupInfo, (int32_t)v11, v12, v13);
    }
  }
}


void WarBoardPartyOrganizationMenu_OnFinishedEditMember___ctor(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7575C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A75858;
          else
            v9 = sub_1A7581C;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A75798;
        }
        else
        {
          v9 = sub_1A7576C;
        }
      }
      else
      {
        v9 = sub_1A7573C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A756F4;
}


System_IAsyncResult_o *WarBoardPartyOrganizationMenu_OnFinishedEditMember__BeginInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_ResponseData_array *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = data;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, WarBoardPartyOrganizationMenu_ResponseData_array *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    data,
    this->fields.method);
}


void WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  char v10; // w21
  char v11; // w0
  Il2CppObject *m_target; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 3 )
    {
      v9 = sub_1A7550C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 2 )
    {
      if ( this->fields.method_is_virtual )
      {
        v10 = sub_1C32CD8(method);
        v11 = sub_1C33194(method);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = sub_1A75650;
          else
            v9 = sub_1A755FC;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = sub_1A75560;
        }
        else
        {
          v9 = sub_1A75528;
        }
      }
      else
      {
        v9 = sub_1A754E0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A75480;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__BeginInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        PartyOrganizationListViewItem_o *memberItem,
        bool isSvtEquip,
        bool isLongTap,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD v19[4]; // [xsp+0h] [xbp-60h] BYREF
  bool v20[4]; // [xsp+28h] [xbp-38h] BYREF
  bool v21[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v21[0] = isSvtEquip;
  v20[0] = isLongTap;
  if ( (byte_4C3562A & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C3562A = 1;
  }
  v19[3] = 0;
  v19[0] = memberItem;
  v19[1] = j_il2cpp_value_box_0(bool_TypeInfo, v21, isSvtEquip, isLongTap, callback, object, method, v7);
  v19[2] = j_il2cpp_value_box_0(bool_TypeInfo, v20, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v19, callback, object);
}


void WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        PartyOrganizationListViewItem_o *memberItem,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, PartyOrganizationListViewItem_o *, bool, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    memberItem,
    isSvtEquip,
    isLongTap,
    this->fields.method);
}


void WarBoardPartyOrganizationMenu_ResponseData___ctor(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int32_t pieceIndex,
        int64_t userServantId,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._PieceIndex_k__BackingField = pieceIndex;
  this->fields._UserServantId_k__BackingField = userServantId;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
}


int32_t WarBoardPartyOrganizationMenu_ResponseData__get_PieceIndex(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        const MethodInfo *method)
{
  return this->fields._PieceIndex_k__BackingField;
}


int64_t WarBoardPartyOrganizationMenu_ResponseData__get_UserServantEquipId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEquipId_k__BackingField;
}


int64_t WarBoardPartyOrganizationMenu_ResponseData__get_UserServantId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantId_k__BackingField;
}


void WarBoardPartyOrganizationMenu_ResponseData__set_PieceIndex(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PieceIndex_k__BackingField = value;
}


void WarBoardPartyOrganizationMenu_ResponseData__set_UserServantEquipId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserServantEquipId_k__BackingField = value;
}


void WarBoardPartyOrganizationMenu_ResponseData__set_UserServantId(
        WarBoardPartyOrganizationMenu_ResponseData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserServantId_k__BackingField = value;
}


void WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
        WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPartyOrganizationMenu___c__DisplayClass19_0___OnFinishedSelectServantEquip_b__0(
        WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *this,
        PartyOrganizationListViewItem_o *x,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_o *_4__this; // x9
  int32_t index; // w8

  if ( !x || (_4__this = this->fields.__4__this) == 0 )
    sub_1C32E7C(this);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}