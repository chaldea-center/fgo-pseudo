void CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AF38 & 1) == 0 )
  {
    sub_1C2D490(&BaseMenu_TypeInfo);
    byte_4C2AF38 = 1;
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
    sub_1C2D6EC(0, method);
  CoinRoomCoinListViewManager__SetMode_47912236(coinListViewManager, 2, v2);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x1
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v15; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4C2AF37 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__);
    sub_1C2D490(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C2AF37 = 1;
  }
  v5 = sub_1C2D6DC(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  v6 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0);
  if ( v6 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_10;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v5 + 24) = selectedCoinDic;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)selectedCoinDic, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v15 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v15->static_fields->EFFECT_FADE_TIME;
  v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(v6, v7);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 1, EFFECT_FADE_TIME, v17, 0);
}


void CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v6; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.beforeUserCoinRoomEntity, 0, v2, v3);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v6),
        (coinListViewManager = this->fields.coinListViewManager) == 0)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0)) == 0 )
  {
    sub_1C2D6EC(coinListViewManager, v6);
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
  _BOOL8 CanStrength_47899668; // x0
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

  if ( (byte_4C2AF35 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    sub_1C2D490(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    sub_1C2D490(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4C2AF35 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSelectCoinComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSelectCoinComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_21;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)coinListViewManager->fields.selectedCoinDic;
    v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v9,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v23,
      selectedCoinDic,
      (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v24,
              (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v24.fields._current.fields.key;
      value = v24.fields._current.fields.value;
      CanStrength_47899668 = CoinRoomCoinIconItem__IsCanStrength_47899668(
                               (int32_t)v24.fields._current.fields.key,
                               1,
                               v10);
      if ( CanStrength_47899668 )
      {
        if ( !v9 )
          sub_1C2D6EC(CanStrength_47899668, v14);
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          key,
          value,
          (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v24,
      (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v5 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_30D97D0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v5 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
      sub_1C2D6EC(v5, v6);
    }
    v18 = this->fields.coinListViewManager;
    if ( !v18 )
      goto LABEL_21;
    v19 = v18->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C2AF34 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CoinRoomSelectCoinComponent_EndOpen__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3550/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    byte_4C2AF34 = 1;
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
  CoinRoomCoinListViewManager__SetMode_47912236((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v5);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3550/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0);
  if ( !subTitle )
LABEL_13:
    sub_1C2D6EC(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0);
}


void CoinRoomSelectCoinComponent__RequestCoinRoomPut(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v12; // x21

  if ( (byte_4C2AF36 & 1) == 0 )
  {
    sub_1C2D490(&Method_CoinRoomSelectCoinComponent_EndRequest__);
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_CoinRoomRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C2AF36 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v3);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.beforeUserCoinRoomEntity, (int32_t)UserCoinRoomEntity, v5, v6);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_11;
  CoinConfirmDialog__Close_47893900(confirmDialog, 0, v8);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_object_(
                                           v12,
                                           (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_11:
    sub_1C2D6EC(confirmDialog, v7);
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
  if ( (byte_4C2AF39 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (CoinRoomSelectCoinComponent_o *)sub_1C2D490(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    byte_4C2AF39 = 1;
  }
  klass = v2[6].klass;
  if ( !klass
    || (v4 = (CoinConfirmDialog_o *)v2[7].klass,
        v5 = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)klass->vtable[10].method,
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0),
        !v4) )
  {
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C2AF3A & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AF3A = 1;
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
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v5 )
LABEL_9:
    sub_1C2D6EC(this, method);
  CommonUI__maskFadein(v5, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0, 0);
}