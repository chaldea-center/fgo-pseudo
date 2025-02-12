void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB0739 & 1) == 0 )
  {
    sub_1C13D24(&BaseMenu_TypeInfo, method);
    byte_4BB0739 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
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
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      1LL,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo_k__BackingField; // x19
  WaveBattlePartyOrganizationMenu___c_c *v16; // x0
  System_Func_object__int__o *_9__48_0; // x20
  Il2CppObject *v18; // x21
  struct WaveBattlePartyOrganizationMenu___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  WaveBattlePartyOrganizationMenu___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_object__object__o *_9__48_1; // x20
  Il2CppObject *v30; // x21
  struct WaveBattlePartyOrganizationMenu___c_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Object_array *v39; // x20
  ActionChain_o *v40; // x19

  if ( (byte_4BB0736 & 1) == 0 )
  {
    sub_1C13D24(&ActionChain_TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__Action_Action____, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_Action_Action____, v5);
    sub_1C13D24(&System_Func_FriendshipUpItemInfo__Action_Action___TypeInfo, v6);
    sub_1C13D24(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v7);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1C13D24(&TutorialFlag_TypeInfo, v9);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu___c__CheckFriendshipUpItemTutorial_b__48_0__, v10);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu___c__CheckFriendshipUpItemTutorial_b__48_1__, v11);
    sub_1C13D24(&WaveBattlePartyOrganizationMenu___c_TypeInfo, v12);
    byte_4BB0736 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38831432(102, 0LL) )
    {
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL) )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          CachedFriendshipUpItemInfo_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields._CachedFriendshipUpItemInfo_k__BackingField;
          v16 = WaveBattlePartyOrganizationMenu___c_TypeInfo;
          if ( !WaveBattlePartyOrganizationMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationMenu___c_TypeInfo);
            v16 = WaveBattlePartyOrganizationMenu___c_TypeInfo;
          }
          _9__48_0 = (System_Func_object__int__o *)v16->static_fields->__9__48_0;
          if ( !_9__48_0 )
          {
            if ( !v16->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v16);
              v16 = WaveBattlePartyOrganizationMenu___c_TypeInfo;
            }
            v18 = (Il2CppObject *)v16->static_fields->__9;
            _9__48_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_FriendshipUpItemInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__48_0,
              v18,
              Method_WaveBattlePartyOrganizationMenu___c__CheckFriendshipUpItemTutorial_b__48_0__,
              0LL);
            static_fields = WaveBattlePartyOrganizationMenu___c_TypeInfo->static_fields;
            static_fields->__9__48_0 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__48_0;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&static_fields->__9__48_0,
              (int64_t)_9__48_0,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
          }
          v26 = System_Linq_Enumerable__OrderBy_object__int_(
                  CachedFriendshipUpItemInfo_k__BackingField,
                  (System_Func_TSource__TKey__o *)_9__48_0,
                  (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___);
          v27 = WaveBattlePartyOrganizationMenu___c_TypeInfo;
          v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
          if ( !WaveBattlePartyOrganizationMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationMenu___c_TypeInfo);
            v27 = WaveBattlePartyOrganizationMenu___c_TypeInfo;
          }
          _9__48_1 = (System_Func_object__object__o *)v27->static_fields->__9__48_1;
          if ( !_9__48_1 )
          {
            if ( !v27->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v27);
              v27 = WaveBattlePartyOrganizationMenu___c_TypeInfo;
            }
            v30 = (Il2CppObject *)v27->static_fields->__9;
            _9__48_1 = (System_Func_object__object__o *)sub_1C13F70(System_Func_FriendshipUpItemInfo__Action_Action___TypeInfo);
            System_Func_object__object____ctor(
              _9__48_1,
              v30,
              Method_WaveBattlePartyOrganizationMenu___c__CheckFriendshipUpItemTutorial_b__48_1__,
              0LL);
            v31 = WaveBattlePartyOrganizationMenu___c_TypeInfo->static_fields;
            v31->__9__48_1 = (struct System_Func_FriendshipUpItemInfo__Action_Action___o *)_9__48_1;
            sub_1C13CC8((PartyOrganizationUtility_o *)&v31->__9__48_1, (int64_t)_9__48_1, v32, v33, v34, v35, v36, v37);
          }
          v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v28,
                                                                       (System_Func_TSource__TResult__o *)_9__48_1,
                                                                       (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__Action_Action____);
          v39 = System_Linq_Enumerable__ToArray_object_(
                  v38,
                  (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_Action_Action____);
          v40 = (ActionChain_o *)sub_1C13F70(ActionChain_TypeInfo);
          ActionChain___ctor_47597396(v40, (System_Action_Action__array *)v39, 0LL);
          if ( v40 )
          {
            ChainableActionBase__Execute((ChainableActionBase_o *)v40, 0LL);
            return;
          }
        }
LABEL_25:
        sub_1C13F80(Instance, v14);
      }
    }
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__Close(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_33397616(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_33397616(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Action_o *v13; // x20

  if ( (byte_4BB072C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v5);
    byte_4BB072C = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C13F80(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__EndClose(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C13CC8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserEventDeckEntity_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x0
  PartyListViewItem_o *v14; // x8
  int64_t userEquipId; // x21
  int32_t v16; // w22
  DeckServant_o *v17; // x0
  il2cpp_array_size_t max_length; // w1
  int64_t v19; // x23
  PartyListViewItem_array *v20; // x20
  struct DeckServant_o **p_deckInfo; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w8
  int v29; // w10
  signed int v30; // w11
  struct DeckWaveServantData_array *waveSvts; // x8
  __int64 v32; // x29
  DeckWaveServantData_o *v33; // x8
  PartyListViewItem_o *v34; // x23
  unsigned __int64 v35; // x22
  int v36; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  int64_t v38; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v40; // q0
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x26
  __int64 v43; // x27
  int32_t v44; // w0
  System_Int64_array *EquipList; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int32_t InitPos_k__BackingField; // w8
  struct DeckServant_o *v61; // x8
  struct DeckWaveServantData_array *v62; // x9
  DeckWaveServantData_o *v63; // x9
  struct System_Int32_array *uniqueIds; // x9
  struct DeckServantData_array *svts; // x25
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppClass **v72; // x0
  __int64 v74; // x0
  UserEventDeckEntity_o *v75; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v76; // [xsp+8h] [xbp-D8h]
  int v77; // [xsp+10h] [xbp-D0h]
  int v78; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4BB072E & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, deckItemList);
    sub_1C13D24(&DeckServantData_TypeInfo, v4);
    sub_1C13D24(&DeckServant_TypeInfo, v5);
    sub_1C13D24(&int___TypeInfo, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C13D24(&UserEventDeckEntity_TypeInfo, v10);
    byte_4BB072E = 1;
  }
  memset(&v80[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = (UserEventDeckEntity_o *)sub_1C13F70(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v11, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v12);
    byte_4BAF1E5 = 1;
  }
  v13 = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_59;
  v11->fields.userId = *(_QWORD *)(*(_QWORD *)(v13 + 184) + 64LL);
  if ( !deckItemList )
    goto LABEL_59;
  if ( !deckItemList->max_length )
    goto LABEL_60;
  v13 = (__int64)deckItemList->m_Items[0];
  if ( !v13 )
    goto LABEL_59;
  v11->fields.eventId = *(_QWORD *)(v13 + 128);
  v11->fields.deckNo = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)v13, 0LL);
  v13 = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_60;
  v14 = deckItemList->m_Items[0];
  v75 = v11;
  if ( !v14 )
LABEL_59:
    sub_1C13F80(v13, v12);
  userEquipId = v14->fields.userEquipId;
  v16 = *(_DWORD *)(*(_QWORD *)(v13 + 184) + 160LL);
  v17 = (DeckServant_o *)sub_1C13F70(DeckServant_TypeInfo);
  max_length = deckItemList->max_length;
  v76 = deckItemList;
  v19 = (int64_t)v17;
  DeckServant___ctor_40028972(v17, max_length, v16, userEquipId, 0LL);
  v20 = v76;
  v75->fields.deckInfo = (struct DeckServant_o *)v19;
  p_deckInfo = &v75->fields.deckInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v75->fields.deckInfo, v19, v22, v23, v24, v25, v26, v27);
  v28 = v76->max_length;
  if ( v28 >= 1 )
  {
    v29 = 0;
    v30 = 0;
    while ( v30 < (unsigned int)v28 )
    {
      if ( !*p_deckInfo )
        goto LABEL_59;
      waveSvts = (*p_deckInfo)->fields.waveSvts;
      if ( !waveSvts )
        goto LABEL_59;
      v32 = v30;
      if ( v30 >= waveSvts->max_length )
        break;
      v33 = waveSvts->m_Items[v30];
      if ( !v33 )
        goto LABEL_59;
      v34 = v20->m_Items[v30];
      v35 = 0LL;
      v77 = v30 + 1;
      v33->fields.wave = v30 + 1;
      v78 = v29;
      v36 = v29;
      while ( 1 )
      {
        v13 = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v35 >= *(int *)(*(_QWORD *)(v13 + 184) + 160LL) )
          break;
        if ( !v34 )
          goto LABEL_59;
        Member = PartyListViewItem__GetMember(v34, v35, 0LL);
        v38 = sub_1C13F70(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v38, 0LL);
        if ( !v38 )
          goto LABEL_59;
        *(_DWORD *)(v38 + 16) = v36 + v35 + 1;
        if ( !Member )
          goto LABEL_59;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v40 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v80[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v80[1].fields.fakeValue = v40;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v80, 0LL, 0LL);
          v80[1] = v80[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v79 = v80[1];
        *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v79, 0LL);
        v41 = Member->fields.userServantEntity;
        if ( v41 )
        {
          v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v43;
          *(_QWORD *)&v81.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v81, 0LL);
        }
        else
        {
          v44 = 0;
        }
        *(_DWORD *)(v38 + 32) = v44;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v38 + 40) = EquipList;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v38 + 40), (int64_t)EquipList, v46, v47, v48, v49, v50, v51);
        v52 = sub_1C13DCC(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(EquipSvtId, 0LL);
        if ( !v52 )
          goto LABEL_59;
        if ( !*(_DWORD *)(v52 + 24) )
          goto LABEL_60;
        *(_DWORD *)(v52 + 32) = v13;
        *(_QWORD *)(v38 + 48) = v52;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v38 + 48), v52, v54, v55, v56, v57, v58, v59);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v38 + 64) = 0LL;
        *(_BYTE *)(v38 + 56) = 0;
        *(_DWORD *)(v38 + 76) = InitPos_k__BackingField;
        v61 = *p_deckInfo;
        if ( !*p_deckInfo )
          goto LABEL_59;
        v62 = v61->fields.waveSvts;
        if ( !v62 )
          goto LABEL_59;
        if ( (unsigned int)v32 >= v62->max_length )
          goto LABEL_60;
        v63 = v62->m_Items[v32];
        if ( !v63 )
          goto LABEL_59;
        uniqueIds = v63->fields.uniqueIds;
        if ( !uniqueIds )
          goto LABEL_59;
        if ( v35 >= uniqueIds->max_length )
          goto LABEL_60;
        uniqueIds->m_Items[v35 + 1] = *(_DWORD *)(v38 + 16);
        svts = v61->fields.svts;
        if ( !svts )
          goto LABEL_59;
        v13 = sub_1C13E60(v38, svts->obj.klass->_1.element_class);
        if ( !v13 )
        {
          v74 = sub_1C13FA4();
          sub_1C13E4C(v74, 0LL);
        }
        if ( (unsigned int)(v36 + v35) >= svts->max_length )
          goto LABEL_60;
        v72 = &svts->obj.klass + v36 + (int)v35;
        v72[4] = (Il2CppClass *)v38;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v72 + 4), v38, v66, v67, v68, v69, v70, v71);
        ++v35;
      }
      v20 = v76;
      v30 = v77;
      v28 = v76->max_length;
      v29 = v78 + v35;
      if ( v77 >= v28 )
        return v75;
    }
LABEL_60:
    sub_1C13F88(v13, v12);
  }
  return v75;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
    sub_1C13F80(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BB072A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_QuestHintMaster___, isEvery);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1C13D24(&DataManager_TypeInfo, v6);
    byte_4BB072A = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_19;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_19;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( this )
    {
      if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v13, questId, questPhase, 0LL) )
        return 0;
      this = (WaveBattlePartyOrganizationMenu_o *)v13;
      if ( v13 )
      {
        *isEvery = QuestPhaseEntity__getHintOpenType(v13, 0LL) == 0;
        this = (WaveBattlePartyOrganizationMenu_o *)v13;
        if ( v13 )
        {
          HintMessage = QuestPhaseEntity__getHintMessage(v13, 0LL);
          return !System_String__IsNullOrEmpty(HintMessage, 0LL);
        }
      }
    }
LABEL_19:
    sub_1C13F80(this, isEvery);
  }
  if ( !entity )
    goto LABEL_19;
  *isEvery = entity->fields.openType == 0;
  return 1;
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickApplyInterruptionDeckButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        6LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoOrganization(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4BB0730 & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, method);
    byte_4BB0730 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        2LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoSell(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4BB0733 & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, method);
    byte_4BB0733 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        5LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickBattleStart(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        7LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickClassInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4BB0732 & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, method);
    byte_4BB0732 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        4LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BB0737 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__49_0__, v3);
    byte_4BB0737 = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__49_0__,
    0LL);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C13F80(v6, v7);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v5, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BB0734 & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, method);
    byte_4BB0734 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v5);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4BB072F & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, method);
    byte_4BB072F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickPartyEdit(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4BB0731 & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, method);
    byte_4BB0731 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        3LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnSelectWavePartyList(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      wave,
      idx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  WaveBattleWaveInfoListManager_CallbackFunc_o *v33; // x26
  const MethodInfo *v34; // x3
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x6
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v40; // x2
  char v41; // w21
  struct QuestRestrictionInfo_o *v42; // x8
  int32_t questPhase; // w21
  int32_t questId; // w22
  struct QuestRestrictionInfo_o *v45; // x8
  int32_t v46; // w21
  int32_t v47; // w22
  struct QuestRestrictionInfo_o *v48; // x8
  _BOOL4 v49; // w24
  int32_t v50; // w21
  int32_t v51; // w22
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  System_Action_o *v54; // x20
  System_String_o *v55; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-68h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-60h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-58h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB0729 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, deckEntity);
    sub_1C13D24(&AtlasManager_TypeInfo, v14);
    sub_1C13D24(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v15);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEquipMaster___, v16);
    sub_1C13D24(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v17);
    sub_1C13D24(&QuestHintDialogOpenManager_TypeInfo, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v20);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v21);
    sub_1C13D24(&StringLiteral_17943/*"button_mission_{0}"*/, v22);
    sub_1C13D24(&StringLiteral_17937/*"button_favorite_reg"*/, v23);
    sub_1C13D24(&StringLiteral_17942/*"button_lock_unreg"*/, v24);
    byte_4BB0729 = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v55 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
      (int64_t)questRestrictionInfo,
      (int64_t)questRestrictionInfo,
      waveCount,
      (System_String_o *)callback,
      *(BattleSetupInfo_o **)&restartWave,
      (FollowerInfo_o *)method,
      v7);
    this->fields.callbackFunc = callback;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    waveInfoListManager = this->fields.waveInfoListManager;
    v33 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1C13F70(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      v34);
    if ( waveInfoListManager )
    {
      WaveBattleWaveInfoListManager__CreateList(
        waveInfoListManager,
        deckEntity,
        questRestrictionInfo,
        waveCount,
        v33,
        restartWave,
        v37);
      this->fields.restartWave = restartWave;
      this->fields.isInterruption = restartWave > 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEquipMaster___);
        if ( deckEntity )
        {
          deckInfo = deckEntity->fields.deckInfo;
          if ( deckInfo )
          {
            if ( Instance )
            {
              if ( DataMasterBase_object__object__long___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     deckInfo->fields.userEquipId,
                     (const MethodInfo_323ABCC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_51;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v55,
                  &genderImageId,
                  0LL);
                Instance = (DataManager_o *)this->fields.masterEquipIcon;
                if ( !Instance )
                  goto LABEL_51;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
                Instance = (DataManager_o *)this->fields.masterEquipButton;
                if ( this->fields.isInterruption )
                {
                  v36 = this->fields.restartWave == 1;
                  if ( !Instance )
                    goto LABEL_51;
                }
                else
                {
                  v36 = 1LL;
                  if ( !Instance )
                    goto LABEL_51;
                }
                UICommonButton__SetEnable((UICommonButton_o *)Instance, v36, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17942/*"button_lock_unreg"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v40);
              if ( this->fields.hintDialogButton )
              {
                v41 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v41 & 1) != 0 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    v42 = *p_questRestrictionInfo;
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_51;
                    questId = v42->fields.questId;
                    questPhase = v42->fields.questPhase;
                    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                    Instance = (DataManager_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                  questId,
                                                  questPhase,
                                                  0LL);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v45 = *p_questRestrictionInfo;
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_51;
                      v47 = v45->fields.questId;
                      v46 = v45->fields.questPhase;
                      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v47, v46, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v48 = *p_questRestrictionInfo;
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_51;
                        v49 = isEvery;
                        v51 = v48->fields.questId;
                        v50 = v48->fields.questPhase;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                        QuestHintDialogOpenManager__SetTemporarilyInfo(v51, v50, 0LL);
                        if ( !v49 )
                        {
                          if ( !*p_questRestrictionInfo )
                            goto LABEL_51;
                          QuestHintDialogOpenManager__SetQuestInfo(
                            (*p_questRestrictionInfo)->fields.questId,
                            (*p_questRestrictionInfo)->fields.questPhase,
                            0LL);
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
                  WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(this, (const MethodInfo *)v36);
                  Instance = (DataManager_o *)this->fields.applyInterruptionDeckButton;
                  if ( Instance )
                  {
                    isInterruption = this->fields.isInterruption;
                    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Instance,
                                                  0LL);
                    if ( Instance )
                    {
                      if ( !isInterruption )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        goto LABEL_49;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                      applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
                      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      AtlasManager__SetPartyOrganizationImage(
                        applyInterruptionDeckSprite,
                        (System_String_o *)StringLiteral_17943/*"button_mission_{0}"*/,
                        0LL);
                      Instance = (DataManager_o *)this->fields.applyInterruptionDeckSprite;
                      if ( Instance )
                      {
                        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                          Instance,
                          Instance->klass[2]._1.interopData);
                        AtlasManager__SetPartyOrganizationImage(
                          this->fields.battleStartSprite,
                          (System_String_o *)StringLiteral_17937/*"button_favorite_reg"*/,
                          0LL);
                        Instance = (DataManager_o *)this->fields.battleStartSprite;
                        if ( Instance )
                        {
                          Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                          if ( Instance )
                          {
                            v61.fields.x = 0.0;
                            v61.fields.y = -2.0;
                            v61.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v61, 0LL);
                            Instance = (DataManager_o *)this->fields.battleStartSprite;
                            if ( Instance )
                            {
                              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                Instance,
                                Instance->klass[2]._1.interopData);
LABEL_49:
                              this->fields.state = 1;
                              v54 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                              System_Action___ctor(
                                v54,
                                (Il2CppObject *)this,
                                Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                                0LL);
                              BaseMenu__Open((BaseMenu_o *)this, v54, 0LL);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_1C13F80(Instance, v36);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Action_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *v8; // x8

  if ( (byte_4BB0735 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__, v3);
    byte_4BB0735 = 1;
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
    v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v8 = this->fields.questRestrictionInfo;
    if ( !v8 )
      sub_1C13F80(v6, v7);
    EventTutorialMaster__CheckTutorial(0, 45, v5, v8->fields.questId, v8->fields.questPhase, 0, 0, 0LL);
  }
  else
  {
    WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(this, method);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _BOOL4 isInterruption; // w20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  bool v8; // w2
  bool v9; // w3
  int32_t v10; // w1
  char v11; // w20
  char v12; // w21

  if ( (byte_4BB0738 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    byte_4BB0738 = 1;
  }
  isInterruption = this->fields.isInterruption;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( isInterruption )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_34;
    if ( !Instance )
      goto LABEL_34;
    InterruptionUseFriendshipUpItemId = PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
                                          Instance,
                                          questRestrictionInfo->fields.questId,
                                          questRestrictionInfo->fields.questPhase,
                                          0LL);
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    if ( PartyOrganizationUtility__IsEnableFriendshipUpItem(Instance, InterruptionUseFriendshipUpItemId, 0LL) )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
      if ( Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
          if ( Instance )
          {
            FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
            if ( Instance )
            {
              v8 = 1;
              v9 = 1;
              v10 = InterruptionUseFriendshipUpItemId;
LABEL_32:
              FriendshipUpItemSwitchComponent__SetWaveBattleRestart(
                (FriendshipUpItemSwitchComponent_o *)Instance,
                v10,
                v8,
                v9,
                0LL);
              return;
            }
          }
        }
      }
      goto LABEL_34;
    }
    if ( InterruptionUseFriendshipUpItemId >= 1 )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
      if ( Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
          if ( Instance )
          {
            FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
            if ( Instance )
            {
              v8 = 1;
              v10 = InterruptionUseFriendshipUpItemId;
              v9 = 0;
              goto LABEL_32;
            }
          }
        }
      }
LABEL_34:
      sub_1C13F80(Instance, v5);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemSwitchComponent )
      goto LABEL_34;
    v12 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                               0LL);
    if ( !Instance )
      goto LABEL_34;
    if ( (v12 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
      if ( Instance )
      {
        FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
        if ( Instance )
        {
          v9 = 1;
          v10 = InterruptionUseFriendshipUpItemId;
          v8 = 0;
          goto LABEL_32;
        }
      }
      goto LABEL_34;
    }
  }
  else
  {
    if ( !Instance )
      goto LABEL_34;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemSwitchComponent )
      goto LABEL_34;
    v11 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                               0LL);
    if ( !Instance )
      goto LABEL_34;
    if ( (v11 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
      if ( Instance )
      {
        FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
        return;
      }
      goto LABEL_34;
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C13F80(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


void __fastcall WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4BB072B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB072B = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_23;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_23;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    title = entity->fields.title;
    message = entity->fields.message;
    leftIndent = entity->fields.leftIndent;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v13, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v13;
      if ( !v13 )
        goto LABEL_23;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v13, 0LL);
      if ( !v13 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v13, 0LL);
      if ( !v13 )
        goto LABEL_23;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v13, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_23:
    sub_1C13F80(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)this, title, message, leftIndent, 0LL, 0, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  System_String_o *v12; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-48h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4BB072D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEquipMaster___, deckEntity);
    sub_1C13D24(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB072D = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v12 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_17;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          deckInfo->fields.userEquipId,
          (const MethodInfo_323ABCC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
    goto LABEL_15;
  Instance = (DataManager_o *)entity;
  if ( !entity
    || (UserEquipEntity__getEquipInfo(
          (UserEquipEntity_o *)entity,
          genderImageId,
          &maxLv,
          &equipName,
          &v12,
          &genderImageId[1],
          0LL),
        (Instance = (DataManager_o *)this->fields.masterEquipIcon) == 0LL) )
  {
LABEL_17:
    sub_1C13F80(Instance, v8);
  }
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
  Instance = (DataManager_o *)this->fields.masterEquipButton;
  if ( this->fields.isInterruption )
  {
    v8 = this->fields.restartWave == 1;
    if ( !Instance )
      goto LABEL_17;
  }
  else
  {
    v8 = 1LL;
    if ( !Instance )
      goto LABEL_17;
  }
  UICommonButton__SetEnable((UICommonButton_o *)Instance, v8, 0LL);
LABEL_15:
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_17;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    this->fields.isInterruption,
    v10);
  WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(this, v11);
}


void __fastcall WaveBattlePartyOrganizationMenu___OnClickFriendshipUpItemUseButton_b__49_0(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      9LL,
      1LL,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattlePartyOrganizationMenu__add_callbackFunc(
        WaveBattlePartyOrganizationMenu_o *this,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationMenu_o *v11; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BB0727 & 1) == 0 )
  {
    sub_1C13D24(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_4BB0727 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1C14240(v8);
  WaveBattlePartyOrganizationMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WaveBattlePartyOrganizationMenu__remove_callbackFunc(
        WaveBattlePartyOrganizationMenu_o *this,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BB0728 & 1) == 0 )
  {
    sub_1C13D24(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_4BB0728 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1C14240(v8);
  WaveBattlePartyOrganizationMenu__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A502F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A50294;
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = n;
  v22 = result;
  v20 = m;
  if ( (byte_4BB073A & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4BB073A = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v18, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WaveBattlePartyOrganizationMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB073B & 1) == 0 )
  {
    sub_1C13D24(&WaveBattlePartyOrganizationMenu___c_TypeInfo, v1);
    byte_4BB073B = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WaveBattlePartyOrganizationMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WaveBattlePartyOrganizationMenu___c_TypeInfo->static_fields->__9 = (struct WaveBattlePartyOrganizationMenu___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WaveBattlePartyOrganizationMenu___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WaveBattlePartyOrganizationMenu___c___ctor(
        WaveBattlePartyOrganizationMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WaveBattlePartyOrganizationMenu___c___CheckFriendshipUpItemTutorial_b__48_0(
        WaveBattlePartyOrganizationMenu___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C13F80(this, 0LL);
  return info->fields._Id_k__BackingField;
}


System_Action_Action__o *__fastcall WaveBattlePartyOrganizationMenu___c___CheckFriendshipUpItemTutorial_b__48_1(
        WaveBattlePartyOrganizationMenu___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_object__o *v15; // x19

  if ( (byte_4BB073C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_Action__TypeInfo, info);
    sub_1C13D24(&Method_WaveBattlePartyOrganizationMenu___c__DisplayClass48_0__CheckFriendshipUpItemTutorial_b__2__, v4);
    sub_1C13D24(&WaveBattlePartyOrganizationMenu___c__DisplayClass48_0_TypeInfo, v5);
    byte_4BB073C = 1;
  }
  v6 = sub_1C13F70(WaveBattlePartyOrganizationMenu___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1C13F80(v7, v8);
  *(_QWORD *)(v6 + 16) = info;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)info, v9, v10, v11, v12, v13, v14);
  v15 = (System_Action_object__o *)sub_1C13F70(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_WaveBattlePartyOrganizationMenu___c__DisplayClass48_0__CheckFriendshipUpItemTutorial_b__2__,
    0LL);
  return (System_Action_Action__o *)v15;
}


void __fastcall WaveBattlePartyOrganizationMenu___c__DisplayClass48_0___ctor(
        WaveBattlePartyOrganizationMenu___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu___c__DisplayClass48_0___CheckFriendshipUpItemTutorial_b__2(
        WaveBattlePartyOrganizationMenu___c__DisplayClass48_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *info; // x8
  int32_t EventId_k__BackingField; // w0

  info = this->fields.info;
  if ( !info )
    sub_1C13F80(this, action);
  if ( info->fields._IsEventItem_k__BackingField )
    EventId_k__BackingField = info->fields._EventId_k__BackingField;
  else
    EventId_k__BackingField = 0;
  EventTutorialMaster__CheckTutorial(EventId_k__BackingField, 71, action, 0, 0, 0, 0, 0LL);
}