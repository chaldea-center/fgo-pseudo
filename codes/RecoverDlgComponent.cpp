void RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59326A5 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59326A5 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecoverDlgComponent__Callback(RecoverDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct RecoverDlgComponent_CallbackFunc_o *v10; // x20
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
}


void RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593269F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RecoverDlgComponent_EndClose__);
    byte_593269F = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0);
  RecoverDlgComponent__Close_38375736(this, v3, v4);
}


void RecoverDlgComponent__Close_38375736(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Behaviour_o *v6; // x0
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
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_c *v22; // x0
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v24; // x21

  if ( (byte_59326A0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__);
    sub_21FFC50(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_59326A0 = 1;
  }
  v5 = sub_21FFEBC(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v22 = UnityEngine_Object_TypeInfo;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  this->fields.isClosed = 1;
  if ( !*(&v22->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v22, v20, v21);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v6 )
    {
      UnityEngine_Behaviour__set_enabled(v6, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(v6, v7);
  }
LABEL_9:
  v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v5, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v24, 0);
}


void RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void RecoverDlgComponent__EndOpen(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void RecoverDlgComponent__EndRequestUserGameActRecover(
        RecoverDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  RecoverDlgComponent__Callback(this, 2, method);
}


void RecoverDlgComponent__Init(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_59326A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecoverDlgComponent_OnClickClose__);
    byte_59326A3 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecoverDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    RecoverDlgComponent__Callback(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecoverDlgComponent__OpenApRecvItemDlg(
        RecoverDlgComponent_o *this,
        int32_t needAp,
        RecoverDlgComponent_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  LocalizationManager_c *v16; // x0
  UILabel_o *titleLabel; // x22
  int v18; // w8
  __int64 gameObject; // x0
  __int64 v20; // x1
  UILabel_o *titleDetailLabel; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_c *v24; // x0
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  __int64 v26; // x2
  UnityEngine_Object_o *tradeApButton; // x22
  System_Collections_Generic_List_object__o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x8
  __int64 v36; // x22
  unsigned __int64 v37; // x28
  RecoverEntity_o *v38; // x25
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v41; // x24
  UnityEngine_Transform_o *v42; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v44; // x27
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x5
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  System_Action_o *v57; // x20
  bool v58; // [xsp+8h] [xbp-68h]

  if ( (byte_593269C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_RecoverDlgComponent_EndOpen__);
    sub_21FFC50(&Method_RecoverDlgComponent_requestRecover__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_2117/*"APRECV_TITILE_DETAIL_TXT"*/);
    sub_21FFC50(&StringLiteral_2118/*"APRECV_TITILE_TXT"*/);
    byte_593269C = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  v18 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.needAp = needAp;
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(v16, v14, v15);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2118/*"APRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2117/*"APRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_39;
  UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v24 = UnityEngine_Object_TypeInfo;
  apSeedExchangeMgr = (UnityEngine_Object_o *)this->fields.apSeedExchangeMgr;
  this->fields.isClosed = 0;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v22, v23);
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0, 0) )
  {
    gameObject = (__int64)this->fields.apSeedExchangeMgr;
    if ( !gameObject )
      goto LABEL_39;
    TerminalApSeedExchangeManager__Initialize((TerminalApSeedExchangeManager_o *)gameObject, 0);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v26);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.tradeApButton;
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recoverItemList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0
    || (v58 = canMaskTouchClose,
        (gameObject = (__int64)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0)) == 0)
    || (gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)gameObject,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0 )
  {
LABEL_39:
    sub_21FFECC(gameObject, v20);
  }
  v35 = *(_QWORD *)(gameObject + 24);
  v36 = gameObject;
  if ( (int)v35 >= 1 )
  {
    v37 = 0;
    do
    {
      if ( v37 >= (unsigned int)v35 )
        sub_21FFED4(gameObject);
      gameObject = (__int64)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_39;
      v38 = *(RecoverEntity_o **)(v36 + 32 + 8 * v37);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0, 0);
      if ( !gameObject )
        goto LABEL_39;
      v41 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v42 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5931940 )
      {
        gameObject = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( !v42 )
        goto LABEL_39;
      UnityEngine_Transform__set_localPosition(v42, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v41,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v44 = (RecoverItemComponent_CallbackFunc_o *)sub_21FFEBC(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v44,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v45);
      if ( !Component_object )
        goto LABEL_39;
      RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Component_object, v38, needAp, this, v44, v46);
      gameObject = (__int64)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_39;
      v53 = *(_QWORD *)(gameObject + 16);
      v54 = Method_System_Collections_Generic_List_RecoverItemComponent__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v53 )
        goto LABEL_39;
      v55 = *(int *)(gameObject + 24);
      if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = v53 + 8 * v55;
        *(_DWORD *)(gameObject + 24) = v55 + 1;
        *(_QWORD *)(v56 + 32) = Component_object;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v56 + 32),
          (int32_t)Component_object,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      UnityEngine_GameObject__SetActive(v41, 1, 0);
      LODWORD(v35) = *(_DWORD *)(v36 + 24);
    }
    while ( (__int64)++v37 < (int)v35 );
  }
  gameObject = (__int64)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_39;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v58, 0);
  v57 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecoverDlgComponent__OpenRpRecvItemDlg(
        RecoverDlgComponent_o *this,
        int32_t needRp,
        RecoverDlgComponent_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v18; // x1
  UILabel_o *titleDetailLabel; // x22
  const MethodInfo_476E8C0 *v20; // x0
  System_String_c *klass; // x8
  System_String_o *v22; // x22
  unsigned __int64 v23; // x28
  RecoverEntity_o *v24; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x25
  UnityEngine_Transform_o *v28; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v30; // x27
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x5
  System_Action_o *v33; // x20
  bool v34; // [xsp+8h] [xbp-68h]

  if ( (byte_593269E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RecoverDlgComponent_EndOpen__);
    sub_21FFC50(&Method_RecoverDlgComponent_requestRecover__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11631/*"RPRECV_TITILE_TXT"*/);
    sub_21FFC50(&StringLiteral_11630/*"RPRECV_TITILE_DETAIL_TXT"*/);
    byte_593269E = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11631/*"RPRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11630/*"RPRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_24;
  UILabel__set_text(titleDetailLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v20 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance(v20);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_24;
  v34 = canMaskTouchClose;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)gameObject,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject[1].klass;
  v22 = gameObject;
  if ( (int)klass >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)klass )
        sub_21FFED4(gameObject);
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v24 = (RecoverEntity_o *)*((_QWORD *)&v22[1].monitor + v23);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = (System_String_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        itemListObj,
                                        transform,
                                        0,
                                        0);
      if ( !gameObject )
        break;
      v27 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v28 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5931940 )
      {
        gameObject = (System_String_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( !v28 )
        break;
      UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v27,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v30 = (RecoverItemComponent_CallbackFunc_o *)sub_21FFEBC(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v31);
      if ( !Component_object )
        break;
      RecoverItemComponent__setRPRecvItemInfo((RecoverItemComponent_o *)Component_object, v24, needRp, this, v30, v32);
      UnityEngine_GameObject__SetActive(v27, 1, 0);
      LODWORD(klass) = v22[1].klass;
      if ( (__int64)++v23 >= (int)klass )
        goto LABEL_22;
    }
LABEL_24:
    sub_21FFECC(gameObject, v18);
  }
LABEL_22:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_24;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v34, 0);
  v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
}


void RecoverDlgComponent__UpdateApRecvItemDlg(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x8
  RecoverMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v8; // x20
  unsigned __int64 v9; // x21
  RecoverEntity_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Item; // x23
  int32_t needAp; // w24
  RecoverItemComponent_CallbackFunc_o *v15; // x25
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x5

  if ( (byte_593269D & 1) == 0 )
  {
    sub_21FFC50(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_RecoverMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_RecoverDlgComponent_requestRecover__);
    byte_593269D = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = (RecoverMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(Master_object, 1, 0);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)Master_object,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_object )
      goto LABEL_22;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
    v8 = Master_object;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        Master_object = (RecoverMaster_o *)this->fields.recoverItemList;
        if ( !Master_object )
          break;
        if ( (__int64)v9 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v9 >= (unsigned int)MasterName_k__BackingField )
            sub_21FFED4(Master_object);
          v10 = (RecoverEntity_o *)*((_QWORD *)&v8->fields.revision + v9);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v9,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            needAp = this->fields.needAp;
            v15 = (RecoverItemComponent_CallbackFunc_o *)sub_21FFEBC(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v15,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              v16);
            if ( !Item )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Item, v10, needAp, this, v15, v17);
          }
        }
        LODWORD(MasterName_k__BackingField) = v8->fields._MasterName_k__BackingField;
        if ( (__int64)++v9 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_22:
      sub_21FFECC(Master_object, v6);
    }
  }
}


void RecoverDlgComponent__add_callbackFunc(
        RecoverDlgComponent_o *this,
        RecoverDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  RecoverDlgComponent_o *v13; // x0
  RecoverDlgComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_593269A & 1) == 0 )
  {
    sub_21FFC50(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_593269A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (RecoverDlgComponent_CallbackFunc_c *)v8->klass != RecoverDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (RecoverDlgComponent_o *)sub_220024C(v8, RecoverDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  RecoverDlgComponent__remove_callbackFunc(v13, v14, v15);
}


void RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_59326A1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59326A1 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0);
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)itemListInfoGrid,
                                                      v5 - 2,
                                                      0);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        return;
    }
LABEL_14:
    sub_21FFECC(itemListInfoGrid, method);
  }
}


System_String_o *RecoverDlgComponent__get_closeBtnPath(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_59326A4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3193/*"BaseWindow/CloseBtn"*/);
    byte_59326A4 = 1;
  }
  return (System_String_o *)StringLiteral_3193/*"BaseWindow/CloseBtn"*/;
}


bool RecoverDlgComponent__isListTouchable(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  return !this->fields.isClosed;
}


void RecoverDlgComponent__remove_callbackFunc(
        RecoverDlgComponent_o *this,
        RecoverDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  RecoverDlgComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_593269B & 1) == 0 )
  {
    sub_21FFC50(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_593269B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (RecoverDlgComponent_CallbackFunc_c *)v8->klass != RecoverDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (RecoverDlgComponent_o *)sub_220024C(v8, RecoverDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  RecoverDlgComponent__Init(v13, v14);
}


void RecoverDlgComponent__requestRecover(
        RecoverDlgComponent_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x23
  Il2CppObject *v10; // x24
  Il2CppObject *v11; // x0
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+18h] [xbp-48h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_59326A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_21FFC50(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
    sub_21FFC50(&Method_NetworkManager_getRequest_RecoverUseItemRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&RecoverType_Type_TypeInfo);
    sub_21FFC50(&StringLiteral_24210/*"requestApItem Param: {0}, {1}, {2}"*/);
    byte_59326A2 = 1;
  }
  v25 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v25);
  v24 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v24);
  v23 = num;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v23);
  System_String__Format_75484644((System_String_o *)StringLiteral_24210/*"requestApItem Param: {0}, {1}, {2}"*/, v9, v10, v11, 0);
  switch ( type )
  {
    case 1:
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v22);
      Request_object = NetworkManager__getRequest_object_(
                         v20,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverCmdSpellRequest__beginRequest((RecoverCmdSpellRequest_o *)Request_object, id, 0);
      break;
    case 3:
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v19);
      Request_object = NetworkManager__getRequest_object_(
                         v17,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_object, id, num, 0);
      break;
    case 2:
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v14);
      Request_object = NetworkManager__getRequest_object_(
                         v12,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_object )
      {
        PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, id, num, 0);
        return;
      }
LABEL_19:
      sub_21FFECC(Request_object, v16);
  }
}


void RecoverDlgComponent_CallbackFunc___ctor(
        RecoverDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FECC58;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FECC10;
}


System_IAsyncResult_o *RecoverDlgComponent_CallbackFunc__BeginInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_59326A6 & 1) == 0 )
  {
    sub_21FFC50(&RecoverDlgComponent_Result_TypeInfo);
    byte_59326A6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void RecoverDlgComponent_CallbackFunc__Invoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void RecoverDlgComponent___c__DisplayClass21_0___ctor(
        RecoverDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecoverDlgComponent___c__DisplayClass21_0___Close_b__0(
        RecoverDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  RecoverDlgComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  RecoverDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}