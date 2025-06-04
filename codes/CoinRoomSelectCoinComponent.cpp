void __fastcall CoinRoomSelectCoinComponent___ctor(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B05A2C & 1) == 0 )
  {
    sub_1BC3008(&BaseMenu_TypeInfo, method);
    byte_4B05A2C = 1;
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
    sub_1BC3264(0LL, method);
  CoinRoomCoinListViewManager__SetMode_46874556(coinListViewManager, 2, v2);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x1
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v20; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4B05A2B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, result);
    sub_1BC3008(&CoinRoomUtility_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__, v7);
    sub_1BC3008(&CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v9);
    byte_4B05A2B = 1;
  }
  v10 = sub_1BC3254(CoinRoomSelectCoinComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  v11 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL);
  if ( v11 )
    return;
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_10;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  *(_QWORD *)(v10 + 24) = selectedCoinDic;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 24), (int32_t)selectedCoinDic, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v20 = CoinRoomUtility_TypeInfo;
  }
  EFFECT_FADE_TIME = v20->static_fields->EFFECT_FADE_TIME;
  v22 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_CoinRoomSelectCoinComponent___c__DisplayClass14_0__EndRequest_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_1BC3264(v11, v12);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 1, EFFECT_FADE_TIME, v22, 0LL);
}


void __fastcall CoinRoomSelectCoinComponent__Init(CoinRoomSelectCoinComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UserCoinRoomEntity_o **p_beforeUserCoinRoomEntity; // x20
  const MethodInfo *v6; // x1
  CoinRoomCoinListViewManager_o *coinListViewManager; // x0

  this->fields.beforeUserCoinRoomEntity = 0LL;
  p_beforeUserCoinRoomEntity = &this->fields.beforeUserCoinRoomEntity;
  this->fields.state = 0;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.beforeUserCoinRoomEntity, 0, v2, v3);
  coinListViewManager = (CoinRoomCoinListViewManager_o *)*(p_beforeUserCoinRoomEntity - 6);
  if ( !coinListViewManager
    || (CoinRoomCoinListViewManager__DestroyList(coinListViewManager, v6),
        (coinListViewManager = this->fields.coinListViewManager) == 0LL)
    || (coinListViewManager = (CoinRoomCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)coinListViewManager,
                                                                 0LL)) == 0LL )
  {
    sub_1BC3264(coinListViewManager, v6);
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
  int32_t key; // w21
  Il2CppObject *value; // x22
  _BOOL8 CanStrength_46859740; // x0
  __int64 v26; // x1
  CoinConfirmSliderDialog_o *confirmSliderDialog; // x21
  System_Action_o *v28; // x22
  struct CoinRoomCoinListViewManager_o *v29; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v30; // x21
  CoinConfirmDialog_o *confirmDialog; // x20
  System_Action_o *v32; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B05A29 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_CoinRoomSelectCoinComponent_OnClickDecide__, v3);
    sub_1BC3008(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v4);
    sub_1BC3008(&Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Key__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v15);
    byte_4B05A29 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( this->fields.state == 2 )
  {
    v16 = Method_CoinRoomSelectCoinComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSelectCoinComponent_OnClickDecide__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BC3020(Method_CoinRoomSelectCoinComponent_OnClickDecide__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 8, 0, 0LL);
    coinListViewManager = this->fields.coinListViewManager;
    if ( !coinListViewManager )
      goto LABEL_21;
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)coinListViewManager->fields.selectedCoinDic;
    v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v22,
      (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    if ( !selectedCoinDic )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v33,
      selectedCoinDic,
      (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    v34 = v33;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v34,
              (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
    {
      key = (int32_t)v34.fields._current.fields.key;
      value = v34.fields._current.fields.value;
      CanStrength_46859740 = CoinRoomCoinIconItem__IsCanStrength_46859740(
                               (int32_t)v34.fields._current.fields.key,
                               1,
                               0LL);
      if ( CanStrength_46859740 )
      {
        if ( !v22 )
          sub_1BC3264(CanStrength_46859740, v26);
        System_Collections_Generic_Dictionary_int__object___Add(
          v22,
          key,
          value,
          (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v34,
      (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    v18 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (const MethodInfo_300CCE4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    if ( v18 )
    {
      confirmSliderDialog = this->fields.confirmSliderDialog;
      v28 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent__OnClickDecide_b__12_0__, 0LL);
      if ( confirmSliderDialog )
      {
        CoinConfirmSliderDialog__Open(
          confirmSliderDialog,
          (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v22,
          v28,
          0LL);
        return;
      }
LABEL_21:
      sub_1BC3264(v18, v19);
    }
    v29 = this->fields.coinListViewManager;
    if ( !v29 )
      goto LABEL_21;
    v30 = v29->fields.selectedCoinDic;
    confirmDialog = this->fields.confirmDialog;
    v32 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL);
    if ( !confirmDialog )
      goto LABEL_21;
    CoinConfirmDialog__Open(confirmDialog, v30, v32, 0LL);
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

  if ( (byte_4B05A28 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_CoinRoomSelectCoinComponent_EndOpen__, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_3520/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v5);
    byte_4B05A28 = 1;
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
  CoinRoomCoinListViewManager__SetMode_46874556((CoinRoomCoinListViewManager_o *)coinListPanel, 1, v8);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  coinListPanel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3520/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
  if ( !subTitle )
LABEL_13:
    sub_1BC3264(coinListPanel, method);
  UILabel__set_text(subTitle, (System_String_o *)coinListPanel, 0LL);
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  CoinConfirmDialog_o *confirmDialog; // x0
  struct CoinRoomCoinListViewManager_o *coinListViewManager; // x8
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  NetworkManager_ResultCallbackFunc_o *v15; // x21

  if ( (byte_4B05A2A & 1) == 0 )
  {
    sub_1BC3008(&Method_CoinRoomSelectCoinComponent_EndRequest__, method);
    sub_1BC3008(&CoinRoomUtility_TypeInfo, v3);
    sub_1BC3008(&Method_NetworkManager_getRequest_CoinRoomRequest___, v4);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4B05A2A = 1;
  }
  v7 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v7);
  this->fields.beforeUserCoinRoomEntity = UserCoinRoomEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.beforeUserCoinRoomEntity, (int32_t)UserCoinRoomEntity, v9, v10);
  confirmDialog = this->fields.confirmDialog;
  if ( !confirmDialog )
    goto LABEL_11;
  CoinConfirmDialog__Close(confirmDialog, 0LL);
  coinListViewManager = this->fields.coinListViewManager;
  if ( !coinListViewManager )
    goto LABEL_11;
  selectedCoinDic = coinListViewManager->fields.selectedCoinDic;
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CoinRoomSelectCoinComponent_EndRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  confirmDialog = (CoinConfirmDialog_o *)NetworkManager__getRequest_object_(
                                           v15,
                                           (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CoinRoomRequest___);
  if ( !confirmDialog )
LABEL_11:
    sub_1BC3264(confirmDialog, v11);
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

  v2 = (Il2CppObject *)this;
  if ( (byte_4B05A2D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (CoinRoomSelectCoinComponent_o *)sub_1BC3008(&Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, v3);
    byte_4B05A2D = 1;
  }
  klass = v2[6].klass;
  if ( !klass
    || (v5 = (CoinConfirmDialog_o *)v2[7].klass,
        methodPtr = (System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)klass->vtable[11].methodPtr,
        v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_CoinRoomSelectCoinComponent_RequestCoinRoomPut__, 0LL),
        !v5) )
  {
    sub_1BC3264(this, method);
  }
  CoinConfirmDialog__Open(v5, methodPtr, v7, 0LL);
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
  if ( (byte_4B05A2E & 1) == 0 )
  {
    sub_1BC3008(&CoinRoomUtility_TypeInfo, method);
    this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)sub_1BC3008(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    v4);
    byte_4B05A2E = 1;
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
  this = (CoinRoomSelectCoinComponent___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v6 )
LABEL_9:
    sub_1BC3264(this, method);
  CommonUI__maskFadein(v6, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}