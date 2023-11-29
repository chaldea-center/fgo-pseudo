void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F85CB & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40F85CB = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_40F85C4 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v7);
    byte_40F85C4 = 1;
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
    v10 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                     WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                     focusPiece,
                                                                     method,
                                                                     v3,
                                                                     v4);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v10,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      0LL);
    if ( !partyListViewManager )
      sub_B170D4();
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v10, v11);
  }
}


void __fastcall WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(
        WarBoardPartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  struct PartyOrganizationListViewItem_array *memberItemList; // x20
  __int64 v5; // x8
  WarBoardPartyOrganizationMenu_o *v6; // x19
  unsigned __int64 v7; // x21
  PartyOrganizationListViewItem_o *v8; // x23
  WarBoardPartyListViewItem_o *v9; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem || (memberItemList = partyItem->fields.memberItemList) == 0LL )
LABEL_14:
    sub_B170D4();
  v5 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = this;
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = memberItemList->m_Items[v7];
      if ( v8 )
      {
        this = (WarBoardPartyOrganizationMenu_o *)v8->fields.userServantEntity;
        if ( this )
        {
          this = (WarBoardPartyOrganizationMenu_o *)UserServantEntity__getQuestRestriction(
                                                      (UserServantEntity_o *)this,
                                                      v8->fields.questRestrictionInfo,
                                                      0,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v9 = v6->fields.partyItem;
            if ( !v9 )
              goto LABEL_14;
            WarBoardPartyListViewItem__ClearMember(v9, v8->fields.index, v2);
          }
        }
      }
      LODWORD(v5) = memberItemList->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  __int64 v16; // x25
  PartyOrganizationListViewItem_o *v17; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w21
  __int128 v20; // q0
  __int128 v21; // q1
  int64_t v22; // x23
  int64_t EquipUserSvtId; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WarBoardPartyOrganizationMenu_ResponseData_o *v28; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_40F85CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__, items);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v10);
    byte_40F85CA = 1;
  }
  memset(&v31[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !items )
    return 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo,
                                                                                                  items,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= max_length )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v17 = items->m_Items[v16];
      if ( !v17 )
        break;
      userServantEntity = v17->fields.userServantEntity;
      warBoardPieceIndex = v17->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v21 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v31, 0LL, 0LL);
        v21 = *(_OWORD *)&v31[0].fields.currentCryptoKey;
        v20 = *(_OWORD *)&v31[0].fields.fakeValue;
      }
      *(_OWORD *)&v31[1].fields.currentCryptoKey = v21;
      *(_OWORD *)&v31[1].fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31[1];
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v17, 0LL);
      v28 = (WarBoardPartyOrganizationMenu_ResponseData_o *)sub_B170CC(
                                                              WarBoardPartyOrganizationMenu_ResponseData_TypeInfo,
                                                              v24,
                                                              v25,
                                                              v26,
                                                              v27);
      WarBoardPartyOrganizationMenu_ResponseData___ctor(v28, warBoardPieceIndex, v22, EquipUserSvtId, 0LL);
      if ( !v11 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
      max_length = items->max_length;
      if ( (int)++v16 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_24:
    sub_B170D4();
  }
  if ( !v11 )
    goto LABEL_24;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  UILabel_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v11; // x0
  struct PartyServantSelectMenu_o *Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40F85C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_B16FFC(&StringLiteral_10560, v6);
    byte_40F85C1 = 1;
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
                             (System_String_o *)StringLiteral_10560,
                             (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        UIAtlas,
                                        transform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v11 )
LABEL_16:
      sub_B170D4();
    Component_srcLineSprite = (struct PartyServantSelectMenu_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v11,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    this->fields.servantSelectMenu = Component_srcLineSprite;
    sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !*p_servantSelectMenu )
    goto LABEL_16;
  PartyServantSelectMenu__Init(*p_servantSelectMenu, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onFinishedEditMember, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.partyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v33, v34, v35, v36, v37, v38);
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
    sub_B170D4();
  return piece->fields._index_k__BackingField == focusMemberItem->fields.warBoardPieceIndex;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnFinishedSelectServantEquip(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  WarBoardPartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *MemberItem; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v27; // q0
  __int128 v28; // q1
  int64_t v29; // x0
  int64_t v30; // x23
  const MethodInfo *v31; // x3
  WarBoardPartyListViewItem_o *v32; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v38; // x23
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w8
  struct WarBoardPartyListViewItem_o *v45; // x8
  BattleBuffData_BuffData_array *memberItemList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x22
  WarBoardPartyOrganizationMenu_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v49; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  CommonUI_o *Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53[2]; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F85C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, *(_QWORD *)&result);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_PartyOrganizationListViewItem___ctor__, v10);
    sub_B16FFC(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__, v13);
    sub_B16FFC(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v15);
    byte_40F85C7 = 1;
  }
  memset(&v53[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v16 = sub_B170CC(
          WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo,
          *(_QWORD *)&result,
          equipItem,
          method,
          v4);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_29;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( result != 1 )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.selectMemberIndex, v23);
  if ( equipItem )
  {
    userSvtEntity = equipItem->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    v28 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v53, 0LL, 0LL);
    v28 = *(_OWORD *)&v53[0].fields.currentCryptoKey;
    v27 = *(_OWORD *)&v53[0].fields.fakeValue;
  }
  *(_OWORD *)&v53[1].fields.currentCryptoKey = v28;
  *(_OWORD *)&v53[1].fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53[1];
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v52, 0LL);
  if ( !MemberItem )
    goto LABEL_29;
  v30 = v29;
  if ( PartyOrganizationListViewItem__get_EquipUserSvtId(MemberItem, 0LL) == v29 )
    goto LABEL_27;
  v32 = this->fields.partyItem;
  if ( !v32 )
    goto LABEL_29;
  WarBoardPartyListViewItem__SetEquip(v32, this->fields.selectMemberIndex, v30, v31);
  partyListViewManager = this->fields.partyListViewManager;
  v38 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v34,
                                                                   v35,
                                                                   v36,
                                                                   v37);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v38,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_29;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v38, v39);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_27;
  v44 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v16 + 24) = v44;
  v45 = this->fields.partyItem;
  if ( !v45
    || (memberItemList = (BattleBuffData_BuffData_array *)v45->fields.memberItemList,
        v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_PartyOrganizationListViewItem__TypeInfo,
                                                                         v40,
                                                                         v41,
                                                                         v42,
                                                                         v43),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v47,
          (Il2CppObject *)v16,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_PartyOrganizationListViewItem___ctor__),
        All_BattleBuffData_BuffData = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                           memberItemList,
                                                                           (System_Predicate_T__o *)v47,
                                                                           (const MethodInfo_2044520 *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                         All_BattleBuffData_BuffData,
                         (PartyOrganizationListViewItem_array *)All_BattleBuffData_BuffData,
                         v49),
        !this->fields.onFinishedEditMember) )
  {
LABEL_29:
    sub_B170D4();
  }
  WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
LABEL_27:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseEquipGraphListMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F85C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify);
    byte_40F85C6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationMenu__OnSelectServant(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WarBoardPartyListViewItem_o *partyItem; // x0
  bool IsParty; // w0
  const MethodInfo *v10; // x3
  struct WarBoardPartyListViewItem_o *v11; // x8
  int32_t selectMemberIndex; // w1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v18; // x21
  const MethodInfo *v19; // x3
  WarBoardPartyOrganizationMenu_o *v20; // x0
  const MethodInfo *v21; // x2
  struct WarBoardPartyListViewItem_o *v22; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  PartyServantSelectMenu_o *servantSelectMenu; // x0

  if ( (byte_40F85C9 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v7);
    byte_40F85C9 = 1;
  }
  if ( result )
  {
    if ( !item )
      goto LABEL_19;
    if ( item->fields.isBase )
    {
      partyItem = this->fields.partyItem;
      if ( !partyItem )
        goto LABEL_19;
      WarBoardPartyListViewItem__ClearMember(partyItem, this->fields.selectMemberIndex, (const MethodInfo *)item);
    }
    else
    {
      IsParty = PartyServantListViewItem__get_IsParty(item, 0LL);
      v11 = this->fields.partyItem;
      selectMemberIndex = this->fields.selectMemberIndex;
      if ( IsParty )
      {
        if ( !v11 )
          goto LABEL_19;
        WarBoardPartyListViewItem__SwapMember(this->fields.partyItem, selectMemberIndex, item->fields.partyIndex, v10);
      }
      else
      {
        if ( !v11 )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(this->fields.partyItem, selectMemberIndex, item, v10);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(this, *(const MethodInfo **)&result);
  partyListViewManager = this->fields.partyListViewManager;
  v18 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16,
                                                                   v17);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v18, v19);
  v22 = this->fields.partyItem;
  if ( !v22 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(v20, v22->fields.memberItemList, v21);
  if ( this->fields.onFinishedEditMember )
    WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
  servantSelectMenu = this->fields.servantSelectMenu;
  if ( !servantSelectMenu )
LABEL_19:
    sub_B170D4();
  PartyServantSelectMenu__Close(servantSelectMenu, 0LL);
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
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusDialog_EndDelegate_o *v23; // x22
  FollowerInfo_o *v24; // x0
  WebViewManager_o *v25; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ServantStatusDialog_EndDelegate_o *v33; // x23
  FollowerInfo_o *followerInfo; // x0
  WebViewManager_o *v35; // x0
  FollowerInfo_o *v36; // x8
  CommonUI_o *v37; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  ServantStatusDialog_EndDelegate_o *v43; // x22
  WebViewManager_o *v44; // x0
  WarBoardPartyListViewItem_o *v45; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  EquipGraphListMenu_CallbackFunc_o *v53; // x24
  PartyServantSelectMenu_o *servantSelectMenu; // x22
  WarBoardPartyListViewItem_o *v55; // x23
  EventUpValSetupInfo_o *v56; // x21
  int32_t v57; // w24
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  PartyServantSelectMenu_CallbackFunc_o *v63; // x25

  if ( (byte_40F85C5 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListMenu_CallbackFunc_TypeInfo, member);
    sub_B16FFC(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v13);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v14);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v15);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v16);
    byte_40F85C5 = 1;
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21,
                                                       v22);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v23, 0LL, 0LL);
            return;
          }
LABEL_51:
          sub_B170D4();
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
            v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v36 = member->fields.followerInfo;
            if ( !v36 )
              goto LABEL_51;
            v37 = (CommonUI_o *)v35;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v36, 0, 1, 0LL);
            v43 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v39,
                                                         v40,
                                                         v41,
                                                         v42);
            ServantStatusDialog_EndDelegate___ctor(
              v43,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v37 )
              goto LABEL_51;
            CommonUI__OpenServantEquipStatusDialog_18252676(v37, 19, EquipTarget1, v43, 0LL, 0LL);
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
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v28 = (CommonUI_o *)v25;
    v33 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v29, v30, v31, v32);
    ServantStatusDialog_EndDelegate___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v28 )
      goto LABEL_51;
    CommonUI__OpenServantStatusDialog_18246556(v28, 1, partyItem, index, v33, 0LL);
  }
  else if ( isSvtEquip )
  {
    if ( !member )
      return;
    if ( member->fields.isFollower )
    {
      v24 = member->fields.followerInfo;
      if ( !v24 )
        goto LABEL_51;
      if ( FollowerInfo__getEquipTarget1(v24, 0, 1, 0LL) )
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
    v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v48 = (CommonUI_o *)v44;
    v53 = (EquipGraphListMenu_CallbackFunc_o *)sub_B170CC(EquipGraphListMenu_CallbackFunc_TypeInfo, v49, v50, v51, v52);
    EquipGraphListMenu_CallbackFunc___ctor(
      v53,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v48 )
      goto LABEL_51;
    CommonUI__OpenEquipGraphListMenu_18241984(v48, v45, selectMemberIndex, eventUpValSetupInfo, v53, 0LL);
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
    v55 = this->fields.partyItem;
    v56 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = member->fields.index;
    v57 = member->fields.index;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v63 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                     PartyServantSelectMenu_CallbackFunc_TypeInfo,
                                                     v59,
                                                     v60,
                                                     v61,
                                                     v62);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v63,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_51;
    PartyServantSelectMenu__Open_32581428(servantSelectMenu, v55, v57, 0, v56, questRestrictionInfo, v63, 0LL, 0LL);
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
  __int64 v17; // x3
  __int64 v18; // x4
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v19; // x22
  const MethodInfo *v20; // x3
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WarBoardPartyOrganizationMenu_o *v32; // x0
  const MethodInfo *v33; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  CommonUI_o *Instance; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x21

  if ( (byte_40F85C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isModify);
    sub_B16FFC(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v5);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v8);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, v9);
    byte_40F85C8 = 1;
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
      v19 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                       WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                       v15,
                                                                       v16,
                                                                       v17,
                                                                       v18);
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        v19,
        (Il2CppObject *)this,
        Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
        0LL);
      if ( !partyListViewManager
        || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v19, v20),
            (v22 = sub_B17014(PartyOrganizationListViewItem___TypeInfo, 1LL, v21)) == 0) )
      {
LABEL_14:
        sub_B170D4();
      }
      v23 = v22;
      v24 = sub_B170BC(v12, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
      if ( !v24 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( !*(_DWORD *)(v23 + 24) )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      *(_QWORD *)(v23 + 32) = v12;
      sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), v12, v26, v27, v28, v29, v30, v31);
      ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                       v32,
                       (PartyOrganizationListViewItem_array *)v23,
                       v33);
      if ( this->fields.onFinishedEditMember )
        WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(
    v40,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
    0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v40, 0LL);
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
  __int64 v20; // x3
  __int64 v21; // x4
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x22
  __int64 v30; // x22
  __int64 v31; // x8
  WarBoardData_o *v32; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  WarBoardPartyListViewItem_o *v39; // x24
  const MethodInfo *v40; // x4
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WarBoardPartyOrganizationListViewManager_o *v47; // x20
  __int64 v48; // x2
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **partyItem; // x22
  __int64 v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v63; // x22
  const MethodInfo *v64; // x3
  WarBoardPartyOrganizationListViewManager_o *v65; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v66; // x21
  const MethodInfo *v67; // x3

  if ( (byte_40F85C3 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7);
    sub_B16FFC(&WarBoardPartyListViewItem___TypeInfo, v8);
    sub_B16FFC(&WarBoardPartyListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v10);
    byte_40F85C3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v30 = **(_QWORD **)(v29 + 192);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AAFCFC(v30);
  v31 = **(_QWORD **)(v30 + 184);
  if ( !v31 )
    goto LABEL_20;
  v32 = *(WarBoardData_o **)(v31 + 424);
  if ( !v32 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v31 + 424), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v32, 0LL);
  v39 = (WarBoardPartyListViewItem_o *)sub_B170CC(WarBoardPartyListViewItem_TypeInfo, v35, v36, v37, v38);
  WarBoardPartyListViewItem___ctor(v39, EditableServantPieces, focusPiece, FormationLimitCost, v40);
  this->fields.partyItem = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = this->fields.partyListViewManager;
  v49 = sub_B17014(WarBoardPartyListViewItem___TypeInfo, 1LL, v48);
  if ( !v49 )
    goto LABEL_20;
  partyItem = (System_Int32_array **)this->fields.partyItem;
  v58 = v49;
  if ( partyItem )
  {
    v49 = sub_B170BC(this->fields.partyItem, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
    if ( !v49 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v58 + 24) )
  {
    sub_B17100(v49, v50, v51);
    sub_B170A0();
  }
  *(_QWORD *)(v58 + 32) = partyItem;
  sub_B16F98((BattleServantConfConponent_o *)(v58 + 32), partyItem, v51, v52, v53, v54, v55, v56);
  v63 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v59,
                                                                   v60,
                                                                   v61,
                                                                   v62);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v63,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v47 )
LABEL_20:
    sub_B170D4();
  WarBoardPartyOrganizationListViewManager__CreateList(v47, (WarBoardPartyListViewItem_array *)v58, v63, v64);
LABEL_18:
  v65 = this->fields.partyListViewManager;
  v66 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                   WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
                                                                   v18,
                                                                   v19,
                                                                   v20,
                                                                   v21);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v66,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v65 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v65, 2, v66, v67);
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t EventId; // w0
  int32_t v12; // w21
  WebViewManager_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x0
  EventDetailEntity_o *Entity; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F85C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F85C2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v12 = EventId;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13
    || (v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v13,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v14,
                                    v12,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v22 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v16, v17, v18, v19);
      EventUpValSetupInfo___ctor(v22, questId, questPhase, v12, 0LL);
      this->fields.eventUpValSetupInfo = v22;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
        (System_Int32_array **)v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, data, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  p_method = sub_AAFEF8(data, v43, v44);
                }
                methodPtr = *(Il2CppMethodPointer *)(p_method + 8);
              }
              else
              {
                methodPtr = data->obj.klass->vtable[*(unsigned __int16 *)(v28 + 72) + 1].methodPtr;
              }
              v24 = (void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B170AC(methodPtr, v28);
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
                  v14 = sub_AAFEF8(data, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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
  sub_B16F98(
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
  if ( (byte_40F7852 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, memberItem);
    byte_40F7852 = 1;
  }
  v12[3] = 0LL;
  v12[0] = (__int64)memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v31->fields.extra_arg, memberItem, isSvtEquip);
      v35 = sub_B1702C(v32);
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
            v44 = sub_B17024(v32);
            v45 = sub_B17428(v32);
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
                  v27 = sub_AAFEF8(memberItem, v47, v48);
                }
                v19 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v19 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B170AC(v19, v32);
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
                  v18 = sub_AAFEF8(memberItem, class_0, v13);
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
          v37 = sub_B17024(v32);
          v38 = sub_B17428(v32);
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
                v29 = sub_AAFEF8(v33, v40, v41);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B170AC(v26, v32);
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
                v25 = sub_AAFEF8(v33, v21, v20);
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
    sub_B170D4();
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}