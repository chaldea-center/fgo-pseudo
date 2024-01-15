void __fastcall RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F82FE & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F82FE = 1;
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
  sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    RecoverDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F82F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_RecoverDlgComponent_EndClose__, v6);
    byte_40F82F8 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0LL);
  RecoverDlgComponent__Close_21583300(this, v7, v8);
}


void __fastcall RecoverDlgComponent__Close_21583300(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  UnityEngine_Behaviour_o *v28; // x0
  System_Action_o *v29; // x21

  if ( (byte_40F82F9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, v8);
    sub_B16FFC(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, v9);
    byte_40F82F9 = 1;
  }
  v10 = sub_B170CC(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, callback, method, v3, v4);
  RecoverDlgComponent___c__DisplayClass21_0___ctor((RecoverDlgComponent___c__DisplayClass21_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  this->fields.isClosed = 1;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    v28 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v28 )
    {
      UnityEngine_Behaviour__set_enabled(v28, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
  }
LABEL_10:
  v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(v29, (Il2CppObject *)v10, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v29, 0LL);
}


void __fastcall RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F82FC & 1) == 0 )
  {
    sub_B16FFC(&Method_RecoverDlgComponent_OnClickClose__, method);
    byte_40F82FC = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_RecoverDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  System_String_o *v29; // x0
  UILabel_o *titleDetailLabel; // x22
  System_String_o *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  TerminalApSeedExchangeManager_o *v34; // x0
  UnityEngine_Object_o *tradeApButton; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UnityEngine_Behaviour_o *v40; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WebViewManager_o *Instance; // x0
  RecoverMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_RecoverEntity__o *RecvEntityList; // x0
  WarBoardUiData_SaveData_array *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x8
  WarBoardUiData_SaveData_array *v55; // x22
  unsigned __int64 v56; // x27
  UnityEngine_Component_o *itemListInfoGrid; // x0
  RecoverEntity_o *v58; // x24
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v62; // x23
  UnityEngine_Transform_o *v63; // x25
  int v64; // s0
  RecoverItemComponent_o *Component_srcLineSprite; // x25
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  RecoverItemComponent_CallbackFunc_o *v72; // x26
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x0
  UIGrid_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Action_o *v79; // x20

  if ( (byte_40F82F5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&needAp);
    sub_B16FFC(&RecoverItemComponent_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_RecoverMaster___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_RecoverDlgComponent_EndOpen__, v17);
    sub_B16FFC(&Method_RecoverDlgComponent_requestRecover__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&StringLiteral_1724/*"APRECV_TITILE_DETAIL_TXT"*/, v20);
    sub_B16FFC(&StringLiteral_1725/*"APRECV_TITILE_TXT"*/, v21);
    byte_40F82F5 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_1725/*"APRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, v29, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_1724/*"APRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_36;
  UILabel__set_text(titleDetailLabel, v31, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  apSeedExchangeMgr = (UnityEngine_Object_o *)this->fields.apSeedExchangeMgr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0LL, 0LL) )
  {
    v34 = this->fields.apSeedExchangeMgr;
    if ( !v34 )
      goto LABEL_36;
    TerminalApSeedExchangeManager__Initialize(v34, 0LL);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    v40 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( !v40 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v40, 1, 0LL);
  }
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_RecoverItemComponent__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.recoverItemList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (RecoverMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0LL
    || (RecvEntityList = RecoverMaster__getRecvEntityList(MasterData_WarQuestSelectionMaster, 1, 0LL)) == 0LL
    || (v51 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RecvEntityList,
                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0LL )
  {
LABEL_36:
    sub_B170D4();
  }
  v54 = *(_QWORD *)&v51->max_length;
  v55 = v51;
  if ( (int)v54 >= 1 )
  {
    v56 = 0LL;
    do
    {
      if ( v56 >= (unsigned int)v54 )
      {
        sub_B17100(v51, v52, v53);
        sub_B170A0();
      }
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        goto LABEL_36;
      v58 = (RecoverEntity_o *)v55->m_Items[v56];
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_36;
      v62 = Object;
      v63 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v63 )
        goto LABEL_36;
      UnityEngine_Transform__set_localPosition(v63, *(UnityEngine_Vector3_o *)&v64, 0LL);
      Component_srcLineSprite = (RecoverItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v62,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v72 = (RecoverItemComponent_CallbackFunc_o *)sub_B170CC(
                                                     RecoverItemComponent_CallbackFunc_TypeInfo,
                                                     v68,
                                                     v69,
                                                     v70,
                                                     v71);
      RecoverItemComponent_CallbackFunc___ctor(
        v72,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_36;
      RecoverItemComponent__setAPRecvItemInfo(Component_srcLineSprite, v58, needAp, this, v72, 0LL);
      recoverItemList = this->fields.recoverItemList;
      if ( !recoverItemList )
        goto LABEL_36;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)recoverItemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
      UnityEngine_GameObject__SetActive(v62, 1, 0LL);
      LODWORD(v54) = v55->max_length;
    }
    while ( (__int64)++v56 < (int)v54 );
  }
  v74 = this->fields.itemListInfoGrid;
  if ( !v74 )
    goto LABEL_36;
  UIGrid__set_repositionNow(v74, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v79 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v75, v76, v77, v78);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
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
  System_String_o *v25; // x0
  UILabel_o *titleDetailLabel; // x22
  System_String_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  RecoverMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_RecoverEntity__o *RecvEntityList; // x0
  WarBoardUiData_SaveData_array *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x8
  WarBoardUiData_SaveData_array *v36; // x22
  unsigned __int64 v37; // x27
  UnityEngine_Component_o *itemListInfoGrid; // x0
  RecoverEntity_o *v39; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v43; // x24
  UnityEngine_Transform_o *v44; // x25
  int v45; // s0
  RecoverItemComponent_o *Component_srcLineSprite; // x25
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  RecoverItemComponent_CallbackFunc_o *v53; // x26
  UIGrid_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Action_o *v59; // x20

  if ( (byte_40F82F7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&needRp);
    sub_B16FFC(&RecoverItemComponent_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_RecoverMaster___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_RecoverDlgComponent_EndOpen__, v13);
    sub_B16FFC(&Method_RecoverDlgComponent_requestRecover__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_11222/*"RPRECV_TITILE_TXT"*/, v16);
    sub_B16FFC(&StringLiteral_11221/*"RPRECV_TITILE_DETAIL_TXT"*/, v17);
    byte_40F82F7 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11222/*"RPRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, v25, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11221/*"RPRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_23;
  UILabel__set_text(titleDetailLabel, v27, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (RecoverMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  RecvEntityList = RecoverMaster__getRecvEntityList(MasterData_WarQuestSelectionMaster, 2, 0LL);
  if ( !RecvEntityList )
    goto LABEL_23;
  v32 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RecvEntityList,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !v32 )
    goto LABEL_23;
  v35 = *(_QWORD *)&v32->max_length;
  v36 = v32;
  if ( (int)v35 >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
      {
        sub_B17100(v32, v33, v34);
        sub_B170A0();
      }
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        break;
      v39 = (RecoverEntity_o *)v36->m_Items[v37];
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !Object )
        break;
      v43 = Object;
      v44 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v44 )
        break;
      UnityEngine_Transform__set_localPosition(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
      Component_srcLineSprite = (RecoverItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v43,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v53 = (RecoverItemComponent_CallbackFunc_o *)sub_B170CC(
                                                     RecoverItemComponent_CallbackFunc_TypeInfo,
                                                     v49,
                                                     v50,
                                                     v51,
                                                     v52);
      RecoverItemComponent_CallbackFunc___ctor(
        v53,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      RecoverItemComponent__setRPRecvItemInfo(Component_srcLineSprite, v39, needRp, this, v53, 0LL);
      UnityEngine_GameObject__SetActive(v43, 1, 0LL);
      LODWORD(v35) = v36->max_length;
      if ( (__int64)++v37 >= (int)v35 )
        goto LABEL_21;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_21:
  v54 = this->fields.itemListInfoGrid;
  if ( !v54 )
    goto LABEL_23;
  UIGrid__set_repositionNow(v54, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v59 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
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
  System_Collections_Generic_List_RecoverEntity__o *RecvEntityList; // x0
  WarBoardUiData_SaveData_array *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  WarBoardUiData_SaveData_array *v17; // x20
  __int64 i; // x25
  struct System_Collections_Generic_List_RecoverItemComponent__o *v19; // x22
  unsigned __int64 v20; // x9
  RecoverEntity_o *v21; // x21
  UnityEngine_Object_o *v22; // x22
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t needAp; // w23
  RecoverItemComponent_CallbackFunc_o *v26; // x24
  __int64 v27; // x9

  if ( (byte_40F82F6 & 1) == 0 )
  {
    sub_B16FFC(&RecoverItemComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_RecoverMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_RecoverDlgComponent_requestRecover__, v9);
    byte_40F82F6 = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    RecvEntityList = RecoverMaster__getRecvEntityList(Master_WarQuestSelectionMaster, 1, 0LL);
    if ( !RecvEntityList )
      goto LABEL_26;
    v13 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RecvEntityList,
            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !v13 )
      goto LABEL_26;
    v16 = *(_QWORD *)&v13->max_length;
    v17 = v13;
    if ( (int)v16 >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v19 = this->fields.recoverItemList;
        if ( !v19 )
          break;
        v20 = i - 4;
        if ( i - 4 < v19->fields._size )
        {
          if ( v20 >= (unsigned int)v16 )
          {
            sub_B17100(v13, v14, v15);
            sub_B170A0();
          }
          v21 = (RecoverEntity_o *)*((_QWORD *)&v17->obj.klass + i);
          if ( v20 >= (unsigned int)v19->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v22 = (UnityEngine_Object_o *)*((_QWORD *)&v19->fields._items->obj.klass + i);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v13 = (WarBoardUiData_SaveData_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            needAp = this->fields.needAp;
            v26 = (RecoverItemComponent_CallbackFunc_o *)sub_B170CC(
                                                           RecoverItemComponent_CallbackFunc_TypeInfo,
                                                           v14,
                                                           v15,
                                                           v23,
                                                           v24);
            RecoverItemComponent_CallbackFunc___ctor(
              v26,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              0LL);
            if ( !v22 )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)v22, v21, needAp, this, v26, 0LL);
          }
        }
        LODWORD(v16) = v17->max_length;
        v27 = i - 3;
        if ( v27 >= (int)v16 )
          return;
      }
LABEL_26:
      sub_B170D4();
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

  if ( (byte_40F82F3 & 1) == 0 )
  {
    sub_B16FFC(&RecoverDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F82F3 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_B173C8(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40F82FA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F82FA = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !transform )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v7 = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !v7 )
        break;
      v8 = UnityEngine_Component__get_transform(v7, 0LL);
      if ( !v8 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v8, v6, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_B170D4();
  }
}


System_String_o *__fastcall RecoverDlgComponent__get_closeBtnPath(
        RecoverDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F82FD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2732/*"BaseWindow/CloseBtn"*/, method);
    byte_40F82FD = 1;
  }
  return (System_String_o *)StringLiteral_2732/*"BaseWindow/CloseBtn"*/;
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

  if ( (byte_40F82F4 & 1) == 0 )
  {
    sub_B16FFC(&RecoverDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F82F4 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_B173C8(v8);
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  NetworkManager_ResultCallbackFunc_o *v24; // x22
  PurchaseByStoneRequest_o *v25; // x0
  NetworkManager_ResultCallbackFunc_o *v26; // x22
  RecoverUseItemRequest_o *v27; // x0
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  RecoverCmdSpellRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v32; // [xsp+18h] [xbp-38h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40F82FB & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, v9);
    sub_B16FFC(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___, v10);
    sub_B16FFC(&Method_NetworkManager_getRequest_RecoverUseItemRequest___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__, v13);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v14);
    sub_B16FFC(&RecoverType_Type_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_21688/*"requestApItem Param: {0}, {1}, {2}"*/, v16);
    byte_40F82FB = 1;
  }
  v33 = type;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v33);
  v32 = id;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v31 = num;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  System_String__Format_43744796((System_String_o *)StringLiteral_21688/*"requestApItem Param: {0}, {1}, {2}"*/, v17, v18, v19, 0LL);
  switch ( type )
  {
    case 1:
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22,
                                                     v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v28,
                                                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_22;
      RecoverCmdSpellRequest__beginRequest(Request_WarBoardWallAttackRequest, id, v30);
      break;
    case 3:
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22,
                                                     v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v27 = (RecoverUseItemRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                         v26,
                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !v27 )
        goto LABEL_22;
      RecoverUseItemRequest__beginRequest(v27, id, num, 0LL);
      break;
    case 2:
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22,
                                                     v23);
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
      v25 = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v24,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( v25 )
      {
        PurchaseByStoneRequest__beginRequest(v25, id, num, 0LL);
        return;
      }
LABEL_22:
      sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent_CallbackFunc___ctor(
        RecoverDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F741B & 1) == 0 )
  {
    sub_B16FFC(&RecoverDlgComponent_Result_TypeInfo, *(_QWORD *)&result);
    byte_40F741B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent_CallbackFunc__Invoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  RecoverDlgComponent_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  RecoverDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  RecoverDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (RecoverDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
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
    sub_B170D4();
  RecoverDlgComponent__EndClose(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}