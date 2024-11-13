void __fastcall CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19818 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B19818 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__Close(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomSelectCoinComponent__EndOpen(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  coinListViewManager = this->fields.coinListViewManager;
  this->fields.state = 2;
  if ( !coinListViewManager )
    sub_1BCAA3C(0LL, method);
  CoinRoomCoinListViewManager__SetMode_45366352(coinListViewManager, 2, v2);
}


void __fastcall CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  int64_t selectedCoinDic; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v37; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v39; // x21

  if ( (byte_4B19817 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__, v10, v11);
    sub_1BCA7E0(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v14, v15);
    byte_4B19817 = 1;
  }
  v16 = sub_1BCAA2C(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, result, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  v17 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL);
  if ( v17 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_10;
  selectedCoinDic = (int64_t)coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v16 + 24) = selectedCoinDic;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), selectedCoinDic, v25, v26, v27, v28, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v33);
    v37 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v37->static_fields->EFFECT_FADE_TIME;
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v16,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(v17, v18);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 1, EFFECT_FADE_TIME, v39, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v10; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0LL;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.beforeUserCoinRoomEntity, 0LL, v2, v3, v4, v5, v6, v7);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v10),
        (coinListViewManager = this->fields.coinListViewManager) == 0LL)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0LL)) == 0LL )
  {
    sub_1BCAA3C(coinListViewManager, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)coinListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__OnClickDecide(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__object__o *v38; // x20
  const MethodInfo *v39; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_45353740; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v47; // x22
  const MethodInfo *v48; // x3
  struct CoinRoomCoinListViewManager_o *v49; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v50; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v52; // x22
  const MethodInfo *v53; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B19815 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CoinRoomSelectCoinComponent_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v6, v7);
    sub_1BCA7E0(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v22, v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v24,
      v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v28, v29);
    byte_4B19815 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( this->fields.state == 2 )
  {
    v30 = Method_CoinRoomSelectCoinComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSelectCoinComponent_OnClickDecide__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 8, 0LL);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_21;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)coinListViewManager->fields.selectedCoinDic;
    v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                    v33,
                                                                    v34,
                                                                    v35);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v38,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v54,
      selectedCoinDic,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v55 = v54;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v55,
              (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v55.fields._current.fields.key;
      value = v55.fields._current.fields.value;
      CanStrength_45353740 = CoinRoomCoinIconItem__IsCanStrength_45353740(
                               (int32_t)v55.fields._current.fields.key,
                               1,
                               v39);
      if ( CanStrength_45353740 )
      {
        if ( !v38 )
          sub_1BCAA3C(CanStrength_45353740, v43);
        System_Collections_Generic_Dictionary_int__object___Add(
          v38,
          key,
          value,
          (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v55,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v32 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
            (System_Collections_Generic_IEnumerable_TSource__o *)v38,
            (const MethodInfo_2F1DB4C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v32 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v44, v45);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0LL);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v38,
          v47,
          v48);
        return;
      }
LABEL_21:
      sub_1BCAA3C(v32, v33);
    }
    v49 = this->fields.coinListViewManager;
    if ( !v49 )
      goto LABEL_21;
    v50 = v49->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v44, v45);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL);
    if ( !confirmDialog )
      goto LABEL_21;
    CoinConfirmDialog__Open(confirmDialog, v50, v52, v53);
  }
}


void __fastcall CoinRoomSelectCoinComponent__OpenSelectCoinList(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *coinListPanel; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  UILabel_o *subTitle; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B19814 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CoinRoomSelectCoinComponent_EndOpen__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3667/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v8, v9);
    byte_4B19814 = 1;
  }
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  coinListPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !coinListPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  if ( this->fields.state )
    return;
  CoinRoomSelectCoinComponent__Init(this, v11);
  this->fields.state = 1;
  coinListPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !coinListPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL);
  coinListPanel = (UnityEngine_GameObject_o *)this->fields.coinListViewManager;
  if ( !coinListPanel )
    goto LABEL_13;
  CoinRoomCoinListViewManager__CreateInitList((CoinRoomCoinListViewManager_o *)coinListPanel, method);
  coinListPanel = (UnityEngine_GameObject_o *)this->fields.coinListViewManager;
  if ( !coinListPanel )
    goto LABEL_13;
  CoinRoomCoinListViewManager__SetMode_45366352((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v12);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3667/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
  if ( !subTitle )
LABEL_13:
    sub_1BCAA3C(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0LL);
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v18, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__RequestCoinRoomPut(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  CoinRoomUtility_c *v12; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  __int64 v28; // x1

  if ( (byte_4B19816 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinRoomSelectCoinComponent_EndRequest__, method, v2);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CoinRoomRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B19816 = 1;
  }
  v12 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v12);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.beforeUserCoinRoomEntity,
    (int64_t)UserCoinRoomEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_11;
  CoinConfirmDialog__Close_45348224(confirmDialog, 0LL, v21);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v20, v23, v24);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_object_(
                                           v27,
                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_11:
    sub_1BCAA3C(confirmDialog, v20);
  CoinRoomRequest__BeginRequest((CoinRoomRequest_o *)confirmDialog, selectedCoinDic, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__RequestNG(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomSelectCoinComponent___OnClickDecide_b__12_0(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppClass *klass; // x8
  CoinConfirmDialog_o *v8; // x20
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *methodPtr; // x21
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19819 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (CoinRoomSelectCoinComponent_o *)sub_1BCA7E0(
                                              &Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__,
                                              v5,
                                              v6);
    byte_4B19819 = 1;
  }
  klass = v4[6].klass;
  if ( !klass
    || (v8 = (CoinConfirmDialog_o *)v4[7].klass,
        methodPtr = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)klass->vtable[11].methodPtr,
        v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v10, v4, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL),
        !v8) )
  {
    sub_1BCAA3C(this, method);
  }
  CoinConfirmDialog__Open(v8, methodPtr, v10, v11);
}


void __fastcall CoinRoomSelectCoinComponent___c__DisplayClass14_0___ctor(
        CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent___c__DisplayClass14_0___EndRequest_b__0(
        CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct CoinRoomSelectCoinComponent_o *_4__this; // x8
  CommonUI_o *v8; // x19

  v4 = this;
  if ( (byte_4B1981A & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, method, v2);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_1BCA7E0(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    v5,
                                                                    v6);
    byte_4B1981A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)_4__this->fields.coinRoomEffectComponent;
  if ( !this )
    goto LABEL_9;
  CoinRoomEffectComponent__OpenEffect(
    (CoinRoomEffectComponent_o *)this,
    _4__this->fields.beforeUserCoinRoomEntity,
    v4->fields.selectedValue,
    v3);
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  if ( !v8 )
LABEL_9:
    sub_1BCAA3C(this, method);
  CommonUI__maskFadein(v8, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}