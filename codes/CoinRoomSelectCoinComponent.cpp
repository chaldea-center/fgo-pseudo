void CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5974849 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_5974849 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_2213CDC(0, method);
  CoinRoomCoinListViewManager__SetMode_55496228(coinListViewManager, 2, v2);
}


void CoinRoomSelectCoinComponent__EndRequest(
        CoinRoomSelectCoinComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x1
  __int64 v22; // x1
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v24; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_5974848 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__);
    sub_2213A60(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5974848 = 1;
  }
  v5 = sub_2213CCC(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v6 = System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
  if ( v6 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_10;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v5 + 24) = selectedCoinDic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)selectedCoinDic, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v22);
    v24 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v24->static_fields->EFFECT_FADE_TIME;
  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0);
  if ( !Instance )
LABEL_10:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 1, EFFECT_FADE_TIME, v26, 0);
}


void CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v10; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.beforeUserCoinRoomEntity, 0, v2, v3, v4, v5, v6, v7);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v10),
        (coinListViewManager = this->fields.coinListViewManager) == 0)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0)) == 0 )
  {
    sub_2213CDC(coinListViewManager, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)coinListViewManager, 0, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void CoinRoomSelectCoinComponent__OnClickDecide(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x21
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  const MethodInfo *v11; // x2
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_55483732; // x0
  __int64 v15; // x1
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3
  struct CoinRoomCoinListViewManager_o *v19; // x8
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_5974846 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    sub_2213A60(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    sub_2213A60(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_5974846 = 1;
  }
  state = this->fields.state;
  memset(&v25, 0, sizeof(v25));
  if ( state == 2 )
  {
    v4 = Method_CoinRoomSelectCoinComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSelectCoinComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_21;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)coinListViewManager->fields.selectedCoinDic;
    v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v10,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v24,
      selectedCoinDic,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v25 = v24;
    v24.fields._dictionary = 0;
    *(_QWORD *)&v24.fields._version = &v25;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v25,
              (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v25.fields._current.fields.key;
      value = v25.fields._current.fields.value;
      CanStrength_55483732 = CoinRoomCoinIconItem__IsCanStrength_55483732(
                               (int32_t)v25.fields._current.fields.key,
                               1,
                               v11);
      if ( CanStrength_55483732 )
      {
        if ( !v10 )
          sub_2213CDC(CanStrength_55483732, v15);
        System_Collections_Generic_Dictionary_int__object___Add(
          v10,
          key,
          value,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v25,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v6 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v10,
           (const MethodInfo_38653BC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v6 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v10,
          v17,
          v18);
        return;
      }
LABEL_21:
      sub_2213CDC(v6, v7);
    }
    v19 = this->fields.coinListViewManager;
    if ( !v19 )
      goto LABEL_21;
    confirmDialog = this->fields.confirmDialog;
    v21 = v19->fields.selectedCoinDic;
    v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0);
    if ( !confirmDialog )
      goto LABEL_21;
    CoinConfirmDialog__Open(confirmDialog, v21, v22, v23);
  }
}


void CoinRoomSelectCoinComponent__OpenSelectCoinList(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *coinListPanel; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UILabel_o *subTitle; // x20
  System_Action_o *v8; // x20

  if ( (byte_5974845 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinRoomSelectCoinComponent_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3699/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    byte_5974845 = 1;
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
  CoinRoomCoinListViewManager__SetMode_55496228((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v5);
  subTitle = this->fields.subTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3699/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0);
  if ( !subTitle )
LABEL_13:
    sub_2213CDC(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v8, 0);
}


void CoinRoomSelectCoinComponent__RequestCoinRoomPut(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  struct UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  __int64 v17; // x1

  if ( (byte_5974847 & 1) == 0 )
  {
    sub_2213A60(&Method_CoinRoomSelectCoinComponent_EndRequest__);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_CoinRoomRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5974847 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v3);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beforeUserCoinRoomEntity,
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
  CoinConfirmDialog__Close_55478056(confirmDialog, 0, v12);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_object_(
                                           v16,
                                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_11:
    sub_2213CDC(confirmDialog, v11);
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
  if ( (byte_597484A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (CoinRoomSelectCoinComponent_o *)sub_2213A60(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__);
    byte_597484A = 1;
  }
  klass = v2[6].klass;
  if ( !klass
    || (v4 = (CoinConfirmDialog_o *)v2[7].klass,
        v5 = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)klass->vtable[10].method,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0),
        !v4) )
  {
    sub_2213CDC(this, method);
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
  if ( (byte_597484B & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597484B = 1;
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
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)this;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  if ( !v5 )
LABEL_9:
    sub_2213CDC(this, method);
  CommonUI__maskFadein(v5, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0, 0);
}