void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_435176E & 1) == 0 )
  {
    sub_B70694(&BaseMenu_TypeInfo);
    byte_435176E = 1;
  }
  this->fields.selectMemberIndex = -1;
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__ChangeFocusPiece(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        const MethodInfo *method)
{
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4351767 & 1) == 0 )
  {
    sub_B70694(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4351767 = 1;
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
    v7 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B70764(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      0LL);
    if ( !partyListViewManager )
      sub_B7076C(v8, v9);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v7, v10);
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
  __int64 v9; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem || (memberItemList = partyItem->fields.memberItemList) == 0LL )
LABEL_14:
    sub_B7076C(this, method);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  __int64 v8; // x25
  PartyOrganizationListViewItem_o *v9; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w21
  __int128 v12; // q0
  __int128 v13; // q1
  int64_t v14; // x23
  int64_t EquipUserSvtId; // x24
  WarBoardPartyOrganizationMenu_ResponseData_o *v16; // x22
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_435176D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
    byte_435176D = 1;
  }
  memset(&v20[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !items )
    return 0LL;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
      {
        v18 = sub_B70798(v5);
        sub_B70738(v18, 0LL);
      }
      v9 = items->m_Items[v8];
      if ( !v9 )
        break;
      userServantEntity = v9->fields.userServantEntity;
      warBoardPieceIndex = v9->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v13 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v12 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v20, 0LL, 0LL);
        v13 = *(_OWORD *)&v20[0].fields.currentCryptoKey;
        v12 = *(_OWORD *)&v20[0].fields.fakeValue;
      }
      *(_OWORD *)&v20[1].fields.currentCryptoKey = v13;
      *(_OWORD *)&v20[1].fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v19 = v20[1];
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v19, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v9, 0LL);
      v16 = (WarBoardPartyOrganizationMenu_ResponseData_o *)sub_B70764(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      WarBoardPartyOrganizationMenu_ResponseData___ctor(v16, warBoardPieceIndex, v14, EquipUserSvtId, 0LL);
      if ( !v4 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
      max_length = items->max_length;
      if ( (int)++v8 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                                                     (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_24:
    sub_B7076C(v5, v6);
  }
  if ( !v4 )
    goto LABEL_24;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  struct PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  UILabel_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  struct PartyServantSelectMenu_o *Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4351764 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&StringLiteral_10735/*"PartyOrganization/PartyServantSelectMenu"*/);
    byte_4351764 = 1;
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL) )
  {
    UIAtlas = (UILabel_o *)UnityEngine_Resources__Load_UIAtlas_(
                             (System_String_o *)StringLiteral_10735/*"PartyOrganization/PartyServantSelectMenu"*/,
                             (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               UIAtlas,
                                               transform,
                                               (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    if ( !gameObject )
LABEL_16:
      sub_B7076C(gameObject, v8);
    Component_srcLineSprite = (struct PartyServantSelectMenu_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   gameObject,
                                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    this->fields.servantSelectMenu = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      (System_Int32_array **)Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_16;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_16;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.onFinishedEditMember, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.partyItem = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v29, v30, v31, v32, v33, v34);
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
    sub_B7076C(this, 0LL);
  return piece->fields._index_k__BackingField == focusMemberItem->fields.warBoardPieceIndex;
}


void __fastcall WarBoardPartyOrganizationMenu__OnFinishedSelectServantEquip(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
        const MethodInfo *method)
{
  __int64 v7; // x21
  WarBoardPartyListViewItem_o *partyItem; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  PartyOrganizationListViewItem_o *v17; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  int64_t v21; // x23
  const MethodInfo *v22; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w8
  struct WarBoardPartyListViewItem_o *v27; // x8
  BattleBuffData_BuffData_array *memberItemList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x22
  WarBoardPartyOrganizationMenu_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33[2]; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_435176A & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindAll_PartyOrganizationListViewItem___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_B70694(&Method_System_Predicate_PartyOrganizationListViewItem___ctor__);
    sub_B70694(&System_Predicate_PartyOrganizationListViewItem__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__);
    sub_B70694(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_435176A = 1;
  }
  memset(&v33[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v7 = sub_B70764(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( result != 1 )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyListViewItem__GetMemberItem(
                                               partyItem,
                                               this->fields.selectMemberIndex,
                                               v16);
  v17 = (PartyOrganizationListViewItem_o *)partyItem;
  if ( equipItem )
  {
    userSvtEntity = equipItem->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v33, 0LL, 0LL);
    v20 = *(_OWORD *)&v33[0].fields.currentCryptoKey;
    v19 = *(_OWORD *)&v33[0].fields.fakeValue;
  }
  *(_OWORD *)&v33[1].fields.currentCryptoKey = v20;
  *(_OWORD *)&v33[1].fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v32 = v33[1];
  partyItem = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
                                               &v32,
                                               0LL);
  if ( !v17 )
    goto LABEL_29;
  v21 = (int64_t)partyItem;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v17, 0LL) == partyItem )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  WarBoardPartyListViewItem__SetEquip(partyItem, this->fields.selectMemberIndex, v21, v22);
  partyListViewManager = this->fields.partyListViewManager;
  v24 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B70764(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_29;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v24, v25);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_27;
  v26 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v7 + 24) = v26;
  v27 = this->fields.partyItem;
  if ( !v27
    || (memberItemList = (BattleBuffData_BuffData_array *)v27->fields.memberItemList,
        v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v29,
          (Il2CppObject *)v7,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_PartyOrganizationListViewItem___ctor__),
        All_BattleBuffData_BuffData = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                           memberItemList,
                                                                           (System_Predicate_T__o *)v29,
                                                                           (const MethodInfo_1FCAFA4 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                     All_BattleBuffData_BuffData,
                                                     (PartyOrganizationListViewItem_array *)All_BattleBuffData_BuffData,
                                                     v31),
        !this->fields.onFinishedEditMember) )
  {
LABEL_29:
    sub_B7076C(partyItem, v9);
  }
  WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
    this->fields.onFinishedEditMember,
    (WarBoardPartyOrganizationMenu_ResponseData_array *)partyItem,
    0LL);
LABEL_27:
  partyItem = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !partyItem )
    goto LABEL_29;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)partyItem, 0LL, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4351769 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351769 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
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
  const MethodInfo *v7; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct WarBoardPartyListViewItem_o *v13; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0

  v5 = result;
  v6 = this;
  if ( (byte_435176C & 1) == 0 )
  {
    sub_B70694(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    this = (WarBoardPartyOrganizationMenu_o *)sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_435176C = 1;
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
  v10 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B70764(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v10,
    (Il2CppObject *)v6,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v10, v11);
  v13 = v6->fields.partyItem;
  if ( !v13 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v13->fields.memberItemList, v12);
  if ( v6->fields.onFinishedEditMember )
    WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(v6->fields.onFinishedEditMember, ResponseData, 0LL);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_B7076C(this, *(_QWORD *)&result);
  PartyServantSelectMenu__Close((PartyServantSelectMenu_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__OnTapPartyMember(
        WarBoardPartyOrganizationMenu_o *this,
        PartyOrganizationListViewItem_o *member,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v11; // x22
  FollowerInfo_o *followerInfo; // x0
  WebViewManager_o *v13; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v16; // x22
  ServantStatusDialog_EndDelegate_o *v17; // x23
  FollowerInfo_o *v18; // x8
  CommonUI_o *v19; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22
  WebViewManager_o *v22; // x0
  WarBoardPartyListViewItem_o *v23; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v26; // x23
  EquipGraphListMenu_CallbackFunc_o *v27; // x24
  PartyServantSelectMenu_o *servantSelectMenu; // x22
  WarBoardPartyListViewItem_o *v29; // x23
  EventUpValSetupInfo_o *v30; // x21
  int32_t v31; // w24
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyServantSelectMenu_CallbackFunc_o *v33; // x25

  if ( (byte_4351768 & 1) == 0 )
  {
    sub_B70694(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    sub_B70694(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__);
    byte_4351768 = 1;
  }
  if ( isLongTap )
  {
    if ( isSvtEquip )
    {
      if ( member )
      {
        if ( PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL) >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this->fields.selectMemberIndex = member->fields.index;
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v11 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v11,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v11, 0LL, 0LL);
            return;
          }
LABEL_51:
          sub_B7076C(followerInfo, member);
        }
        if ( member->fields.isFollower )
        {
          followerInfo = member->fields.followerInfo;
          if ( !followerInfo )
            goto LABEL_51;
          if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0LL) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            this->fields.selectMemberIndex = member->fields.index;
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v18 = member->fields.followerInfo;
            if ( !v18 )
              goto LABEL_51;
            v19 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v18, 0, 1, 0LL);
            v21 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v21,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v19 )
              goto LABEL_51;
            CommonUI__OpenServantEquipStatusDialog_17919496(v19, 19, EquipTarget1, v21, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_27:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      return;
    }
    if ( !member || !member->fields.userServantEntity )
      goto LABEL_27;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v16 = (CommonUI_o *)v13;
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v16 )
      goto LABEL_51;
    CommonUI__OpenServantStatusDialog_17913280(v16, 1, partyItem, index, v17, 0LL);
  }
  else if ( isSvtEquip )
  {
    if ( !member )
      return;
    if ( member->fields.isFollower )
    {
      followerInfo = member->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_51;
      if ( FollowerInfo__getEquipTarget1(followerInfo, 0, 1, 0LL) )
        return;
      goto LABEL_27;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.selectMemberIndex = member->fields.index;
    v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v26 = (CommonUI_o *)v22;
    v27 = (EquipGraphListMenu_CallbackFunc_o *)sub_B70764(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v27,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v26 )
      goto LABEL_51;
    CommonUI__OpenEquipGraphListMenu_17908684(v26, v23, selectMemberIndex, eventUpValSetupInfo, v27, 0LL);
  }
  else
  {
    if ( !member || member->fields.isFollower )
      goto LABEL_27;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    servantSelectMenu = this->fields.servantSelectMenu;
    v29 = this->fields.partyItem;
    v30 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = member->fields.index;
    v31 = member->fields.index;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v33 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B70764(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_51;
    PartyServantSelectMenu__Open_32254672(servantSelectMenu, v29, v31, 0, v30, questRestrictionInfo, v33, 0LL, 0LL);
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
  WarBoardPartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Int32_array **v7; // x20
  const MethodInfo *v8; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v10; // x22
  const MethodInfo *v11; // x3
  WarBoardPartyListViewItem_o *v12; // x21
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WarBoardPartyOrganizationMenu_o *v20; // x0
  const MethodInfo *v21; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_435176B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__);
    byte_435176B = 1;
  }
  if ( isModify )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_14;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.selectMemberIndex, method);
    if ( MemberItem )
    {
      v7 = (System_Int32_array **)MemberItem;
      PartyOrganizationListViewItem__Modify(MemberItem, 0LL);
      WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(this, v8);
      partyListViewManager = this->fields.partyListViewManager;
      v10 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B70764(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
        0LL);
      if ( !partyListViewManager
        || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v10, v11),
            (partyItem = (WarBoardPartyListViewItem_o *)sub_B706AC(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
      {
LABEL_14:
        sub_B7076C(partyItem, isModify);
      }
      v12 = partyItem;
      v13 = sub_B70754(v7, partyItem->klass->_1.element_class);
      if ( !v13 )
      {
        v25 = sub_B7078C(0LL);
        sub_B70738(v25, 0LL);
      }
      if ( !v12->fields.sortIndex )
      {
        v26 = sub_B70798(v13);
        sub_B70738(v26, 0LL);
      }
      v12->fields.sortValue0 = (int64_t)v7;
      sub_B70630((BattleServantConfConponent_o *)&v12->fields.sortValue0, v7, v14, v15, v16, v17, v18, v19);
      ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                       v20,
                       (PartyOrganizationListViewItem_array *)v12,
                       v21);
      if ( this->fields.onFinishedEditMember )
        WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
    0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v24, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__Open(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardPieceData_o *focusPiece,
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *onFinishedEditMember,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x22
  __int64 v23; // x22
  __int64 v24; // x8
  WarBoardData_o *v25; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v28; // x24
  const MethodInfo *v29; // x4
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WarBoardPartyOrganizationListViewManager_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **partyItem; // x22
  UnityEngine_GameObject_o *v44; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v45; // x22
  const MethodInfo *v46; // x3
  WarBoardPartyOrganizationListViewManager_o *v47; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v48; // x21
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_4351766 & 1) == 0 )
  {
    sub_B70694(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B70694(&WarBoardPartyListViewItem___TypeInfo);
    sub_B70694(&WarBoardPartyListViewItem_TypeInfo);
    sub_B70694(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__);
    byte_4351766 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.onFinishedEditMember,
    (System_Int32_array **)onFinishedEditMember,
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
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                        + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_B08394(v23);
  v24 = **(_QWORD **)(v23 + 184);
  if ( !v24 )
    goto LABEL_20;
  v25 = *(WarBoardData_o **)(v24 + 432);
  if ( !v25 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v24 + 432), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v25, 0LL);
  v28 = (WarBoardPartyListViewItem_o *)sub_B70764(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v28, EditableServantPieces, focusPiece, FormationLimitCost, v29);
  this->fields.partyItem = v28;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_B706AC(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = (System_Int32_array **)this->fields.partyItem;
  v44 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B70754(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v51 = sub_B7078C(0LL);
      sub_B70738(v51, 0LL);
    }
  }
  if ( !LODWORD(v44[1].klass) )
  {
    v50 = sub_B70798(gameObject);
    sub_B70738(v50, 0LL);
  }
  v44[1].monitor = partyItem;
  sub_B70630((BattleServantConfConponent_o *)&v44[1].monitor, partyItem, v37, v38, v39, v40, v41, v42);
  v45 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B70764(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v45,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v36 )
LABEL_20:
    sub_B7076C(gameObject, v8);
  WarBoardPartyOrganizationListViewManager__CreateList(v36, (WarBoardPartyListViewItem_array *)v44, v45, v46);
LABEL_18:
  v47 = this->fields.partyListViewManager;
  v48 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B70764(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v48,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v47 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v47, 2, v48, v49);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__SetEventId(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardDataEntity_o *data,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t EventId; // w0
  int32_t v8; // w21
  EventDetailEntity_o *Entity; // x0
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4351765 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351765 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v8 = EventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_B7076C(Instance, v6);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v8,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v12 = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v12, questId, questPhase, v8, 0LL);
      this->fields.eventUpValSetupInfo = v12;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__BeginInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)data;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  Il2CppClass *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  Il2CppMethodPointer methodPtr; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 p_method; // x0
  void (__fastcall **v24)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  Il2CppClass *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (WarBoardPartyOrganizationMenu_OnFinishedEditMember_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, data);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = data->obj.klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  p_method = (__int64)&klass->vtable[*p_offset + (int)v44].method;
                }
                else
                {
LABEL_57:
                  p_method = sub_B08590(data, v43, v44);
                }
                methodPtr = *(Il2CppMethodPointer *)(p_method + 8);
              }
              else
              {
                methodPtr = data->obj.klass->vtable[*(unsigned __int16 *)(v28 + 72) + 1].methodPtr;
              }
              v24 = (void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B70744(methodPtr, v28);
              (*v24)(data, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = data->obj.klass;
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)&v11->vtable[*v13 + v9].method;
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(data, class_0, v9);
                }
                (*(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v14)(
                  data,
                  *(_QWORD *)(v14 + 8));
              }
              else
              {
                ((void (__fastcall *)(WarBoardPartyOrganizationMenu_ResponseData_array *, Il2CppMethodPointer))data->obj.klass->vtable[*(unsigned __int16 *)(v28 + 72)].method)(
                  data,
                  data->obj.klass->vtable[*(unsigned __int16 *)(v28 + 72) + 1].methodPtr);
              }
            }
            continue;
          }
LABEL_58:
          v30(data, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, data, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v21)(
                v29,
                data,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 312))(
                v29,
                data,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))v30)(v29, data, v28);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  char v14[4]; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = isSvtEquip;
  v14[0] = isLongTap;
  if ( (byte_434FC78 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434FC78 = 1;
  }
  v13[3] = 0LL;
  v13[0] = (__int64)memberItem;
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v15, isSvtEquip);
  v13[2] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v11);
  return (System_IAsyncResult_o *)sub_B70638(this, v13, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        PartyOrganizationListViewItem_o *memberItem,
        bool isSvtEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o **v11; // x27
  __int64 i; // x28
  unsigned int v13; // w24
  __int64 class_0; // x0
  PartyOrganizationListViewItem_c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  unsigned int v20; // w25
  __int64 v21; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD); // x0
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v31; // x8
  __int64 v32; // x23
  __int64 *v33; // x24
  void (__fastcall *v34)(PartyOrganizationListViewItem_o *, bool, bool, __int64); // x25
  char v35; // w0
  int v36; // w8
  char v37; // w25
  char v38; // w0
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w24
  char v45; // w0
  PartyOrganizationListViewItem_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v51; // [xsp+8h] [xbp-58h] BYREF

  v51 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v51;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o **)(v5 + 32);
LABEL_5:
    for ( i = 0LL; i != v10; ++i )
    {
      v31 = v11[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v31->fields.extra_arg, memberItem);
      v35 = sub_B706C4(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 3 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 3 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B706BC(v32);
            v45 = sub_B70AC0(v32);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = memberItem->klass;
                v47 = *(_QWORD *)(v32 + 24);
                v48 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v27 = sub_B08590(memberItem, v47, v48);
                }
                v19 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v19 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B70744(v19, v32);
              (*v28)(memberItem, isSvtEquip, isLongTap, v28);
            }
            else
            {
              v13 = *(unsigned __int16 *)(v32 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v15 = memberItem->klass;
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v16 = 0LL;
                  v17 = &v15->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v17 - 1) != class_0 )
                  {
                    ++v16;
                    v17 += 4;
                    if ( v16 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v18 = (__int64)(&v15->vtable._0_Equals.method + 2 * (int)(*v17 + v13));
                }
                else
                {
LABEL_11:
                  v18 = sub_B08590(memberItem, class_0, v13);
                }
                (*(void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))v18)(
                  memberItem,
                  isSvtEquip,
                  isLongTap,
                  *(_QWORD *)(v18 + 8));
              }
              else
              {
                (*((void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))&memberItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  memberItem,
                  isSvtEquip,
                  isLongTap,
                  *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(memberItem, isSvtEquip, isLongTap, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B706BC(v32);
          v38 = sub_B70AC0(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v39 = *v33;
              v40 = *(_QWORD *)(v32 + 24);
              v41 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_B08590(v33, v40, v41);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B70744(v26, v32);
            (*v30)(v33, memberItem, isSvtEquip, isLongTap, v30);
          }
          else
          {
            v20 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v21 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v21 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v20) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_B08590(v33, v21, v20);
              }
              (*(void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))v25)(
                v33,
                memberItem,
                isSvtEquip,
                isLongTap,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 312))(
                v33,
                memberItem,
                isSvtEquip,
                isLongTap,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, __int64))v34)(
        v33,
        memberItem,
        isSvtEquip,
        isLongTap,
        v32);
    }
  }
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
    sub_B7076C(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}