void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7359 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7359 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Awake(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WaveBattlePartyOrganizationMenu__Callback(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, result, 1, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PartyOrganizationUtility_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_42E7357 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    byte_42E7357 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29295864(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v11 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v11 )
        sub_B5D69C(0LL, v12);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(v11, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__Close(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_22697824(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_22697824(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_42E734D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v6, v7, v8);
    byte_42E734D = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B5D69C(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__EndClose(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__EndOpen(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.state = 2;
  WaveBattlePartyOrganizationMenu__OpenTutorial(this, method);
  if ( this->fields.isHintDialogOpenFlag )
  {
    this->fields.isHintDialogOpenFlag = 0;
    WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v3);
  }
}


UserEventDeckEntity_o *__fastcall WaveBattlePartyOrganizationMenu__GetUserEventDeck(
        WaveBattlePartyOrganizationMenu_o *this,
        PartyListViewItem_array *deckItemList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyListViewItem_array *v4; // x20
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  __int64 UserId; // x0
  __int64 v28; // x1
  PartyListViewItem_o *v29; // x8
  PartyListViewItem_o *v30; // x8
  int64_t userEquipId; // x21
  int32_t v32; // w22
  DeckServant_o *v33; // x23
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int max_length; // w8
  int v42; // w10
  unsigned int v43; // w11
  __int64 v44; // x8
  __int64 v45; // x19
  __int64 v46; // x8
  PartyListViewItem_o *v47; // x23
  unsigned __int64 v48; // x22
  int v49; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v51; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v53; // q0
  __int128 v54; // q1
  struct UserServantEntity_o *v55; // x8
  __int64 v56; // x26
  __int64 v57; // x27
  int32_t v58; // w0
  System_Int32_array **EquipList; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v75; // x8
  __int64 v76; // x8
  __int64 v77; // x8
  _DWORD *v78; // x25
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  _DWORD *v85; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  UserEventDeckEntity_o *v89; // [xsp+0h] [xbp-D0h]
  PartyListViewItem_array *v90; // [xsp+8h] [xbp-C8h]
  int v91; // [xsp+10h] [xbp-C0h]
  int v92; // [xsp+1Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94[2]; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  v4 = deckItemList;
  if ( (byte_42E734F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)deckItemList, (_DWORD)method, v3);
    sub_B5D5C4(&DeckServantData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&DeckServant_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserEventDeckEntity_TypeInfo, v23, v24, v25);
    byte_42E734F = 1;
  }
  memset(&v94[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v26 = sub_B5D694(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v26, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v26 )
    goto LABEL_65;
  *(_QWORD *)(v26 + 16) = UserId;
  if ( !v4 )
    goto LABEL_65;
  if ( !v4->max_length )
    goto LABEL_66;
  v29 = v4->m_Items[0];
  if ( !v29 )
    goto LABEL_65;
  *(_DWORD *)(v26 + 24) = v29->fields.id;
  if ( !v4->max_length )
    goto LABEL_66;
  UserId = (__int64)v4->m_Items[0];
  if ( !UserId )
    goto LABEL_65;
  *(_DWORD *)(v26 + 28) = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)UserId, 0LL);
  UserId = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !v4->max_length )
    goto LABEL_66;
  v30 = v4->m_Items[0];
  v89 = (UserEventDeckEntity_o *)v26;
  if ( !v30 )
LABEL_65:
    sub_B5D69C(UserId, v28);
  userEquipId = v30->fields.userEquipId;
  v32 = *(_DWORD *)(*(_QWORD *)(UserId + 184) + 160LL);
  v33 = (DeckServant_o *)sub_B5D694(DeckServant_TypeInfo);
  DeckServant___ctor_16952852(v33, v4->max_length, v32, userEquipId, 0LL);
  *(_QWORD *)(v26 + 32) = v33;
  v34 = v26 + 32;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 32), (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0;
    v43 = 0;
    v90 = v4;
    while ( v43 < max_length )
    {
      if ( !*(_QWORD *)v34 )
        goto LABEL_65;
      v44 = *(_QWORD *)(*(_QWORD *)v34 + 32LL);
      if ( !v44 )
        goto LABEL_65;
      v45 = (int)v43;
      if ( v43 >= *(_DWORD *)(v44 + 24) )
        break;
      v46 = *(_QWORD *)(v44 + 8LL * (int)v43 + 32);
      if ( !v46 )
        goto LABEL_65;
      v47 = v4->m_Items[v43];
      v48 = 0LL;
      v91 = v43 + 1;
      *(_DWORD *)(v46 + 16) = v43 + 1;
      v92 = v42;
      v49 = v42;
      while ( 1 )
      {
        UserId = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v48 >= *(int *)(*(_QWORD *)(UserId + 184) + 160LL) )
          break;
        if ( !v47 )
          goto LABEL_65;
        Member = PartyListViewItem__GetMember(v47, v48, 0LL);
        v51 = sub_B5D694(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v51, 0LL);
        if ( !v51 )
          goto LABEL_65;
        *(_DWORD *)(v51 + 16) = v49 + v48 + 1;
        if ( !Member )
          goto LABEL_65;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v54 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          v53 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        }
        else
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v94, 0LL, 0LL);
          v54 = *(_OWORD *)&v94[0].fields.currentCryptoKey;
          v53 = *(_OWORD *)&v94[0].fields.fakeValue;
        }
        *(_OWORD *)&v94[1].fields.currentCryptoKey = v54;
        *(_OWORD *)&v94[1].fields.fakeValue = v53;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v93 = v94[1];
        *(_QWORD *)(v51 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v93, 0LL);
        v55 = Member->fields.userServantEntity;
        if ( v55 )
        {
          v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
          v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v95.fields.currentCryptoKey = v57;
          *(_QWORD *)&v95.fields.fakeValue = v56;
          v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v95, 0LL);
        }
        else
        {
          v58 = 0;
        }
        *(_DWORD *)(v51 + 32) = v58;
        EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v51 + 40) = EquipList;
        sub_B5D560((BattleServantConfConponent_o *)(v51 + 40), EquipList, v60, v61, v62, v63, v64, v65);
        v66 = sub_B5D5DC(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL);
        if ( !v66 )
          goto LABEL_65;
        if ( !*(_DWORD *)(v66 + 24) )
          goto LABEL_66;
        *(_DWORD *)(v66 + 32) = UserId;
        *(_QWORD *)(v51 + 48) = v66;
        sub_B5D560((BattleServantConfConponent_o *)(v51 + 48), (System_Int32_array **)v66, v68, v69, v70, v71, v72, v73);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v51 + 64) = 0LL;
        *(_BYTE *)(v51 + 56) = 0;
        *(_DWORD *)(v51 + 76) = InitPos_k__BackingField;
        if ( !*(_QWORD *)v34 )
          goto LABEL_65;
        v75 = *(_QWORD *)(*(_QWORD *)v34 + 32LL);
        if ( !v75 )
          goto LABEL_65;
        if ( (unsigned int)v45 >= *(_DWORD *)(v75 + 24) )
          goto LABEL_66;
        v76 = *(_QWORD *)(v75 + 8 * v45 + 32);
        if ( !v76 )
          goto LABEL_65;
        v77 = *(_QWORD *)(v76 + 24);
        if ( !v77 )
          goto LABEL_65;
        if ( v48 >= *(unsigned int *)(v77 + 24) )
          goto LABEL_66;
        *(_DWORD *)(v77 + 4 * v48 + 32) = *(_DWORD *)(v51 + 16);
        if ( !*(_QWORD *)v34 )
          goto LABEL_65;
        v78 = *(_DWORD **)(*(_QWORD *)v34 + 16LL);
        if ( !v78 )
          goto LABEL_65;
        UserId = sub_B5D684(v51, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
        if ( !UserId )
        {
          v88 = sub_B5D6BC();
          sub_B5D668(v88, 0LL);
        }
        if ( (unsigned int)(v49 + v48) >= v78[6] )
          goto LABEL_66;
        v85 = &v78[2 * v49 + 2 * (int)v48];
        *((_QWORD *)v85 + 4) = v51;
        sub_B5D560((BattleServantConfConponent_o *)(v85 + 8), (System_Int32_array **)v51, v79, v80, v81, v82, v83, v84);
        ++v48;
      }
      v4 = v90;
      v43 = v91;
      max_length = v90->max_length;
      v42 = v92 + v48;
      if ( v91 >= max_length )
        return v89;
    }
LABEL_66:
    v87 = sub_B5D6C8(UserId);
    sub_B5D668(v87, 0LL);
  }
  return v89;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__HideFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseButton; // x0

  friendshipUpItemUseButton = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton
    || (friendshipUpItemUseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                 friendshipUpItemUseButton,
                                                                 0LL)) == 0LL )
  {
    sub_B5D69C(friendshipUpItemUseButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Init(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsDisplay(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattlePartyOrganizationMenu_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42E734B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, (_DWORD)isEvery, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6, v7, v8);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    byte_42E734B = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_21;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_21;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( this )
    {
      if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v18, questId, questPhase, 0LL) )
        return 0;
      this = (WaveBattlePartyOrganizationMenu_o *)v18;
      if ( v18 )
      {
        *isEvery = QuestPhaseEntity__getHintOpenType(v18, 0LL) == 0;
        this = (WaveBattlePartyOrganizationMenu_o *)v18;
        if ( v18 )
        {
          HintMessage = QuestPhaseEntity__getHintMessage(v18, 0LL);
          return !System_String__IsNullOrEmpty(HintMessage, 0LL);
        }
      }
    }
LABEL_21:
    sub_B5D69C(this, isEvery);
  }
  if ( !entity )
    goto LABEL_21;
  *isEvery = entity->fields.openType == 0;
  return 1;
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickApplyInterruptionDeckButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 6, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoOrganization(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E7351 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, (_DWORD)method, v2, v3);
    byte_42E7351 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 2, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoSell(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E7354 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, (_DWORD)method, v2, v3);
    byte_42E7354 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 5, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickBattleStart(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 7, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickClassInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E7353 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, (_DWORD)method, v2, v3);
    byte_42E7353 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 4, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PartyOrganizationUtility_c *v8; // x0
  int32_t Int; // w20
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  PartyOrganizationUtility_c *v12; // x0
  __int64 v13; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v15; // w1
  PartyOrganizationUtility_c *v16; // x0

  if ( (byte_42E7358 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__, v5, v6, v7);
    byte_42E7358 = 1;
  }
  v8 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v8 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v10 = Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__ + 75) & 2) != 0 )
    v10 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v10, v10[3]);
  if ( !Int )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    v16 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v16 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v16->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v15 = 1;
      goto LABEL_19;
    }
LABEL_20:
    sub_B5D69C(friendshipUpItemUseButton, v13);
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
  v12 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v12 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_20;
  v15 = 0;
LABEL_19:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v15, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E7355 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, (_DWORD)method, v2, v3);
    byte_42E7355 = 1;
  }
  v5 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v7);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E7350 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, (_DWORD)method, v2, v3);
    byte_42E7350 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 1, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickPartyEdit(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E7352 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, (_DWORD)method, v2, v3);
    byte_42E7352 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 3, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnSelectWavePartyList(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, result, wave, idx, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu__Open(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *callback,
        int32_t restartWave,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  WaveBattleWaveInfoListManager_CallbackFunc_o *v61; // x26
  DataManager_o *Instance; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x6
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v67; // x2
  char v68; // w21
  int32_t questId; // w22
  int32_t v70; // w22
  int v71; // w2
  __int64 v72; // x3
  int32_t v73; // w20
  QuestHintDialogOpenManager_c *v74; // x0
  char v75; // w20
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  System_Action_o *v78; // x20
  QuestHintDialogOpenManager_c *v79; // x0
  System_String_o *detail; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-60h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-58h] BYREF
  int32_t genderImageId; // [xsp+20h] [xbp-50h] BYREF
  bool isEvery; // [xsp+24h] [xbp-4Ch] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E734A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)deckEntity, (_DWORD)questRestrictionInfo, *(_QWORD *)&waveCount);
    sub_B5D5C4(&AtlasManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v23, v24, v25);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v38, v39, v40);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_17358/*"buttontxt_formation_21"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_17353/*"buttontxt_battlerestart"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_17357/*"buttontxt_formation_20"*/, v50, v51, v52);
    byte_42E734A = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
      (System_Int32_array **)questRestrictionInfo,
      (System_String_array **)questRestrictionInfo,
      *(System_String_array ***)&waveCount,
      (System_Boolean_array **)callback,
      *(System_Int32_array ***)&restartWave,
      (System_Int32_array *)method,
      v7);
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    waveInfoListManager = this->fields.waveInfoListManager;
    v61 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_B5D694(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v61,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      0LL);
    if ( !waveInfoListManager )
      goto LABEL_84;
    WaveBattleWaveInfoListManager__CreateList(
      waveInfoListManager,
      deckEntity,
      questRestrictionInfo,
      waveCount,
      v61,
      restartWave,
      v64);
    this->fields.isInterruption = restartWave > 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_84;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !deckEntity )
      goto LABEL_84;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo || !Instance )
      goto LABEL_84;
    if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           &entity,
           deckInfo->fields.userEquipId,
           (const MethodInfo_23FB094 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_84;
      UserEquipEntity__getEquipInfo(
        (UserEquipEntity_o *)entity,
        (int32_t *)&maxLv + 1,
        (int32_t *)&maxLv,
        &equipName,
        &detail,
        &genderImageId,
        0LL);
      Instance = (DataManager_o *)this->fields.masterEquipIcon;
      if ( !Instance )
        goto LABEL_84;
      ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
      Instance = (DataManager_o *)this->fields.masterEquipButton;
      if ( !Instance )
        goto LABEL_84;
      UICommonButton__SetEnable((UICommonButton_o *)Instance, !this->fields.isInterruption, 0LL);
    }
    classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSpriteOrganization, (System_String_o *)StringLiteral_17357/*"buttontxt_formation_20"*/, 0LL);
    Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v67);
    if ( !this->fields.hintDialogButton )
      goto LABEL_84;
    v68 = (char)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                  0LL);
    if ( !Instance )
      goto LABEL_84;
    if ( (v68 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      if ( !*p_questRestrictionInfo )
        goto LABEL_84;
      questId = (*p_questRestrictionInfo)->fields.questId;
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      }
      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsSettingTemporarilyId(questId, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !*p_questRestrictionInfo )
          goto LABEL_84;
        v70 = (*p_questRestrictionInfo)->fields.questId;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        }
        Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v70, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !*p_questRestrictionInfo )
            goto LABEL_84;
          v73 = (*p_questRestrictionInfo)->fields.questId;
          if ( isEvery )
          {
            if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            }
            if ( !byte_42E63F8 )
            {
              sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v63, v71, v72);
              byte_42E63F8 = 1;
            }
            v74 = QuestHintDialogOpenManager_TypeInfo;
            if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
              v74 = QuestHintDialogOpenManager_TypeInfo;
            }
            v74->static_fields->temporarilyId = v73;
          }
          else
          {
            if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            }
            if ( !byte_42E63F8 )
            {
              sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v63, v71, v72);
              byte_42E63F8 = 1;
            }
            v79 = QuestHintDialogOpenManager_TypeInfo;
            if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
              v79 = QuestHintDialogOpenManager_TypeInfo;
            }
            v79->static_fields->temporarilyId = v73;
            if ( !byte_42E5920 )
            {
              sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v63, v71, v72);
              v79 = QuestHintDialogOpenManager_TypeInfo;
              byte_42E5920 = 1;
            }
            if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v79);
              v79 = QuestHintDialogOpenManager_TypeInfo;
            }
            QuestHintDialogOpenManager__SetQuestId(v79->static_fields->temporarilyId, 0LL);
            QuestHintDialogOpenManager__WriteData(0LL);
          }
          this->fields.isHintDialogOpenFlag = 1;
        }
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                        (PartyOrganizationUtility_o *)Instance,
                                        0LL),
          !this->fields.friendshipUpItemUseButton)
      || (v75 = (char)Instance,
          (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                         0LL)) == 0LL) )
    {
LABEL_84:
      sub_B5D69C(Instance, v63);
    }
    if ( (v75 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (DataManager_o *)this->fields.friendshipUpItemUseButton;
      if ( !Instance )
        goto LABEL_84;
      FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
      if ( !this->fields.isInterruption )
      {
        isInterruption = 0;
        goto LABEL_54;
      }
      Instance = (DataManager_o *)this->fields.friendshipUpItemUseButton;
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_84;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    isInterruption = this->fields.isInterruption;
LABEL_54:
    Instance = (DataManager_o *)this->fields.applyInterruptionDeckButton;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        if ( !isInterruption )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          goto LABEL_66;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(
          applyInterruptionDeckSprite,
          (System_String_o *)StringLiteral_17358/*"buttontxt_formation_21"*/,
          0LL);
        Instance = (DataManager_o *)this->fields.applyInterruptionDeckSprite;
        if ( Instance )
        {
          ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
            Instance,
            Instance->klass[2]._1.interopData);
          AtlasManager__SetPartyOrganizationImage(
            this->fields.battleStartSprite,
            (System_String_o *)StringLiteral_17353/*"buttontxt_battlerestart"*/,
            0LL);
          Instance = (DataManager_o *)this->fields.battleStartSprite;
          if ( Instance )
          {
            Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
            if ( Instance )
            {
              v86.fields.y = -2.0;
              v86.fields.x = 0.0;
              v86.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v86, 0LL);
              Instance = (DataManager_o *)this->fields.battleStartSprite;
              if ( Instance )
              {
                ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                  Instance,
                  Instance->klass[2]._1.interopData);
LABEL_66:
                this->fields.state = 1;
                v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v78, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v78, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_84;
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Action_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct QuestRestrictionInfo_o *v12; // x8

  if ( (byte_42E7356 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__, v5, v6, v7);
    byte_42E7356 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo
    && EventTutorialMaster__IsTutorialDataExists(
         0,
         45,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0,
         0,
         0,
         0LL) )
  {
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v12 = this->fields.questRestrictionInfo;
    if ( !v12 )
      sub_B5D69C(v10, v11);
    EventTutorialMaster__CheckTutorial(0, 45, v9, v12->fields.questId, v12->fields.questPhase, 0, 0, 0LL);
  }
  else
  {
    WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(this, method);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B5D69C(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


void __fastcall WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WaveBattlePartyOrganizationMenu_o *v4; // x19
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v23; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E734C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E734C = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_25;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_25;
    title = entity->fields.title;
    message = entity->fields.message;
    leftIndent = entity->fields.leftIndent;
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v23, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v23;
      if ( !v23 )
        goto LABEL_25;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v23, 0LL);
      if ( !v23 )
        goto LABEL_25;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v23, 0LL);
      if ( !v23 )
        goto LABEL_25;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v23, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_25:
    sub_B5D69C(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)this, title, message, leftIndent, 0LL, 0, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
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
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v24; // x3
  bool *p_isInterruption; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t InterruptionUseFriendshipUpItemId; // w20
  PartyOrganizationUtility_c *v28; // x0
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  int32_t maxLv; // [xsp+1Ch] [xbp-34h] BYREF
  int32_t genderImageId[2]; // [xsp+20h] [xbp-30h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42E734E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, (_DWORD)deckEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v18, v19, v20);
    byte_42E734E = 1;
  }
  *(_QWORD *)genderImageId = 0LL;
  entity = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_35;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_35;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_23FB094 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_35;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &detail,
      &genderImageId[1],
      0LL);
    Instance = (DataManager_o *)this->fields.masterEquipIcon;
    if ( !Instance )
      goto LABEL_35;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
    Instance = (DataManager_o *)this->fields.masterEquipButton;
    if ( !Instance )
      goto LABEL_35;
    p_isInterruption = &this->fields.isInterruption;
    UICommonButton__SetEnable((UICommonButton_o *)Instance, !this->fields.isInterruption, 0LL);
  }
  else
  {
    p_isInterruption = &this->fields.isInterruption;
  }
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_35;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    *p_isInterruption,
    v24);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
LABEL_35:
    sub_B5D69C(Instance, v22);
  if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    if ( *p_isInterruption )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
      {
        if ( Instance )
        {
          InterruptionUseFriendshipUpItemId = PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
                                                (PartyOrganizationUtility_o *)Instance,
                                                questRestrictionInfo->fields.questId,
                                                questRestrictionInfo->fields.questPhase,
                                                0LL);
          Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)PartyOrganizationUtility__IsEnableFriendshipUpItem(
                                          (PartyOrganizationUtility_o *)Instance,
                                          InterruptionUseFriendshipUpItemId,
                                          0LL);
            if ( this->fields.friendshipUpItemUseButton )
            {
              FriendshipUpItemUseItem__ChangeButtonState(
                this->fields.friendshipUpItemUseButton,
                (unsigned __int8)Instance & 1,
                0LL);
              Instance = (DataManager_o *)this->fields.friendshipUpItemUseButton;
              if ( Instance )
              {
                FriendshipUpItemUseItem__SetButtonEnabled((FriendshipUpItemUseItem_o *)Instance, 0, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_35;
    }
    v28 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v28 = PartyOrganizationUtility_TypeInfo;
    }
    Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                  v28->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                  0,
                                  0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_35;
    FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, (_DWORD)Instance != 0, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__add_callbackFunc(
        WaveBattlePartyOrganizationMenu_o *this,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattlePartyOrganizationMenu_o *v12; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7348 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7348 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v9->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattlePartyOrganizationMenu_o *)sub_B5D990(v9);
  WaveBattlePartyOrganizationMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall WaveBattlePartyOrganizationMenu__remove_callbackFunc(
        WaveBattlePartyOrganizationMenu_o *this,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattlePartyOrganizationMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E7349 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7349 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v9->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattlePartyOrganizationMenu_o *)sub_B5D990(v9);
  WaveBattlePartyOrganizationMenu__Awake(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v15 = m;
  v16 = n;
  if ( (byte_42E5FF7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, *(_QWORD *)&m);
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11, v12);
    byte_42E5FF7 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  WaveBattlePartyOrganizationMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (WaveBattlePartyOrganizationMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)n, (unsigned int)m, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)n, (unsigned int)m, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)n, (unsigned int)m, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)n,
      (unsigned int)m,
      v25);
    goto LABEL_38;
  }
}