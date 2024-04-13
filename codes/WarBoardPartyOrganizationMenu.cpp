void __fastcall WarBoardPartyOrganizationMenu___ctor(WarBoardPartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7608 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7608 = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarBoardPartyListViewItem_o *partyItem; // x0
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_42E7601 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, (_DWORD)focusPiece, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v6, v7, v8);
    byte_42E7601 = 1;
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
    v11 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B5D694(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
    WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
      0LL);
    if ( !partyListViewManager )
      sub_B5D69C(v12, v13);
    WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 2, v11, v14);
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
    sub_B5D69C(this, method);
  v4 = *(_QWORD *)&memberItemList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = this;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
      {
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  signed int max_length; // w8
  __int64 v24; // x25
  PartyOrganizationListViewItem_o *v25; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t warBoardPieceIndex; // w21
  __int128 v28; // q0
  __int128 v29; // q1
  int64_t v30; // x23
  int64_t EquipUserSvtId; // x24
  WarBoardPartyOrganizationMenu_ResponseData_o *v32; // x22
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_42E7607 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__,
      (_DWORD)items,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&WarBoardPartyOrganizationMenu_ResponseData_TypeInfo, v17, v18, v19);
    byte_42E7607 = 1;
  }
  memset(&v36[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( !items )
    return 0LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData___ctor__);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= max_length )
      {
        v34 = sub_B5D6C8(v21);
        sub_B5D668(v34, 0LL);
      }
      v25 = items->m_Items[v24];
      if ( !v25 )
        break;
      userServantEntity = v25->fields.userServantEntity;
      warBoardPieceIndex = v25->fields.warBoardPieceIndex;
      if ( userServantEntity )
      {
        v29 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v36, 0LL, 0LL);
        v29 = *(_OWORD *)&v36[0].fields.currentCryptoKey;
        v28 = *(_OWORD *)&v36[0].fields.fakeValue;
      }
      *(_OWORD *)&v36[1].fields.currentCryptoKey = v29;
      *(_OWORD *)&v36[1].fields.fakeValue = v28;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v35 = v36[1];
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v35, 0LL);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v25, 0LL);
      v32 = (WarBoardPartyOrganizationMenu_ResponseData_o *)sub_B5D694(WarBoardPartyOrganizationMenu_ResponseData_TypeInfo);
      WarBoardPartyOrganizationMenu_ResponseData___ctor(v32, warBoardPieceIndex, v30, EquipUserSvtId, 0LL);
      if ( !v20 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__Add__);
      max_length = items->max_length;
      if ( (int)++v24 >= max_length )
        return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
    }
LABEL_24:
    sub_B5D69C(v21, v22);
  }
  if ( !v20 )
    goto LABEL_24;
  return (WarBoardPartyOrganizationMenu_ResponseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationMenu_ResponseData__ToArray__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct PartyServantSelectMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  UILabel_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  struct PartyServantSelectMenu_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E75FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10714/*"PartyOrganization/PartyServantSelectMenu"*/, v14, v15, v16);
    byte_42E75FE = 1;
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
                             (System_String_o *)StringLiteral_10714/*"PartyOrganization/PartyServantSelectMenu"*/,
                             (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               UIAtlas,
                                               transform,
                                               (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    if ( !gameObject )
LABEL_16:
      sub_B5D69C(gameObject, v22);
    Component_srcLineSprite = (struct PartyServantSelectMenu_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   gameObject,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyServantSelectMenu___);
    this->fields.servantSelectMenu = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      (System_Int32_array **)Component_srcLineSprite,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_16;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)gameObject, 0LL);
  this->fields.selectMemberIndex = -1;
  this->fields.onFinishedEditMember = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onFinishedEditMember, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.partyItem = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v43, v44, v45, v46, v47, v48);
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
    sub_B5D69C(this, 0LL);
  return piece->fields._index_k__BackingField == focusMemberItem->fields.warBoardPieceIndex;
}


void __fastcall WarBoardPartyOrganizationMenu__OnFinishedSelectServantEquip(
        WarBoardPartyOrganizationMenu_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x21
  WarBoardPartyListViewItem_o *partyItem; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  PartyOrganizationListViewItem_o *v41; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v43; // q0
  __int128 v44; // q1
  int64_t v45; // x23
  const MethodInfo *v46; // x3
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v48; // x23
  const MethodInfo *v49; // x3
  int32_t v50; // w8
  struct WarBoardPartyListViewItem_o *v51; // x8
  BattleBuffData_BuffData_array *memberItemList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v53; // x22
  WarBoardPartyOrganizationMenu_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v55; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57[2]; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E7604 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_PartyOrganizationListViewItem___, result, (_DWORD)equipItem, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Predicate_PartyOrganizationListViewItem___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Predicate_PartyOrganizationListViewItem__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20, v21);
    sub_B5D5C4(
      &Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v28, v29, v30);
    byte_42E7604 = 1;
  }
  memset(&v57[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v31 = sub_B5D694(WarBoardPartyOrganizationMenu___c__DisplayClass19_0_TypeInfo);
  WarBoardPartyOrganizationMenu___c__DisplayClass19_0___ctor(
    (WarBoardPartyOrganizationMenu___c__DisplayClass19_0_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  if ( result != 1 )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyListViewItem__GetMemberItem(
                                               partyItem,
                                               this->fields.selectMemberIndex,
                                               v40);
  v41 = (PartyOrganizationListViewItem_o *)partyItem;
  if ( equipItem )
  {
    userSvtEntity = equipItem->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    v44 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v57, 0LL, 0LL);
    v44 = *(_OWORD *)&v57[0].fields.currentCryptoKey;
    v43 = *(_OWORD *)&v57[0].fields.fakeValue;
  }
  *(_OWORD *)&v57[1].fields.currentCryptoKey = v44;
  *(_OWORD *)&v57[1].fields.fakeValue = v43;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v56 = v57[1];
  partyItem = (WarBoardPartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                               &v56,
                                               0LL);
  if ( !v41 )
    goto LABEL_29;
  v45 = (int64_t)partyItem;
  if ( (WarBoardPartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v41, 0LL) == partyItem )
    goto LABEL_27;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_29;
  WarBoardPartyListViewItem__SetEquip(partyItem, this->fields.selectMemberIndex, v45, v46);
  partyListViewManager = this->fields.partyListViewManager;
  v48 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B5D694(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v48,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_29;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v48, v49);
  if ( !this->fields.onFinishedEditMember )
    goto LABEL_27;
  v50 = equipItem ? equipItem->fields.wearerMember : -1;
  *(_DWORD *)(v31 + 24) = v50;
  v51 = this->fields.partyItem;
  if ( !v51
    || (memberItemList = (BattleBuffData_BuffData_array *)v51->fields.memberItemList,
        v53 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_PartyOrganizationListViewItem__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v53,
          (Il2CppObject *)v31,
          Method_WarBoardPartyOrganizationMenu___c__DisplayClass19_0__OnFinishedSelectServantEquip_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_PartyOrganizationListViewItem___ctor__),
        All_BattleBuffData_BuffData = (WarBoardPartyOrganizationMenu_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                           memberItemList,
                                                                           (System_Predicate_T__o *)v53,
                                                                           (const MethodInfo_1FC072C *)Method_System_Array_FindAll_PartyOrganizationListViewItem___),
        partyItem = (WarBoardPartyListViewItem_o *)WarBoardPartyOrganizationMenu__CreateResponseData(
                                                     All_BattleBuffData_BuffData,
                                                     (PartyOrganizationListViewItem_array *)All_BattleBuffData_BuffData,
                                                     v55),
        !this->fields.onFinishedEditMember) )
  {
LABEL_29:
    sub_B5D69C(partyItem, v33);
  }
  WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(
    this->fields.onFinishedEditMember,
    (WarBoardPartyOrganizationMenu_ResponseData_array *)partyItem,
    0LL);
LABEL_27:
  partyItem = (WarBoardPartyListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !partyItem )
    goto LABEL_29;
  CommonUI__CloseEquipGraphListMenu((CommonUI_o *)partyItem, 0LL, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__OnFinishedShowServantEquipDetail(
        WarBoardPartyOrganizationMenu_o *this,
        bool isModify,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E7603 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isModify, (_DWORD)method, v3);
    byte_42E7603 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x3
  struct WarBoardPartyListViewItem_o *partyItem; // x8
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct WarBoardPartyListViewItem_o *v16; // x8
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0

  v5 = result;
  v6 = this;
  if ( (byte_42E7606 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, result, (_DWORD)item, method);
    this = (WarBoardPartyOrganizationMenu_o *)sub_B5D5C4(
                                                &Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
                                                v7,
                                                v8,
                                                v9);
    byte_42E7606 = 1;
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
        WarBoardPartyListViewItem__SwapMember(v6->fields.partyItem, result, item->fields.partyIndex, v10);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_19;
        WarBoardPartyListViewItem__SetMember(v6->fields.partyItem, result, item, v10);
      }
    }
  }
  WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(v6, *(const MethodInfo **)&result);
  partyListViewManager = v6->fields.partyListViewManager;
  v13 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B5D694(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v13,
    (Il2CppObject *)v6,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !partyListViewManager )
    goto LABEL_19;
  WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v13, v14);
  v16 = v6->fields.partyItem;
  if ( !v16 )
    goto LABEL_19;
  ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(this, v16->fields.memberItemList, v15);
  if ( v6->fields.onFinishedEditMember )
    WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(v6->fields.onFinishedEditMember, ResponseData, 0LL);
  this = (WarBoardPartyOrganizationMenu_o *)v6->fields.servantSelectMenu;
  if ( !this )
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&result);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  CommonUI_o *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v35; // x22
  FollowerInfo_o *followerInfo; // x0
  WebViewManager_o *v37; // x0
  WarBoardPartyListViewItem_o *partyItem; // x21
  int32_t index; // w20
  CommonUI_o *v40; // x22
  ServantStatusDialog_EndDelegate_o *v41; // x23
  FollowerInfo_o *v42; // x8
  CommonUI_o *v43; // x20
  EquipTargetInfo_o *EquipTarget1; // x21
  ServantStatusDialog_EndDelegate_o *v45; // x22
  WebViewManager_o *v46; // x0
  WarBoardPartyListViewItem_o *v47; // x20
  int32_t selectMemberIndex; // w21
  EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  CommonUI_o *v50; // x23
  EquipGraphListMenu_CallbackFunc_o *v51; // x24
  PartyServantSelectMenu_o *servantSelectMenu; // x22
  WarBoardPartyListViewItem_o *v53; // x23
  EventUpValSetupInfo_o *v54; // x21
  int32_t v55; // w24
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyServantSelectMenu_CallbackFunc_o *v57; // x25

  if ( (byte_42E7602 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListMenu_CallbackFunc_TypeInfo, (_DWORD)member, isSvtEquip, isLongTap);
    sub_B5D5C4(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnSelectServant__, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__, v30, v31, v32);
    byte_42E7602 = 1;
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(member, 0LL);
          v35 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v35,
            (Il2CppObject *)this,
            Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v35, 0LL, 0LL);
            return;
          }
LABEL_51:
          sub_B5D69C(followerInfo, member);
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
            followerInfo = (FollowerInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v42 = member->fields.followerInfo;
            if ( !v42 )
              goto LABEL_51;
            v43 = (CommonUI_o *)followerInfo;
            EquipTarget1 = FollowerInfo__getEquipTarget1(v42, 0, 1, 0LL);
            v45 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v45,
              (Il2CppObject *)this,
              Method_WarBoardPartyOrganizationMenu_OnFinishedShowServantEquipDetail__,
              0LL);
            if ( !v43 )
              goto LABEL_51;
            CommonUI__OpenServantEquipStatusDialog_18217320(v43, 19, EquipTarget1, v45, 0LL, 0LL);
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
    v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    partyItem = this->fields.partyItem;
    index = member->fields.index;
    v40 = (CommonUI_o *)v37;
    v41 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnfinishedShowServantDetail__,
      0LL);
    if ( !v40 )
      goto LABEL_51;
    CommonUI__OpenServantStatusDialog_18211104(v40, 1, partyItem, index, v41, 0LL);
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
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v47 = this->fields.partyItem;
    selectMemberIndex = this->fields.selectMemberIndex;
    eventUpValSetupInfo = this->fields.eventUpValSetupInfo;
    v50 = (CommonUI_o *)v46;
    v51 = (EquipGraphListMenu_CallbackFunc_o *)sub_B5D694(EquipGraphListMenu_CallbackFunc_TypeInfo);
    EquipGraphListMenu_CallbackFunc___ctor(
      v51,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnFinishedSelectServantEquip__,
      0LL);
    if ( !v50 )
      goto LABEL_51;
    CommonUI__OpenEquipGraphListMenu_18206508(v50, v47, selectMemberIndex, eventUpValSetupInfo, v51, 0LL);
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
    v53 = this->fields.partyItem;
    v54 = this->fields.eventUpValSetupInfo;
    this->fields.selectMemberIndex = member->fields.index;
    v55 = member->fields.index;
    questRestrictionInfo = member->fields.questRestrictionInfo;
    v57 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    PartyServantSelectMenu_CallbackFunc___ctor(
      v57,
      (Il2CppObject *)this,
      Method_WarBoardPartyOrganizationMenu_OnSelectServant__,
      0LL);
    if ( !servantSelectMenu )
      goto LABEL_51;
    PartyServantSelectMenu__Open_32106012(servantSelectMenu, v53, v55, 0, v54, questRestrictionInfo, v57, 0LL, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WarBoardPartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_Int32_array **v23; // x20
  const MethodInfo *v24; // x1
  WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v26; // x22
  const MethodInfo *v27; // x3
  WarBoardPartyListViewItem_o *v28; // x21
  __int64 v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WarBoardPartyOrganizationMenu_o *v36; // x0
  const MethodInfo *v37; // x2
  WarBoardPartyOrganizationMenu_ResponseData_array *ResponseData; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_42E7605 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isModify, (_DWORD)method, v3);
    sub_B5D5C4(&WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnfinishedCloseServantDetail__, v18, v19, v20);
    byte_42E7605 = 1;
  }
  if ( isModify )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_14;
    MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.selectMemberIndex, method);
    if ( MemberItem )
    {
      v23 = (System_Int32_array **)MemberItem;
      PartyOrganizationListViewItem__Modify(MemberItem, 0LL);
      WarBoardPartyOrganizationMenu__CheckMemberRestrictionAndRemoveIfNeeded(this, v24);
      partyListViewManager = this->fields.partyListViewManager;
      v26 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B5D694(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
        v26,
        (Il2CppObject *)this,
        Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
        0LL);
      if ( !partyListViewManager
        || (WarBoardPartyOrganizationListViewManager__SetMode(partyListViewManager, 1, v26, v27),
            (partyItem = (WarBoardPartyListViewItem_o *)sub_B5D5DC(PartyOrganizationListViewItem___TypeInfo, 1LL)) == 0LL) )
      {
LABEL_14:
        sub_B5D69C(partyItem, isModify);
      }
      v28 = partyItem;
      v29 = sub_B5D684(v23, partyItem->klass->_1.element_class);
      if ( !v29 )
      {
        v41 = sub_B5D6BC();
        sub_B5D668(v41, 0LL);
      }
      if ( !v28->fields.sortIndex )
      {
        v42 = sub_B5D6C8(v29);
        sub_B5D668(v42, 0LL);
      }
      v28->fields.sortValue0 = (int64_t)v23;
      sub_B5D560((BattleServantConfConponent_o *)&v28->fields.sortValue0, v23, v30, v31, v32, v33, v34, v35);
      ResponseData = WarBoardPartyOrganizationMenu__CreateResponseData(
                       v36,
                       (PartyOrganizationListViewItem_array *)v28,
                       v37);
      if ( this->fields.onFinishedEditMember )
        WarBoardPartyOrganizationMenu_OnFinishedEditMember__Invoke(this->fields.onFinishedEditMember, ResponseData, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct WarBoardPartyOrganizationListViewManager_o *partyListViewManager; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x22
  __int64 v35; // x22
  __int64 v36; // x8
  WarBoardData_o *v37; // x22
  WarBoardPieceData_array *EditableServantPieces; // x23
  int32_t FormationLimitCost; // w22
  WarBoardPartyListViewItem_o *v40; // x24
  const MethodInfo *v41; // x4
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WarBoardPartyOrganizationListViewManager_o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **partyItem; // x22
  UnityEngine_GameObject_o *v56; // x21
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v57; // x22
  const MethodInfo *v58; // x3
  WarBoardPartyOrganizationListViewManager_o *v59; // x20
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *v60; // x21
  const MethodInfo *v61; // x3
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42E7600 & 1) == 0 )
  {
    sub_B5D5C4(
      &WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo,
      (_DWORD)focusPiece,
      (_DWORD)onFinishedEditMember,
      method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v7, v8, v9);
    sub_B5D5C4(&WarBoardPartyListViewItem___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&WarBoardPartyListViewItem_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__, v16, v17, v18);
    byte_42E7600 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onFinishedEditMember = onFinishedEditMember;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onFinishedEditMember,
    (System_Int32_array **)onFinishedEditMember,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( this->fields.partyItem )
    goto LABEL_18;
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_20;
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.partyListViewManager, 0LL);
  partyListViewManager->fields.onTapMember = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&partyListViewManager->fields.onTapMember,
    0LL,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                        + 3));
  v35 = **(_QWORD **)(v34 + 192);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    gameObject = (UnityEngine_GameObject_o *)sub_AF52C4(v35);
  v36 = **(_QWORD **)(v35 + 184);
  if ( !v36 )
    goto LABEL_20;
  v37 = *(WarBoardData_o **)(v36 + 432);
  if ( !v37 )
    goto LABEL_20;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(*(WarBoardData_o **)(v36 + 432), 0LL);
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v37, 0LL);
  v40 = (WarBoardPartyListViewItem_o *)sub_B5D694(WarBoardPartyListViewItem_TypeInfo);
  WarBoardPartyListViewItem___ctor(v40, EditableServantPieces, focusPiece, FormationLimitCost, v41);
  this->fields.partyItem = v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = this->fields.partyListViewManager;
  gameObject = (UnityEngine_GameObject_o *)sub_B5D5DC(WarBoardPartyListViewItem___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_20;
  partyItem = (System_Int32_array **)this->fields.partyItem;
  v56 = gameObject;
  if ( partyItem )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B5D684(this->fields.partyItem, gameObject->klass->_1.element_class);
    if ( !gameObject )
    {
      v63 = sub_B5D6BC();
      sub_B5D668(v63, 0LL);
    }
  }
  if ( !LODWORD(v56[1].klass) )
  {
    v62 = sub_B5D6C8(gameObject);
    sub_B5D668(v62, 0LL);
  }
  v56[1].monitor = partyItem;
  sub_B5D560((BattleServantConfConponent_o *)&v56[1].monitor, partyItem, v49, v50, v51, v52, v53, v54);
  v57 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B5D694(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v57,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v48 )
LABEL_20:
    sub_B5D69C(gameObject, v20);
  WarBoardPartyOrganizationListViewManager__CreateList(v48, (WarBoardPartyListViewItem_array *)v56, v57, v58);
LABEL_18:
  v59 = this->fields.partyListViewManager;
  v60 = (WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *)sub_B5D694(WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_TypeInfo);
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent___ctor(
    v60,
    (Il2CppObject *)this,
    Method_WarBoardPartyOrganizationMenu_OnTapPartyMember__,
    0LL);
  if ( !v59 )
    goto LABEL_20;
  WarBoardPartyOrganizationListViewManager__SetMode(v59, 2, v60, v61);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall WarBoardPartyOrganizationMenu__SetEventId(
        WarBoardPartyOrganizationMenu_o *this,
        WarBoardDataEntity_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  int32_t EventId; // w0
  int32_t v21; // w21
  EventDetailEntity_o *Entity; // x0
  int32_t questPhase; // w20
  int32_t questId; // w22
  EventUpValSetupInfo_o *v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E75FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E75FF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !data || !Instance )
    goto LABEL_13;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, data->fields.questId, 0LL);
  if ( EventId < 1 )
    return;
  v21 = EventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v19);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v21,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
    {
      questId = data->fields.questId;
      questPhase = data->fields.questPhase;
      v25 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor(v25, questId, questPhase, v21, 0LL);
      this->fields.eventUpValSetupInfo = v25;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnFinishedEditMember__EndInvoke(
        WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  Il2CppClass *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  Il2CppMethodPointer methodPtr; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 p_method; // x0
  void (__fastcall **v26)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD); // x0
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  Il2CppClass *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  WarBoardPartyOrganizationMenu_OnFinishedEditMember_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, data, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = data->obj.klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&data->obj.klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&data->obj.klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  p_method = (__int64)&klass->vtable[*p_offset + (int)v48].method;
                }
                else
                {
LABEL_57:
                  p_method = sub_AF54C0(data, v47, v48, v45);
                }
                methodPtr = *(Il2CppMethodPointer *)(p_method + 8);
              }
              else
              {
                methodPtr = data->obj.klass->vtable[*(unsigned __int16 *)(v30 + 72) + 1].methodPtr;
              }
              v26 = (void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B5D674(methodPtr, v30);
              (*v26)(data, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)&v12->vtable[*v14 + v9].method;
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(data, class_0, v9, v11);
                }
                (*(void (__fastcall **)(WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v15)(
                  data,
                  *(_QWORD *)(v15 + 8));
              }
              else
              {
                ((void (__fastcall *)(WarBoardPartyOrganizationMenu_ResponseData_array *, Il2CppMethodPointer))data->obj.klass->vtable[*(unsigned __int16 *)(v30 + 72)].method)(
                  data,
                  data->obj.klass->vtable[*(unsigned __int16 *)(v30 + 72) + 1].methodPtr);
              }
            }
            continue;
          }
LABEL_58:
          v32(data, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, data, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))v23)(
                v31,
                data,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, _QWORD))(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 312))(
                v31,
                data,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, WarBoardPartyOrganizationMenu_ResponseData_array *, __int64))v32)(v31, data, v30);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  char v13[4]; // [xsp+28h] [xbp-28h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v14[0] = isSvtEquip;
  v13[0] = isLongTap;
  if ( (byte_42E5FAD & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)memberItem, isSvtEquip, isLongTap);
    byte_42E5FAD = 1;
  }
  v12[3] = 0LL;
  v12[0] = (__int64)memberItem;
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  return (System_IAsyncResult_o *)sub_B5D568(this, v12, callback, object);
}


void __fastcall WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__EndInvoke(
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v33->fields.extra_arg, memberItem, isSvtEquip);
      v37 = sub_B5D5F4(v34);
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
            v47 = sub_B5D5EC(v34);
            v48 = sub_B5D9F0(v34);
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
                  v29 = sub_AF54C0(memberItem, v51, v52, v49);
                }
                v20 = *(_QWORD *)(v29 + 8);
              }
              else
              {
                v20 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v34 + 72));
              }
              v30 = (void (__fastcall **)(PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B5D674(v20, v34);
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
                  v19 = sub_AF54C0(memberItem, class_0, v13, v15);
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
          v39 = sub_B5D5EC(v34);
          v40 = sub_B5D9F0(v34);
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
                v31 = sub_AF54C0(v35, v43, v44, v41);
              }
              v28 = *(_QWORD *)(v31 + 8);
            }
            else
            {
              v28 = *(_QWORD *)(*v35 + 16LL * *(unsigned __int16 *)(v34 + 72) + 320);
            }
            v32 = (void (__fastcall **)(__int64 *, PartyOrganizationListViewItem_o *, bool, bool, _QWORD))sub_B5D674(v28, v34);
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
                v27 = sub_AF54C0(v35, v22, v21, v23);
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
    sub_B5D69C(this, x);
  index = x->fields.index;
  return index == _4__this->fields.selectMemberIndex || index == this->fields.weareMember;
}