void WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseMenu_c *v4; // x0

  if ( (byte_596E37A & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596E37A = 1;
  }
  v4 = BaseMenu_TypeInfo;
  this->fields.selectMemberIndex = -1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
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

  if ( (byte_596E373 & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_596E373 = 1;
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
    v7 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_2213CCC(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      v8);
    if ( !partyListViewManager )
      sub_2213CDC(v9, v10);
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
    sub_2213CDC(this, method);
  max_length = memberItemList->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
  __int64 v7; // x2
  int max_length; // w8
  __int64 v9; // x24
  PartyOrganizationListViewItem_o *v10; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w29
  __int128 v13; // q1
  int64_t v14; // x22
  int64_t EquipUserSvtId; // x23
  __int64 v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596E379 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
    byte_596E379 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !items )
    return 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_2213CE4(v5);
      v10 = items->m_Items[v9];
      if ( !v10 )
        break;
      userServantEntity = v10->fields.userServantEntity;
      warBoardPieceIndex = v10->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v13;
      }
      else
      {
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v29, 0, 0);
      }
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
      v28 = v29;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v28, 0);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v10, 0);
      v16 = sub_2213CCC(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      *(_DWORD *)(v16 + 16) = warBoardPieceIndex;
      *(_QWORD *)(v16 + 24) = v14;
      *(_QWORD *)(v16 + 32) = EquipUserSvtId;
      if ( !v4 )
        break;
      v23 = v4->fields._items;
      v24 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__;
      ++v4->fields._version;
      if ( !v23 )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(v23->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v16,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &v23->obj.klass + size;
        v4->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), v16, v17, v18, v19, v20, v21, v22);
      }
      max_length = items->max_length;
      if ( (int)++v9 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                                     v4,
                                                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_26:
    sub_2213CDC(v5, v6);
  }
  if ( !v4 )
    goto LABEL_26;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_object___ToArray(
                                                               v4,
                                                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  __int64 v2; // x2
  struct PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  Il2CppObject *object; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_596E370 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_2213A60(&StringLiteral_11003/*"PartyOrganization/PartyServantSelectMenu"*/);
    byte_596E370 = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_11003/*"PartyOrganization/PartyServantSelectMenu"*/,
               (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59717116(
                                               object,
                                               transform,
                                               (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    if ( !gameObject )
LABEL_14:
      sub_2213CDC(gameObject, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    *p_servantSelectMenu = (struct PartyServantSelectMenu_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantSelectMenu,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&partyListViewManager->fields.onTapMember,
    0,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_14;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onFinishedEditMember, 0, v26, v27, v28, v29, v30, v31);
  this->fields.partyItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, 0, v32, v33, v34, v35, v36, v37);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  __int64 selectMemberIndex; // x9
  int max_length; // w10
  PartyOrganizationListViewItem_o *v22; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q1
  int64_t v25; // x23
  const MethodInfo *v26; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v28; // x23
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  struct WarBoardPartyListViewItem_o *v31; // x8
  System_Object_array *v32; // x20
  System_Predicate_object__o *v33; // x22
  WarBoardPartyOrganizationMenu_o *All_object; // x0
  const MethodInfo *v35; // x2
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E376 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_PartyOrganizationListViewItem___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_2213A60(&System_Predicate_PartyOrganizationListViewItem__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__);
    sub_2213A60(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_596E376 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v8 = sub_2213CCC(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_32;
  *(_QWORD *)(v8 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
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
      sub_2213CE4(IsUse);
    v22 = memberItemList->m_Items[selectMemberIndex];
    if ( !equipItem )
      goto LABEL_10;
  }
  else
  {
    v22 = 0;
    if ( !equipItem )
    {
LABEL_10:
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v17);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v38, 0, 0);
      goto LABEL_16;
    }
  }
  userSvtEntity = equipItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_32;
  v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v24;
LABEL_16:
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v17);
  v37 = v38;
  IsUse = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v37, 0);
  if ( !v22 )
    goto LABEL_32;
  v25 = IsUse;
  if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v22, 0) == IsUse )
    goto LABEL_30;
  IsUse = (int64_t)this->fields.partyItem;
  if ( !IsUse )
    goto LABEL_32;
  WarBoardPartyListViewItem__SetEquip((WarBoardPartyListViewItem_o *)IsUse, this->fields.selectMemberIndex, v25, v26);
  partyListViewManager = this->fields.partyListViewManager;
  v28 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_2213CCC(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v29);
  if ( !partyListViewManager )
    goto LABEL_32;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v28, v30);
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
  v31 = this->fields.partyItem;
  if ( !v31
    || (v32 = (System_Object_array *)v31->fields.memberItemList,
        v33 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_object____ctor(
          v33,
          (Il2CppObject *)v8,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          0),
        All_object = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_object_(
                                                          v32,
                                                          (System_Predicate_T__o *)v33,
                                                          (const MethodInfo_39A9774 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        IsUse = (int64_t)WarBoardPartyOrganizationMenu__CreateResponseData(
                           All_object,
                           (PartyOrganizationListViewItem_array *)All_object,
                           v35),
        (onFinishedEditMember = this->fields.onFinishedEditMember) == 0) )
  {
LABEL_32:
    sub_2213CDC(IsUse, v10);
  }
  ((void (__fastcall *)(intptr_t, int64_t, intptr_t))onFinishedEditMember->fields.invoke_impl)(
    onFinishedEditMember->fields.method_code,
    IsUse,
    onFinishedEditMember->fields.method);
LABEL_30:
  IsUse = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_596E375 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E375 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
  bool IsParty; // w8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8

  v6 = this;
  if ( (byte_596E378 & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    this = (WarBoardPartyOrganizationMenu_o *)sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_596E378 = 1;
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
      IsParty = PartyServantListViewItem__get_IsParty(item, 0);
      this = (WarBoardPartyOrganizationMenu_o *)v6->fields.partyItem;
      if ( IsParty )
      {
        if ( !this )
          goto LABEL_19;
        WarBoardPartyListViewItem__SwapMember(
          (WarBoardPartyListViewItem_o *)this,
          v6->fields.selectMemberIndex,
          item->fields.partyIndex,
          v7);
      }
      else
      {
        if ( !this )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(
          (WarBoardPartyListViewItem_o *)this,
          v6->fields.selectMemberIndex,
          item,
          v7);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v10 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_2213CCC(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v10,
    (Il2CppObject *)v6,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v11);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v10, v12);
  partyItem = v6->fields.partyItem;
  if ( !partyItem )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, partyItem->fields.memberItemList, v13);
  onFinishedEditMember = v6->fields.onFinishedEditMember;
  if ( onFinishedEditMember )
    ((void (__fastcall *)(intptr_t, WarBoardPartyOrganizationMenu_ResponseData_array *, intptr_t))onFinishedEditMember->fields.invoke_impl)(
      onFinishedEditMember->fields.method_code,
      ResponseData,
      onFinishedEditMember->fields.method);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&result);
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
  const MethodInfo_47A29F8 *v11; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  FollowerInfo_o *followerInfo; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo_47A29F8 *v19; // x0
  Il2CppObject *v20; // x22
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  ServantStatusDialog_EndDelegate_o *v23; // x23
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo_47A29F8 *v26; // x0
  FollowerInfo_o *v27; // x8
  CommonUI_o *v28; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  ServantStatusDialog_EndDelegate_o *v30; // x22
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  const MethodInfo_47A29F8 *v33; // x0
  Il2CppObject *v34; // x23
  WarBoardPartyListViewItem_o *v35; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  EquipGraphListMenu_CallbackFunc_o *v38; // x24
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  int32_t v41; // w21
  PartyServantSelectMenu_o *servantSelectMenu; // x23
  WarBoardPartyListViewItem_o *v43; // x24
  EventUpValSetupInfo_o *v44; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyServantSelectMenu_CallbackFunc_c *v46; // x0
  PartyServantSelectMenu_CallbackFunc_o *v47; // x25

  if ( (byte_596E374 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__);
    byte_596E374 = 1;
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
            v9 = (_QWORD *)sub_2213A78(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
          v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          v11 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
          this->fields.selectMemberIndex = member->fields.index;
          Instance = SingletonMonoBehaviour_object___get_Instance(v11);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0);
          v14 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v14,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v14, 0, 0, 0);
            return;
          }
LABEL_44:
          sub_2213CDC(followerInfo, member);
        }
        if ( member->fields.isFollower )
        {
          followerInfo = member->fields.followerInfo;
          if ( !followerInfo )
            goto LABEL_44;
          if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0) )
          {
            v25 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
            OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
            v26 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_object___get_Instance(v26);
            v27 = member->fields.followerInfo;
            if ( !v27 )
              goto LABEL_44;
            v28 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v27, 0, 1, 0);
            v30 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v30,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0);
            if ( !v28 )
              goto LABEL_44;
            CommonUI__OpenServantEquipStatusDialog_37388712(v28, 19, EquipTarget1, v30, 0, 0);
            return;
          }
        }
      }
      goto LABEL_25;
    }
    if ( member && member->fields.userServantEntity )
    {
      v17 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
      if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_2213A78(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      v19 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      this->fields.selectMemberIndex = member->fields.index;
      v20 = SingletonMonoBehaviour_object___get_Instance(v19);
      partyItem = this->fields.partyItem;
      index = member->fields.index;
      v23 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
        0);
      if ( !v20 )
        goto LABEL_44;
      CommonUI__OpenServantStatusDialog_37382152((CommonUI_o *)v20, 1, partyItem, index, v23, 0);
      return;
    }
LABEL_25:
    v24 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_2213A78(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
    goto LABEL_28;
  }
  if ( isSvtEquip )
  {
    if ( !member )
      return;
    if ( member->fields.isFollower )
    {
      followerInfo = member->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_44;
      if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0) )
        return;
      v16 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
LABEL_28:
      OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
      return;
    }
    v31 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_2213A78(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
    v33 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.selectMemberIndex = member->fields.index;
    v34 = SingletonMonoBehaviour_object___get_Instance(v33);
    v35 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v38 = (EquipGraphListMenu_CallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v38,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0);
    if ( !v34 )
      goto LABEL_44;
    CommonUI__OpenEquipGraphListMenu_37378116((CommonUI_o *)v34, v35, selectMemberIndex, eventUpValSetupInfo, v38, 0);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_25;
    v39 = Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__;
    if ( (*((_BYTE *)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_2213A78(Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    v40 = (System_Reflection_MethodBase_o *)sub_2213A44(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0);
    v41 = member->fields.index;
    servantSelectMenu = this->fields.servantSelectMenu;
    v43 = this->fields.partyItem;
    v44 = this->fields.eventUpValSetupInfo;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v46 = PartyServantSelectMenu_CallbackFunc_TypeInfo;
    this->fields.selectMemberIndex = v41;
    v47 = (PartyServantSelectMenu_CallbackFunc_o *)sub_2213CCC(v46);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v47,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0);
    if ( !servantSelectMenu )
      goto LABEL_44;
    PartyServantSelectMenu__Open_41334720(servantSelectMenu, v43, v41, 0, v44, questRestrictionInfo, v47, 0, 0);
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
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardPartyOrganizationMenu_o *v24; // x0
  const MethodInfo *v25; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  struct WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v29; // x21
  __int64 v30; // x0

  v4 = this;
  if ( (byte_596E377 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    this = (WarBoardPartyOrganizationMenu_o *)sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__);
    byte_596E377 = 1;
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
        v13 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_2213CCC(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
          v13,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
          v14);
        if ( !partyListViewManager
          || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v13, v15),
              (this = (WarBoardPartyOrganizationMenu_o *)sub_2213B20(PartyOrganizationListViewItem___TypeInfo, 1)) == 0) )
        {
LABEL_17:
          sub_2213CDC(this, isModify);
        }
        v16 = this;
        this = (WarBoardPartyOrganizationMenu_o *)sub_2213BB4(v10, this->klass->_1.element_class);
        if ( !this )
        {
          v30 = sub_2213D00(0, v17);
          sub_2213BA0(v30, 0);
        }
        if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_18:
          sub_2213CE4(this);
        v16->fields.basePanelList = v10;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v16->fields.basePanelList,
          (int32_t)v10,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         v24,
                         (PartyOrganizationListViewItem_array *)v16,
                         v25);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v4, Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v29, 0);
}


void WarBoardPartyOrganizationMenu__Open(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x8
  WarBoardData_o *v25; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v28; // x24
  const MethodInfo *v29; // x4
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  WarBoardPartyOrganizationListViewManager_o *v36; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct WarBoardPartyListViewItem_o *partyItem; // x22
  UnityEngine_GameObject_o *v44; // x21
  __int64 v45; // x1
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v46; // x22
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  WarBoardPartyOrganizationListViewManager_o *v49; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v50; // x21
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  __int64 v53; // x0

  if ( (byte_596E372 & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&WarBoardPartyListViewItem___TypeInfo);
    sub_2213A60(&WarBoardPartyListViewItem_TypeInfo);
    sub_2213A60(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_596E372 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onFinishedEditMember,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&partyListViewManager->fields.onTapMember,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
    v23 = sub_224B908(v22);
  gameObject = *(UnityEngine_GameObject_o **)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&gameObject[12].fields.m_CachedPtr + 5) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_224B908(v22);
  v24 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v24 )
    goto LABEL_20;
  v25 = *(WarBoardData_o **)(v24 + 440);
  if ( !v25 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v24 + 440), 0);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v25, 0);
  v28 = (WarBoardPartyListViewItem_o *)sub_2213CCC(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v28, EditableServantPieces, focusPiece, FormationLimitCost, v29);
  this->fields.partyItem = v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_2213B20(WarBoardPartyListViewItem___TypeInfo, 1);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = this->fields.partyItem;
  v44 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v53 = sub_2213D00(0, v45);
      sub_2213BA0(v53, 0);
    }
  }
  if ( !LODWORD(v44[1].klass) )
    sub_2213CE4(gameObject);
  v44[1].monitor = partyItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44[1].monitor, (int32_t)partyItem, v37, v38, v39, v40, v41, v42);
  v46 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_2213CCC(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v46,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v47);
  if ( !v36 )
LABEL_20:
    sub_2213CDC(gameObject, v8);
  WarBoardPartyOrganizationListViewManager__CreateList(v36, (WarBoardPartyListViewItem_array *)v44, v46, v48);
LABEL_18:
  v49 = this->fields.partyListViewManager;
  v50 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_2213CCC(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v50,
    (Il2CppObject *)this,
    (intptr_t)Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    v51);
  if ( !v49 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v49, 2, v50, v52);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596E371 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596E371 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0);
  if ( EventId < 1 )
    return;
  v8 = EventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_13:
    sub_2213CDC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v8,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v12 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v12, questId, questPhase, v8, 0);
      this->fields.eventUpValSetupInfo = v12;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValSetupInfo,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_200A030;
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
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_200A128;
          else
            v13 = sub_200A0EC;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_200A068;
        }
        else
        {
          v13 = sub_200A040;
        }
      }
      else
      {
        v13 = sub_200A014;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_2009FCC;
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
  return sub_2213A14(this, &v6, callback, object);
}


void WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 3 )
    {
      v13 = sub_2009DF0;
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
        v14 = sub_2213B30(method);
        v15 = sub_22140B4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_2009F28;
          else
            v13 = sub_2009ED4;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_2009E38;
        }
        else
        {
          v13 = sub_2009E08;
        }
      }
      else
      {
        v13 = sub_2009DC8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_2009D68;
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
  __int128 v11; // [xsp+0h] [xbp-50h] BYREF
  __int128 v12; // [xsp+10h] [xbp-40h]
  bool v13[4]; // [xsp+28h] [xbp-28h] BYREF
  bool v14[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v14[0] = isSvtEquip;
  v13[0] = isLongTap;
  v12 = 0u;
  v11 = (unsigned __int64)memberItem;
  *((_QWORD *)&v11 + 1) = j_il2cpp_value_box_0(qword_5984328, v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984328, v13);
  return sub_2213A14(this, &v11, callback, object);
}


void WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
    sub_2213CDC(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}