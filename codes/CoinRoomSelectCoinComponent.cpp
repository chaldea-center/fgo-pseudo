void __fastcall CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A2301A & 1) == 0 )
  {
    sub_1B715CC(&BaseMenu_TypeInfo, method);
    byte_4A2301A = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
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
    sub_1B71828(0LL, method);
  CoinRoomCoinListViewManager__SetMode_44350408(coinListViewManager, 2, v2);
}


void __fastcall CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x1
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v20; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4A23019 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, result);
    sub_1B715CC(&CoinRoomUtility_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B715CC(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__, v7);
    sub_1B715CC(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v9);
    byte_4A23019 = 1;
  }
  v10 = sub_1B71818(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  v11 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22000/*"ng"*/, 0LL);
  if ( v11 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_10;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v10 + 24) = selectedCoinDic;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)selectedCoinDic, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v20 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v20->static_fields->EFFECT_FADE_TIME;
  v22 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_1B71828(v11, v12);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 1, EFFECT_FADE_TIME, v22, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v6; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0LL;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.beforeUserCoinRoomEntity, 0, v2, v3);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v6),
        (coinListViewManager = this->fields.coinListViewManager) == 0LL)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0LL)) == 0LL )
  {
    sub_1B71828(coinListViewManager, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)coinListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__OnClickDecide(
        CoinRoomSelectCoinComponent_o *this,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__object__o *v22; // x20
  const MethodInfo *v23; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_44337796; // x0
  __int64 v27; // x1
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  struct CoinRoomCoinListViewManager_o *v31; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v32; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4A23017 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_CoinRoomSelectCoinComponent_OnClickDecide__, v3);
    sub_1B715CC(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v4);
    sub_1B715CC(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9);
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v15);
    byte_4A23017 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( this->fields.state == 2 )
  {
    v16 = Method_CoinRoomSelectCoinComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSelectCoinComponent_OnClickDecide__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B715E4(Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B715B0(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 8, 0LL);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_21;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)coinListViewManager->fields.selectedCoinDic;
    v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v22,
      (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v36,
      selectedCoinDic,
      (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v37,
              (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v37.fields._current.fields.key;
      value = v37.fields._current.fields.value;
      CanStrength_44337796 = CoinRoomCoinIconItem__IsCanStrength_44337796(
                               (int32_t)v37.fields._current.fields.key,
                               1,
                               v23);
      if ( CanStrength_44337796 )
      {
        if ( !v22 )
          sub_1B71828(CanStrength_44337796, v27);
        System_Collections_Generic_Dictionary_int__object___Add(
          v22,
          key,
          value,
          (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v37,
      (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v18 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (const MethodInfo_2E680C4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v18 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v29 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0LL);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v22,
          v29,
          v30);
        return;
      }
LABEL_21:
      sub_1B71828(v18, v19);
    }
    v31 = this->fields.coinListViewManager;
    if ( !v31 )
      goto LABEL_21;
    v32 = v31->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v34 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL);
    if ( !confirmDialog )
      goto LABEL_21;
    CoinConfirmDialog__Open(confirmDialog, v32, v34, v35);
  }
}


void __fastcall CoinRoomSelectCoinComponent__OpenSelectCoinList(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *coinListPanel; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  UILabel_o *subTitle; // x20
  System_Action_o *v10; // x20

  if ( (byte_4A23016 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_CoinRoomSelectCoinComponent_EndOpen__, v3);
    sub_1B715CC(&LocalizationManager_TypeInfo, v4);
    sub_1B715CC(&StringLiteral_3619/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v5);
    byte_4A23016 = 1;
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
  CoinRoomSelectCoinComponent__Init(this, v7);
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
  CoinRoomCoinListViewManager__SetMode_44350408((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v8);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3619/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
  if ( !subTitle )
LABEL_13:
    sub_1B71828(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0LL);
  v10 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v10, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__RequestCoinRoomPut(
        CoinRoomSelectCoinComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CoinRoomUtility_c *v7; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21

  if ( (byte_4A23018 & 1) == 0 )
  {
    sub_1B715CC(&Method_CoinRoomSelectCoinComponent_EndRequest__, method);
    sub_1B715CC(&CoinRoomUtility_TypeInfo, v3);
    sub_1B715CC(&Method_NetworkManager_getRequest_CoinRoomRequest___, v4);
    sub_1B715CC(&NetworkManager_TypeInfo, v5);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A23018 = 1;
  }
  v7 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v7);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.beforeUserCoinRoomEntity,
    (int32_t)UserCoinRoomEntity,
    v9,
    v10);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_11;
  CoinConfirmDialog__Close_44332280(confirmDialog, 0LL, v12);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_object_(
                                           v16,
                                           (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_11:
    sub_1B71828(confirmDialog, v11);
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
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  CoinConfirmDialog_o *v5; // x20
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *methodPtr; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4A2301B & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    this = (CoinRoomSelectCoinComponent_o *)sub_1B715CC(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v3);
    byte_4A2301B = 1;
  }
  klass = v2[6].klass;
  if ( !klass
    || (v5 = (CoinConfirmDialog_o *)v2[7].klass,
        methodPtr = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)klass->vtable[11].methodPtr,
        v7 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL),
        !v5) )
  {
    sub_1B71828(this, method);
  }
  CoinConfirmDialog__Open(v5, methodPtr, v7, v8);
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
  const MethodInfo *v2; // x3
  CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *v3; // x19
  __int64 v4; // x1
  struct CoinRoomSelectCoinComponent_o *_4__this; // x8
  CommonUI_o *v6; // x19

  v3 = this;
  if ( (byte_4A2301C & 1) == 0 )
  {
    sub_1B715CC(&CoinRoomUtility_TypeInfo, method);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_1B715CC(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    v4);
    byte_4A2301C = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)_4__this->fields.coinRoomEffectComponent;
  if ( !this )
    goto LABEL_9;
  CoinRoomEffectComponent__OpenEffect(
    (CoinRoomEffectComponent_o *)this,
    _4__this->fields.beforeUserCoinRoomEntity,
    v3->fields.selectedValue,
    v2);
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v6 )
LABEL_9:
    sub_1B71828(this, method);
  CommonUI__maskFadein(v6, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}