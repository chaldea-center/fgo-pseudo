void WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E573 & 1) == 0 )
  {
    sub_1C93AD4(&BaseMenu_TypeInfo);
    byte_4D2E573 = 1;
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
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4D2E56C & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4D2E56C = 1;
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
    v7 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C93D20(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      v8);
    if ( !partyListViewManager )
      sub_1C93D2C(v9, v10);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v7, v11);
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
    sub_1C93D2C(this, method);
  max_length = memberItemList->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C93D34(this);
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
  __int64 v6; // x1
  int max_length; // w8
  __int64 v8; // x24
  PartyOrganizationListViewItem_o *v9; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w29
  __int128 v12; // q0
  int64_t v13; // x22
  int64_t EquipUserSvtId; // x23
  __int64 v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-80h]

  if ( (byte_4D2E572 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
    byte_4D2E572 = 1;
  }
  if ( !items )
    return 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C93D34(v5);
      v9 = items->m_Items[v8];
      if ( !v9 )
        break;
      userServantEntity = v9->fields.userServantEntity;
      warBoardPieceIndex = v9->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v12 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v12;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v28, 0, 0);
        v29 = v28;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v29;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v27, 0);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v9, 0);
      v15 = sub_1C93D20(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      *(_DWORD *)(v15 + 16) = warBoardPieceIndex;
      *(_QWORD *)(v15 + 24) = v13;
      *(_QWORD *)(v15 + 32) = EquipUserSvtId;
      if ( !v4 )
        break;
      v22 = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__;
      ++v4->fields._version;
      if ( !v22 )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(v22->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v15,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &v22->obj.klass + size;
        v4->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v15;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), v15, v16, v17, v18, v19, v20, v21);
      }
      max_length = items->max_length;
      if ( (int)++v8 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                                     v4,
                                                                     (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_26:
    sub_1C93D2C(v5, v6);
  }
  if ( !v4 )
    goto LABEL_26;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                               v4,
                                                               (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4D2E569 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C93AD4(&StringLiteral_10636/*"PartyOrganization/PartyServantSelectMenu"*/);
    byte_4D2E569 = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_10636/*"PartyOrganization/PartyServantSelectMenu"*/,
               (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52629400(
                                               object,
                                               transform,
                                               (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    if ( !gameObject )
LABEL_14:
      sub_1C93D2C(gameObject, v8);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    *p_servantSelectMenu = (struct PartyServantSelectMenu_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.servantSelectMenu,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&partyListViewManager->fields.onTapMember, 0, v17, v18, v19, v20, v21, v22);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_14;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onFinishedEditMember, 0, v23, v24, v25, v26, v27, v28);
  this->fields.partyItem = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, 0, v29, v30, v31, v32, v33, v34);
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
    sub_1C93D2C(this, 0);
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
  int64_t IsUse; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  PartyOrganizationListViewItem_o *v21; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v23; // q0
  int64_t v24; // x23
  const MethodInfo *v25; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v27; // x23
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  struct WarBoardPartyListViewItem_o *v30; // x8
  System_Object_array *v31; // x20
  System_Predicate_object__o *v32; // x22
  WarBoardPartyOrganizationMenu_o *All_object; // x0
  const MethodInfo *v34; // x2
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-60h]

  if ( (byte_4D2E56F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindAll_PartyOrganizationListViewItem___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C93AD4(&System_Predicate_PartyOrganizationListViewItem__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__);
    sub_1C93AD4(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4D2E56F = 1;
  }
  v8 = sub_1C93D20(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v8,
    0);
  if ( !v8 )
    goto LABEL_32;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
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
      sub_1C93D34(IsUse);
    v21 = memberItemList->m_Items[selectMemberIndex];
    if ( !equipItem )
      goto LABEL_10;
  }
  else
  {
    v21 = 0;
    if ( !equipItem )
    {
LABEL_10:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v37, 0, 0);
      v38 = v37;
      goto LABEL_16;
    }
  }
  userSvtEntity = equipItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_32;
  v23 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v23;
LABEL_16:
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v38;
  IsUse = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v36, 0);
  if ( !v21 )
    goto LABEL_32;
  v24 = IsUse;
  if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v21, 0) == IsUse )
    goto LABEL_30;
  IsUse = (int64_t)this->fields.partyItem;
  if ( !IsUse )
    goto LABEL_32;
  WarBoardPartyListViewItem__SetEquip((WarBoardPartyListViewItem_o *)IsUse, this->fields.selectMemberIndex, v24, v25);
  partyListViewManager = this->fields.partyListViewManager;
  v27 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C93D20(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v28);
  if ( !partyListViewManager )
    goto LABEL_32;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v27, v29);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_30;
  *(_DWORD *)(v8 + 24) = -1;
  if ( equipItem )
  {
    IsUse = EquipGraphListViewItem__get_IsUse(equipItem, 0);
    if ( (IsUse & 1) != 0 )
    {
      IsUse = (int64_t)EquipGraphListViewItem__GetWearerMemberInfo(equipItem, 0);
      if ( !IsUse )
        goto LABEL_32;
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(IsUse + 16);
    }
  }
  v30 = this->fields.partyItem;
  if ( !v30
    || (v31 = (System_Object_array *)v30->fields.memberItemList,
        v32 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_object____ctor(
          v32,
          (Il2CppObject *)v8,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          0),
        All_object = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_object_(
                                                          v31,
                                                          (System_Predicate_T__o *)v32,
                                                          (const MethodInfo_32A9748 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        IsUse = (int64_t)WarBoardPartyOrganizationMenu__CreateResponseData(
                           All_object,
                           (PartyOrganizationListViewItem_array *)All_object,
                           v34),
        (onFinishedEditMember = this->fields.onFinishedEditMember) == 0) )
  {
LABEL_32:
    sub_1C93D2C(IsUse, v10);
  }
  ((void (__fastcall *)(intptr_t, int64_t, intptr_t))onFinishedEditMember->fields.invoke_impl)(
    onFinishedEditMember->fields.method_code,
    IsUse,
    onFinishedEditMember->fields.method);
LABEL_30:
  IsUse = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsUse )
    goto LABEL_32;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)IsUse, 0, 0);
}


void WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2E56E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2E56E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationMenu__OnSelectServant(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  WarBoardPartyOrganizationMenu_o *v6; // x19
  const MethodInfo *v7; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct WarBoardPartyListViewItem_o *v14; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8

  v5 = result;
  v6 = this;
  if ( (byte_4D2E571 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4D2E571 = 1;
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
      this = (WarBoardPartyOrganizationMenu_o *)PartyServantListViewItem__get_IsParty(item, 0);
      partyItem = v6->fields.partyItem;
      *(_QWORD *)&result = (unsigned int)v6->fields.selectMemberIndex;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SwapMember(v6->fields.partyItem, result, item->fields.partyIndex, v7);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(v6->fields.partyItem, result, item, v7);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v10 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C93D20(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v10,
    (Il2CppObject *)v6,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v11);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v10, v12);
  v14 = v6->fields.partyItem;
  if ( !v14 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v14->fields.memberItemList, v13);
  onFinishedEditMember = v6->fields.onFinishedEditMember;
  if ( onFinishedEditMember )
    ((void (__fastcall *)(intptr_t, WarBoardPartyOrganizationMenu_ResponseData_array *, intptr_t))onFinishedEditMember->fields.invoke_impl)(
      onFinishedEditMember->fields.method_code,
      ResponseData,
      onFinishedEditMember->fields.method);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_1C93D2C(this, *(_QWORD *)&result);
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

  if ( (byte_4D2E56D & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__);
    byte_4D2E56D = 1;
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
            v9 = (_QWORD *)sub_1C93AEC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          this->fields.selectMemberIndex = member->fields.index;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0);
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
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
          sub_1C93D2C(followerInfo, member);
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
              v24 = (_QWORD *)sub_1C93AEC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
            v25 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v24, v24[4]);
            OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v26 = member->fields.followerInfo;
            if ( !v26 )
              goto LABEL_45;
            v27 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v26, 0, 1, 0);
            v29 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v29,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0);
            if ( !v27 )
              goto LABEL_45;
            CommonUI__OpenServantEquipStatusDialog_31596056(v27, 19, EquipTarget1, v29, 0, 0);
            return;
          }
        }
      }
LABEL_25:
      v22 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
      if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C93AEC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
      return;
    }
    if ( !member || !member->fields.userServantEntity )
      goto LABEL_25;
    v15 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C93AEC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    this->fields.selectMemberIndex = member->fields.index;
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v20 = (CommonUI_o *)v17;
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0);
    if ( !v20 )
      goto LABEL_45;
    CommonUI__OpenServantStatusDialog_31589496(v20, 1, partyItem, index, v21, 0);
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
      v30 = (_QWORD *)sub_1C93AEC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v31 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
    this->fields.selectMemberIndex = member->fields.index;
    v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v36 = (CommonUI_o *)v32;
    v37 = (EquipGraphListMenu_CallbackFunc_o *)sub_1C93D20(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v37,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0);
    if ( !v36 )
      goto LABEL_45;
    CommonUI__OpenEquipGraphListMenu_31585460(v36, v33, selectMemberIndex, eventUpValSetupInfo, v37, 0);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_25;
    v38 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1C93AEC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0);
    v40 = member->fields.index;
    servantSelectMenu = this->fields.servantSelectMenu;
    v42 = this->fields.partyItem;
    v43 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = v40;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v45 = (PartyServantSelectMenu_CallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0);
    if ( !servantSelectMenu )
      goto LABEL_45;
    PartyServantSelectMenu__Open_35205068(servantSelectMenu, v42, v40, 0, v43, questRestrictionInfo, v45, 0, 0);
  }
}


void WarBoardPartyOrganizationMenu__OnfinishedCloseServantDetail(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  WarBoardPartyOrganizationMenu_o *v23; // x0
  const MethodInfo *v24; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v28; // x21
  __int64 v29; // x0

  v4 = this;
  if ( (byte_4D2E570 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    this = (WarBoardPartyOrganizationMenu_o *)sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__);
    byte_4D2E570 = 1;
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
        v13 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C93D20(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
          v13,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
          v14);
        if ( !partyListViewManager
          || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v13, v15),
              (this = (WarBoardPartyOrganizationMenu_o *)sub_1C93B7C(PartyOrganizationListViewItem___TypeInfo, 1)) == 0) )
        {
LABEL_17:
          sub_1C93D2C(this, isModify);
        }
        v16 = this;
        this = (WarBoardPartyOrganizationMenu_o *)sub_1C93C10(v10, this->klass->_1.element_class);
        if ( !this )
        {
          v29 = sub_1C93D50();
          sub_1C93BFC(v29, 0);
        }
        if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_18:
          sub_1C93D34(this);
        v16->fields.basePanelList = v10;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v16->fields.basePanelList,
          (int32_t)v10,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         v23,
                         (PartyOrganizationListViewItem_array *)v16,
                         v24);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v4, Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v28, 0);
}


void WarBoardPartyOrganizationMenu__Open(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x8
  WarBoardData_o *v25; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v28; // x24
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  WarBoardPartyOrganizationListViewManager_o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct WarBoardPartyListViewItem_o *partyItem; // x22
  UnityEngine_GameObject_o *v44; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v45; // x22
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  WarBoardPartyOrganizationListViewManager_o *v48; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  __int64 v52; // x0

  if ( (byte_4D2E56B & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&WarBoardPartyListViewItem___TypeInfo);
    sub_1C93AD4(&WarBoardPartyListViewItem_TypeInfo);
    sub_1C93AD4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4D2E56B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onFinishedEditMember,
    (int32_t)onFinishedEditMember,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0);
  partyListViewManager->fields.onTapMember = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&partyListViewManager->fields.onTapMember, 0, v16, v17, v18, v19, v20, v21);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C69B68(v22);
  gameObject = *(UnityEngine_GameObject_o **)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (gameObject[12].fields.m_CachedPtr & 0x10000000000LL) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_1C69B68(v22);
  v24 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v24 )
    goto LABEL_20;
  v25 = *(WarBoardData_o **)(v24 + 440);
  if ( !v25 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v24 + 440), 0);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v25, 0);
  v28 = (WarBoardPartyListViewItem_o *)sub_1C93D20(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v28, EditableServantPieces, focusPiece, FormationLimitCost, v29);
  this->fields.partyItem = v28;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_1C93B7C(WarBoardPartyListViewItem___TypeInfo, 1);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = this->fields.partyItem;
  v44 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v52 = sub_1C93D50();
      sub_1C93BFC(v52, 0);
    }
  }
  if ( !LODWORD(v44[1].klass) )
    sub_1C93D34(gameObject);
  v44[1].monitor = partyItem;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v44[1].monitor, (int32_t)partyItem, v37, v38, v39, v40, v41, v42);
  v45 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C93D20(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v45,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v46);
  if ( !v36 )
LABEL_20:
    sub_1C93D2C(gameObject, v8);
  WarBoardPartyOrganizationListViewManager__CreateList(v36, (WarBoardPartyListViewItem_array *)v44, v45, v47);
LABEL_18:
  v48 = this->fields.partyListViewManager;
  v49 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_1C93D20(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v49,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v50);
  if ( !v48 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v48, 2, v49, v51);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void WarBoardPartyOrganizationMenu__SetEventId(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardDataEntity_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t EventId; // w0
  int32_t v8; // w21
  Il2CppObject *Entity; // x0
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2E56A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2E56A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0);
  if ( EventId < 1 )
    return;
  v8 = EventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_13:
    sub_1C93D2C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v8,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v12 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v12, questId, questPhase, v8, 0);
      this->fields.eventUpValSetupInfo = v12;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.eventUpValSetupInfo,
        (int32_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
  }
}


void WarBoardPartyOrganizationMenu_OnFinishedEditMember___ctor(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC6B34;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C93B8C(method);
        v16 = sub_1C94120(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AC6C30;
          else
            v13 = sub_1AC6BF4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AC6B70;
        }
        else
        {
          v13 = sub_1AC6B44;
        }
      }
      else
      {
        v13 = sub_1AC6B14;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC6ACC;
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
  return sub_1C93A88(this, &v6, callback, object);
}


void WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 3 )
    {
      v13 = sub_1AC68E4;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 2 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_1C93B8C(method);
        v15 = sub_1C94120(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1AC6A28;
          else
            v13 = sub_1AC69D4;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1AC6938;
        }
        else
        {
          v13 = sub_1AC6900;
        }
      }
      else
      {
        v13 = sub_1AC68B8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC6858;
}


System_IAsyncResult_o *WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__BeginInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        PartyOrganizationListViewItem_o *memberItem,
        bool isSvtEquip,
        bool isLongTap,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[4]; // [xsp+0h] [xbp-60h] BYREF
  bool v13[4]; // [xsp+28h] [xbp-38h] BYREF
  bool v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = isSvtEquip;
  v13[0] = isLongTap;
  if ( (byte_4D2E574 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2E574 = 1;
  }
  v12[3] = 0;
  v12[0] = memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return sub_1C93A88(this, v12, callback, object);
}


void WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
    sub_1C93D2C(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}