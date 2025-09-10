void RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C213E6 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C213E6 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecoverDlgComponent__Callback(RecoverDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  struct RecoverDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  struct RecoverDlgComponent_CallbackFunc_o *v4; // x20
  struct RecoverDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C2D434(p_callbackFunc);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
}


void RecoverDlgComponent__Close(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C213E0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RecoverDlgComponent_EndClose__);
    byte_4C213E0 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0);
  RecoverDlgComponent__Close_31326456(this, v3, v4);
}


void RecoverDlgComponent__Close_31326456(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  UnityEngine_Behaviour_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v9; // x21

  if ( (byte_4C213E1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__);
    sub_1C2D490(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_4C213E1 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_10;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v5[1]);
  v5[1].monitor = callback;
  sub_1C2D434(&v5[1].monitor);
  this->fields.isClosed = 1;
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.tradeApButton;
    if ( v6 )
    {
      UnityEngine_Behaviour__set_enabled(v6, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_1C2D6EC(v6, v7);
  }
LABEL_9:
  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v9, v5, Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0);
}


void RecoverDlgComponent__EndClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  RecoverDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
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
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C213E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_RecoverDlgComponent_OnClickClose__);
    byte_4C213E4 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *titleDetailLabel; // x22
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  UnityEngine_Object_o *tradeApButton; // x22
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  System_String_c *klass; // x8
  System_String_o *v18; // x22
  unsigned __int64 v19; // x28
  RecoverEntity_o *v20; // x25
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_Transform_o *v24; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v26; // x27
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x5
  System_String_Fields fields; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  System_Action_o *v33; // x20
  bool v34; // [xsp+8h] [xbp-68h]

  if ( (byte_4C213DD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_RecoverDlgComponent_EndOpen__);
    sub_1C2D490(&Method_RecoverDlgComponent_requestRecover__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_2020/*"APRECV_TITILE_DETAIL_TXT"*/);
    sub_1C2D490(&StringLiteral_2021/*"APRECV_TITILE_TXT"*/);
    byte_4C213DD = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  this->fields.needAp = needAp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2021/*"APRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"APRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_39;
  UILabel__set_text(titleDetailLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.isClosed = 0;
  apSeedExchangeMgr = (UnityEngine_Object_o *)this->fields.apSeedExchangeMgr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0, 0) )
  {
    gameObject = (System_String_o *)this->fields.apSeedExchangeMgr;
    if ( !gameObject )
      goto LABEL_39;
    TerminalApSeedExchangeManager__Initialize((TerminalApSeedExchangeManager_o *)gameObject, 0);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0, 0) )
  {
    gameObject = (System_String_o *)this->fields.tradeApButton;
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v14;
  sub_1C2D434(&this->fields.recoverItemList);
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0
    || (v34 = canMaskTouchClose,
        (gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0)) == 0)
    || (gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)gameObject,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0 )
  {
LABEL_39:
    sub_1C2D6EC(gameObject, v10);
  }
  klass = gameObject[1].klass;
  v18 = gameObject;
  if ( (int)klass >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= (unsigned int)klass )
        sub_1C2D6F4(gameObject, v10, v15, v16);
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_39;
      v20 = (RecoverEntity_o *)*((_QWORD *)&v18[1].monitor + v19);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = (System_String_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        itemListObj,
                                        transform,
                                        0,
                                        0);
      if ( !gameObject )
        goto LABEL_39;
      v23 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C20DA1 )
      {
        gameObject = (System_String_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v24 )
        goto LABEL_39;
      UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v23,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v26 = (RecoverItemComponent_CallbackFunc_o *)sub_1C2D6DC(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v27);
      if ( !Component_object )
        goto LABEL_39;
      RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Component_object, v20, needAp, this, v26, v28);
      gameObject = (System_String_o *)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_39;
      fields = gameObject->fields;
      v30 = Method_System_Collections_Generic_List_RecoverItemComponent__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_39;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1C2D434(v32 + 32);
      }
      UnityEngine_GameObject__SetActive(v23, 1, 0);
      LODWORD(klass) = v18[1].klass;
    }
    while ( (__int64)++v19 < (int)klass );
  }
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_39;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v34, 0);
  v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecoverDlgComponent__OpenRpRecvItemDlg(
        RecoverDlgComponent_o *this,
        int32_t needRp,
        RecoverDlgComponent_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *titleDetailLabel; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  System_String_c *klass; // x8
  System_String_o *v15; // x22
  unsigned __int64 v16; // x28
  RecoverEntity_o *v17; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x25
  UnityEngine_Transform_o *v21; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v23; // x27
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x5
  System_Action_o *v26; // x20
  bool v27; // [xsp+8h] [xbp-68h]

  if ( (byte_4C213DF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_RecoverDlgComponent_EndOpen__);
    sub_1C2D490(&Method_RecoverDlgComponent_requestRecover__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11157/*"RPRECV_TITILE_TXT"*/);
    sub_1C2D490(&StringLiteral_11156/*"RPRECV_TITILE_DETAIL_TXT"*/);
    byte_4C213DF = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11157/*"RPRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11156/*"RPRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_24;
  UILabel__set_text(titleDetailLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_24;
  v27 = canMaskTouchClose;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)gameObject,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject[1].klass;
  v15 = gameObject;
  if ( (int)klass >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)klass )
        sub_1C2D6F4(gameObject, v10, v12, v13);
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v17 = (RecoverEntity_o *)*((_QWORD *)&v15[1].monitor + v16);
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
      v20 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v21 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C20DA1 )
      {
        gameObject = (System_String_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v21 )
        break;
      UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v20,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v23 = (RecoverItemComponent_CallbackFunc_o *)sub_1C2D6DC(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v24);
      if ( !Component_object )
        break;
      RecoverItemComponent__setRPRecvItemInfo((RecoverItemComponent_o *)Component_object, v17, needRp, this, v23, v25);
      UnityEngine_GameObject__SetActive(v20, 1, 0);
      LODWORD(klass) = v15[1].klass;
      if ( (__int64)++v16 >= (int)klass )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C2D6EC(gameObject, v10);
  }
LABEL_22:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_24;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v27, 0);
  v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0);
}


void RecoverDlgComponent__UpdateApRecvItemDlg(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x8
  RecoverMaster_o *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v9; // x20
  unsigned __int64 v10; // x21
  RecoverEntity_o *v11; // x22
  Il2CppObject *Item; // x23
  int32_t needAp; // w24
  RecoverItemComponent_CallbackFunc_o *v14; // x25
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x5

  if ( (byte_4C213DE & 1) == 0 )
  {
    sub_1C2D490(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_RecoverMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_RecoverDlgComponent_requestRecover__);
    byte_4C213DE = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (RecoverMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(Master_object, 1, 0);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)Master_object,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_object )
      goto LABEL_22;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
    v9 = Master_object;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        Master_object = (RecoverMaster_o *)this->fields.recoverItemList;
        if ( !Master_object )
          break;
        if ( (__int64)v10 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v10 >= (unsigned int)MasterName_k__BackingField )
            sub_1C2D6F4(Master_object, v5, v6, v7);
          v11 = (RecoverEntity_o *)*((_QWORD *)&v9->fields.revision + v10);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v10,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            needAp = this->fields.needAp;
            v14 = (RecoverItemComponent_CallbackFunc_o *)sub_1C2D6DC(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v14,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              v15);
            if ( !Item )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Item, v11, needAp, this, v14, v16);
          }
        }
        LODWORD(MasterName_k__BackingField) = v9->fields._MasterName_k__BackingField;
        if ( (__int64)++v10 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_22:
      sub_1C2D6EC(Master_object, v5);
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
  __int64 v9; // x0
  bool v10; // zf
  RecoverDlgComponent_o *v11; // x0
  RecoverDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C213DB & 1) == 0 )
  {
    sub_1C2D490(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_4C213DB = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1C2D9AC(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C213E2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C213E2 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
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
                                                      v5,
                                                      0);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1C2D6EC(itemListInfoGrid, method);
  }
}


System_String_o *RecoverDlgComponent__get_closeBtnPath(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C213E5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3072/*"BaseWindow/CloseBtn"*/);
    byte_4C213E5 = 1;
  }
  return (System_String_o *)StringLiteral_3072/*"BaseWindow/CloseBtn"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  RecoverDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C213DC & 1) == 0 )
  {
    sub_1C2D490(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_4C213DC = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1C2D9AC(v8);
  RecoverDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void RecoverDlgComponent__requestRecover(
        RecoverDlgComponent_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  NetworkManager_ResultCallbackFunc_o *v18; // x22
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  NetworkManager_ResultCallbackFunc_o *v22; // x22
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+18h] [xbp-48h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C213E3 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C2D490(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
    sub_1C2D490(&Method_NetworkManager_getRequest_RecoverUseItemRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&RecoverType_Type_TypeInfo);
    sub_1C2D490(&StringLiteral_23032/*"requestApItem Param: {0}, {1}, {2}"*/);
    byte_4C213E3 = 1;
  }
  v25 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v25, *(_QWORD *)&id, *(_QWORD *)&num, method);
  v24 = id;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v10, v11, v12);
  v23 = num;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  System_String__Format_63499224((System_String_o *)StringLiteral_23032/*"requestApItem Param: {0}, {1}, {2}"*/, v9, v13, v17, 0);
  switch ( type )
  {
    case 1:
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v21,
                         (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverCmdSpellRequest__beginRequest((RecoverCmdSpellRequest_o *)Request_object, id, 0);
      break;
    case 3:
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v22,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v22,
                         (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_object, id, num, 0);
      break;
    case 2:
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_object )
      {
        PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, id, num, 0);
        return;
      }
LABEL_19:
      sub_1C2D6EC(Request_object, v20);
  }
}


void RecoverDlgComponent_CallbackFunc___ctor(
        RecoverDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A68F90;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A68F48;
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
  if ( (byte_4C213E7 & 1) == 0 )
  {
    sub_1C2D490(&RecoverDlgComponent_Result_TypeInfo);
    byte_4C213E7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
    sub_1C2D6EC(0, method);
  RecoverDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}