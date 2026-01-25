void RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CE84D8 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE84D8 = 1;
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
  sub_1C7BA8C(p_callbackFunc, 0);
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

  if ( (byte_4CE84D2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_RecoverDlgComponent_EndClose__);
    byte_4CE84D2 = 1;
  }
  v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0);
  RecoverDlgComponent__Close_31690664(this, v3, v4);
}


void RecoverDlgComponent__Close_31690664(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  UnityEngine_Behaviour_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v9; // x21

  if ( (byte_4CE84D3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__);
    sub_1C7BAE8(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_4CE84D3 = 1;
  }
  v5 = (Il2CppObject *)sub_1C7BD34(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_10;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C7BA8C(&v5[1].monitor, callback);
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
    sub_1C7BD40(v6, v7);
  }
LABEL_9:
  v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
    sub_1C7BD40(0, v4);
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
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE84D6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_RecoverDlgComponent_OnClickClose__);
    byte_4CE84D6 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_RecoverDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  __int64 gameObject; // x0
  __int64 v10; // x1
  UILabel_o *titleDetailLabel; // x22
  UnityEngine_Object_o *apSeedExchangeMgr; // x22
  UnityEngine_Object_o *tradeApButton; // x22
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x8
  __int64 v16; // x22
  unsigned __int64 v17; // x28
  RecoverEntity_o *v18; // x25
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v21; // x24
  UnityEngine_Transform_o *v22; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v24; // x27
  const MethodInfo *v25; // x5
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  System_Action_o *v30; // x20
  bool v31; // [xsp+8h] [xbp-68h]

  if ( (byte_4CE84CF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_RecoverDlgComponent_EndOpen__);
    sub_1C7BAE8(&Method_RecoverDlgComponent_requestRecover__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_2020/*"APRECV_TITILE_DETAIL_TXT"*/);
    sub_1C7BAE8(&StringLiteral_2021/*"APRECV_TITILE_TXT"*/);
    byte_4CE84CF = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  this->fields.needAp = needAp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2021/*"APRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"APRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_39;
  UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.isClosed = 0;
  apSeedExchangeMgr = (UnityEngine_Object_o *)this->fields.apSeedExchangeMgr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(apSeedExchangeMgr, 0, 0) )
  {
    gameObject = (__int64)this->fields.apSeedExchangeMgr;
    if ( !gameObject )
      goto LABEL_39;
    TerminalApSeedExchangeManager__Initialize((TerminalApSeedExchangeManager_o *)gameObject, 0);
  }
  tradeApButton = (UnityEngine_Object_o *)this->fields.tradeApButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeApButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.tradeApButton;
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v14;
  sub_1C7BA8C(&this->fields.recoverItemList, v14);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0
    || (v31 = canMaskTouchClose,
        (gameObject = (__int64)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0)) == 0)
    || (gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)gameObject,
                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0 )
  {
LABEL_39:
    sub_1C7BD40(gameObject, v10);
  }
  v15 = *(_QWORD *)(gameObject + 24);
  v16 = gameObject;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1C7BD48(gameObject);
      gameObject = (__int64)this->fields.itemListInfoGrid;
      if ( !gameObject )
        goto LABEL_39;
      v18 = *(RecoverEntity_o **)(v16 + 32 + 8 * v17);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0, 0);
      if ( !gameObject )
        goto LABEL_39;
      v21 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v22 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CE7E59 )
      {
        gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      if ( !v22 )
        goto LABEL_39;
      UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v21,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v24 = (RecoverItemComponent_CallbackFunc_o *)sub_1C7BD34(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0);
      if ( !Component_object )
        goto LABEL_39;
      RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Component_object, v18, needAp, this, v24, v25);
      gameObject = (__int64)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_39;
      v26 = *(_QWORD *)(gameObject + 16);
      v27 = Method_System_Collections_Generic_List_RecoverItemComponent__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v26 )
        goto LABEL_39;
      v28 = *(int *)(gameObject + 24);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * v28;
        *(_DWORD *)(gameObject + 24) = v28 + 1;
        *(_QWORD *)(v29 + 32) = Component_object;
        sub_1C7BA8C(v29 + 32, Component_object);
      }
      UnityEngine_GameObject__SetActive(v21, 1, 0);
      LODWORD(v15) = *(_DWORD *)(v16 + 24);
    }
    while ( (__int64)++v17 < (int)v15 );
  }
  gameObject = (__int64)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_39;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v31, 0);
  v30 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
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
  System_String_c *klass; // x8
  System_String_o *v13; // x22
  unsigned __int64 v14; // x28
  RecoverEntity_o *v15; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x25
  UnityEngine_Transform_o *v19; // x26
  Il2CppObject *Component_object; // x26
  RecoverItemComponent_CallbackFunc_o *v21; // x27
  const MethodInfo *v22; // x5
  System_Action_o *v23; // x20
  bool v24; // [xsp+8h] [xbp-68h]

  if ( (byte_4CE84D1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_RecoverDlgComponent_EndOpen__);
    sub_1C7BAE8(&Method_RecoverDlgComponent_requestRecover__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_11211/*"RPRECV_TITILE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_11210/*"RPRECV_TITILE_DETAIL_TXT"*/);
    byte_4CE84D1 = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11211/*"RPRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11210/*"RPRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_24;
  UILabel__set_text(titleDetailLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_24;
  v24 = canMaskTouchClose;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)gameObject,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject[1].klass;
  v13 = gameObject;
  if ( (int)klass >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)klass )
        sub_1C7BD48(gameObject);
      gameObject = (System_String_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v15 = (RecoverEntity_o *)*((_QWORD *)&v13[1].monitor + v14);
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
      v18 = (UnityEngine_GameObject_o *)gameObject;
      gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v19 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CE7E59 )
      {
        gameObject = (System_String_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      if ( !v19 )
        break;
      UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v18,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v21 = (RecoverItemComponent_CallbackFunc_o *)sub_1C7BD34(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        0);
      if ( !Component_object )
        break;
      RecoverItemComponent__setRPRecvItemInfo((RecoverItemComponent_o *)Component_object, v15, needRp, this, v21, v22);
      UnityEngine_GameObject__SetActive(v18, 1, 0);
      LODWORD(klass) = v13[1].klass;
      if ( (__int64)++v14 >= (int)klass )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C7BD40(gameObject, v10);
  }
LABEL_22:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_24;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v24, 0);
  v23 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0, 0);
}


void RecoverDlgComponent__UpdateApRecvItemDlg(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_RecoverItemComponent__o *recoverItemList; // x8
  RecoverMaster_o *Master_object; // x0
  __int64 v5; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  RecoverMaster_o *v7; // x20
  unsigned __int64 v8; // x21
  RecoverEntity_o *v9; // x22
  Il2CppObject *Item; // x23
  int32_t needAp; // w24
  RecoverItemComponent_CallbackFunc_o *v12; // x25
  const MethodInfo *v13; // x5

  if ( (byte_4CE84D0 & 1) == 0 )
  {
    sub_1C7BAE8(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RecoverMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_RecoverDlgComponent_requestRecover__);
    byte_4CE84D0 = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (RecoverMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(Master_object, 1, 0);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)Master_object,
                                         (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    if ( !Master_object )
      goto LABEL_22;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
    v7 = Master_object;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        Master_object = (RecoverMaster_o *)this->fields.recoverItemList;
        if ( !Master_object )
          break;
        if ( (__int64)v8 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v8 >= (unsigned int)MasterName_k__BackingField )
            sub_1C7BD48(Master_object);
          v9 = (RecoverEntity_o *)*((_QWORD *)&v7->fields.revision + v8);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v8,
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            needAp = this->fields.needAp;
            v12 = (RecoverItemComponent_CallbackFunc_o *)sub_1C7BD34(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v12,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              0);
            if ( !Item )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Item, v9, needAp, this, v12, v13);
          }
        }
        LODWORD(MasterName_k__BackingField) = v7->fields._MasterName_k__BackingField;
        if ( (__int64)++v8 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_22:
      sub_1C7BD40(Master_object, v5);
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

  if ( (byte_4CE84CD & 1) == 0 )
  {
    sub_1C7BAE8(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_4CE84CD = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1C7C0DC(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CE84D4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE84D4 = 1;
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
      UnityEngine_Object__Destroy_71870148(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1C7BD40(itemListInfoGrid, method);
  }
}


System_String_o *RecoverDlgComponent__get_closeBtnPath(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CE84D7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3076/*"BaseWindow/CloseBtn"*/);
    byte_4CE84D7 = 1;
  }
  return (System_String_o *)StringLiteral_3076/*"BaseWindow/CloseBtn"*/;
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

  if ( (byte_4CE84CE & 1) == 0 )
  {
    sub_1C7BAE8(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_4CE84CE = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1C7C0DC(v8);
  RecoverDlgComponent__Init(v11, v12);
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
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x22
  int32_t v17; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v18; // [xsp+18h] [xbp-48h] BYREF
  int32_t v19; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CE84D5 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_RecoverUseItemRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&RecoverType_Type_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23278/*"requestApItem Param: {0}, {1}, {2}"*/);
    byte_4CE84D5 = 1;
  }
  v19 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v19);
  v18 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17 = num;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  System_String__Format_64218288((System_String_o *)StringLiteral_23278/*"requestApItem Param: {0}, {1}, {2}"*/, v9, v10, v11, 0);
  switch ( type )
  {
    case 1:
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v15,
                         (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverCmdSpellRequest__beginRequest((RecoverCmdSpellRequest_o *)Request_object, id, 0);
      break;
    case 3:
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v16,
                         (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_object, id, num, 0);
      break;
    case 2:
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v12,
                         (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_object )
      {
        PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, id, num, 0);
        return;
      }
LABEL_19:
      sub_1C7BD40(Request_object, v14);
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA80A0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA8058;
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
  if ( (byte_4CE84D9 & 1) == 0 )
  {
    sub_1C7BAE8(&RecoverDlgComponent_Result_TypeInfo);
    byte_4CE84D9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
    sub_1C7BD40(0, method);
  RecoverDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}