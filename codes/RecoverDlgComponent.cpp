void __fastcall RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10F94 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10F94 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__Callback(RecoverDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  struct RecoverDlgComponent_CallbackFunc_o *v4; // x20
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1BCA784(p_callbackFunc, 0LL);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
}


void __fastcall RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B10F8E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecoverDlgComponent_EndClose__, v5, v6);
    byte_4B10F8E = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0LL);
  RecoverDlgComponent__Close_30891232(this, v7, v8);
}


void __fastcall RecoverDlgComponent__Close_30891232(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  UnityEngine_Behaviour_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *tradeApButton; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x21

  if ( (byte_4B10F8F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, v8, v9);
    sub_1BCA7E0(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, v10, v11);
    byte_4B10F8F = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo, callback, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v12[1], this);
  v12[1].monitor = callback;
  sub_1BCA784(&v12[1].monitor, callback);
  this->fields.isClosed = 1;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    v13 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v13 )
    {
      UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(v13, v14);
  }
LABEL_9:
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v17, v18);
  System_Action___ctor(v19, v12, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
}


void __fastcall RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B10F92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecoverDlgComponent_OnClickClose__, method, v2);
    byte_4B10F92 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v4 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    RecoverDlgComponent__Callback(this, 0, v6);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  UILabel_o *titleLabel; // x22
  __int64 gameObject; // x0
  __int64 v39; // x1
  UILabel_o *titleDetailLabel; // x22
  __int64 v41; // x1
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  UnityEngine_Object_o *tradeApButton; // x22
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_object__o *v46; // x22
  __int64 v47; // x8
  __int64 v48; // x22
  unsigned __int64 v49; // x28
  RecoverEntity_o *v50; // x25
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v53; // x24
  __int64 v54; // x2
  UnityEngine_Transform_o *v55; // x26
  Il2CppObject *Component_object; // x26
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  RecoverItemComponent_CallbackFunc_o *v60; // x27
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x5
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x20
  bool v71; // [xsp+8h] [xbp-68h]

  if ( (byte_4B10F8B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&needAp, callback);
    sub_1BCA7E0(&RecoverItemComponent_CallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RecoverMaster___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_RecoverDlgComponent_EndOpen__, v26, v27);
    sub_1BCA7E0(&Method_RecoverDlgComponent_requestRecover__, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&StringLiteral_2137/*"APRECV_TITILE_DETAIL_TXT"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_2138/*"APRECV_TITILE_TXT"*/, v34, v35);
    byte_4B10F8B = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  this->fields.needAp = needAp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"APRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2137/*"APRECV_TITILE_DETAIL_TXT"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.apSeedExchangeMgr;
    if ( !gameObject )
      goto LABEL_39;
    TerminalApSeedExchangeManager__Initialize((TerminalApSeedExchangeManager_o *)gameObject, 0LL);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.tradeApButton;
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RecoverItemComponent__TypeInfo,
                                                       v39,
                                                       v44,
                                                       v45);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v46;
  sub_1BCA784(&this->fields.recoverItemList, v46);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0
    || (v71 = canMaskTouchClose,
        (gameObject = (__int64)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0LL)) == 0)
    || (gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)gameObject,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0 )
  {
LABEL_39:
    sub_1BCAA3C(gameObject, v39);
  }
  v47 = *(_QWORD *)(gameObject + 24);
  v48 = gameObject;
  if ( (int)v47 >= 1 )
  {
    v49 = 0LL;
    do
    {
      if ( v49 >= (unsigned int)v47 )
        sub_1BCAA44(gameObject, v39);
      gameObject = (__int64)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_39;
      v50 = *(RecoverEntity_o **)(v48 + 32 + 8 * v49);
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
      v53 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v55 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C1 )
      {
        gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v54);
        byte_4B109C1 = 1;
      }
      if ( !v55 )
        goto LABEL_39;
      UnityEngine_Transform__set_localPosition(v55, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v53,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v60 = (RecoverItemComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                     RecoverItemComponent_CallbackFunc_TypeInfo,
                                                     v57,
                                                     v58,
                                                     v59);
      RecoverItemComponent_CallbackFunc___ctor(
        v60,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v61);
      if ( !Component_object )
        goto LABEL_39;
      RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Component_object, v50, needAp, this, v60, v62);
      gameObject = (__int64)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_39;
      v63 = *(_QWORD *)(gameObject + 16);
      v64 = Method_System_Collections_Generic_List_RecoverItemComponent__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v63 )
        goto LABEL_39;
      v65 = *(int *)(gameObject + 24);
      if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = v63 + 8 * v65;
        *(_DWORD *)(gameObject + 24) = v65 + 1;
        *(_QWORD *)(v66 + 32) = Component_object;
        sub_1BCA784(v66 + 32, Component_object);
      }
      UnityEngine_GameObject__SetActive(v53, 1, 0LL);
      LODWORD(v47) = *(_DWORD *)(v48 + 24);
    }
    while ( (__int64)++v49 < (int)v47 );
  }
  gameObject = (__int64)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_39;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v71, 0LL);
  v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v31; // x1
  UILabel_o *titleDetailLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v34; // x22
  unsigned __int64 v35; // x28
  RecoverEntity_o *v36; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v39; // x25
  __int64 v40; // x2
  UnityEngine_Transform_o *v41; // x26
  Il2CppObject *Component_object; // x26
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  RecoverItemComponent_CallbackFunc_o *v46; // x27
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x5
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_o *v52; // x20
  bool v53; // [xsp+8h] [xbp-68h]

  if ( (byte_4B10F8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&needRp, callback);
    sub_1BCA7E0(&RecoverItemComponent_CallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RecoverMaster___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_RecoverDlgComponent_EndOpen__, v18, v19);
    sub_1BCA7E0(&Method_RecoverDlgComponent_requestRecover__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_11264/*"RPRECV_TITILE_TXT"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11263/*"RPRECV_TITILE_DETAIL_TXT"*/, v26, v27);
    byte_4B10F8D = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11264/*"RPRECV_TITILE_TXT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11263/*"RPRECV_TITILE_DETAIL_TXT"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_24;
  UILabel__set_text(titleDetailLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_24;
  v53 = canMaskTouchClose;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)gameObject,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject[1].klass;
  v34 = gameObject;
  if ( (int)klass >= 1 )
  {
    v35 = 0LL;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)klass )
        sub_1BCAA44(gameObject, v31);
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v36 = (RecoverEntity_o *)*((_QWORD *)&v34[1].monitor + v35);
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
      v39 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v41 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C1 )
      {
        gameObject = (System_String_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v31, v40);
        byte_4B109C1 = 1;
      }
      if ( !v41 )
        break;
      UnityEngine_Transform__set_localPosition(v41, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v39,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v46 = (RecoverItemComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                     RecoverItemComponent_CallbackFunc_TypeInfo,
                                                     v43,
                                                     v44,
                                                     v45);
      RecoverItemComponent_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v47);
      if ( !Component_object )
        break;
      RecoverItemComponent__setRPRecvItemInfo((RecoverItemComponent_o *)Component_object, v36, needRp, this, v46, v48);
      UnityEngine_GameObject__SetActive(v39, 1, 0LL);
      LODWORD(klass) = v34[1].klass;
      if ( (__int64)++v35 >= (int)klass )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(gameObject, v31);
  }
LABEL_22:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_24;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v53, 0LL);
  v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v50, v51);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
}


void __fastcall RecoverDlgComponent__UpdateApRecvItemDlg(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x8
  RecoverMaster_o *Master_object; // x0
  __int64 v20; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v22; // x20
  unsigned __int64 v23; // x21
  RecoverEntity_o *v24; // x22
  __int64 v25; // x1
  Il2CppObject *Item; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  int32_t needAp; // w24
  RecoverItemComponent_CallbackFunc_o *v30; // x25
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x5

  if ( (byte_4B10F8C & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverItemComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecoverMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_RecoverDlgComponent_requestRecover__, v16, v17);
    byte_4B10F8C = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (RecoverMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(Master_object, 1, 0LL);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)Master_object,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_object )
      goto LABEL_22;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
    v22 = Master_object;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        Master_object = (RecoverMaster_o *)this->fields.recoverItemList;
        if ( !Master_object )
          break;
        if ( (__int64)v23 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v23 >= (unsigned int)MasterName_k__BackingField )
            sub_1BCAA44(Master_object, v20);
          v24 = (RecoverEntity_o *)*((_QWORD *)&v22->fields.list + v23);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v23,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            needAp = this->fields.needAp;
            v30 = (RecoverItemComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                           RecoverItemComponent_CallbackFunc_TypeInfo,
                                                           v20,
                                                           v27,
                                                           v28);
            RecoverItemComponent_CallbackFunc___ctor(
              v30,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              v31);
            if ( !Item )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Item, v24, needAp, this, v30, v32);
          }
        }
        LODWORD(MasterName_k__BackingField) = v22->fields._MasterName_k__BackingField;
        if ( (__int64)++v23 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_22:
      sub_1BCAA3C(Master_object, v20);
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

  if ( (byte_4B10F89 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B10F89 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1BCACFC(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B10F90 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10F90 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 && (v6 & 0x80000000) == 0 )
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
                                                      v6,
                                                      0LL);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(itemListInfoGrid, method);
  }
}


System_String_o *__fastcall RecoverDlgComponent__get_closeBtnPath(
        RecoverDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10F93 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3221/*"BaseWindow/CloseBtn"*/, method, v2);
    byte_4B10F93 = 1;
  }
  return (System_String_o *)StringLiteral_3221/*"BaseWindow/CloseBtn"*/;
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

  if ( (byte_4B10F8A & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B10F8A = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1BCACFC(v8);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x24
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  NetworkManager_ResultCallbackFunc_o *v31; // x22
  __int64 v32; // x1
  Il2CppObject *Request_object; // x0
  __int64 v34; // x1
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  __int64 v36; // x1
  NetworkManager_ResultCallbackFunc_o *v37; // x22
  __int64 v38; // x1
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v40; // [xsp+18h] [xbp-48h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B10F91 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, v9, v10);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___, v11, v12);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_RecoverUseItemRequest___, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__, v17, v18);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20);
    sub_1BCA7E0(&RecoverType_Type_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_23126/*"requestApItem Param: {0}, {1}, {2}"*/, v23, v24);
    byte_4B10F91 = 1;
  }
  v41 = type;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v41);
  v40 = id;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v39 = num;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  System_String__Format_62415660((System_String_o *)StringLiteral_23126/*"requestApItem Param: {0}, {1}, {2}"*/, v25, v26, v27, 0LL);
  switch ( type )
  {
    case 1:
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v28,
                                                     v29,
                                                     v30);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
      Request_object = NetworkManager__getRequest_object_(
                         v35,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverCmdSpellRequest__beginRequest((RecoverCmdSpellRequest_o *)Request_object, id, 0LL);
      break;
    case 3:
      v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v28,
                                                     v29,
                                                     v30);
      NetworkManager_ResultCallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
      Request_object = NetworkManager__getRequest_object_(
                         v37,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_object, id, num, 0LL);
      break;
    case 2:
      v31 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v28,
                                                     v29,
                                                     v30);
      NetworkManager_ResultCallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
      Request_object = NetworkManager__getRequest_object_(
                         v31,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_object )
      {
        PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, id, num, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(Request_object, v34);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04EC4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04E7C;
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
  if ( (byte_4B10F95 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverDlgComponent_Result_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B10F95 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(0LL, method);
  RecoverDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}