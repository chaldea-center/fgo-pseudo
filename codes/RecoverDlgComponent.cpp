void __fastcall RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC4FF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4FF = 1;
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
  sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    RecoverDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EC4F9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_RecoverDlgComponent_EndClose__, v5, v6, v7);
    byte_42EC4F9 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0LL);
  RecoverDlgComponent__Close_32321984(this, v8, v9);
}


void __fastcall RecoverDlgComponent__Close_32321984(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  UnityEngine_Behaviour_o *v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v31; // x21

  if ( (byte_42EC4FA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, v9, v10, v11);
    sub_B5D5C4(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, v12, v13, v14);
    byte_42EC4FA = 1;
  }
  v15 = sub_B5D694(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  RecoverDlgComponent___c__DisplayClass21_0___ctor((RecoverDlgComponent___c__DisplayClass21_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  this->fields.isClosed = 1;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v16 )
    {
      UnityEngine_Behaviour__set_enabled(v16, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(v16, v17);
  }
LABEL_10:
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v15, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v31, 0LL);
}


void __fastcall RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EC4FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_RecoverDlgComponent_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EC4FD = 1;
  }
  if ( !this->fields.isClosed )
  {
    v5 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_RecoverDlgComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    RecoverDlgComponent__Callback(this, 0, v7);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v58; // x1
  UILabel_o *titleDetailLabel; // x22
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  UnityEngine_Object_o *tradeApButton; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  System_String_c *klass; // x8
  System_String_o *v71; // x22
  unsigned __int64 v72; // x27
  RecoverEntity_o *v73; // x24
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v76; // x23
  UnityEngine_Transform_o *v77; // x25
  int v78; // s0
  RecoverItemComponent_o *Component_srcLineSprite; // x25
  RecoverItemComponent_CallbackFunc_o *v82; // x26
  const MethodInfo *v83; // x5
  System_Action_o *v84; // x20
  __int64 v85; // x0

  if ( (byte_42EC4F6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, needAp, (_DWORD)callback, canMaskTouchClose);
    sub_B5D5C4(&RecoverItemComponent_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RecoverMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_RecoverDlgComponent_EndOpen__, v35, v36, v37);
    sub_B5D5C4(&Method_RecoverDlgComponent_requestRecover__, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1747/*"APRECV_TITILE_DETAIL_TXT"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1748/*"APRECV_TITILE_TXT"*/, v47, v48, v49);
    byte_42EC4F6 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.needAp = needAp;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1748/*"APRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1747/*"APRECV_TITILE_DETAIL_TXT"*/, 0LL);
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
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recoverItemList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  gameObject = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0LL
    || (gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, v69)) == 0LL
    || (gameObject = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)gameObject,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0LL )
  {
LABEL_36:
    sub_B5D69C(gameObject, v58);
  }
  klass = gameObject[1].klass;
  v71 = gameObject;
  if ( (int)klass >= 1 )
  {
    v72 = 0LL;
    do
    {
      if ( v72 >= (unsigned int)klass )
      {
        v85 = sub_B5D6C8(gameObject);
        sub_B5D668(v85, 0LL);
      }
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_36;
      v73 = (RecoverEntity_o *)*((_QWORD *)&v71[1].monitor + v72);
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
      v76 = (UnityEngine_GameObject_o *)gameObject;
      v77 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v78 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v77 )
        goto LABEL_36;
      UnityEngine_Transform__set_localPosition(v77, *(UnityEngine_Vector3_o *)&v78, 0LL);
      Component_srcLineSprite = (RecoverItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v76,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v82 = (RecoverItemComponent_CallbackFunc_o *)sub_B5D694(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_36;
      RecoverItemComponent__setAPRecvItemInfo(Component_srcLineSprite, v73, needAp, this, v82, v83);
      gameObject = (System_String_o *)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_36;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
      UnityEngine_GameObject__SetActive(v76, 1, 0LL);
      LODWORD(klass) = v71[1].klass;
    }
    while ( (__int64)++v72 < (int)klass );
  }
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_36;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent__OpenRpRecvItemDlg(
        RecoverDlgComponent_o *this,
        int32_t needRp,
        RecoverDlgComponent_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v46; // x1
  UILabel_o *titleDetailLabel; // x22
  const MethodInfo *v48; // x2
  System_String_c *klass; // x8
  System_String_o *v50; // x22
  unsigned __int64 v51; // x27
  RecoverEntity_o *v52; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v55; // x24
  UnityEngine_Transform_o *v56; // x25
  int v57; // s0
  RecoverItemComponent_o *Component_srcLineSprite; // x25
  RecoverItemComponent_CallbackFunc_o *v61; // x26
  const MethodInfo *v62; // x5
  System_Action_o *v63; // x20
  __int64 v64; // x0

  if ( (byte_42EC4F8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, needRp, (_DWORD)callback, canMaskTouchClose);
    sub_B5D5C4(&RecoverItemComponent_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RecoverMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_RecoverDlgComponent_EndOpen__, v23, v24, v25);
    sub_B5D5C4(&Method_RecoverDlgComponent_requestRecover__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_11391/*"RPRECV_TITILE_TXT"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_11390/*"RPRECV_TITILE_DETAIL_TXT"*/, v35, v36, v37);
    byte_42EC4F8 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11391/*"RPRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11390/*"RPRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_23;
  UILabel__set_text(titleDetailLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, v48);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)gameObject,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_23;
  klass = gameObject[1].klass;
  v50 = gameObject;
  if ( (int)klass >= 1 )
  {
    v51 = 0LL;
    while ( 1 )
    {
      if ( v51 >= (unsigned int)klass )
      {
        v64 = sub_B5D6C8(gameObject);
        sub_B5D668(v64, 0LL);
      }
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v52 = (RecoverEntity_o *)*((_QWORD *)&v50[1].monitor + v51);
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
      v55 = (UnityEngine_GameObject_o *)gameObject;
      v56 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v56 )
        break;
      UnityEngine_Transform__set_localPosition(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
      Component_srcLineSprite = (RecoverItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v55,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v61 = (RecoverItemComponent_CallbackFunc_o *)sub_B5D694(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v61,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      RecoverItemComponent__setRPRecvItemInfo(Component_srcLineSprite, v52, needRp, this, v61, v62);
      UnityEngine_GameObject__SetActive(v55, 1, 0LL);
      LODWORD(klass) = v50[1].klass;
      if ( (__int64)++v51 >= (int)klass )
        goto LABEL_21;
    }
LABEL_23:
    sub_B5D69C(gameObject, v46);
  }
LABEL_21:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_23;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


void __fastcall RecoverDlgComponent__UpdateApRecvItemDlg(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x8
  RecoverMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v31; // x20
  __int64 i; // x25
  struct System_Collections_Generic_List_RecoverItemComponent__o *v33; // x22
  unsigned __int64 v34; // x9
  RecoverEntity_o *v35; // x21
  UnityEngine_Object_o *v36; // x22
  int32_t needAp; // w23
  RecoverItemComponent_CallbackFunc_o *v38; // x24
  const MethodInfo *v39; // x5
  __int64 v40; // x9
  __int64 v41; // x0

  if ( (byte_42EC4F7 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverItemComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_RecoverMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_RecoverDlgComponent_requestRecover__, v23, v24, v25);
    byte_42EC4F7 = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(
                                                          Master_WarQuestSelectionMaster,
                                                          1,
                                                          v29);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (RecoverMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Master_WarQuestSelectionMaster,
                                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v31 = Master_WarQuestSelectionMaster;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v33 = this->fields.recoverItemList;
        if ( !v33 )
          break;
        v34 = i - 4;
        if ( i - 4 < v33->fields._size )
        {
          if ( v34 >= (unsigned int)MasterName_k__BackingField )
          {
            v41 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v41, 0LL);
          }
          v35 = (RecoverEntity_o *)*((_QWORD *)&v31->klass + i);
          if ( v34 >= (unsigned int)v33->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v36 = (UnityEngine_Object_o *)*((_QWORD *)&v33->fields._items->obj.klass + i);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (RecoverMaster_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            needAp = this->fields.needAp;
            v38 = (RecoverItemComponent_CallbackFunc_o *)sub_B5D694(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v38,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              0LL);
            if ( !v36 )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)v36, v35, needAp, this, v38, v39);
          }
        }
        LODWORD(MasterName_k__BackingField) = v31->fields._MasterName_k__BackingField;
        v40 = i - 3;
        if ( v40 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_B5D69C(Master_WarQuestSelectionMaster, v28);
    }
  }
}


void __fastcall RecoverDlgComponent__add_callbackFunc(
        RecoverDlgComponent_o *this,
        RecoverDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  RecoverDlgComponent_o *v12; // x0
  RecoverDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC4F4 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC4F4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (RecoverDlgComponent_CallbackFunc_c *)v9->klass != RecoverDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  RecoverDlgComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42EC4FB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4FB = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v7 = childCount - 1;
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
                                                      v7,
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
      if ( --v7 < 0 )
        return;
    }
LABEL_14:
    sub_B5D69C(itemListInfoGrid, method);
  }
}


System_String_o *__fastcall RecoverDlgComponent__get_closeBtnPath(
        RecoverDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC4FE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2798/*"BaseWindow/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42EC4FE = 1;
  }
  return (System_String_o *)StringLiteral_2798/*"BaseWindow/CloseBtn"*/;
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
  __int64 v3; // x3
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  RecoverDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC4F5 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC4F5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (RecoverDlgComponent_CallbackFunc_c *)v9->klass != RecoverDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  RecoverDlgComponent__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverDlgComponent__requestRecover(
        RecoverDlgComponent_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x24
  Il2CppObject *v35; // x0
  NetworkManager_ResultCallbackFunc_o *v36; // x22
  RecoverCmdSpellRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v38; // x1
  NetworkManager_ResultCallbackFunc_o *v39; // x22
  const MethodInfo *v40; // x3
  NetworkManager_ResultCallbackFunc_o *v41; // x20
  const MethodInfo *v42; // x2
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v44; // [xsp+18h] [xbp-38h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EC4FC & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, type, id, *(_QWORD *)&num);
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, v9, v10, v11);
    sub_B5D5C4(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___, v12, v13, v14);
    sub_B5D5C4(&Method_NetworkManager_getRequest_RecoverUseItemRequest___, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&RecoverType_Type_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22075/*"requestApItem Param: {0}, {1}, {2}"*/, v30, v31, v32);
    byte_42EC4FC = 1;
  }
  v45 = type;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v45);
  v44 = id;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v43 = num;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  System_String__Format_44578852((System_String_o *)StringLiteral_22075/*"requestApItem Param: {0}, {1}, {2}"*/, v33, v34, v35, 0LL);
  switch ( type )
  {
    case 1:
      v41 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v41,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v41,
                                                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_22;
      RecoverCmdSpellRequest__beginRequest(Request_WarBoardWallAttackRequest, id, v42);
      break;
    case 3:
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v39,
                                                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_22;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_WarBoardWallAttackRequest, id, num, v40);
      break;
    case 2:
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (RecoverCmdSpellRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v36,
                                                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
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
      sub_B5D69C(Request_WarBoardWallAttackRequest, v38);
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
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42E7F42 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverDlgComponent_Result_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7F42 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  RecoverDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  RecoverDlgComponent_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
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
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
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
    sub_B5D69C(0LL, method);
  RecoverDlgComponent__EndClose(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}