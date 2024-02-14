void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4213334 & 1) == 0 )
  {
    sub_B0D8A4(&BaseMenu_TypeInfo, method);
    byte_4213334 = 1;
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
  __int64 v5; // x1
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v8; // x21
  __int64 v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_421332D & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v5);
    byte_421332D = 1;
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
    v8 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                    focusPiece,
                                                                    method);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      0LL);
    if ( !partyListViewManager )
      sub_B0D97C(v9);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v8, v10);
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
    sub_B0D97C(this);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
      {
        v9 = sub_B0D9A8(this);
        sub_B0D948(v9, 0LL);
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
                                                      0,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x0
  signed int max_length; // w8
  __int64 v12; // x25
  PartyOrganizationListViewItem_o *v13; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w21
  __int128 v16; // q0
  __int128 v17; // q1
  int64_t v18; // x23
  int64_t EquipUserSvtId; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  WarBoardPartyOrganizationMenu_ResponseData_o *v22; // x22
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4213333 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__, items);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v8);
    byte_4213333 = 1;
  }
  memset(&v26[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !items )
    return 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo,
                                                                                                 items,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
      {
        v24 = sub_B0D9A8(v10);
        sub_B0D948(v24, 0LL);
      }
      v13 = items->m_Items[v12];
      if ( !v13 )
        break;
      userServantEntity = v13->fields.userServantEntity;
      warBoardPieceIndex = v13->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v26, 0LL, 0LL);
        v17 = *(_OWORD *)&v26[0].fields.currentCryptoKey;
        v16 = *(_OWORD *)&v26[0].fields.fakeValue;
      }
      *(_OWORD *)&v26[1].fields.currentCryptoKey = v17;
      *(_OWORD *)&v26[1].fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v25 = v26[1];
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v25, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v13, 0LL);
      v22 = (WarBoardPartyOrganizationMenu_ResponseData_o *)sub_B0D974(
                                                              WarBoardPartyOrganizationMenu_ResponseData_TypeInfo,
                                                              v20,
                                                              v21);
      WarBoardPartyOrganizationMenu_ResponseData___ctor(v22, warBoardPieceIndex, v18, EquipUserSvtId, 0LL);
      if ( !v9 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
      max_length = items->max_length;
      if ( (int)++v12 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_24:
    sub_B0D97C(v10);
  }
  if ( !v9 )
    goto LABEL_24;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  UILabel_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct PartyServantSelectMenu_o *Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_421332A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_B0D8A4(&StringLiteral_10619/*"PartyOrganization/PartyServantSelectMenu"*/, v6);
    byte_421332A = 1;
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
                             (System_String_o *)StringLiteral_10619/*"PartyOrganization/PartyServantSelectMenu"*/,
                             (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               UIAtlas,
                                               transform,
                                               (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    if ( !gameObject )
LABEL_16:
      sub_B0D97C(gameObject);
    Component_srcLineSprite = (struct PartyServantSelectMenu_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   gameObject,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    this->fields.servantSelectMenu = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      (System_Int32_array **)Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_16;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onFinishedEditMember, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.partyItem = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v32, v33, v34, v35, v36, v37);
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
    sub_B0D97C(this);
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
  __int64 v14; // x1
  __int64 v15; // x21
  WarBoardPartyListViewItem_o *partyItem; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  PartyOrganizationListViewItem_o *v24; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q0
  __int128 v27; // q1
  int64_t v28; // x23
  const MethodInfo *v29; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v33; // x23
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t v37; // w8
  struct WarBoardPartyListViewItem_o *v38; // x8
  BattleBuffData_BuffData_array *memberItemList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x22
  WarBoardPartyOrganizationMenu_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v42; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44[2]; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4213330 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, *(_QWORD *)&result);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Predicate_PartyOrganizationListViewItem___ctor__, v9);
    sub_B0D8A4(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__, v12);
    sub_B0D8A4(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v14);
    byte_4213330 = 1;
  }
  memset(&v44[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v15 = sub_B0D974(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, *(_QWORD *)&result, equipItem);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( result != 1 )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyListViewItem__GetMemberItem(
                                               partyItem,
                                               this->fields.selectMemberIndex,
                                               v23);
  v24 = (PartyOrganizationListViewItem_o *)partyItem;
  if ( equipItem )
  {
    userSvtEntity = equipItem->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v44, 0LL, 0LL);
    v27 = *(_OWORD *)&v44[0].fields.currentCryptoKey;
    v26 = *(_OWORD *)&v44[0].fields.fakeValue;
  }
  *(_OWORD *)&v44[1].fields.currentCryptoKey = v27;
  *(_OWORD *)&v44[1].fields.fakeValue = v26;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44[1];
  partyItem = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                               &v43,
                                               0LL);
  if ( !v24 )
    goto LABEL_29;
  v28 = (int64_t)partyItem;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v24, 0LL) == partyItem )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  WarBoardPartyListViewItem__SetEquip(partyItem, this->fields.selectMemberIndex, v28, v29);
  partyListViewManager = this->fields.partyListViewManager;
  v33 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v31,
                                                                   v32);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_29;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v33, v34);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_27;
  v37 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v15 + 24) = v37;
  v38 = this->fields.partyItem;
  if ( !v38
    || (memberItemList = (BattleBuffData_BuffData_array *)v38->fields.memberItemList,
        v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_PartyOrganizationListViewItem__TypeInfo,
                                                                         v35,
                                                                         v36),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v40,
          (Il2CppObject *)v15,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_PartyOrganizationListViewItem___ctor__),
        All_BattleBuffData_BuffData = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                           memberItemList,
                                                                           (System_Predicate_T__o *)v40,
                                                                           (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                     All_BattleBuffData_BuffData,
                                                     (PartyOrganizationListViewItem_array *)All_BattleBuffData_BuffData,
                                                     v42),
        !this->fields.onFinishedEditMember) )
  {
LABEL_29:
    sub_B0D97C(partyItem);
  }
  WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
    this->fields.onFinishedEditMember,
    (WarBoardPartyOrganizationMenu_ResponseData_array *)partyItem,
    0LL);
LABEL_27:
  partyItem = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !partyItem )
    goto LABEL_29;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)partyItem, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421332F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify);
    byte_421332F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
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
  const MethodInfo *v16; // x2
  struct WarBoardPartyListViewItem_o *v17; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0

  v6 = this;
  if ( (byte_4213332 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, *(_QWORD *)&result);
    this = (WarBoardPartyOrganizationMenu_o *)sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v7);
    byte_4213332 = 1;
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
  v14 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v12,
                                                                   v13);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v14,
    (Il2CppObject *)v6,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v14, v15);
  v17 = v6->fields.partyItem;
  if ( !v17 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v17->fields.memberItemList, v16);
  if ( v6->fields.onFinishedEditMember )
    WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(v6->fields.onFinishedEditMember, ResponseData, 0LL);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_B0D97C(this);
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
  CommonUI_o *Instance; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusDialog_EndDelegate_o *v21; // x22
  FollowerInfo_o *followerInfo; // x0
  WebViewManager_o *v23; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  ServantStatusDialog_EndDelegate_o *v29; // x23
  FollowerInfo_o *v30; // x8
  CommonUI_o *v31; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  ServantStatusDialog_EndDelegate_o *v35; // x22
  WebViewManager_o *v36; // x0
  WarBoardPartyListViewItem_o *v37; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  EquipGraphListMenu_CallbackFunc_o *v43; // x24
  PartyServantSelectMenu_o *servantSelectMenu; // x22
  WarBoardPartyListViewItem_o *v45; // x23
  EventUpValSetupInfo_o *v46; // x21
  int32_t v47; // w24
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  PartyServantSelectMenu_CallbackFunc_o *v51; // x25

  if ( (byte_421332E & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListMenu_CallbackFunc_TypeInfo, member);
    sub_B0D8A4(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&SoundManager_TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v13);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v14);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v15);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v16);
    byte_421332E = 1;
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v21 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v19, v20);
          ServantStatusDialog_EndDelegate___ctor(
            v21,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v21, 0LL, 0LL);
            return;
          }
LABEL_51:
          sub_B0D97C(followerInfo);
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
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v30 = member->fields.followerInfo;
            if ( !v30 )
              goto LABEL_51;
            v31 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v30, 0, 1, 0LL);
            v35 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34);
            ServantStatusDialog_EndDelegate___ctor(
              v35,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v31 )
              goto LABEL_51;
            CommonUI__OpenServantEquipStatusDialog_17032132(v31, 19, EquipTarget1, v35, 0LL, 0LL);
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
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v26 = (CommonUI_o *)v23;
    v29 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v27, v28);
    ServantStatusDialog_EndDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v26 )
      goto LABEL_51;
    CommonUI__OpenServantStatusDialog_17025916(v26, 1, partyItem, index, v29, 0LL);
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
    v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v40 = (CommonUI_o *)v36;
    v43 = (EquipGraphListMenu_CallbackFunc_o *)sub_B0D974(EquipGraphListMenu_CallbackFunc_TypeInfo, v41, v42);
    EquipGraphListMenu_CallbackFunc___ctor(
      v43,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v40 )
      goto LABEL_51;
    CommonUI__OpenEquipGraphListMenu_17021320(v40, v37, selectMemberIndex, eventUpValSetupInfo, v43, 0LL);
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
    v45 = this->fields.partyItem;
    v46 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = member->fields.index;
    v47 = member->fields.index;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v51 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B0D974(PartyServantSelectMenu_CallbackFunc_TypeInfo, v49, v50);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v51,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_51;
    PartyServantSelectMenu__Open_31117004(servantSelectMenu, v45, v47, 0, v46, questRestrictionInfo, v51, 0LL, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardPartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Int32_array **v12; // x20
  const MethodInfo *v13; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v17; // x22
  const MethodInfo *v18; // x3
  WarBoardPartyListViewItem_o *v19; // x21
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardPartyOrganizationMenu_o *v27; // x0
  const MethodInfo *v28; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  CommonUI_o *Instance; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_4213331 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isModify);
    sub_B0D8A4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v5);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v8);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, v9);
    byte_4213331 = 1;
  }
  if ( isModify )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_14;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.selectMemberIndex, method);
    if ( MemberItem )
    {
      v12 = (System_Int32_array **)MemberItem;
      PartyOrganizationListViewItem__Modify(MemberItem, 0LL);
      WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(this, v13);
      partyListViewManager = this->fields.partyListViewManager;
      v17 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                       WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                       v15,
                                                                       v16);
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        v17,
        (Il2CppObject *)this,
        Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
        0LL);
      if ( !partyListViewManager
        || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v17, v18),
            (partyItem = (WarBoardPartyListViewItem_o *)sub_B0D8BC(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
      {
LABEL_14:
        sub_B0D97C(partyItem);
      }
      v19 = partyItem;
      v20 = sub_B0D964(v12, partyItem->klass->_1.element_class);
      if ( !v20 )
      {
        v34 = sub_B0D99C();
        sub_B0D948(v34, 0LL);
      }
      if ( !v19->fields.sortIndex )
      {
        v35 = sub_B0D9A8(v20);
        sub_B0D948(v35, 0LL);
      }
      v19->fields.sortValue0 = (int64_t)v12;
      sub_B0D840((BattleServantConfConponent_o *)&v19->fields.sortValue0, v12, v21, v22, v23, v24, v25, v26);
      ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                       v27,
                       (PartyOrganizationListViewItem_array *)v19,
                       v28);
      if ( this->fields.onFinishedEditMember )
        WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
    0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v33, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x22
  __int64 v28; // x22
  __int64 v29; // x8
  WarBoardData_o *v30; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  WarBoardPartyListViewItem_o *v35; // x24
  const MethodInfo *v36; // x4
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WarBoardPartyOrganizationListViewManager_o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **partyItem; // x22
  UnityEngine_GameObject_o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v54; // x22
  const MethodInfo *v55; // x3
  WarBoardPartyOrganizationListViewManager_o *v56; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v57; // x21
  const MethodInfo *v58; // x3
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_421332C & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7);
    sub_B0D8A4(&WarBoardPartyListViewItem___TypeInfo, v8);
    sub_B0D8A4(&WarBoardPartyListViewItem_TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v10);
    byte_421332C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onFinishedEditMember,
    (System_Int32_array **)onFinishedEditMember,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                        + 3));
  v28 = **(_QWORD **)(v27 + 192);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_AA65A4(v28);
  v29 = **(_QWORD **)(v28 + 184);
  if ( !v29 )
    goto LABEL_20;
  v30 = *(WarBoardData_o **)(v29 + 432);
  if ( !v30 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v29 + 432), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v30, 0LL);
  v35 = (WarBoardPartyListViewItem_o *)sub_B0D974(WarBoardPartyListViewItem_TypeInfo, v33, v34);
  WarBoardPartyListViewItem___ctor(v35, EditableServantPieces, focusPiece, FormationLimitCost, v36);
  this->fields.partyItem = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_B0D8BC(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = (System_Int32_array **)this->fields.partyItem;
  v51 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B0D964(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v60 = sub_B0D99C();
      sub_B0D948(v60, 0LL);
    }
  }
  if ( !LODWORD(v51[1].klass) )
  {
    v59 = sub_B0D9A8(gameObject);
    sub_B0D948(v59, 0LL);
  }
  v51[1].monitor = partyItem;
  sub_B0D840((BattleServantConfConponent_o *)&v51[1].monitor, partyItem, v44, v45, v46, v47, v48, v49);
  v54 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v52,
                                                                   v53);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v54,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v43 )
LABEL_20:
    sub_B0D97C(gameObject);
  WarBoardPartyOrganizationListViewManager__CreateList(v43, (WarBoardPartyListViewItem_array *)v51, v54, v55);
LABEL_18:
  v56 = this->fields.partyListViewManager;
  v57 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v18,
                                                                   v19);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v57,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v56 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v56, 2, v57, v58);
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
  DataManager_o *Instance; // x0
  int32_t EventId; // w0
  int32_t v11; // w21
  EventDetailEntity_o *Entity; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_421332B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, data);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421332B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v11 = EventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(Instance);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v11,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v17 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v13, v14);
      EventUpValSetupInfo___ctor(v17, questId, questPhase, v11, 0LL);
      this->fields.eventUpValSetupInfo = v17;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
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
  sub_B0D840(
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        WarBoardPartyOrganizationMenu_ResponseData_array *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  Il2CppClass *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  Il2CppMethodPointer methodPtr; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 p_method; // x0
  void (__fastcall **v25)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  Il2CppClass *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (WarBoardPartyOrganizationMenu_OnFinishedEditMember_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, data, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = data->obj.klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  p_method = (__int64)&klass->vtable[*p_offset + (int)v45].method;
                }
                else
                {
LABEL_57:
                  p_method = sub_AA67A0(data, v44, v45);
                }
                methodPtr = *(Il2CppMethodPointer *)(p_method + 8);
              }
              else
              {
                methodPtr = data->obj.klass->vtable[*(unsigned __int16 *)(v29 + 72) + 1].methodPtr;
              }
              v25 = (void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B0D954(methodPtr, v29);
              (*v25)(data, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = data->obj.klass;
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)&v12->vtable[*v14 + v10].method;
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(data, class_0, v10);
                }
                (*(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v15)(
                  data,
                  *(_QWORD *)(v15 + 8));
              }
              else
              {
                ((void (__fastcall *)(WarBoardPartyOrganizationMenu_ResponseData_array *, Il2CppMethodPointer))data->obj.klass->vtable[*(unsigned __int16 *)(v29 + 72)].method)(
                  data,
                  data->obj.klass->vtable[*(unsigned __int16 *)(v29 + 72) + 1].methodPtr);
              }
            }
            continue;
          }
LABEL_58:
          v31(data, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, data, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v22)(
                v30,
                data,
                *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 312))(
                v30,
                data,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))v31)(v30, data, v29);
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
  sub_B0D840(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  char v13[4]; // [xsp+28h] [xbp-28h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v14[0] = isSvtEquip;
  v13[0] = isLongTap;
  if ( (byte_4213879 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, memberItem);
    byte_4213879 = 1;
  }
  v12[3] = 0LL;
  v12[0] = (__int64)memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return (System_IAsyncResult_o *)sub_B0D848(this, v12, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_B0D960(*(_QWORD *)&v31->fields.extra_arg, memberItem, isSvtEquip, isLongTap);
      v35 = sub_B0D8D4(v32);
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
            v44 = sub_B0D8CC(v32);
            v45 = sub_B0DCD0(v32);
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
                  v27 = sub_AA67A0(memberItem, v47, v48);
                }
                v19 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v19 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B0D954(v19, v32);
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
                  v18 = sub_AA67A0(memberItem, class_0, v13);
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
          v37 = sub_B0D8CC(v32);
          v38 = sub_B0DCD0(v32);
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
                v29 = sub_AA67A0(v33, v40, v41);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B0D954(v26, v32);
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
                v25 = sub_AA67A0(v33, v21, v20);
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
    sub_B0D97C(this);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}