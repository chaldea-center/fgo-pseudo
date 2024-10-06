void __fastcall RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A7397C & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A7397C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__Callback(RecoverDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct RecoverDlgComponent_CallbackFunc_o *v5; // x20
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1B8FFB4(p_callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
}


void __fastcall RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A73976 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_RecoverDlgComponent_EndClose__, v3);
    byte_4A73976 = 1;
  }
  v4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0LL);
  RecoverDlgComponent__Close_45346800(this, v4, v5);
}


void __fastcall RecoverDlgComponent__Close_45346800(
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v16; // x21

  if ( (byte_4A73977 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, v6);
    sub_1B90010(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, v7);
    byte_4A73977 = 1;
  }
  v8 = sub_1B9025C(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)callback, v13, v14);
  this->fields.isClosed = 1;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v9 )
    {
      UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1B9026C(v9, v10);
  }
LABEL_9:
  v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v8, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
}


void __fastcall RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
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
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A7397A & 1) == 0 )
  {
    sub_1B90010(&Method_RecoverDlgComponent_OnClickClose__, method);
    byte_4A7397A = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_RecoverDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
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
  int32_t v22; // w2
  int32_t v23; // w3
  UILabel_o *titleLabel; // x22
  __int64 gameObject; // x0
  __int64 v26; // x1
  UILabel_o *titleDetailLabel; // x22
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  UnityEngine_Object_o *tradeApButton; // x22
  System_Collections_Generic_List_object__o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 v34; // x22
  unsigned __int64 v35; // x28
  RecoverEntity_o *v36; // x25
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v39; // x24
  UnityEngine_Transform_o *v40; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v42; // x27
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x5
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  System_Action_o *v51; // x20
  bool v52; // [xsp+8h] [xbp-68h]

  if ( (byte_4A73973 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&needAp);
    sub_1B90010(&RecoverItemComponent_CallbackFunc_TypeInfo, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_RecoverMaster___, v9);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo, v14);
    sub_1B90010(&LocalizationManager_TypeInfo, v15);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v16);
    sub_1B90010(&Method_RecoverDlgComponent_EndOpen__, v17);
    sub_1B90010(&Method_RecoverDlgComponent_requestRecover__, v18);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B90010(&StringLiteral_2118/*"APRECV_TITILE_DETAIL_TXT"*/, v20);
    sub_1B90010(&StringLiteral_2119/*"APRECV_TITILE_TXT"*/, v21);
    byte_4A73973 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v22, v23);
  titleLabel = this->fields.titleLabel;
  this->fields.needAp = needAp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2119/*"APRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2118/*"APRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_39;
  UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  apSeedExchangeMgr = (UnityEngine_Object_o *)this->fields.apSeedExchangeMgr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.apSeedExchangeMgr;
    if ( !gameObject )
      goto LABEL_39;
    TerminalApSeedExchangeManager__Initialize((TerminalApSeedExchangeManager_o *)gameObject, 0LL);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.tradeApButton;
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.recoverItemList, (int32_t)v30, v31, v32);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0
    || (v52 = canMaskTouchClose,
        (gameObject = (__int64)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0LL)) == 0)
    || (gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)gameObject,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0 )
  {
LABEL_39:
    sub_1B9026C(gameObject, v26);
  }
  v33 = *(_QWORD *)(gameObject + 24);
  v34 = gameObject;
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    do
    {
      if ( v35 >= (unsigned int)v33 )
        sub_1B90274(gameObject, v26);
      gameObject = (__int64)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_39;
      v36 = *(RecoverEntity_o **)(v34 + 32 + 8 * v35);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              itemListObj,
                              transform,
                              0LL,
                              0LL);
      if ( !gameObject )
        goto LABEL_39;
      v39 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v40 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A6A9C1 )
      {
        gameObject = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v26);
        byte_4A6A9C1 = 1;
      }
      if ( !v40 )
        goto LABEL_39;
      UnityEngine_Transform__set_localPosition(v40, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v39,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v42 = (RecoverItemComponent_CallbackFunc_o *)sub_1B9025C(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v43);
      if ( !Component_object )
        goto LABEL_39;
      RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Component_object, v36, needAp, this, v42, v44);
      gameObject = (__int64)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_39;
      v47 = *(_QWORD *)(gameObject + 16);
      v48 = Method_System_Collections_Generic_List_RecoverItemComponent__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v47 )
        goto LABEL_39;
      v49 = *(int *)(gameObject + 24);
      if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          Component_object,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = v47 + 8 * v49;
        *(_DWORD *)(gameObject + 24) = v49 + 1;
        *(_QWORD *)(v50 + 32) = Component_object;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v50 + 32), (int32_t)Component_object, v45, v46);
      }
      UnityEngine_GameObject__SetActive(v39, 1, 0LL);
      LODWORD(v33) = *(_DWORD *)(v34 + 24);
    }
    while ( (__int64)++v35 < (int)v33 );
  }
  gameObject = (__int64)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_39;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v52, 0LL);
  v51 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v22; // x1
  UILabel_o *titleDetailLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v25; // x22
  unsigned __int64 v26; // x28
  RecoverEntity_o *v27; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x25
  UnityEngine_Transform_o *v31; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v33; // x27
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x5
  System_Action_o *v36; // x20
  bool v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4A73975 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&needRp);
    sub_1B90010(&RecoverItemComponent_CallbackFunc_TypeInfo, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_RecoverMaster___, v9);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v11);
    sub_1B90010(&LocalizationManager_TypeInfo, v12);
    sub_1B90010(&Method_RecoverDlgComponent_EndOpen__, v13);
    sub_1B90010(&Method_RecoverDlgComponent_requestRecover__, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B90010(&StringLiteral_11134/*"RPRECV_TITILE_TXT"*/, v16);
    sub_1B90010(&StringLiteral_11133/*"RPRECV_TITILE_DETAIL_TXT"*/, v17);
    byte_4A73975 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RPRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11133/*"RPRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_24;
  UILabel__set_text(titleDetailLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_24;
  v37 = canMaskTouchClose;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)gameObject,
                                    (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject[1].klass;
  v25 = gameObject;
  if ( (int)klass >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)klass )
        sub_1B90274(gameObject, v22);
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v27 = (RecoverEntity_o *)*((_QWORD *)&v25[1].monitor + v26);
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
      v30 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v31 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A6A9C1 )
      {
        gameObject = (System_String_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v22);
        byte_4A6A9C1 = 1;
      }
      if ( !v31 )
        break;
      UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v30,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v33 = (RecoverItemComponent_CallbackFunc_o *)sub_1B9025C(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v34);
      if ( !Component_object )
        break;
      RecoverItemComponent__setRPRecvItemInfo((RecoverItemComponent_o *)Component_object, v27, needRp, this, v33, v35);
      UnityEngine_GameObject__SetActive(v30, 1, 0LL);
      LODWORD(klass) = v25[1].klass;
      if ( (__int64)++v26 >= (int)klass )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B9026C(gameObject, v22);
  }
LABEL_22:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_24;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v37, 0LL);
  v36 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
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
  RecoverMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v14; // x20
  unsigned __int64 v15; // x21
  RecoverEntity_o *v16; // x22
  Il2CppObject *Item; // x23
  int32_t needAp; // w24
  RecoverItemComponent_CallbackFunc_o *v19; // x25
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x5

  if ( (byte_4A73974 & 1) == 0 )
  {
    sub_1B90010(&RecoverItemComponent_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMaster_RecoverMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__, v7);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    sub_1B90010(&Method_RecoverDlgComponent_requestRecover__, v9);
    byte_4A73974 = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (RecoverMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(Master_object, 1, 0LL);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)Master_object,
                                         (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_object )
      goto LABEL_22;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
    v14 = Master_object;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        Master_object = (RecoverMaster_o *)this->fields.recoverItemList;
        if ( !Master_object )
          break;
        if ( (__int64)v15 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v15 >= (unsigned int)MasterName_k__BackingField )
            sub_1B90274(Master_object, v12);
          v16 = (RecoverEntity_o *)*((_QWORD *)&v14->fields.list + v15);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v15,
                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            needAp = this->fields.needAp;
            v19 = (RecoverItemComponent_CallbackFunc_o *)sub_1B9025C(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v19,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              v20);
            if ( !Item )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Item, v16, needAp, this, v19, v21);
          }
        }
        LODWORD(MasterName_k__BackingField) = v14->fields._MasterName_k__BackingField;
        if ( (__int64)++v15 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_22:
      sub_1B9026C(Master_object, v12);
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

  if ( (byte_4A73971 & 1) == 0 )
  {
    sub_1B90010(&RecoverDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A73971 = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B9052C(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4A73978 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73978 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1B9026C(itemListInfoGrid, method);
  }
}


System_String_o *__fastcall RecoverDlgComponent__get_closeBtnPath(
        RecoverDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A7397B & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_3198/*"BaseWindow/CloseBtn"*/, method);
    byte_4A7397B = 1;
  }
  return (System_String_o *)StringLiteral_3198/*"BaseWindow/CloseBtn"*/;
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

  if ( (byte_4A73972 & 1) == 0 )
  {
    sub_1B90010(&RecoverDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A73972 = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B9052C(v8);
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x24
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  NetworkManager_ResultCallbackFunc_o *v26; // x22
  Il2CppObject *Request_object; // x0
  __int64 v28; // x1
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  NetworkManager_ResultCallbackFunc_o *v30; // x22
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v32; // [xsp+18h] [xbp-48h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A73979 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B90010(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, v9);
    sub_1B90010(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___, v10);
    sub_1B90010(&Method_NetworkManager_getRequest_RecoverUseItemRequest___, v11);
    sub_1B90010(&NetworkManager_TypeInfo, v12);
    sub_1B90010(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__, v13);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v14);
    sub_1B90010(&RecoverType_Type_TypeInfo, v15);
    sub_1B90010(&StringLiteral_22914/*"requestApItem Param: {0}, {1}, {2}"*/, v16);
    byte_4A73979 = 1;
  }
  v33 = type;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v33, *(_QWORD *)&id, *(_QWORD *)&num, method);
  v32 = id;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v18, v19, v20);
  v31 = num;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
  System_String__Format_61801532((System_String_o *)StringLiteral_22914/*"requestApItem Param: {0}, {1}, {2}"*/, v17, v21, v25, 0LL);
  switch ( type )
  {
    case 1:
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v29,
                         (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverCmdSpellRequest__beginRequest((RecoverCmdSpellRequest_o *)Request_object, id, 0LL);
      break;
    case 3:
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v30,
                         (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_object, id, num, 0LL);
      break;
    case 2:
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v26,
                         (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_object )
      {
        PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, id, num, 0LL);
        return;
      }
LABEL_19:
      sub_1B9026C(Request_object, v28);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19DA4C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19DA480;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecoverDlgComponent_CallbackFunc__BeginInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A7397D & 1) == 0 )
  {
    sub_1B90010(&RecoverDlgComponent_Result_TypeInfo, *(_QWORD *)&result);
    byte_4A7397D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall RecoverDlgComponent_CallbackFunc__Invoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
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
    sub_1B9026C(0LL, method);
  RecoverDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}