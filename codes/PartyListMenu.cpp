void __fastcall PartyListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v8; // x8
  struct PartyListMenu_StaticFields *v9; // x9
  struct System_Int32_array *v10; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v13; // x1
  struct PartyListMenu_StaticFields *v14; // x0
  struct PartyListMenu_StaticFields *v15; // x8
  il2cpp_array_size_t v16; // w8
  struct PartyListMenu_StaticFields *v17; // x0
  il2cpp_array_size_t v18; // w8
  struct PartyListMenu_StaticFields *v19; // x0
  il2cpp_array_size_t v20; // w8
  struct PartyListMenu_StaticFields *v21; // x0
  il2cpp_array_size_t v22; // w8
  struct PartyListMenu_StaticFields *v23; // x0
  il2cpp_array_size_t v24; // w8
  struct PartyListMenu_StaticFields *v25; // x0
  il2cpp_array_size_t v26; // w8
  struct PartyListMenu_StaticFields *v27; // x0
  il2cpp_array_size_t v28; // w8
  struct PartyListMenu_StaticFields *v29; // x0
  il2cpp_array_size_t v30; // w8
  struct PartyListMenu_StaticFields *v31; // x0
  il2cpp_array_size_t v32; // w8
  struct PartyListMenu_StaticFields *v33; // x0
  il2cpp_array_size_t v34; // w8
  struct PartyListMenu_StaticFields *v35; // x0
  il2cpp_array_size_t v36; // w9
  struct PartyListMenu_StaticFields *v37; // x0
  il2cpp_array_size_t v38; // w8
  struct PartyListMenu_StaticFields *v39; // x0
  struct PartyListMenu_StaticFields *v40; // x0
  struct PartyListMenu_StaticFields *v41; // x0
  struct PartyListMenu_StaticFields *v42; // x0

  if ( (byte_4BB028A & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, v1);
    sub_1C13D24(&PartyListMenu_TypeInfo, v2);
    sub_1C13D24(&float___TypeInfo, v3);
    sub_1C13D24(&StringLiteral_17938/*"button_favorite_unreg"*/, v4);
    sub_1C13D24(&StringLiteral_17940/*"button_infocheck_unreg"*/, v5);
    sub_1C13D24(&StringLiteral_17945/*"button_push_reg"*/, v6);
    byte_4BB028A = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v8 = PartyListMenu_TypeInfo;
  v9 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v9->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v9->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v8->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  max_length = v10->max_length;
  v13 = v10;
  if ( !max_length )
    goto LABEL_43;
  v10->m_Items[1] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 76;
  v14 = PartyListMenu_TypeInfo->static_fields;
  v14->LAYOUT_SIZE_X_TYPE_MIDDLE = v13;
  sub_1C13CC8(&v14->LAYOUT_SIZE_X_TYPE_MIDDLE);
  v15 = PartyListMenu_TypeInfo->static_fields;
  *(_OWORD *)&v15->LAYOUT_SIZE_X_TYPE_BIG = xmmword_BF63B0;
  v15->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v16 = v10->max_length;
  v13 = v10;
  if ( !v16 )
    goto LABEL_43;
  v10->m_Items[1] = 181;
  if ( v16 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 187;
  v17 = PartyListMenu_TypeInfo->static_fields;
  v17->LAYOUT_POS_X_HELP = v13;
  sub_1C13CC8(&v17->LAYOUT_POS_X_HELP);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v18 = v10->max_length;
  v13 = v10;
  if ( !v18 )
    goto LABEL_43;
  v10->m_Items[1] = 140;
  if ( v18 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 146;
  v19 = PartyListMenu_TypeInfo->static_fields;
  v19->LAYOUT_POS_X_QUESTINFO = v13;
  sub_1C13CC8(&v19->LAYOUT_POS_X_QUESTINFO);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v20 = v10->max_length;
  v13 = v10;
  if ( !v20 )
    goto LABEL_43;
  v10->m_Items[1] = -45;
  if ( v20 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -94;
  v21 = PartyListMenu_TypeInfo->static_fields;
  v21->LAYOUT_POS_X_AUTOSELL_1 = v13;
  sub_1C13CC8(&v21->LAYOUT_POS_X_AUTOSELL_1);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v22 = v10->max_length;
  v13 = v10;
  if ( !v22 )
    goto LABEL_43;
  v10->m_Items[1] = 55;
  if ( v22 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 2;
  v23 = PartyListMenu_TypeInfo->static_fields;
  v23->LAYOUT_POS_X_AUTOSELL_2 = v13;
  sub_1C13CC8(&v23->LAYOUT_POS_X_AUTOSELL_2);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v24 = v10->max_length;
  v13 = v10;
  if ( !v24 )
    goto LABEL_43;
  v10->m_Items[1] = -40;
  if ( v24 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -85;
  v25 = PartyListMenu_TypeInfo->static_fields;
  v25->LAYOUT_POS_X_EVENT = v13;
  sub_1C13CC8(&v25->LAYOUT_POS_X_EVENT);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v26 = v10->max_length;
  v13 = v10;
  if ( !v26 )
    goto LABEL_43;
  v10->m_Items[1] = -135;
  if ( v26 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -171;
  v27 = PartyListMenu_TypeInfo->static_fields;
  v27->LAYOUT_POS_X_INFOMATION = v13;
  sub_1C13CC8(&v27->LAYOUT_POS_X_INFOMATION);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v28 = v10->max_length;
  v13 = v10;
  if ( !v28 )
    goto LABEL_43;
  v10->m_Items[1] = -225;
  if ( v28 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -248;
  v29 = PartyListMenu_TypeInfo->static_fields;
  v29->LAYOUT_POS_X_REMOVE = v13;
  sub_1C13CC8(&v29->LAYOUT_POS_X_REMOVE);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v30 = v10->max_length;
  v13 = v10;
  if ( !v30 )
    goto LABEL_43;
  v10->m_Items[1] = -315;
  if ( v30 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -325;
  v31 = PartyListMenu_TypeInfo->static_fields;
  v31->LAYOUT_POS_X_SWAP = v13;
  sub_1C13CC8(&v31->LAYOUT_POS_X_SWAP);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v32 = v10->max_length;
  v13 = v10;
  if ( !v32 )
    goto LABEL_43;
  v10->m_Items[1] = 79;
  if ( v32 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -17;
  v33 = PartyListMenu_TypeInfo->static_fields;
  v33->LAYOUT_POS_X_HINT_1 = v13;
  sub_1C13CC8(&v33->LAYOUT_POS_X_HINT_1);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v34 = v10->max_length;
  v13 = v10;
  if ( !v34 )
    goto LABEL_43;
  v10->m_Items[1] = 79;
  if ( v34 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 79;
  v35 = PartyListMenu_TypeInfo->static_fields;
  v35->LAYOUT_POS_X_HINT_2 = v13;
  sub_1C13CC8(&v35->LAYOUT_POS_X_HINT_2);
  v10 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v36 = v10->max_length;
  v13 = v10;
  if ( !v36 || (v10->m_Items[1] = -36, v36 == 1) )
LABEL_43:
    sub_1C13F88(v10, v13);
  v10->m_Items[2] = -36;
  v37 = PartyListMenu_TypeInfo->static_fields;
  v37->LAYOUT_POS_X_HELP_BUTTON = v13;
  sub_1C13CC8(&v37->LAYOUT_POS_X_HELP_BUTTON);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v10 = (struct System_Int32_array *)sub_1C13DCC(float___TypeInfo, 2LL);
  if ( !v10 )
LABEL_44:
    sub_1C13F80(v10, v11);
  v38 = v10->max_length;
  v13 = v10;
  if ( !v38 )
    goto LABEL_43;
  v10->m_Items[1] = 1116209152;
  if ( v38 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 1115815936;
  v39 = PartyListMenu_TypeInfo->static_fields;
  v39->LAYOUT_FS_OFFSET_OLD = (struct System_Single_array *)v13;
  sub_1C13CC8(&v39->LAYOUT_FS_OFFSET_OLD);
  v40 = PartyListMenu_TypeInfo->static_fields;
  v40->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17945/*"button_push_reg"*/;
  sub_1C13CC8(&v40->START_BUTTON_QUEST_SP);
  v41 = PartyListMenu_TypeInfo->static_fields;
  v41->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17938/*"button_favorite_unreg"*/;
  sub_1C13CC8(&v41->START_BUTTON_BATTLE_SP);
  v42 = PartyListMenu_TypeInfo->static_fields;
  v42->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17940/*"button_infocheck_unreg"*/;
  sub_1C13CC8(&v42->START_BUTTON_WAVE_BATTLE_SP);
}


void __fastcall PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BB0289 & 1) == 0 )
  {
    sub_1C13D24(&BaseMenu_TypeInfo, method);
    byte_4BB0289 = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyListMenu__Awake(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__Callback(PartyListMenu_o *this, int32_t result, const MethodInfo *method)
{
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x21
  __int64 v6; // x1
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C13CC8(&this->fields.callbackFunc);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v6);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      CenterIndex,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


int32_t __fastcall PartyListMenu__CheckEnableAutoOrganizationButton(
        PartyListMenu_o *this,
        QuestRestrictionInfo_o *restrictionInfo,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  int32_t DeckMemberMax; // w20

  if ( (byte_4BB0254 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, restrictionInfo);
    byte_4BB0254 = 1;
  }
  if ( !restrictionInfo )
    return 0;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v4->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsMyServantNum(restrictionInfo, 0LL) )
  {
    DeckMemberMax = restrictionInfo->fields.myServantNumMax;
  }
  else if ( QuestRestrictionInfo__IsServantNum(restrictionInfo, 0LL) )
  {
    DeckMemberMax = restrictionInfo->fields.servantNumMax;
  }
  if ( DeckMemberMax <= 0 )
    return 3;
  else
    return 0;
}


void __fastcall PartyListMenu__CheckFriendshipUpItemTutorial(PartyListMenu_o *this, const MethodInfo *method)
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
  PartyListMenu___c_c *v16; // x0
  System_Func_object__int__o *_9__157_0; // x20
  Il2CppObject *v18; // x21
  struct PartyListMenu___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  PartyListMenu___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__object__o *_9__157_1; // x20
  Il2CppObject *v24; // x21
  struct PartyListMenu___c_StaticFields *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Object_array *v27; // x20
  ActionChain_o *v28; // x19

  if ( (byte_4BB0277 & 1) == 0 )
  {
    sub_1C13D24(&ActionChain_TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__Action_Action____, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_Action_Action____, v5);
    sub_1C13D24(&System_Func_FriendshipUpItemInfo__Action_Action___TypeInfo, v6);
    sub_1C13D24(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v7);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1C13D24(&TutorialFlag_TypeInfo, v9);
    sub_1C13D24(&Method_PartyListMenu___c__CheckFriendshipUpItemTutorial_b__157_0__, v10);
    sub_1C13D24(&Method_PartyListMenu___c__CheckFriendshipUpItemTutorial_b__157_1__, v11);
    sub_1C13D24(&PartyListMenu___c_TypeInfo, v12);
    byte_4BB0277 = 1;
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
          v16 = PartyListMenu___c_TypeInfo;
          if ( !PartyListMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyListMenu___c_TypeInfo);
            v16 = PartyListMenu___c_TypeInfo;
          }
          _9__157_0 = (System_Func_object__int__o *)v16->static_fields->__9__157_0;
          if ( !_9__157_0 )
          {
            if ( !v16->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v16);
              v16 = PartyListMenu___c_TypeInfo;
            }
            v18 = (Il2CppObject *)v16->static_fields->__9;
            _9__157_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_FriendshipUpItemInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__157_0,
              v18,
              Method_PartyListMenu___c__CheckFriendshipUpItemTutorial_b__157_0__,
              0LL);
            static_fields = PartyListMenu___c_TypeInfo->static_fields;
            static_fields->__9__157_0 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__157_0;
            sub_1C13CC8(&static_fields->__9__157_0);
          }
          v20 = System_Linq_Enumerable__OrderBy_object__int_(
                  CachedFriendshipUpItemInfo_k__BackingField,
                  (System_Func_TSource__TKey__o *)_9__157_0,
                  (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___);
          v21 = PartyListMenu___c_TypeInfo;
          v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
          if ( !PartyListMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyListMenu___c_TypeInfo);
            v21 = PartyListMenu___c_TypeInfo;
          }
          _9__157_1 = (System_Func_object__object__o *)v21->static_fields->__9__157_1;
          if ( !_9__157_1 )
          {
            if ( !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              v21 = PartyListMenu___c_TypeInfo;
            }
            v24 = (Il2CppObject *)v21->static_fields->__9;
            _9__157_1 = (System_Func_object__object__o *)sub_1C13F70(System_Func_FriendshipUpItemInfo__Action_Action___TypeInfo);
            System_Func_object__object____ctor(
              _9__157_1,
              v24,
              Method_PartyListMenu___c__CheckFriendshipUpItemTutorial_b__157_1__,
              0LL);
            v25 = PartyListMenu___c_TypeInfo->static_fields;
            v25->__9__157_1 = (struct System_Func_FriendshipUpItemInfo__Action_Action___o *)_9__157_1;
            sub_1C13CC8(&v25->__9__157_1);
          }
          v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v22,
                                                                       (System_Func_TSource__TResult__o *)_9__157_1,
                                                                       (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__Action_Action____);
          v27 = System_Linq_Enumerable__ToArray_object_(
                  v26,
                  (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_Action_Action____);
          v28 = (ActionChain_o *)sub_1C13F70(ActionChain_TypeInfo);
          ActionChain___ctor_47597396(v28, (System_Action_Action__array *)v27, 0LL);
          if ( v28 )
          {
            ChainableActionBase__Execute((ChainableActionBase_o *)v28, 0LL);
            return;
          }
        }
LABEL_25:
        sub_1C13F80(Instance, v14);
      }
    }
  }
}


void __fastcall PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_32774236(this, 0LL, v2);
}


void __fastcall PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB027C & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB027C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB0282 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB0282 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
  CommonUI__CloseCenterEffectDetailDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall PartyListMenu__Close_32774236(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BB0256 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_PartyListMenu_EndCloseList__, v5);
    sub_1C13D24(&Method_PartyListMenu_EndClose__, v6);
    byte_4BB0256 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v8 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0LL);
  if ( !partyListViewManager )
    sub_1C13F80(v9, v10);
  PartyListViewManager__SetMode_32838476(partyListViewManager, 1, v8, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__DispInfoPanel(PartyListMenu_o *this, bool disp, const MethodInfo *method)
{
  PartyListViewManager_o *infoPanel; // x0

  if ( disp )
  {
    infoPanel = (PartyListViewManager_o *)this->fields.infoPanel;
    if ( !infoPanel )
      goto LABEL_9;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)infoPanel, 0LL) && this->fields.state == 3 )
    {
      infoPanel = this->fields.partyListViewManager;
      if ( !infoPanel )
        goto LABEL_9;
      PartyListViewManager__RefreshDrawPartyInfo(infoPanel, 0LL);
    }
  }
  infoPanel = (PartyListViewManager_o *)this->fields.infoPanel;
  if ( !infoPanel )
LABEL_9:
    sub_1C13F80(infoPanel, disp);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0LL);
}


void __fastcall PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BB0258 & 1) == 0 )
  {
    sub_1C13D24(&PartyListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_OnSelectItem__, v3);
    byte_4BB0258 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v5 = (PartyListViewManager_CallbackFunc_o *)sub_1C13F70(PartyListViewManager_CallbackFunc_TypeInfo);
  PartyListViewManager_CallbackFunc___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_PartyListMenu_OnSelectItem__, 0LL);
  if ( !partyListViewManager )
    sub_1C13F80(v6, v7);
  PartyListViewManager__SetMode(partyListViewManager, 2, v5, 0LL);
}


void __fastcall PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C13CC8(&this->fields.closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndCloseList(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__EndCloseTutorialArrowChange(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x2

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton) == 0LL)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager,
        this->fields.state = 3,
        !tutorialMaskBase) )
  {
    sub_1C13F80(tutorialMaskBase, method);
  }
  PartyListViewManager__SetMode_32838380((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  PartyListMenu__Callback(this, 2, v4);
}


void __fastcall PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL) )
  {
    sub_1C13F80(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C13CC8(&this->fields.callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      17LL,
      0LL,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndCloseTutorialArrowStart(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  partyListViewManager = this->fields.partyListViewManager;
  this->fields.state = 3;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_1C13F80(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  PartyListMenu__Callback(this, 8, v4);
}


void __fastcall PartyListMenu__EndEnter(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *closeCallbackFunc; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C13CC8(&this->fields.closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__EndOpen(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v12; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialMode; // w8
  Il2CppObject *v15; // x20
  UnityEngine_Vector2_o v16; // kr00_8
  Il2CppObject *Instance; // x20
  System_Action_o *v18; // x21
  float v19; // s3
  float v20; // s1
  float v21; // s4
  float v22; // s0
  int v23; // w8
  int v24; // w9
  PartyListViewManager_o *v25; // x20
  PartyListViewManager_CallbackFunc_o *v26; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  int v29; // s5
  int v30; // s6
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  Il2CppObject *v32; // x20
  UnityEngine_Vector2_o v33; // kr10_8
  Il2CppObject *v34; // x20
  System_String_o *v35; // x21
  System_Action_o *v36; // x22
  struct System_Action_o *openCallbackFunc; // x20
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v39; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BB0255 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&PartyListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_FSOffset___, v4);
    sub_1C13D24(&FSUtility_TypeInfo, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&Method_PartyListMenu_EndOpenTutorialArrow__, v7);
    sub_1C13D24(&Method_PartyListMenu_OnSelectItem__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C13D24(&StringLiteral_13733/*"TUTORIAL_MESSAGE_COMBINE1"*/, v10);
    byte_4BB0255 = 1;
  }
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v12 = (PartyListViewManager_CallbackFunc_o *)sub_1C13F70(PartyListViewManager_CallbackFunc_TypeInfo);
    PartyListViewManager_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyListMenu_OnSelectItem__,
      0LL);
    if ( !partyListViewManager )
      goto LABEL_52;
    PartyListViewManager__SetMode(partyListViewManager, 2, v12, 0LL);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode == 3 )
    {
      tutorialMaskBase = this->fields.tutorialMaskBase;
      if ( tutorialMaskBase )
      {
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
        if ( tutorialMaskBase )
        {
          tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
          if ( tutorialMaskBase )
          {
            UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
            tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
            if ( tutorialMaskBase )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
                tutorialMaskBase,
                0LL,
                0LL,
                tutorialMaskBase->klass[1]._1.interfaceOffsets);
              tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
              if ( tutorialMaskBase )
              {
                Component_object = UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                     (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v18 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( Instance )
                {
                  v20 = AddOffset.fields.y + -231.0;
                  v21 = AddOffset.fields.y + -291.0;
                  v19 = AddOffset.fields.x + 329.0;
                  v22 = AddOffset.fields.x + 422.0;
                  v23 = 1128136704;
                  v24 = 1119092736;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C13F80(tutorialMaskBase, method);
    }
    if ( tutorialMode != 2 )
    {
      if ( tutorialMode != 1 )
        goto LABEL_47;
      tutorialMaskBase = this->fields.tutorialMaskBase;
      if ( tutorialMaskBase )
      {
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
        if ( tutorialMaskBase )
        {
          tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
          if ( tutorialMaskBase )
          {
            UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
            tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
            if ( tutorialMaskBase )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
                tutorialMaskBase,
                0LL,
                0LL,
                tutorialMaskBase->klass[1]._1.interfaceOffsets);
              tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
              if ( tutorialMaskBase )
              {
                v15 = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)tutorialMaskBase,
                        (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                v16 = FSUtility__GetAddOffset((FSOffset_o *)v15, 1, 0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v18 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( Instance )
                {
                  v19 = v16.fields.x + -200.0;
                  v20 = v16.fields.y + -255.0;
                  v21 = v16.fields.y + -295.0;
                  v22 = v16.fields.x + -120.0;
                  v23 = 1126170624;
                  v24 = 1117782016;
LABEL_29:
                  v29 = v23;
                  v30 = v24;
                  CommonUI__OpenTutorialArrowMark(
                    (CommonUI_o *)Instance,
                    *(UnityEngine_Vector2_o *)&v22,
                    0.0,
                    *(UnityEngine_Rect_o *)&v19,
                    v18,
                    0LL);
                  goto LABEL_47;
                }
              }
            }
          }
        }
      }
      goto LABEL_52;
    }
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
    if ( !tutorialMaskBase )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
    tutorialMaskBase = (UnityEngine_GameObject_o *)PartyListViewManager__GetItem(
                                                     (PartyListViewManager_o *)tutorialMaskBase,
                                                     0,
                                                     0LL);
    if ( !tutorialPartyOrganizationChangeEmptyObject )
      goto LABEL_52;
    PartyOrganizationChangeObject__SetItem(
      tutorialPartyOrganizationChangeEmptyObject,
      (PartyListViewItem_o *)tutorialMaskBase,
      1,
      0LL,
      0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    PartyListViewManager__SetMode_32838380((PartyListViewManager_o *)tutorialMaskBase, 3, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                                     0LL);
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                     (UnityEngine_Transform_o *)tutorialMaskBase,
                                                     0LL);
    if ( !tutorialMaskBase )
      goto LABEL_52;
    v32 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v33 = FSUtility__GetAddOffset((FSOffset_o *)v32, 1, 0LL);
    v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13733/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
    v36 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
    if ( !v34 )
      goto LABEL_52;
    v38.fields.x = v33.fields.x + -245.0;
    v38.fields.y = v33.fields.y + 70.0;
    v39.fields.m_XMin = v33.fields.x + -320.0;
    v39.fields.m_YMin = v33.fields.y + -205.0;
    v39.fields.m_Width = 150.0;
    v39.fields.m_Height = 380.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)v34,
      v35,
      v38,
      v39,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v36,
      0LL);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v25 = this->fields.partyListViewManager;
      v26 = (PartyListViewManager_CallbackFunc_o *)sub_1C13F70(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0LL);
      if ( v25 )
      {
        PartyListViewManager__SetMode(v25, 2, v26, 0LL);
        goto LABEL_47;
      }
      goto LABEL_52;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    PartyListViewManager__SetMode_32838380((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  }
LABEL_47:
  if ( this->fields.isHintDialogOpenFlag )
  {
    *(_WORD *)&this->fields.isHintDialogOpenFlag = 256;
    PartyListMenu__ShowHintDialogButton(this, method);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1C13CC8(&this->fields.openCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndOpenTutorialArrow(PartyListMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 7;
}


void __fastcall PartyListMenu__Enter(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Enter_32774572(this, 0LL, v2);
}


void __fastcall PartyListMenu__Enter_32774572(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BB0257 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_PartyListMenu_EndEnter__, v5);
    byte_4BB0257 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, callback);
  PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(&this->fields.closeCallbackFunc);
  this->fields.state = 5;
  v7 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall PartyListMenu__ExecuteOpenCallback(PartyListMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *hintDialogCloseCallbackFunc; // x19
  struct System_Action_o **p_hintDialogCloseCallbackFunc; // x0

  hintDialogCloseCallbackFunc = this->fields.hintDialogCloseCallbackFunc;
  this->fields.isDisplayHintDialog = 0;
  if ( hintDialogCloseCallbackFunc )
  {
    p_hintDialogCloseCallbackFunc = &this->fields.hintDialogCloseCallbackFunc;
    *p_hintDialogCloseCallbackFunc = 0LL;
    sub_1C13CC8(p_hintDialogCloseCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))hintDialogCloseCallbackFunc->fields.m_target)(
      hintDialogCloseCallbackFunc->fields.original_method_info,
      *(_QWORD *)&hintDialogCloseCallbackFunc->fields.extra_arg);
  }
}


float __fastcall PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BB0249 & 1) == 0 )
  {
    sub_1C13D24(&FSUtility_TypeInfo, method);
    byte_4BB0249 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0LL);
}


float __fastcall PartyListMenu__FSOffsetX_32761964(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  if ( (byte_4BB024A & 1) == 0 )
  {
    sub_1C13D24(&FSUtility_TypeInfo, method);
    byte_4BB024A = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(ver, 1, 0LL);
}


void __fastcall PartyListMenu__ForceSetCenterItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, index);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0LL);
}


PartyListViewItem_o *__fastcall PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 methodPtr_low; // x11

  v2 = this;
  if ( (byte_4BB024F & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C13D24(&PartyListViewItem_TypeInfo, method);
    byte_4BB024F = 1;
  }
  partyListViewManager = v2->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(this, method);
  centerItem = (PartyListViewItem_o *)partyListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0LL;
  methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(centerItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PartyListViewItem_c *)centerItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewItem_TypeInfo )
    return centerItem;
  return 0LL;
}


PartyListViewItem_o *__fastcall PartyListMenu__GetItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, index);
  return PartyListViewManager__GetItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__HideFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0

  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  if ( !friendshipUpItemSwitchComponent )
    sub_1C13F80(0LL, method);
  FriendshipUpItemSwitchComponent__ShowFriendshipUpItemUseButton(friendshipUpItemSwitchComponent, 0, v2);
}


void __fastcall PartyListMenu__Init(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB0250 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, method);
    byte_4BB0250 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_9;
  PartyListViewManager__DestroyList(partyListViewManager, 0LL);
  partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !partyListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyChangeButton;
  if ( !partyListViewManager )
    goto LABEL_9;
  partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)partyListViewManager,
                                                     0LL);
  if ( !partyListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  this->fields.setupInfo = 0LL;
  sub_1C13CC8(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C13CC8(&this->fields.questRestrictionInfo);
  this->fields.isDisplayHintDialog = 0;
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  partyListViewManager = (PartyListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyListViewManager )
LABEL_9:
    sub_1C13F80(partyListViewManager, method);
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyListViewManager, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BB027A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BB027A = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1C13F80(Instance, v5);
  }
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          questRestrictionInfo->fields.questPhase,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_12;
  return QuestPhaseEntity__IsActiveAssistSkill(entity, 0LL);
}


bool __fastcall PartyListMenu__IsActiveCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *v9; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BB027E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_4BB027E = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventDetailMaster___);
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 || !Master_object )
      goto LABEL_16;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            Master_object,
            &entity,
            v9->fields.eventId,
            (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      LOBYTE(questRestrictionInfo) = 0;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_16;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__GetIgnoreCommandAssistQuestIds(
                                                                    (EventDetailEntity_o *)entity,
                                                                    0LL);
    if ( !Master_object )
    {
      LOBYTE(questRestrictionInfo) = 1;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    v10 = this->fields.questRestrictionInfo;
    if ( !v10 )
LABEL_16:
      sub_1C13F80(Master_object, v8);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_object,
                                      v10->fields.questId,
                                      (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool __fastcall PartyListMenu__IsDisabledAutoOrganizationButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *autoOrganizationButton; // x8

  autoOrganizationButton = this->fields.autoOrganizationButton;
  if ( !autoOrganizationButton )
    sub_1C13F80(this, method);
  return autoOrganizationButton->fields.mState == 3;
}


bool __fastcall PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v11; // x8
  Il2CppObject *v14; // [xsp+8h] [xbp-28h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4BB0279 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_AssistMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB0279 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_22;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Instance,
         &entity,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    if ( QuestPhaseEntity__IsHideAssistConfButton(entity, 0LL) )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v11 = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_22:
    sub_1C13F80(Instance, v9);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          v11->fields.eventId,
          (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    return 0;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag((EventDetailEntity_o *)v14, 0x80000000000LL, 0LL);
}


bool __fastcall PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v10; // x20
  struct QuestRestrictionInfo_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB027D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventCommandAssistMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v6);
    byte_4BB027D = 1;
  }
  entity = 0LL;
  if ( this->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_19;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_19;
      v10 = Master_object;
      Master_object = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                      (EventDetailEntity_o *)entity,
                                                      0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v11 = this->fields.questRestrictionInfo;
        if ( v11 )
        {
          if ( v10 )
          {
            Master_object = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                            v10,
                                                            v11->fields.eventId,
                                                            -1,
                                                            0LL);
            if ( Master_object )
              return LODWORD(Master_object->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_19:
        sub_1C13F80(Master_object, v8);
      }
    }
  }
  return 0;
}


bool __fastcall PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BB0280 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&StringLiteral_20414/*"iconId"*/, v6);
    byte_4BB0280 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_20414/*"iconId"*/, 0LL);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0LL),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0LL)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                      Instance,
                                      Instance->klass[2]._1.interopData),
        (v11 = this->fields.questRestrictionInfo) == 0LL)
    || (Instance = (DataManager_o *)entity) == 0LL )
  {
LABEL_17:
    sub_1C13F80(Instance, v8);
  }
  return QuestEntity__HasFlag_40637728((QuestEntity_o *)entity, 0x100000000000000LL, v11->fields.questPhase, 0LL);
}


bool __fastcall PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v10; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BB0283 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB0283 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v14, questId, questPhase, 0LL) )
    {
      Master_object = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_17:
      sub_1C13F80(Master_object, v10);
    }
    return 0;
  }
  return 1;
}


bool __fastcall PartyListMenu__IsHintDialogEveryTime(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestHintMaster_o *Master_object; // x0
  __int64 v9; // x1
  QuestPhaseEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BB0284 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    byte_4BB0284 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (QuestHintMaster_o *)QuestHintMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.openType == 0;
LABEL_21:
    sub_1C13F80(Master_object, v9);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v12, questId, questPhase, 0LL) )
    return 0;
  Master_object = (QuestHintMaster_o *)v12;
  if ( !v12 )
    goto LABEL_21;
  return QuestPhaseEntity__getHintOpenType(v12, 0LL) == 0;
}


bool __fastcall PartyListMenu__IsNeedHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned int v4; // w8
  bool result; // w0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  result = questRestrictionInfo
        && EventTutorialMaster__IsTutorialDataExists(
             questRestrictionInfo->fields.eventId,
             45,
             questRestrictionInfo->fields.questId,
             questRestrictionInfo->fields.questPhase,
             0,
             0,
             1,
             0LL)
        || (v4 = this->fields.menuKind - 1, v4 > 6)
        || (v4 & 0x7F) == 1;
  return result;
}


bool __fastcall PartyListMenu__IsUseEventLimitEquipUserWill(
        PartyListMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, index);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v11; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v13; // x22

  if ( (byte_4BB027B & 1) == 0 )
  {
    sub_1C13D24(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__, v3);
    sub_1C13D24(&Method_PartyListMenu_OnClickAssistConfirmButton__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB027B = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v6 = Method_PartyListMenu_OnClickAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickAssistConfirmButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickAssistConfirmButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v11 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v13 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1C13F70(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0LL),
          !v11) )
    {
      sub_1C13F80(Instance, v9);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v11, eventId, v13, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickAutoOrganization(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w0
  int32_t v5; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4BB0265 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickAutoOrganization__, method);
    byte_4BB0265 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, method);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    if ( (CenterIndex & 0x80000000) == 0 )
    {
      v5 = CenterIndex;
      v6 = Method_PartyListMenu_OnClickAutoOrganization__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickAutoOrganization__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      PartyListMenu__OpenAutoOrganizationConfirmDialog_32778288(this, v5, 0, v8);
    }
  }
}


void __fastcall PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  DropAutoSellDlgComponent_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4BB0262 & 1) == 0 )
  {
    sub_1C13D24(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_OnClickAutoSell__, v3);
    sub_1C13D24(&Method_PartyListMenu__OnClickAutoSell_b__131_0__, v4);
    byte_4BB0262 = 1;
  }
  v5 = Method_PartyListMenu_OnClickAutoSell__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoSell__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickAutoSell__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v8 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_1C13F70(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__131_0__,
    v9);
  if ( !dropAutoSellDialog )
    sub_1C13F80(v10, v11);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v8, v12);
}


void __fastcall PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BB0259 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickCancel__, method);
    byte_4BB0259 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 0, v7);
  }
}


void __fastcall PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v11; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  System_Action_o *v14; // x23

  if ( (byte_4BB0281 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_CloseCenterEffectDetailDialog__, v3);
    sub_1C13D24(&Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB0281 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v6 = Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v11 = (CommonUI_o *)Instance,
          questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v14 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0LL),
          !v11) )
    {
      sub_1C13F80(Instance, v9);
    }
    CommonUI__OpenCenterEffectDetailDialog(v11, questId, questPhase, v14, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickChange(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_4BB025A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_EndCloseTutorialArrowChange__, v3);
    sub_1C13D24(&Method_PartyListMenu_OnClickChange__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB025A = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_17;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 1 )
      {
        v11 = Method_PartyListMenu_OnClickChange__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickChange__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C13D08(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0LL);
        if ( !Instance )
          goto LABEL_17;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v14, 0LL);
      }
    }
    else if ( state == 2 )
    {
      v8 = Method_PartyListMenu_OnClickChange__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickChange__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 2, v10);
        return;
      }
LABEL_17:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v11; // x19
  int32_t eventId; // w20
  Il2CppObject *v13; // x22
  System_Action_o *v14; // x21

  if ( (byte_4BB027F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_1C13D24(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB027F = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v6 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v11 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v14 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
          System_Action___ctor(v14, v13, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v11) )
    {
      sub_1C13F80(Instance, v9);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v11, eventId, v14, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickDecide(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_7;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BB025F & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickDeckCopy__, method);
    byte_4BB025F = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickDeckCopy__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckCopy__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickDeckCopy__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 6, v6);
        return;
      }
LABEL_11:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v4; // w1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4BB025E & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickDeckName__, method);
    byte_4BB025E = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v4 = questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
    if ( !PartyListViewItem__IsSpecificMenuKind_32832748(this->fields.menuKind, v4, 0LL) )
    {
      partyListViewManager = this->fields.partyListViewManager;
      if ( !partyListViewManager )
        goto LABEL_15;
      if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
      {
        v7 = Method_PartyListMenu_OnClickDeckName__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckName__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickDeckName__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
        partyListViewManager = this->fields.partyListViewManager;
        this->fields.state = 3;
        if ( partyListViewManager )
        {
          PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
          PartyListMenu__Callback(this, 5, v9);
          return;
        }
LABEL_15:
        sub_1C13F80(partyListViewManager, v5);
      }
    }
  }
}


void __fastcall PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BB0260 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickEdit__, method);
    byte_4BB0260 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickEdit__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickEdit__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickEdit__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 7, v6);
        return;
      }
LABEL_11:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BB0287 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__, v3);
    byte_4BB0287 = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__, 0LL);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C13F80(v6, v7);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v5, v8);
}


void __fastcall PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v11; // x1
  struct QuestRestrictionInfo_o *v12; // x8
  int32_t eventId; // w20
  System_Action_o *v14; // x21
  struct QuestRestrictionInfo_o *v15; // x8
  int32_t menuKind; // w8
  Il2CppObject *Instance; // x19
  int v18; // w8

  if ( (byte_4BB0275 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&TutorialFlag_ImageId___TypeInfo, v3);
    sub_1C13D24(&Method_PartyListMenu_EndHelp__, v4);
    sub_1C13D24(&Method_PartyListMenu_OnClickHelp__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BB0275 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PartyListMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickHelp__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickHelp__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      IsTutorialDataExists = EventTutorialMaster__IsTutorialDataExists(
                               questRestrictionInfo->fields.eventId,
                               45,
                               questRestrictionInfo->fields.questId,
                               questRestrictionInfo->fields.questPhase,
                               0,
                               0,
                               this->fields.menuKind != 9,
                               0LL);
      if ( (IsTutorialDataExists & 1) != 0 )
      {
        v12 = this->fields.questRestrictionInfo;
        if ( v12 )
        {
          eventId = v12->fields.eventId;
          v14 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
          v15 = this->fields.questRestrictionInfo;
          if ( v15 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_40459500(
              eventId,
              45,
              v14,
              v15->fields.questId,
              v15->fields.questPhase,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_24:
        sub_1C13F80(IsTutorialDataExists, v11);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C13DCC(TutorialFlag_ImageId___TypeInfo, 1LL);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v11 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( *(_DWORD *)(IsTutorialDataExists + 24) )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 644;
          if ( !Instance )
            goto LABEL_24;
          goto LABEL_23;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C13DCC(TutorialFlag_ImageId___TypeInfo, 2LL);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v18 = *(_DWORD *)(IsTutorialDataExists + 24);
        v11 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v18 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v18 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_24;
LABEL_23:
            CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v11, -1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
      sub_1C13F88(IsTutorialDataExists, v11);
    }
  }
}


void __fastcall PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BB0285 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickHintDialogButton__, method);
    byte_4BB0285 = 1;
  }
  v3 = Method_PartyListMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  PartyListMenu__ShowHintDialogButton(this, v5);
}


void __fastcall PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BB0264 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickInfomation__, method);
    byte_4BB0264 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickInfomation__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickInfomation__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickInfomation__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 11, v6);
        return;
      }
LABEL_11:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickLimitMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, method);
    PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void __fastcall PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BB025B & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickMasterFormation__, method);
    byte_4BB025B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 9, v7);
  }
}


void __fastcall PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BB0267 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickPointEvent__, method);
    byte_4BB0267 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickPointEvent__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickPointEvent__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickPointEvent__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 12, v6);
        return;
      }
LABEL_11:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BB0263 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickQuestInfo__, method);
    byte_4BB0263 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 18, v7);
  }
}


void __fastcall PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BB025D & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickRemove__, method);
    byte_4BB025D = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickRemove__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickRemove__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickRemove__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 4, v6);
        return;
      }
LABEL_11:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickStart(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21

  if ( (byte_4BB0261 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_EndCloseTutorialArrowStart__, v3);
    sub_1C13D24(&Method_PartyListMenu_OnClickStart__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB0261 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_15;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 3 )
      {
        v9 = Method_PartyListMenu_OnClickStart__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickStart__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickStart__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C13D08(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0, 0LL);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0LL);
        if ( !Instance )
          goto LABEL_15;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v12, 0LL);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 8, v8);
        return;
      }
LABEL_15:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BB025C & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickSwap__, method);
    byte_4BB025C = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickSwap__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickSwap__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickSwap__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 3, v6);
        return;
      }
LABEL_11:
      sub_1C13F80(partyListViewManager, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__OnClickTabParty(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB0273 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty__, *(_QWORD *)&index);
    byte_4BB0273 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyListMenu_OnClickTabParty__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v7);
    PartyListViewManager__MoveCenterItem(partyListViewManager, index, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB0269 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty1__, method);
    byte_4BB0269 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty1__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB0272 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty10__, method);
    byte_4BB0272 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty10__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty10__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty10__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB026A & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty2__, method);
    byte_4BB026A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty2__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB026B & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty3__, method);
    byte_4BB026B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty3__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB026C & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty4__, method);
    byte_4BB026C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty4__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty4__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty4__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB026D & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty5__, method);
    byte_4BB026D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty5__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty5__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty5__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB026E & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty6__, method);
    byte_4BB026E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty6__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty6__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty6__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB026F & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty7__, method);
    byte_4BB026F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty7__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty7__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty7__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB0270 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty8__, method);
    byte_4BB0270 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty8__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty8__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty8__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BB0271 & 1) == 0 )
  {
    sub_1C13D24(&Method_PartyListMenu_OnClickTabParty9__, method);
    byte_4BB0271 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty9__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty9__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnClickTabParty9__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C13F80(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB0274 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4BB0274 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0LL);
    if ( !Instance )
      sub_1C13F80(v7, v8);
    CommonUI__CloseTutorialNotificationDialogArrow_31096180((CommonUI_o *)Instance, v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__OnSelectItem(
        PartyListMenu_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x23
  unsigned int v11; // w22
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4BB0268 & 1) == 0 )
  {
    sub_1C13D24(&PartyListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&Method_PartyListMenu_OnSelectItem__, v9);
    byte_4BB0268 = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      v12 = Method_PartyListMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnSelectItem__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C13D3C(Method_PartyListMenu_OnSelectItem__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C13D08(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      v15 = (PartyListViewManager_CallbackFunc_o *)sub_1C13F70(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0LL);
      if ( !partyListViewManager )
        sub_1C13F80(v16, v17);
      PartyListViewManager__SetMode(partyListViewManager, 2, v15, 0LL);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v11 = dword_BF7340[kind - 1];
        this->fields.callbackFunc = 0LL;
        sub_1C13CC8(&this->fields.callbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v11,
          (unsigned int)n,
          (unsigned int)m,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__Open(
        PartyListMenu_o *this,
        int32_t menuKind,
        int32_t tutorialMode,
        PartyListViewItem_array *baseDeckItemList,
        int32_t partyNum,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t friendBonusVal,
        bool isRetry,
        bool isOpenCallbackAfterCloseHintDialog,
        bool isOpenHelp,
        const MethodInfo *method)
{
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  const MethodInfo *v37; // x1
  struct System_Action_o **v38; // x20
  struct System_Action_o *v39; // x1
  const MethodInfo *v40; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  struct System_Action_o **p_openCallbackFunc; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v47; // x1
  _BOOL4 v48; // w8
  struct System_Action_o **v49; // x20
  const MethodInfo *v50; // x1
  _BOOL4 v51; // w22
  struct System_Int32_array *eventIdList; // x8
  __int64 v53; // x9
  int32_t v54; // w24
  PartyListMenu_o *v55; // x0
  const MethodInfo *v56; // x4
  PartyListMenu_c *v57; // x8
  UnityEngine_GameObject_o *v58; // x25
  UnityEngine_GameObject_o *v59; // x24
  const MethodInfo *v60; // x1
  PartyListMenu_o *transform; // x0
  const MethodInfo *v62; // x1
  UnityEngine_Transform_o *v63; // x24
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_1_FS; // kr00_8
  UnityEngine_GameObject_o *v67; // x24
  const MethodInfo *v68; // x1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_2_FS; // kr08_8
  int v70; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v73; // x1
  char v74; // w24
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  UISprite_o *v78; // x24
  Il2CppObject *v79; // x0
  System_String_o *v80; // x25
  const MethodInfo *v81; // x1
  System_String_o *v82; // x1
  const MethodInfo *v83; // x1
  struct UILabel_o *assistCanNotLabel; // x24
  char v85; // w24
  int32_t v86; // w24
  System_Action_o *v87; // x25
  const MethodInfo *v88; // x1
  System_String_o *v89; // x1
  const MethodInfo *v90; // x1
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v92; // w24
  struct QuestRestrictionInfo_o *v93; // x8
  int32_t questPhase; // w23
  int32_t v95; // w24
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t v97; // w23
  int32_t v98; // w24
  struct QuestRestrictionInfo_o *v99; // x8
  char v100; // w23
  int32_t v101; // w24
  int32_t v102; // w25
  __int64 v103; // x9
  int32_t v104; // w20
  PartyListMenu_o *v105; // x0
  const MethodInfo *v106; // x4
  PartyListMenu_c *v107; // x8
  UnityEngine_GameObject_o *v108; // x21
  BalanceConfig_c *v109; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  System_Action_o *v112; // x20
  int32_t eventId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB0251 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&menuKind);
    sub_1C13D24(&AtlasManager_TypeInfo, v21);
    sub_1C13D24(&BalanceConfig_TypeInfo, v22);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UISprite___, v23);
    sub_1C13D24(&CondType_TypeInfo, v24);
    sub_1C13D24(&int_TypeInfo, v25);
    sub_1C13D24(&LocalizationManager_TypeInfo, v26);
    sub_1C13D24(&Method_PartyListMenu_EndOpen__, v27);
    sub_1C13D24(&Method_PartyListMenu__Open_b__104_0__, v28);
    sub_1C13D24(&PartyListMenu_TypeInfo, v29);
    sub_1C13D24(&QuestHintDialogOpenManager_TypeInfo, v30);
    sub_1C13D24(&QuestInformationComponent_TypeInfo, v31);
    sub_1C13D24(&StringLiteral_5651/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/, v32);
    sub_1C13D24(&StringLiteral_5682/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, v33);
    sub_1C13D24(&StringLiteral_19555/*"event_recoverySync"*/, v34);
    sub_1C13D24(&StringLiteral_17942/*"button_lock_unreg"*/, v35);
    sub_1C13D24(&StringLiteral_1/*""*/, v36);
    byte_4BB0251 = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_1C13CC8(&this->fields.setupInfo);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C13CC8(&this->fields.questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C13CC8(&this->fields.callbackFunc);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C13CC8(&this->fields.openCallbackFunc);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v45);
      PartyListMenu__SetButtonState(this, v47);
      gameObject = this->fields.questStartBase;
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind != 8, 0LL);
      gameObject = this->fields.partySelectBase;
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind == 8, 0LL);
      if ( setupInfo )
      {
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1097LL) )
        {
          v48 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_164;
          v48 = eventIdList->max_length != 0;
        }
        v51 = v48;
      }
      else
      {
        v51 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, v51, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_164;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v53 = 48LL;
      if ( v51 )
        v53 = 44LL;
      if ( !this->fields.autoSellButton )
        goto LABEL_164;
      v54 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + v53);
      v55 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.autoSellButton,
                                 0LL);
      v57 = PartyListMenu_TypeInfo;
      v58 = (UnityEngine_GameObject_o *)v55;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v57 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v55, v58, v57->static_fields->LAYOUT_FS_OFFSET, v54, 0, v56);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v51, 0LL);
      if ( this->fields.menuKind == 8 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v60);
        if ( !v59 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(v59, (unsigned __int8)gameObject & 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        transform = (PartyListMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        v63 = (UnityEngine_Transform_o *)transform;
        if ( v51 )
        {
          HELP_PANEL_OFFSET_1_FS = PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(transform, v62);
          y = HELP_PANEL_OFFSET_1_FS.fields.y;
          x = HELP_PANEL_OFFSET_1_FS.fields.x;
        }
        else
        {
          HELP_PANEL_OFFSET_2_FS = PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(transform, v62);
          y = HELP_PANEL_OFFSET_2_FS.fields.y;
          x = HELP_PANEL_OFFSET_2_FS.fields.x;
        }
        if ( !v63 )
          goto LABEL_164;
        v70 = 0;
        UnityEngine_Transform__set_localPosition(v63, *(UnityEngine_Vector3_o *)&x, 0LL);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_164;
        v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v68);
        if ( !v67 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(v67, (unsigned __int8)gameObject & 1, 0LL);
      }
      if ( this->fields.menuKind == 8 || !*p_questRestrictionInfo )
      {
        IsDisplayQuestInformation = 0;
      }
      else
      {
        questId = (*p_questRestrictionInfo)->fields.questId;
        if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyQuestInfoIconButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, IsDisplayQuestInformation, 0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v73);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_164;
      v74 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.assistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( (v74 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v78 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v75, v76, v77);
        v80 = System_String__Format((System_String_o *)StringLiteral_19555/*"event_recoverySync"*/, v79, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v78, v80, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v81);
        if ( !this->fields.assistConfirmButton )
          goto LABEL_164;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v115.fields.r = 1.0;
          v115.fields.g = 1.0;
          v115.fields.b = 1.0;
          v115.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v115, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          v82 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v116.fields.r = 0.5;
          v116.fields.g = 0.5;
          v116.fields.b = 0.5;
          v116.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v116, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          assistCanNotLabel = this->fields.assistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/, 0LL);
          if ( !assistCanNotLabel )
            goto LABEL_164;
          v82 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v82, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v83);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_164;
      v85 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( (v85 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v86 = (*p_questRestrictionInfo)->fields.eventId;
        v87 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(v87, (Il2CppObject *)this, Method_PartyListMenu__Open_b__104_0__, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI_39004564(v86, v87, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v88);
        if ( !this->fields.commandAssistConfirmButton )
          goto LABEL_164;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v117.fields.r = 1.0;
          v117.fields.g = 1.0;
          v117.fields.b = 1.0;
          v117.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v117, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          v89 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v118.fields.r = 0.5;
          v118.fields.g = 0.5;
          v118.fields.b = 0.5;
          v118.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v118, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          commandAssistCanNotLabel = this->fields.commandAssistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
          if ( !commandAssistCanNotLabel )
            goto LABEL_164;
          v89 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v89, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v90);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_164;
      v92 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.centerEffectLabelSp,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, v92 & 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v93 = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v95 = v93->fields.questId;
        questPhase = v93->fields.questPhase;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                   v95,
                                                   questPhase,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v96 = *p_questRestrictionInfo;
          if ( !*p_questRestrictionInfo )
            goto LABEL_164;
          v98 = v96->fields.questId;
          v97 = v96->fields.questPhase;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v98, v97, 0LL) )
          {
            gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v44);
            v99 = this->fields.questRestrictionInfo;
            if ( !v99 )
              goto LABEL_164;
            v100 = (char)gameObject;
            v102 = v99->fields.questId;
            v101 = v99->fields.questPhase;
            if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v102, v101, 0LL);
            if ( (v100 & 1) == 0 )
            {
              if ( !*p_questRestrictionInfo )
                goto LABEL_164;
              QuestHintDialogOpenManager__SetQuestInfo(
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                0LL);
              QuestHintDialogOpenManager__WriteData(0LL);
            }
            if ( !isRetry )
            {
              this->fields.isHintDialogOpenFlag = 1;
              if ( isOpenCallbackAfterCloseHintDialog )
              {
                v44 = (MethodInfo *)*p_openCallbackFunc;
                if ( *p_openCallbackFunc )
                {
                  this->fields.hintDialogCloseCallbackFunc = (struct System_Action_o *)v44;
                  sub_1C13CC8(&this->fields.hintDialogCloseCallbackFunc);
                  this->fields.openCallbackFunc = 0LL;
                  sub_1C13CC8(&this->fields.openCallbackFunc);
                }
              }
            }
          }
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      PartyListMenu__SetFriendshipUpItem(this, v44);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v103 = 56LL;
      if ( v51 )
        v103 = 52LL;
      if ( !this->fields.hintDialogButton )
        goto LABEL_164;
      v104 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + v103);
      v105 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                  0LL);
      v107 = PartyListMenu_TypeInfo;
      v108 = (UnityEngine_GameObject_o *)v105;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v107 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v105, v108, v107->static_fields->LAYOUT_FS_OFFSET, v104, 0, v106);
      v109 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v109 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v109->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_38735352(ClassBoardReleaseQuestId, -1, 0, 0LL) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(
          classInfoSpriteOrganization,
          (System_String_o *)StringLiteral_17942/*"button_lock_unreg"*/,
          0LL);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17942/*"button_lock_unreg"*/,
          0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_164:
        sub_1C13F80(gameObject, v44);
      PartyListViewManager__SetMode_32838380((PartyListViewManager_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      v112 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(v112, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v112, 0LL);
      return;
    case 2:
    case 3:
    case 7:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v37);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1C13CC8(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C13CC8(&this->fields.questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C13CC8(&this->fields.callbackFunc);
      v38 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C13CC8(&this->fields.openCallbackFunc);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v39 = *v38;
        if ( *v38 )
        {
          this->fields.hintDialogCloseCallbackFunc = v39;
          sub_1C13CC8(&this->fields.hintDialogCloseCallbackFunc);
          this->fields.openCallbackFunc = 0LL;
          sub_1C13CC8(&this->fields.openCallbackFunc);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v39);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v40);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v37);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1C13CC8(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C13CC8(&this->fields.questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C13CC8(&this->fields.callbackFunc);
      v49 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C13CC8(&this->fields.openCallbackFunc);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog && *v49 )
      {
        this->fields.hintDialogCloseCallbackFunc = *v49;
        sub_1C13CC8(&this->fields.hintDialogCloseCallbackFunc);
        this->fields.openCallbackFunc = 0LL;
        sub_1C13CC8(&this->fields.openCallbackFunc);
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_164;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_164;
      PartyListViewManager__SetMode_32838380((PartyListViewManager_o *)gameObject, 1, 0LL);
      PartyListMenu__EndOpen(this, v50);
      return;
    default:
      return;
  }
}


void __fastcall PartyListMenu__OpenAutoOrganizationConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0
  const MethodInfo *v5; // x3

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_7;
  CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
  method = (const MethodInfo *)CenterIndex;
  if ( (CenterIndex & 0x80000000) != 0 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( partyListViewManager )
    {
      ListViewManager__ScreenUpdate(partyListViewManager, 0LL);
      partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
      if ( partyListViewManager )
      {
        LODWORD(method) = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_1C13F80(partyListViewManager, method);
  }
LABEL_6:
  PartyListMenu__OpenAutoOrganizationConfirmDialog_32778288(this, (int32_t)method, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__OpenAutoOrganizationConfirmDialog_32778288(
        PartyListMenu_o *this,
        int32_t centerIndex,
        bool isAutoOpen,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  PartyListViewManager_o *partyListViewManager; // x0
  __int64 v15; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t eventId; // w22
  struct QuestRestrictionInfo_o *v18; // x8
  struct PartyOrganizationAutoOrganizationConfirmDialog_o **p_autoOrganizationConfirmDialogBuffExists; // x8
  char v20; // w23
  bool v21; // w24
  Il2CppObject *autoOrganizationConfirmDialogPrefabForAutoOpen; // x21
  UnityEngine_Transform_o *parent; // x26
  PartyOrganizationAutoOrganizationConfirmDialog_o *v24; // x21
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v25; // x25

  if ( (byte_4BB0266 & 1) == 0 )
  {
    sub_1C13D24(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, *(_QWORD *)&centerIndex);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    sub_1C13D24(&Method_PartyListMenu___c__DisplayClass137_0__OpenAutoOrganizationConfirmDialog_b__0__, v11);
    sub_1C13D24(&PartyListMenu___c__DisplayClass137_0_TypeInfo, v12);
    byte_4BB0266 = 1;
  }
  v13 = sub_1C13F70(PartyListMenu___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C13CC8(v13 + 32);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_22;
  PartyListViewManager__ForceJumpItem(partyListViewManager, centerIndex, 0LL);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    eventId = questRestrictionInfo->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    partyListViewManager = (PartyListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    v18 = this->fields.questRestrictionInfo;
    if ( !v18 || !partyListViewManager )
      goto LABEL_22;
    if ( QuestAutoOrganizationAdjustMaster__IsExistEntity(
           (QuestAutoOrganizationAdjustMaster_o *)partyListViewManager,
           v18->fields.questId,
           v18->fields.questPhase,
           0LL) )
    {
      p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialogBuffExists;
      v20 = 1;
      v21 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    eventId = 0;
  }
  v21 = 0;
  v20 = questRestrictionInfo != 0LL;
  p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialog;
LABEL_14:
  *(_QWORD *)(v13 + 16) = *p_autoOrganizationConfirmDialogBuffExists;
  sub_1C13CC8(v13 + 16);
  *(_BYTE *)(v13 + 24) = 0;
  if ( !isAutoOpen )
    goto LABEL_20;
  partyListViewManager = (PartyListViewManager_o *)this->fields.autoOrganizationConfirmDialog;
  if ( !partyListViewManager
    || (autoOrganizationConfirmDialogPrefabForAutoOpen = (Il2CppObject *)this->fields.autoOrganizationConfirmDialogPrefabForAutoOpen,
        (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)partyListViewManager,
                                                            0LL)) == 0LL) )
  {
LABEL_22:
    sub_1C13F80(partyListViewManager, v15);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)partyListViewManager, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  *(_QWORD *)(v13 + 16) = UnityEngine_Object__Instantiate_object__50417328(
                            autoOrganizationConfirmDialogPrefabForAutoOpen,
                            parent,
                            (const MethodInfo_3014EB0 *)Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
  sub_1C13CC8(v13 + 16);
  *(_BYTE *)(v13 + 24) = 1;
LABEL_20:
  v24 = *(PartyOrganizationAutoOrganizationConfirmDialog_o **)(v13 + 16);
  v25 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_1C13F70(PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
    v25,
    (Il2CppObject *)v13,
    Method_PartyListMenu___c__DisplayClass137_0__OpenAutoOrganizationConfirmDialog_b__0__,
    0LL);
  if ( !v24 )
    goto LABEL_22;
  PartyOrganizationAutoOrganizationConfirmDialog__Open(v24, eventId, v20, v21, isAutoOpen, v25, 0LL);
}


void __fastcall PartyListMenu__OpenHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v10; // x1
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t eventId; // w20
  System_Action_o *v13; // x21
  struct QuestRestrictionInfo_o *v14; // x8
  int32_t menuKind; // w8
  Il2CppObject *v16; // x19
  int32_t v17; // w2
  CommonUI_o *v18; // x0
  System_Action_o *v19; // x3
  const MethodInfo *v20; // x1
  Il2CppObject *Instance; // x20
  int v22; // w8
  TutorialFlag_ImageId_array *v23; // x21
  System_Action_o *v24; // x22

  if ( (byte_4BB0276 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&TutorialFlag_ImageId___TypeInfo, v3);
    sub_1C13D24(&Method_PartyListMenu_CheckFriendshipUpItemTutorial__, v4);
    sub_1C13D24(&Method_PartyListMenu_EndHelp__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&TutorialFlag_TypeInfo, v7);
    byte_4BB0276 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsTutorialDataExists = EventTutorialMaster__IsTutorialDataExists(
                             questRestrictionInfo->fields.eventId,
                             45,
                             questRestrictionInfo->fields.questId,
                             questRestrictionInfo->fields.questPhase,
                             0,
                             0,
                             0,
                             0LL);
    if ( (IsTutorialDataExists & 1) != 0 )
    {
      v11 = this->fields.questRestrictionInfo;
      if ( v11 )
      {
        eventId = v11->fields.eventId;
        v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
        v14 = this->fields.questRestrictionInfo;
        if ( v14 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v13, v14->fields.questId, v14->fields.questPhase, 0, 0, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1C13F80(IsTutorialDataExists, v10);
    }
  }
  menuKind = this->fields.menuKind;
  if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
  {
    if ( menuKind != 2 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_38831432(202, 0LL) )
      {
        PartyListMenu__CheckFriendshipUpItemTutorial(this, v20);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_1C13DCC(TutorialFlag_ImageId___TypeInfo, 2LL);
      if ( !IsTutorialDataExists )
        goto LABEL_29;
      v22 = *(_DWORD *)(IsTutorialDataExists + 24);
      v23 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( v22 )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 37;
        if ( v22 != 1 )
        {
          *(_DWORD *)(IsTutorialDataExists + 36) = 38;
          v24 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v24, (Il2CppObject *)this, Method_PartyListMenu_CheckFriendshipUpItemTutorial__, 0LL);
          if ( !Instance )
            goto LABEL_29;
          v17 = 202;
          v18 = (CommonUI_o *)Instance;
          v10 = v23;
          v19 = v24;
          goto LABEL_28;
        }
      }
LABEL_30:
      sub_1C13F88(IsTutorialDataExists, v10);
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38831432(205, 0LL) )
    {
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_1C13DCC(TutorialFlag_ImageId___TypeInfo, 1LL);
      if ( !IsTutorialDataExists )
        goto LABEL_29;
      v10 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( *(_DWORD *)(IsTutorialDataExists + 24) )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 644;
        if ( !v16 )
          goto LABEL_29;
        v17 = 205;
        v18 = (CommonUI_o *)v16;
        v19 = 0LL;
LABEL_28:
        CommonUI__OpenTutorialImageDialog(v18, v10, v17, v19, 0LL, 0LL, 0LL);
        return;
      }
      goto LABEL_30;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__SetButtonPosAndSize(
        PartyListMenu_o *this,
        UnityEngine_GameObject_o *buttonObj,
        float offset,
        int32_t posX,
        int32_t sizeX,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v13; // x20
  PartyListMenu_o *transform; // x24
  const MethodInfo *v15; // x1
  float v16; // s8
  float y; // s9
  int v18; // s2
  float v19; // s0
  float v20; // s1
  float v21; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB0252 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, buttonObj);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    this = (PartyListMenu_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    byte_4BB0252 = 1;
  }
  if ( !buttonObj )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v13 = UnityEngine_GameObject__GetComponent_object_(
          buttonObj,
          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  v16 = PartyListMenu__FSOffsetX_32761964(transform, offset, v15);
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_19;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  y = localPosition.fields.y;
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)(&v18 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v19 = (float)posX - v16;
  v20 = y;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)transform,
    *(UnityEngine_Vector3_o *)(&v18 - 2),
    0LL);
  if ( sizeX )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      UIWidget__set_width((UIWidget_o *)Component_object, sizeX, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v13 )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v13, 0LL);
        v21 = size.fields.y;
        v24 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v13, 0LL);
        v24.fields.x = (float)sizeX;
        v24.fields.y = v21;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v13, v24, 0LL);
        return;
      }
LABEL_19:
      sub_1C13F80(this, buttonObj);
    }
  }
}


void __fastcall PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListMenu_o *v3; // x19
  int32_t menuKind; // w8
  unsigned int v5; // w21
  Il2CppObject *partyStartButton; // x0
  Il2CppClass *klass; // x8
  unsigned int v8; // w20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned int v10; // w20
  UICommonButton_o *masterEquipButton; // x20
  const MethodInfo *v12; // x1

  v3 = this;
  if ( (byte_4BB0253 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    byte_4BB0253 = 1;
  }
  menuKind = v3->fields.menuKind;
  switch ( menuKind )
  {
    case 1:
    case 3:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
      goto LABEL_67;
    case 4:
    case 5:
    case 6:
    case 7:
      method = (const MethodInfo *)v3->fields.questRestrictionInfo;
      if ( menuKind == 6 )
        v5 = 3;
      else
        v5 = 0;
      if ( menuKind == 7 )
      {
        if ( !method )
          goto LABEL_25;
        if ( LODWORD(method[1].invoker_method) == 1 && BYTE3(method[4].methodMetadataHandle) )
          v5 = 3;
      }
      else if ( !method )
      {
        goto LABEL_25;
      }
      if ( BYTE2(method[4].methodMetadataHandle) )
        v5 = 0;
LABEL_25:
      if ( menuKind == 6 )
        v8 = 3;
      else
        v8 = PartyListMenu__CheckEnableAutoOrganizationButton(this, (QuestRestrictionInfo_o *)method, v2);
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v5,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v5,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v8,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
LABEL_67:
      ((void (*)(void))klass->vtable[14].method)();
      return;
    case 9:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      masterEquipButton = v3->fields.masterEquipButton;
      partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyStartButton )
        goto LABEL_70;
      if ( LOBYTE(partyStartButton[6].klass) )
      {
        partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !partyStartButton
          || (method = (const MethodInfo *)(LODWORD(partyStartButton[7].klass) == 1), !masterEquipButton) )
        {
LABEL_70:
          sub_1C13F80(partyStartButton, method);
        }
      }
      else
      {
        method = (const MethodInfo *)(&dword_0 + 1);
        if ( !masterEquipButton )
          goto LABEL_70;
      }
      UICommonButton__SetEnable(masterEquipButton, (bool)method, 0LL);
      PartyListMenu__SetFriendshipUpItem(v3, v12);
      return;
    default:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        v10 = questRestrictionInfo->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v10 = 0;
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v10,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v10,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
      goto LABEL_67;
  }
}


void __fastcall PartyListMenu__SetButtonStateSetFlag(PartyListMenu_o *this, bool flag, const MethodInfo *method)
{
  this->fields.buttonStateSetFlag = flag;
}


void __fastcall PartyListMenu__SetCenterItem(
        PartyListMenu_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, index);
  ListViewManager__JumpItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, method);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0LL);
}


void __fastcall PartyListMenu__SetFriendshipUpItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  const MethodInfo *v4; // x1
  _BOOL4 IsWaveBattleRestart_k__BackingField; // w20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  const MethodInfo *v8; // x4
  bool v9; // w2
  bool v10; // w3
  int32_t v11; // w1
  char v12; // w20
  char v13; // w21

  if ( (byte_4BB0288 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    byte_4BB0288 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  IsWaveBattleRestart_k__BackingField = Instance->fields._IsWaveBattleRestart_k__BackingField;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( IsWaveBattleRestart_k__BackingField )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_35;
    if ( !Instance )
      goto LABEL_35;
    InterruptionUseFriendshipUpItemId = PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
                                          Instance,
                                          questRestrictionInfo->fields.questId,
                                          questRestrictionInfo->fields.questPhase,
                                          0LL);
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
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
            FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, v4);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
            if ( Instance )
            {
              v9 = 1;
              v10 = 1;
              v11 = InterruptionUseFriendshipUpItemId;
LABEL_33:
              FriendshipUpItemSwitchComponent__SetWaveBattleRestart(
                (FriendshipUpItemSwitchComponent_o *)Instance,
                v11,
                v9,
                v10,
                v8);
              return;
            }
          }
        }
      }
      goto LABEL_35;
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
            FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, v4);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
            if ( Instance )
            {
              v9 = 1;
              v11 = InterruptionUseFriendshipUpItemId;
              v10 = 0;
              goto LABEL_33;
            }
          }
        }
      }
LABEL_35:
      sub_1C13F80(Instance, v4);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemSwitchComponent )
      goto LABEL_35;
    v13 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                               0LL);
    if ( !Instance )
      goto LABEL_35;
    if ( (v13 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
      if ( Instance )
      {
        FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, v4);
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
        if ( Instance )
        {
          v10 = 1;
          v11 = InterruptionUseFriendshipUpItemId;
          v9 = 0;
          goto LABEL_33;
        }
      }
      goto LABEL_35;
    }
  }
  else
  {
    if ( !Instance )
      goto LABEL_35;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemSwitchComponent )
      goto LABEL_35;
    v12 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                               0LL);
    if ( !Instance )
      goto LABEL_35;
    if ( (v12 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
      if ( Instance )
      {
        FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, v4);
        return;
      }
      goto LABEL_35;
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, enabled);
  UnityEngine_Behaviour__set_enabled(partyListViewManager, enabled, 0LL);
}


void __fastcall PartyListMenu__SetPartyDeck(
        PartyListMenu_o *this,
        PartyListViewItem_array *baseDeckItemList,
        int32_t partyNum,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__CreateList(
          partyListViewManager,
          this->fields.menuKind,
          baseDeckItemList,
          partyNum,
          setupInfo,
          questRestrictionInfo,
          friendBonusVal,
          0LL),
        (partyListViewManager = this->fields.partyListViewManager) == 0LL)
    || (ListViewManager__JumpItem((ListViewManager_o *)partyListViewManager, partyNum, 0LL),
        (partyListViewManager = this->fields.partyListViewManager) == 0LL) )
  {
    sub_1C13F80(partyListViewManager, baseDeckItemList);
  }
  PartyListViewManager__SetMode_32838380(partyListViewManager, 1, 0LL);
}


void __fastcall PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _BOOL8 v5; // x1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, v5);
  PartyListViewManager__SetScrollEnabled(partyListViewManager, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__SetStartButton(
        PartyListMenu_o *this,
        bool isBattle,
        bool isWaveBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *partyStartButtonTxtSp; // x22
  __int64 v9; // x1
  UISprite_o *v10; // x22
  void *v11; // x0
  uint32_t cctor_finished; // w8
  System_String_o **p_START_BUTTON_WAVE_BATTLE_SP; // x8
  __int64 v14; // x9

  if ( (byte_4BB0278 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isBattle);
    sub_1C13D24(&PartyListMenu_TypeInfo, v7);
    byte_4BB0278 = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0LL, 0LL) )
  {
    v10 = this->fields.partyStartButtonTxtSp;
    v11 = PartyListMenu_TypeInfo;
    cctor_finished = PartyListMenu_TypeInfo->_2.cctor_finished;
    if ( isWaveBattle )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      if ( !v10 )
        goto LABEL_19;
      p_START_BUTTON_WAVE_BATTLE_SP = &PartyListMenu_TypeInfo->static_fields->START_BUTTON_WAVE_BATTLE_SP;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      if ( !v10 )
        goto LABEL_19;
      v14 = 168LL;
      if ( isBattle )
        v14 = 176LL;
      p_START_BUTTON_WAVE_BATTLE_SP = (System_String_o **)((char *)PartyListMenu_TypeInfo->static_fields + v14);
    }
    UISprite__set_spriteName(v10, *p_START_BUTTON_WAVE_BATTLE_SP, 0LL);
    v11 = this->fields.partyStartButtonTxtSp;
    if ( v11 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v11 + 840LL))(v11, *(_QWORD *)(*(_QWORD *)v11 + 848LL));
      return;
    }
LABEL_19:
    sub_1C13F80(v11, v9);
  }
}


void __fastcall PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _DWORD *monitor; // x8
  int32_t v10; // w21
  int32_t v11; // w22
  System_String_o *message; // x20
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  Il2CppObject *Instance; // x23
  ScrollMessageDialog_ClickDelegate_o *v16; // x24
  QuestPhaseEntity_o *v17; // [xsp+8h] [xbp-48h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB0286 & 1) == 0 )
  {
    sub_1C13D24(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestHintMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_PartyListMenu__ShowHintDialogButton_b__177_0__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (PartyListMenu_o *)sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB0286 = 1;
  }
  entity = 0LL;
  v17 = 0LL;
  monitor = v2[31].monitor;
  if ( !monitor )
    goto LABEL_23;
  v11 = monitor[9];
  v10 = monitor[10];
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyListMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_23;
  this = (PartyListMenu_o *)QuestHintMaster__TryGetEntity((QuestHintMaster_o *)this, &entity, v11, v10, 0LL);
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
    this = (PartyListMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v17, v11, v10, 0LL) )
    {
      this = (PartyListMenu_o *)v17;
      if ( !v17 )
        goto LABEL_23;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessageTitle(v17, 0LL);
      if ( !v17 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessage(v17, 0LL);
      if ( !v17 )
        goto LABEL_23;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v17, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C13F70(ScrollMessageDialog_ClickDelegate_TypeInfo);
  ScrollMessageDialog_ClickDelegate___ctor(v16, v2, Method_PartyListMenu__ShowHintDialogButton_b__177_0__, 0LL);
  if ( !Instance )
LABEL_23:
    sub_1C13F80(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)Instance, title, message, leftIndent, v16, 0, 1, 0LL);
}


void __fastcall PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C13F80(0LL, index);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__UpdateFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0

  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  if ( !friendshipUpItemSwitchComponent )
    sub_1C13F80(0LL, method);
  FriendshipUpItemSwitchComponent__SetItemInfo(friendshipUpItemSwitchComponent, method);
}


void __fastcall PartyListMenu___OnClickAutoSell_b__131_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_1C13F80(0LL, res);
  DropAutoSellDlgComponent__Close_32741752(dropAutoSellDialog, 0LL, method);
}


void __fastcall PartyListMenu___OnClickFriendshipUpItemUseButton_b__179_0(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Callback(this, 20, v2);
}


void __fastcall PartyListMenu___Open_b__104_0(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w19
  Il2CppObject *Component_object; // x20

  v2 = this;
  if ( (byte_4BB028B & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    this = (PartyListMenu_o *)sub_1C13D24(&StringLiteral_17728/*"browser"*/, v4);
    byte_4BB028B = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v2->fields.commandAssistConfirmButton) == 0LL )
    sub_1C13F80(this, method);
  eventId = questRestrictionInfo->fields.eventId;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39004844(
    eventId,
    (UISprite_o *)Component_object,
    (System_String_o *)StringLiteral_17728/*"browser"*/,
    0LL);
}


void __fastcall PartyListMenu__add_callbackFunc(
        PartyListMenu_o *this,
        PartyListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListMenu_o *v10; // x0
  PartyListMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4BB024D & 1) == 0 )
  {
    sub_1C13D24(&PartyListMenu_CallbackFunc_TypeInfo, value);
    byte_4BB024D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v7->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C4F214(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C14240(v7);
  PartyListMenu__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BB024B & 1) == 0 )
  {
    sub_1C13D24(&PartyListMenu_TypeInfo, method);
    byte_4BB024B = 1;
  }
  v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  autoSellButton = v2->fields.autoSellButton;
  v5 = *(float *)&autoSellButton->klass;
  v4 = *((float *)&autoSellButton->klass + 1);
  v6 = v5 - PartyListMenu__FSOffsetX(v2, method);
  v7 = v4;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BB024C & 1) == 0 )
  {
    sub_1C13D24(&PartyListMenu_TypeInfo, method);
    byte_4BB024C = 1;
  }
  v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  autoSellButton = v2->fields.autoSellButton;
  v5 = *((float *)&autoSellButton->monitor + 1);
  v4 = *(float *)&autoSellButton->fields.m_CachedPtr;
  v6 = v5 - PartyListMenu__FSOffsetX(v2, method);
  v7 = v4;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void __fastcall PartyListMenu__remove_callbackFunc(
        PartyListMenu_o *this,
        PartyListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4BB024E & 1) == 0 )
  {
    sub_1C13D24(&PartyListMenu_CallbackFunc_TypeInfo, value);
    byte_4BB024E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v7->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C4F214(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C14240(v7);
  PartyListMenu__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu_CallbackFunc___ctor(
        PartyListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A4F3BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A4F35C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyListMenu_CallbackFunc__BeginInvoke(
        PartyListMenu_CallbackFunc_o *this,
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
  if ( (byte_4BB028C & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&PartyListMenu_ResultKind_TypeInfo, v10);
    byte_4BB028C = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v22, *(_QWORD *)&n, *(_QWORD *)&m, callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v18, callback, object);
}


void __fastcall PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall PartyListMenu_CallbackFunc__Invoke(
        PartyListMenu_CallbackFunc_o *this,
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


void __fastcall PartyListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4BB028D & 1) == 0 )
  {
    sub_1C13D24(&PartyListMenu___c_TypeInfo, v1);
    byte_4BB028D = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(PartyListMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyListMenu___c_TypeInfo->static_fields->__9 = (struct PartyListMenu___c_o *)v2;
  sub_1C13CC8(PartyListMenu___c_TypeInfo->static_fields);
}


void __fastcall PartyListMenu___c___ctor(PartyListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PartyListMenu___c___CheckFriendshipUpItemTutorial_b__157_0(
        PartyListMenu___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C13F80(this, 0LL);
  return info->fields._Id_k__BackingField;
}


System_Action_Action__o *__fastcall PartyListMenu___c___CheckFriendshipUpItemTutorial_b__157_1(
        PartyListMenu___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Action_object__o *v9; // x19

  if ( (byte_4BB028E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_Action__TypeInfo, info);
    sub_1C13D24(&Method_PartyListMenu___c__DisplayClass157_0__CheckFriendshipUpItemTutorial_b__2__, v4);
    sub_1C13D24(&PartyListMenu___c__DisplayClass157_0_TypeInfo, v5);
    byte_4BB028E = 1;
  }
  v6 = (Il2CppObject *)sub_1C13F70(PartyListMenu___c__DisplayClass157_0_TypeInfo);
  System_Object___ctor(v6, 0LL);
  if ( !v6 )
    sub_1C13F80(v7, v8);
  v6[1].klass = (Il2CppClass *)info;
  sub_1C13CC8(&v6[1]);
  v9 = (System_Action_object__o *)sub_1C13F70(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v9,
    v6,
    Method_PartyListMenu___c__DisplayClass157_0__CheckFriendshipUpItemTutorial_b__2__,
    0LL);
  return (System_Action_Action__o *)v9;
}


void __fastcall PartyListMenu___c__DisplayClass137_0___ctor(
        PartyListMenu___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu___c__DisplayClass137_0___OpenAutoOrganizationConfirmDialog_b__0(
        PartyListMenu___c__DisplayClass137_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog_o *dialog; // x0
  struct PartyListMenu_o *_4__this; // x8
  const MethodInfo *v7; // x2

  dialog = this->fields.dialog;
  if ( !dialog )
    goto LABEL_8;
  PartyOrganizationAutoOrganizationConfirmDialog__Close(dialog, this->fields.autoDestroy, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)_4__this->fields.partyListViewManager;
      _4__this->fields.state = 3;
      if ( dialog )
      {
        PartyListViewManager__SetMode_32838380((PartyListViewManager_o *)dialog, 1, 0LL);
        dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.__4__this;
        if ( dialog )
        {
          PartyListMenu__Callback((PartyListMenu_o *)dialog, 19, v7);
          return;
        }
      }
    }
LABEL_8:
    sub_1C13F80(dialog, isDecide);
  }
}


void __fastcall PartyListMenu___c__DisplayClass157_0___ctor(
        PartyListMenu___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyListMenu___c__DisplayClass157_0___CheckFriendshipUpItemTutorial_b__2(
        PartyListMenu___c__DisplayClass157_0_o *this,
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