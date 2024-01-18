void __fastcall RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4186155 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4186155 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__Callback(RecoverDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  RecoverDlgComponent_CallbackFunc_o *v9; // x20
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    RecoverDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_418614F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_RecoverDlgComponent_EndClose__, v3);
    byte_418614F = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0LL);
  RecoverDlgComponent__Close_21928536(this, v4, v5);
}


void __fastcall RecoverDlgComponent__Close_21928536(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_Behaviour_o *v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v24; // x21

  if ( (byte_4186150 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, v6);
    sub_B2C35C(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, v7);
    byte_4186150 = 1;
  }
  v8 = sub_B2C42C(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  RecoverDlgComponent___c__DisplayClass21_0___ctor((RecoverDlgComponent___c__DisplayClass21_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  this->fields.isClosed = 1;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v9 )
    {
      UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(v9, v10);
  }
LABEL_10:
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v8, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v24, 0LL);
}


void __fastcall RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall RecoverDlgComponent__EndOpen(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RecoverDlgComponent__EndRequestUserGameActRecover(
        RecoverDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  RecoverDlgComponent__Callback(this, 2, method);
}


void __fastcall RecoverDlgComponent__Init(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4186153 & 1) == 0 )
  {
    sub_B2C35C(&Method_RecoverDlgComponent_OnClickClose__, method);
    byte_4186153 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_RecoverDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    RecoverDlgComponent__Callback(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent__OpenApRecvItemDlg(
        RecoverDlgComponent_o *this,
        int32_t needAp,
        RecoverDlgComponent_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v30; // x1
  UILabel_o *titleDetailLabel; // x22
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  UnityEngine_Object_o *tradeApButton; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_c *klass; // x8
  System_String_o *v42; // x22
  unsigned __int64 v43; // x27
  RecoverEntity_o *v44; // x24
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v47; // x23
  UnityEngine_Transform_o *v48; // x25
  int v49; // s0
  RecoverItemComponent_o *Component_srcLineSprite; // x25
  RecoverItemComponent_CallbackFunc_o *v53; // x26
  System_Action_o *v54; // x20
  __int64 v55; // x0

  if ( (byte_418614C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&needAp);
    sub_B2C35C(&RecoverItemComponent_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_RecoverMaster___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_RecoverDlgComponent_EndOpen__, v17);
    sub_B2C35C(&Method_RecoverDlgComponent_requestRecover__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&StringLiteral_1722/*"APRECV_TITILE_DETAIL_TXT"*/, v20);
    sub_B2C35C(&StringLiteral_1723/*"APRECV_TITILE_TXT"*/, v21);
    byte_418614C = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.needAp = needAp;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1723/*"APRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1722/*"APRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_36;
  UILabel__set_text(titleDetailLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  apSeedExchangeMgr = (UnityEngine_Object_o *)this->fields.apSeedExchangeMgr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0LL, 0LL) )
  {
    gameObject = (System_String_o *)this->fields.apSeedExchangeMgr;
    if ( !gameObject )
      goto LABEL_36;
    TerminalApSeedExchangeManager__Initialize((TerminalApSeedExchangeManager_o *)gameObject, 0LL);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    gameObject = (System_String_o *)this->fields.tradeApButton;
    if ( !gameObject )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.recoverItemList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  gameObject = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0LL
    || (gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0LL)) == 0LL
    || (gameObject = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)gameObject,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0LL )
  {
LABEL_36:
    sub_B2C434(gameObject, v30);
  }
  klass = gameObject[1].klass;
  v42 = gameObject;
  if ( (int)klass >= 1 )
  {
    v43 = 0LL;
    do
    {
      if ( v43 >= (unsigned int)klass )
      {
        v55 = sub_B2C460(gameObject);
        sub_B2C400(v55, 0LL);
      }
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_36;
      v44 = (RecoverEntity_o *)*((_QWORD *)&v42[1].monitor + v43);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (System_String_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        itemListObj,
                                        transform,
                                        0LL,
                                        0LL);
      if ( !gameObject )
        goto LABEL_36;
      v47 = (UnityEngine_GameObject_o *)gameObject;
      v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v48 )
        goto LABEL_36;
      UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
      Component_srcLineSprite = (RecoverItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v47,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v53 = (RecoverItemComponent_CallbackFunc_o *)sub_B2C42C(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v53,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_36;
      RecoverItemComponent__setAPRecvItemInfo(Component_srcLineSprite, v44, needAp, this, v53, 0LL);
      gameObject = (System_String_o *)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_36;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
      UnityEngine_GameObject__SetActive(v47, 1, 0LL);
      LODWORD(klass) = v42[1].klass;
    }
    while ( (__int64)++v43 < (int)klass );
  }
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_36;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent__OpenRpRecvItemDlg(
        RecoverDlgComponent_o *this,
        int32_t needRp,
        RecoverDlgComponent_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v26; // x1
  UILabel_o *titleDetailLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v29; // x22
  unsigned __int64 v30; // x27
  RecoverEntity_o *v31; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v34; // x24
  UnityEngine_Transform_o *v35; // x25
  int v36; // s0
  RecoverItemComponent_o *Component_srcLineSprite; // x25
  RecoverItemComponent_CallbackFunc_o *v40; // x26
  System_Action_o *v41; // x20
  __int64 v42; // x0

  if ( (byte_418614E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&needRp);
    sub_B2C35C(&RecoverItemComponent_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_RecoverMaster___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_RecoverDlgComponent_EndOpen__, v13);
    sub_B2C35C(&Method_RecoverDlgComponent_requestRecover__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_11258/*"RPRECV_TITILE_TXT"*/, v16);
    sub_B2C35C(&StringLiteral_11257/*"RPRECV_TITILE_DETAIL_TXT"*/, v17);
    byte_418614E = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11258/*"RPRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11257/*"RPRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_23;
  UILabel__set_text(titleDetailLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)gameObject,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_23;
  klass = gameObject[1].klass;
  v29 = gameObject;
  if ( (int)klass >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)klass )
      {
        v42 = sub_B2C460(gameObject);
        sub_B2C400(v42, 0LL);
      }
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v31 = (RecoverEntity_o *)*((_QWORD *)&v29[1].monitor + v30);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (System_String_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        itemListObj,
                                        transform,
                                        0LL,
                                        0LL);
      if ( !gameObject )
        break;
      v34 = (UnityEngine_GameObject_o *)gameObject;
      v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v35 )
        break;
      UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
      Component_srcLineSprite = (RecoverItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v34,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v40 = (RecoverItemComponent_CallbackFunc_o *)sub_B2C42C(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      RecoverItemComponent__setRPRecvItemInfo(Component_srcLineSprite, v31, needRp, this, v40, 0LL);
      UnityEngine_GameObject__SetActive(v34, 1, 0LL);
      LODWORD(klass) = v29[1].klass;
      if ( (__int64)++v30 >= (int)klass )
        goto LABEL_21;
    }
LABEL_23:
    sub_B2C434(gameObject, v26);
  }
LABEL_21:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_23;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall RecoverDlgComponent__UpdateApRecvItemDlg(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x8
  RecoverMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v14; // x20
  __int64 i; // x25
  struct System_Collections_Generic_List_RecoverItemComponent__o *v16; // x22
  unsigned __int64 v17; // x9
  RecoverEntity_o *v18; // x21
  UnityEngine_Object_o *v19; // x22
  int32_t needAp; // w23
  RecoverItemComponent_CallbackFunc_o *v21; // x24
  __int64 v22; // x9
  __int64 v23; // x0

  if ( (byte_418614D & 1) == 0 )
  {
    sub_B2C35C(&RecoverItemComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_RecoverMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_RecoverDlgComponent_requestRecover__, v9);
    byte_418614D = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(
                                                          Master_WarQuestSelectionMaster,
                                                          1,
                                                          0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Master_WarQuestSelectionMaster,
                                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v14 = Master_WarQuestSelectionMaster;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v16 = this->fields.recoverItemList;
        if ( !v16 )
          break;
        v17 = i - 4;
        if ( i - 4 < v16->fields._size )
        {
          if ( v17 >= (unsigned int)MasterName_k__BackingField )
          {
            v23 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v23, 0LL);
          }
          v18 = (RecoverEntity_o *)*((_QWORD *)&v14->klass + i);
          if ( v17 >= (unsigned int)v16->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v19 = (UnityEngine_Object_o *)*((_QWORD *)&v16->fields._items->obj.klass + i);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (RecoverMaster_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            needAp = this->fields.needAp;
            v21 = (RecoverItemComponent_CallbackFunc_o *)sub_B2C42C(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v21,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              0LL);
            if ( !v19 )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)v19, v18, needAp, this, v21, 0LL);
          }
        }
        LODWORD(MasterName_k__BackingField) = v14->fields._MasterName_k__BackingField;
        v22 = i - 3;
        if ( v22 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_B2C434(Master_WarQuestSelectionMaster, v12);
    }
  }
}


void __fastcall RecoverDlgComponent__add_callbackFunc(
        RecoverDlgComponent_o *this,
        RecoverDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecoverDlgComponent_o *v11; // x0
  RecoverDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418614A & 1) == 0 )
  {
    sub_B2C35C(&RecoverDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418614A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (RecoverDlgComponent_CallbackFunc_c *)v8->klass != RecoverDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_B2C728(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4186151 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186151 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)itemListInfoGrid,
                                                      v5,
                                                      0LL);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_B2C434(itemListInfoGrid, method);
  }
}


System_String_o *__fastcall RecoverDlgComponent__get_closeBtnPath(
        RecoverDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186154 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2744/*"BaseWindow/CloseBtn"*/, method);
    byte_4186154 = 1;
  }
  return (System_String_o *)StringLiteral_2744/*"BaseWindow/CloseBtn"*/;
}


bool __fastcall RecoverDlgComponent__isListTouchable(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  return !this->fields.isClosed;
}


void __fastcall RecoverDlgComponent__remove_callbackFunc(
        RecoverDlgComponent_o *this,
        RecoverDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecoverDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418614B & 1) == 0 )
  {
    sub_B2C35C(&RecoverDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418614B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (RecoverDlgComponent_CallbackFunc_c *)v8->klass != RecoverDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_B2C728(v8);
  RecoverDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent__requestRecover(
        RecoverDlgComponent_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x24
  Il2CppObject *v19; // x0
  NetworkManager_ResultCallbackFunc_o *v20; // x22
  RecoverCmdSpellRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v22; // x1
  NetworkManager_ResultCallbackFunc_o *v23; // x22
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+18h] [xbp-38h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4186152 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, v9);
    sub_B2C35C(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___, v10);
    sub_B2C35C(&Method_NetworkManager_getRequest_RecoverUseItemRequest___, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__, v13);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v14);
    sub_B2C35C(&RecoverType_Type_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_21780/*"requestApItem Param: {0}, {1}, {2}"*/, v16);
    byte_4186152 = 1;
  }
  v28 = type;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v28);
  v27 = id;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v26 = num;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  System_String__Format_44306596((System_String_o *)StringLiteral_21780/*"requestApItem Param: {0}, {1}, {2}"*/, v17, v18, v19, 0LL);
  switch ( type )
  {
    case 1:
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v24,
                                                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_22;
      RecoverCmdSpellRequest__beginRequest(Request_WarBoardWallAttackRequest, id, v25);
      break;
    case 3:
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v23,
                                                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_22;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_WarBoardWallAttackRequest, id, num, 0LL);
      break;
    case 2:
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v20,
                                                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        PurchaseByStoneRequest__beginRequest(
          (PurchaseByStoneRequest_o *)Request_WarBoardWallAttackRequest,
          id,
          num,
          0LL);
        return;
      }
LABEL_22:
      sub_B2C434(Request_WarBoardWallAttackRequest, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent_CallbackFunc___ctor(
        RecoverDlgComponent_CallbackFunc_o *this,
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecoverDlgComponent_CallbackFunc__BeginInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_418564D & 1) == 0 )
  {
    sub_B2C35C(&RecoverDlgComponent_Result_TypeInfo, *(_QWORD *)&result);
    byte_418564D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent_CallbackFunc__Invoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  RecoverDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  RecoverDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  RecoverDlgComponent_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (RecoverDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}


void __fastcall RecoverDlgComponent___c__DisplayClass21_0___ctor(
        RecoverDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecoverDlgComponent___c__DisplayClass21_0___Close_b__0(
        RecoverDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  RecoverDlgComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  RecoverDlgComponent__EndClose(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}