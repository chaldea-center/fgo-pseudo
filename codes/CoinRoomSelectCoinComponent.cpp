void CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D30667 & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D30667 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void CoinRoomSelectCoinComponent__Close(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void CoinRoomSelectCoinComponent__EndOpen(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  coinListViewManager = this->fields.coinListViewManager;
  this->fields.state = 2;
  if ( !coinListViewManager )
    sub_1C942F0(0, method);
  CoinRoomCoinListViewManager__SetMode_49067248(coinListViewManager, 2, v2);
}


void CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x1
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v23; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_4D30666 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__);
    sub_1C94098(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D30666 = 1;
  }
  v5 = sub_1C942E4(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v6 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22424/*"ng"*/, 0);
  if ( v6 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_10;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v5 + 24) = selectedCoinDic;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)selectedCoinDic, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v23 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v23->static_fields->EFFECT_FADE_TIME;
  v25 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0);
  if ( !Instance )
LABEL_10:
    sub_1C942F0(v6, v7);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 1, EFFECT_FADE_TIME, v25, 0);
}


void CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v10; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.beforeUserCoinRoomEntity, 0, v2, v3, v4, v5, v6, v7);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v10),
        (coinListViewManager = this->fields.coinListViewManager) == 0)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0)) == 0 )
  {
    sub_1C942F0(coinListViewManager, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)coinListViewManager, 0, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void CoinRoomSelectCoinComponent__OnClickDecide(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  const MethodInfo *v10; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_49054680; // x0
  __int64 v14; // x1
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3
  struct CoinRoomCoinListViewManager_o *v18; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v19; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4D30664 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    sub_1C94098(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    sub_1C94098(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4D30664 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSelectCoinComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSelectCoinComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_21;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)coinListViewManager->fields.selectedCoinDic;
    v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v9,
      (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v23,
      selectedCoinDic,
      (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v24,
              (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v24.fields._current.fields.key;
      value = v24.fields._current.fields.value;
      CanStrength_49054680 = CoinRoomCoinIconItem__IsCanStrength_49054680(
                               (int32_t)v24.fields._current.fields.key,
                               1,
                               v10);
      if ( CanStrength_49054680 )
      {
        if ( !v9 )
          sub_1C942F0(CanStrength_49054680, v14);
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          key,
          value,
          (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v24,
      (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v5 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_31A6FB4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v5 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v9,
          v16,
          v17);
        return;
      }
LABEL_21:
      sub_1C942F0(v5, v6);
    }
    v18 = this->fields.coinListViewManager;
    if ( !v18 )
      goto LABEL_21;
    v19 = v18->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0);
    if ( !confirmDialog )
      goto LABEL_21;
    CoinConfirmDialog__Open(confirmDialog, v19, v21, v22);
  }
}


void CoinRoomSelectCoinComponent__OpenSelectCoinList(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *coinListPanel; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  UILabel_o *subTitle; // x20
  System_Action_o *v7; // x20

  if ( (byte_4D30663 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CoinRoomSelectCoinComponent_EndOpen__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3562/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    byte_4D30663 = 1;
  }
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0);
  coinListPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !coinListPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0);
  if ( this->fields.state )
    return;
  CoinRoomSelectCoinComponent__Init(this, v4);
  this->fields.state = 1;
  coinListPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !coinListPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(coinListPanel, 1, 0);
  coinListPanel = (UnityEngine_GameObject_o *)this->fields.coinListViewManager;
  if ( !coinListPanel )
    goto LABEL_13;
  CoinRoomCoinListViewManager__CreateInitList((CoinRoomCoinListViewManager_o *)coinListPanel, method);
  coinListPanel = (UnityEngine_GameObject_o *)this->fields.coinListViewManager;
  if ( !coinListPanel )
    goto LABEL_13;
  CoinRoomCoinListViewManager__SetMode_49067248((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v5);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3562/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0);
  if ( !subTitle )
LABEL_13:
    sub_1C942F0(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0);
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0);
}


void CoinRoomSelectCoinComponent__RequestCoinRoomPut(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21

  if ( (byte_4D30665 & 1) == 0 )
  {
    sub_1C94098(&Method_CoinRoomSelectCoinComponent_EndRequest__);
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_NetworkManager_getRequest_CoinRoomRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D30665 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v3);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.beforeUserCoinRoomEntity,
    (int32_t)UserCoinRoomEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_11;
  CoinConfirmDialog__Close_49048908(confirmDialog, 0, v12);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_object_(
                                           v16,
                                           (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_11:
    sub_1C942F0(confirmDialog, v11);
  CoinRoomRequest__BeginRequest((CoinRoomRequest_o *)confirmDialog, selectedCoinDic, 0);
}


void CoinRoomSelectCoinComponent__RequestNG(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void CoinRoomSelectCoinComponent___OnClickDecide_b__12_0(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  CoinConfirmDialog_o *v4; // x20
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v5; // x21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4D30668 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (CoinRoomSelectCoinComponent_o *)sub_1C94098(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    byte_4D30668 = 1;
  }
  klass = v2[6].klass;
  if ( !klass
    || (v4 = (CoinConfirmDialog_o *)v2[7].klass,
        v5 = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)klass->vtable[10].method,
        v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0),
        !v4) )
  {
    sub_1C942F0(this, method);
  }
  CoinConfirmDialog__Open(v4, v5, v6, v7);
}


void CoinRoomSelectCoinComponent___c__DisplayClass14_0___ctor(
        CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CoinRoomSelectCoinComponent___c__DisplayClass14_0___EndRequest_b__0(
        CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *v3; // x19
  struct CoinRoomSelectCoinComponent_o *_4__this; // x8
  CommonUI_o *v5; // x19

  v3 = this;
  if ( (byte_4D30669 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30669 = 1;
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
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v5 )
LABEL_9:
    sub_1C942F0(this, method);
  CommonUI__maskFadein(v5, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0, 0);
}