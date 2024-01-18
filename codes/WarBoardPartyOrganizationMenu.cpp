void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4186582 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_4186582 = 1;
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
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_418657B & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v5);
    byte_418657B = 1;
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
    v8 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      0LL);
    if ( !partyListViewManager )
      sub_B2C434(v9, v10);
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
  __int64 v9; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem || (memberItemList = partyItem->fields.memberItemList) == 0LL )
LABEL_14:
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
      {
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
  __int64 v11; // x1
  signed int max_length; // w8
  __int64 v13; // x25
  PartyOrganizationListViewItem_o *v14; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w21
  __int128 v17; // q0
  __int128 v18; // q1
  int64_t v19; // x23
  int64_t EquipUserSvtId; // x24
  WarBoardPartyOrganizationMenu_ResponseData_o *v21; // x22
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4186581 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__, items);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v8);
    byte_4186581 = 1;
  }
  memset(&v25[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !items )
    return 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
      {
        v23 = sub_B2C460(v10);
        sub_B2C400(v23, 0LL);
      }
      v14 = items->m_Items[v13];
      if ( !v14 )
        break;
      userServantEntity = v14->fields.userServantEntity;
      warBoardPieceIndex = v14->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v18 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v25, 0LL, 0LL);
        v18 = *(_OWORD *)&v25[0].fields.currentCryptoKey;
        v17 = *(_OWORD *)&v25[0].fields.fakeValue;
      }
      *(_OWORD *)&v25[1].fields.currentCryptoKey = v18;
      *(_OWORD *)&v25[1].fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v25[1];
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v14, 0LL);
      v21 = (WarBoardPartyOrganizationMenu_ResponseData_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      WarBoardPartyOrganizationMenu_ResponseData___ctor(v21, warBoardPieceIndex, v19, EquipUserSvtId, 0LL);
      if ( !v9 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
      max_length = items->max_length;
      if ( (int)++v13 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_24:
    sub_B2C434(v10, v11);
  }
  if ( !v9 )
    goto LABEL_24;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  __int64 v12; // x1
  struct PartyServantSelectMenu_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
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

  if ( (byte_4186578 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    sub_B2C35C(&StringLiteral_10594/*"PartyOrganization/PartyServantSelectMenu"*/, v6);
    byte_4186578 = 1;
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
                             (System_String_o *)StringLiteral_10594/*"PartyOrganization/PartyServantSelectMenu"*/,
                             (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               UIAtlas,
                                               transform,
                                               (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !gameObject )
LABEL_16:
      sub_B2C434(gameObject, v12);
    Component_srcLineSprite = (struct PartyServantSelectMenu_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   gameObject,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    this->fields.servantSelectMenu = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      (System_Int32_array **)Component_srcLineSprite,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_16;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onFinishedEditMember, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.partyItem = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v33, v34, v35, v36, v37, v38);
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
    sub_B2C434(this, 0LL);
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  PartyOrganizationListViewItem_o *v25; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v27; // q0
  __int128 v28; // q1
  int64_t v29; // x23
  const MethodInfo *v30; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v32; // x23
  const MethodInfo *v33; // x3
  int32_t v34; // w8
  struct WarBoardPartyListViewItem_o *v35; // x8
  BattleBuffData_BuffData_array *memberItemList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x22
  WarBoardPartyOrganizationMenu_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v39; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41[2]; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418657E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, *(_QWORD *)&result);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_PartyOrganizationListViewItem___ctor__, v9);
    sub_B2C35C(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__, v12);
    sub_B2C35C(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v14);
    byte_418657E = 1;
  }
  memset(&v41[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v15 = sub_B2C42C(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  if ( result != 1 )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyListViewItem__GetMemberItem(
                                               partyItem,
                                               this->fields.selectMemberIndex,
                                               v24);
  v25 = (PartyOrganizationListViewItem_o *)partyItem;
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
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v41, 0LL, 0LL);
    v28 = *(_OWORD *)&v41[0].fields.currentCryptoKey;
    v27 = *(_OWORD *)&v41[0].fields.fakeValue;
  }
  *(_OWORD *)&v41[1].fields.currentCryptoKey = v28;
  *(_OWORD *)&v41[1].fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v40 = v41[1];
  partyItem = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                               &v40,
                                               0LL);
  if ( !v25 )
    goto LABEL_29;
  v29 = (int64_t)partyItem;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v25, 0LL) == partyItem )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  WarBoardPartyListViewItem__SetEquip(partyItem, this->fields.selectMemberIndex, v29, v30);
  partyListViewManager = this->fields.partyListViewManager;
  v32 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v32,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_29;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v32, v33);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_27;
  v34 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v15 + 24) = v34;
  v35 = this->fields.partyItem;
  if ( !v35
    || (memberItemList = (BattleBuffData_BuffData_array *)v35->fields.memberItemList,
        v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v37,
          (Il2CppObject *)v15,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_PartyOrganizationListViewItem___ctor__),
        All_BattleBuffData_BuffData = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                           memberItemList,
                                                                           (System_Predicate_T__o *)v37,
                                                                           (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                     All_BattleBuffData_BuffData,
                                                     (PartyOrganizationListViewItem_array *)All_BattleBuffData_BuffData,
                                                     v39),
        !this->fields.onFinishedEditMember) )
  {
LABEL_29:
    sub_B2C434(partyItem, v17);
  }
  WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
    this->fields.onFinishedEditMember,
    (WarBoardPartyOrganizationMenu_ResponseData_array *)partyItem,
    0LL);
LABEL_27:
  partyItem = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v4; // x1

  if ( (byte_418657D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify);
    byte_418657D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct WarBoardPartyListViewItem_o *v14; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0

  v5 = result;
  v6 = this;
  if ( (byte_4186580 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, *(_QWORD *)&result);
    this = (WarBoardPartyOrganizationMenu_o *)sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v7);
    byte_4186580 = 1;
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
  v11 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v11,
    (Il2CppObject *)v6,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v11, v12);
  v14 = v6->fields.partyItem;
  if ( !v14 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v14->fields.memberItemList, v13);
  if ( v6->fields.onFinishedEditMember )
    WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(v6->fields.onFinishedEditMember, ResponseData, 0LL);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_B2C434(this, *(_QWORD *)&result);
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
  ServantStatusDialog_EndDelegate_o *v19; // x22
  FollowerInfo_o *followerInfo; // x0
  WebViewManager_o *v21; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v24; // x22
  ServantStatusDialog_EndDelegate_o *v25; // x23
  FollowerInfo_o *v26; // x8
  CommonUI_o *v27; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  ServantStatusDialog_EndDelegate_o *v29; // x22
  WebViewManager_o *v30; // x0
  WarBoardPartyListViewItem_o *v31; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v34; // x23
  EquipGraphListMenu_CallbackFunc_o *v35; // x24
  PartyServantSelectMenu_o *servantSelectMenu; // x22
  WarBoardPartyListViewItem_o *v37; // x23
  EventUpValSetupInfo_o *v38; // x21
  int32_t v39; // w24
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyServantSelectMenu_CallbackFunc_o *v41; // x25

  if ( (byte_418657C & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListMenu_CallbackFunc_TypeInfo, member);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v13);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v14);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v15);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v16);
    byte_418657C = 1;
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v19 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v19,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v19, 0LL, 0LL);
            return;
          }
LABEL_51:
          sub_B2C434(followerInfo, member);
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
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v26 = member->fields.followerInfo;
            if ( !v26 )
              goto LABEL_51;
            v27 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v26, 0, 1, 0LL);
            v29 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v29,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v27 )
              goto LABEL_51;
            CommonUI__OpenServantEquipStatusDialog_17986440(v27, 19, EquipTarget1, v29, 0LL, 0LL);
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
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v24 = (CommonUI_o *)v21;
    v25 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v24 )
      goto LABEL_51;
    CommonUI__OpenServantStatusDialog_17980320(v24, 1, partyItem, index, v25, 0LL);
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
    v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v34 = (CommonUI_o *)v30;
    v35 = (EquipGraphListMenu_CallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v34 )
      goto LABEL_51;
    CommonUI__OpenEquipGraphListMenu_17975748(v34, v31, selectMemberIndex, eventUpValSetupInfo, v35, 0LL);
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
    v37 = this->fields.partyItem;
    v38 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = member->fields.index;
    v39 = member->fields.index;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v41 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v41,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_51;
    PartyServantSelectMenu__Open_32395576(servantSelectMenu, v37, v39, 0, v38, questRestrictionInfo, v41, 0LL, 0LL);
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
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v15; // x22
  const MethodInfo *v16; // x3
  WarBoardPartyListViewItem_o *v17; // x21
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardPartyOrganizationMenu_o *v25; // x0
  const MethodInfo *v26; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_418657F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isModify);
    sub_B2C35C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v5);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v8);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, v9);
    byte_418657F = 1;
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
      v15 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        v15,
        (Il2CppObject *)this,
        Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
        0LL);
      if ( !partyListViewManager
        || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v15, v16),
            (partyItem = (WarBoardPartyListViewItem_o *)sub_B2C374(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
      {
LABEL_14:
        sub_B2C434(partyItem, isModify);
      }
      v17 = partyItem;
      v18 = sub_B2C41C(v12, partyItem->klass->_1.element_class);
      if ( !v18 )
      {
        v30 = sub_B2C454();
        sub_B2C400(v30, 0LL);
      }
      if ( !v17->fields.sortIndex )
      {
        v31 = sub_B2C460(v18);
        sub_B2C400(v31, 0LL);
      }
      v17->fields.sortValue0 = (int64_t)v12;
      sub_B2C2F8((BattleServantConfConponent_o *)&v17->fields.sortValue0, v12, v19, v20, v21, v22, v23, v24);
      ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                       v25,
                       (PartyOrganizationListViewItem_array *)v17,
                       v26);
      if ( this->fields.onFinishedEditMember )
        WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__,
    0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v29, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x22
  __int64 v27; // x22
  __int64 v28; // x8
  WarBoardData_o *v29; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v32; // x24
  const MethodInfo *v33; // x4
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WarBoardPartyOrganizationListViewManager_o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **partyItem; // x22
  UnityEngine_GameObject_o *v48; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v49; // x22
  const MethodInfo *v50; // x3
  WarBoardPartyOrganizationListViewManager_o *v51; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v52; // x21
  const MethodInfo *v53; // x3
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_418657A & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, focusPiece);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7);
    sub_B2C35C(&WarBoardPartyListViewItem___TypeInfo, v8);
    sub_B2C35C(&WarBoardPartyListViewItem_TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v10);
    byte_418657A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onFinishedEditMember,
    (System_Int32_array **)onFinishedEditMember,
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                        + 3));
  v27 = **(_QWORD **)(v26 + 192);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_AC505C(v27);
  v28 = **(_QWORD **)(v27 + 184);
  if ( !v28 )
    goto LABEL_20;
  v29 = *(WarBoardData_o **)(v28 + 432);
  if ( !v29 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v28 + 432), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v29, 0LL);
  v32 = (WarBoardPartyListViewItem_o *)sub_B2C42C(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v32, EditableServantPieces, focusPiece, FormationLimitCost, v33);
  this->fields.partyItem = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_B2C374(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = (System_Int32_array **)this->fields.partyItem;
  v48 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v55 = sub_B2C454();
      sub_B2C400(v55, 0LL);
    }
  }
  if ( !LODWORD(v48[1].klass) )
  {
    v54 = sub_B2C460(gameObject);
    sub_B2C400(v54, 0LL);
  }
  v48[1].monitor = partyItem;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48[1].monitor, partyItem, v41, v42, v43, v44, v45, v46);
  v49 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v49,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v40 )
LABEL_20:
    sub_B2C434(gameObject, v12);
  WarBoardPartyOrganizationListViewManager__CreateList(v40, (WarBoardPartyListViewItem_array *)v48, v49, v50);
LABEL_18:
  v51 = this->fields.partyListViewManager;
  v52 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B2C42C(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v52,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v51 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v51, 2, v52, v53);
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
  __int64 v10; // x1
  int32_t EventId; // w0
  int32_t v12; // w21
  EventDetailEntity_o *Entity; // x0
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4186579 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4186579 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v12 = EventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v10);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v12,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v16 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v16, questId, questPhase, v12, 0LL);
      this->fields.eventUpValSetupInfo = v16;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
        (System_Int32_array **)v16,
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
  sub_B2C2F8(
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  Il2CppClass *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  Il2CppMethodPointer methodPtr; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 p_method; // x0
  void (__fastcall **v27)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  Il2CppClass *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, data, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = data->obj.klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  p_method = (__int64)&klass->vtable[*p_offset + (int)v49].method;
                }
                else
                {
LABEL_57:
                  p_method = sub_AC5258(data, v48, v49, v46);
                }
                methodPtr = *(Il2CppMethodPointer *)(p_method + 8);
              }
              else
              {
                methodPtr = data->obj.klass->vtable[*(unsigned __int16 *)(v31 + 72) + 1].methodPtr;
              }
              v27 = (void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B2C40C(methodPtr, v31);
              (*v27)(data, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = data->obj.klass;
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)&v13->vtable[*v15 + v10].method;
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(data, class_0, v10, v12);
                }
                (*(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v16)(
                  data,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                ((void (__fastcall *)(WarBoardPartyOrganizationMenu_ResponseData_array *, Il2CppMethodPointer))data->obj.klass->vtable[*(unsigned __int16 *)(v31 + 72)].method)(
                  data,
                  data->obj.klass->vtable[*(unsigned __int16 *)(v31 + 72) + 1].methodPtr);
              }
            }
            continue;
          }
LABEL_58:
          v33(data, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, data, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v24)(
                v32,
                data,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 312))(
                v32,
                data,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))v33)(v32, data, v31);
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
  sub_B2C2F8(
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
  if ( (byte_41866FE & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, memberItem);
    byte_41866FE = 1;
  }
  v12[3] = 0LL;
  v12[0] = (__int64)memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v15; // x3
  PartyOrganizationListViewItem_c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  unsigned int v21; // w25
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  void (__fastcall **v30)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD); // x0
  __int64 v31; // x0
  void (__fastcall **v32)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD); // x0
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v33; // x8
  __int64 v34; // x23
  __int64 *v35; // x24
  void (__fastcall *v36)(PartyOrganizationListViewItem_o *, bool, bool, __int64); // x25
  char v37; // w0
  int v38; // w8
  char v39; // w25
  char v40; // w0
  __int64 v41; // x3
  __int64 v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  _DWORD *v46; // x11
  char v47; // w24
  char v48; // w0
  __int64 v49; // x3
  PartyOrganizationListViewItem_c *klass; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v55; // [xsp+8h] [xbp-58h] BYREF

  v55 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v55;
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
      v33 = v11[i];
      v35 = *(__int64 **)&v33->fields.method;
      v34 = *(_QWORD *)&v33->fields.extra_arg;
      v36 = *(void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, __int64))&v33->fields.method_ptr;
      if ( *(__int16 *)(v34 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v33->fields.extra_arg, memberItem, isSvtEquip, isLongTap);
      v37 = sub_B2C38C(v34);
      v38 = *(unsigned __int8 *)(v34 + 74);
      if ( (v37 & 1) != 0 )
      {
        if ( v38 == 3 )
          goto LABEL_58;
      }
      else
      {
        if ( v38 != 3 )
        {
          if ( *(__int16 *)(v34 + 72) != -1 && this->fields.m_target )
          {
            v47 = sub_B2C384(v34);
            v48 = sub_B2C788(v34);
            if ( (v47 & 1) != 0 )
            {
              if ( (v48 & 1) != 0 )
              {
                klass = memberItem->klass;
                v51 = *(_QWORD *)(v34 + 24);
                v52 = *(unsigned __int16 *)(v34 + 72);
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v53 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v51 )
                  {
                    ++v53;
                    p_offset += 4;
                    if ( v53 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v52);
                }
                else
                {
LABEL_57:
                  v29 = sub_AC5258(memberItem, v51, v52, v49);
                }
                v20 = *(_QWORD *)(v29 + 8);
              }
              else
              {
                v20 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v34 + 72));
              }
              v30 = (void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B2C40C(v20, v34);
              (*v30)(memberItem, isSvtEquip, isLongTap, v30);
            }
            else
            {
              v13 = *(unsigned __int16 *)(v34 + 72);
              if ( (v48 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v34);
                v16 = memberItem->klass;
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v17 = 0LL;
                  v18 = &v16->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v18 - 1) != class_0 )
                  {
                    ++v17;
                    v18 += 4;
                    if ( v17 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v19 = (__int64)(&v16->vtable._0_Equals.method + 2 * (int)(*v18 + v13));
                }
                else
                {
LABEL_11:
                  v19 = sub_AC5258(memberItem, class_0, v13, v15);
                }
                (*(void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))v19)(
                  memberItem,
                  isSvtEquip,
                  isLongTap,
                  *(_QWORD *)(v19 + 8));
              }
              else
              {
                (*((void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))&memberItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v34 + 72)))(
                  memberItem,
                  isSvtEquip,
                  isLongTap,
                  *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v34 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v36(memberItem, isSvtEquip, isLongTap, v34);
          continue;
        }
        if ( !v35 )
          goto LABEL_58;
        if ( *(__int16 *)(v34 + 72) != -1 && (*(_BYTE *)(*v35 + 277) & 1) == 0 && this->fields.m_target )
        {
          v39 = sub_B2C384(v34);
          v40 = sub_B2C788(v34);
          if ( (v39 & 1) != 0 )
          {
            if ( (v40 & 1) != 0 )
            {
              v42 = *v35;
              v43 = *(_QWORD *)(v34 + 24);
              v44 = *(unsigned __int16 *)(v34 + 72);
              if ( *(_WORD *)(*v35 + 298) )
              {
                v45 = 0LL;
                v46 = (_DWORD *)(*(_QWORD *)(v42 + 176) + 8LL);
                while ( *((_QWORD *)v46 - 1) != v43 )
                {
                  ++v45;
                  v46 += 4;
                  if ( v45 >= *(unsigned __int16 *)(*v35 + 298) )
                    goto LABEL_48;
                }
                v31 = v42 + 16LL * (*v46 + (int)v44) + 312;
              }
              else
              {
LABEL_48:
                v31 = sub_AC5258(v35, v43, v44, v41);
              }
              v28 = *(_QWORD *)(v31 + 8);
            }
            else
            {
              v28 = *(_QWORD *)(*v35 + 16LL * *(unsigned __int16 *)(v34 + 72) + 320);
            }
            v32 = (void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B2C40C(v28, v34);
            (*v32)(v35, memberItem, isSvtEquip, isLongTap, v32);
          }
          else
          {
            v21 = *(unsigned __int16 *)(v34 + 72);
            if ( (v40 & 1) != 0 )
            {
              v22 = j_il2cpp_method_get_class_0(v34);
              v24 = *v35;
              if ( *(_WORD *)(*v35 + 298) )
              {
                v25 = 0LL;
                v26 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
                while ( *((_QWORD *)v26 - 1) != v22 )
                {
                  ++v25;
                  v26 += 4;
                  if ( v25 >= *(unsigned __int16 *)(*v35 + 298) )
                    goto LABEL_19;
                }
                v27 = v24 + 16LL * (int)(*v26 + v21) + 312;
              }
              else
              {
LABEL_19:
                v27 = sub_AC5258(v35, v22, v21, v23);
              }
              (*(void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))v27)(
                v35,
                memberItem,
                isSvtEquip,
                isLongTap,
                *(_QWORD *)(v27 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))(*v35 + 16LL * *(unsigned __int16 *)(v34 + 72) + 312))(
                v35,
                memberItem,
                isSvtEquip,
                isLongTap,
                *(_QWORD *)(*v35 + 16LL * *(unsigned __int16 *)(v34 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, __int64))v36)(
        v35,
        memberItem,
        isSvtEquip,
        isLongTap,
        v34);
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
    sub_B2C434(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}