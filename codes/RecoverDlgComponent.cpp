void RecoverDlgComponent___ctor(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2AFF5 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2AFF5 = 1;
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
  sub_1C93A78(p_callbackFunc, 0);
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

  if ( (byte_4D2AFEF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_RecoverDlgComponent_EndClose__);
    byte_4D2AFEF = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RecoverDlgComponent_EndClose__, 0);
  RecoverDlgComponent__Close_32787576(this, v3, v4);
}


void RecoverDlgComponent__Close_32787576(
        RecoverDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  UnityEngine_Behaviour_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *tradeApButton; // x21
  System_Action_o *v9; // x21

  if ( (byte_4D2AFF0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_RecoverDlgComponent___c__DisplayClass21_0__Close_b__0__);
    sub_1C93AD4(&RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_4D2AFF0 = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(RecoverDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_10;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C93A78(&v5[1].monitor, callback);
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
    sub_1C93D2C(v6, v7);
  }
LABEL_9:
  v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
    sub_1C93D2C(0, v4);
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
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecoverDlgComponent__OnClickClose(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2AFF3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecoverDlgComponent_OnClickClose__);
    byte_4D2AFF3 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_RecoverDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_RecoverDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecoverDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x5
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Action_o *v31; // x20
  bool v32; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2AFEC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverItemComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_RecoverDlgComponent_EndOpen__);
    sub_1C93AD4(&Method_RecoverDlgComponent_requestRecover__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_2032/*"APRECV_TITILE_DETAIL_TXT"*/);
    sub_1C93AD4(&StringLiteral_2033/*"APRECV_TITILE_TXT"*/);
    byte_4D2AFEC = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needAp);
  this->fields.callbackFunc = callback;
  sub_1C93A78(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  this->fields.needAp = needAp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"APRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2032/*"APRECV_TITILE_DETAIL_TXT"*/, 0);
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
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_RecoverItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_RecoverItemComponent___ctor__);
  this->fields.recoverItemList = (struct System_Collections_Generic_List_RecoverItemComponent__o *)v14;
  sub_1C93A78(&this->fields.recoverItemList, v14);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RecoverMaster___)) == 0
    || (v32 = canMaskTouchClose,
        (gameObject = (__int64)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 1, 0)) == 0)
    || (gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)gameObject,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__)) == 0 )
  {
LABEL_39:
    sub_1C93D2C(gameObject, v10);
  }
  v15 = *(_QWORD *)(gameObject + 24);
  v16 = gameObject;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1C93D34(gameObject);
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
      if ( !byte_4D2A139 )
      {
        gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( !v22 )
        goto LABEL_39;
      UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v21,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v24 = (RecoverItemComponent_CallbackFunc_o *)sub_1C93D20(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v25);
      if ( !Component_object )
        goto LABEL_39;
      RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Component_object, v18, needAp, this, v24, v26);
      gameObject = (__int64)this->fields.recoverItemList;
      if ( !gameObject )
        goto LABEL_39;
      v27 = *(_QWORD *)(gameObject + 16);
      v28 = Method_System_Collections_Generic_List_RecoverItemComponent__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v27 )
        goto LABEL_39;
      v29 = *(int *)(gameObject + 24);
      if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * v29;
        *(_DWORD *)(gameObject + 24) = v29 + 1;
        *(_QWORD *)(v30 + 32) = Component_object;
        sub_1C93A78(v30 + 32, Component_object);
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
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v32, 0);
  v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0, 0);
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
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5
  System_Action_o *v24; // x20
  bool v25; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2AFEE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_RecoverDlgComponent_EndOpen__);
    sub_1C93AD4(&Method_RecoverDlgComponent_requestRecover__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_11248/*"RPRECV_TITILE_TXT"*/);
    sub_1C93AD4(&StringLiteral_11247/*"RPRECV_TITILE_DETAIL_TXT"*/);
    byte_4D2AFEE = 1;
  }
  RecoverDlgComponent__clearInfoGrid(this, *(const MethodInfo **)&needRp);
  this->fields.callbackFunc = callback;
  sub_1C93A78(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11248/*"RPRECV_TITILE_TXT"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11247/*"RPRECV_TITILE_DETAIL_TXT"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_24;
  UILabel__set_text(titleDetailLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.isClosed = 0;
  gameObject = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RecoverMaster___);
  if ( !gameObject )
    goto LABEL_24;
  v25 = canMaskTouchClose;
  gameObject = (System_String_o *)RecoverMaster__getRecvEntityList((RecoverMaster_o *)gameObject, 2, 0);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)gameObject,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
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
        sub_1C93D34(gameObject);
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
      if ( !byte_4D2A139 )
      {
        gameObject = (System_String_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( !v19 )
        break;
      UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v18,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_RecoverItemComponent___);
      v21 = (RecoverItemComponent_CallbackFunc_o *)sub_1C93D20(RecoverItemComponent_CallbackFunc_TypeInfo);
      RecoverItemComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_requestRecover__,
        v22);
      if ( !Component_object )
        break;
      RecoverItemComponent__setRPRecvItemInfo((RecoverItemComponent_o *)Component_object, v15, needRp, this, v21, v23);
      UnityEngine_GameObject__SetActive(v18, 1, 0);
      LODWORD(klass) = v13[1].klass;
      if ( (__int64)++v14 >= (int)klass )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C93D2C(gameObject, v10);
  }
LABEL_22:
  gameObject = (System_String_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_24;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, v25, 0);
  v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_RecoverDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x5

  if ( (byte_4D2AFED & 1) == 0 )
  {
    sub_1C93AD4(&RecoverItemComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_RecoverMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_RecoverDlgComponent_requestRecover__);
    byte_4D2AFED = 1;
  }
  recoverItemList = this->fields.recoverItemList;
  if ( recoverItemList && recoverItemList->fields._size )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (RecoverMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_RecoverMaster___);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)RecoverMaster__getRecvEntityList(Master_object, 1, 0);
    if ( !Master_object )
      goto LABEL_22;
    Master_object = (RecoverMaster_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)Master_object,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_RecoverEntity__ToArray__);
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
            sub_1C93D34(Master_object);
          v9 = (RecoverEntity_o *)*((_QWORD *)&v7->fields.revision + v8);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v8,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_RecoverItemComponent__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            needAp = this->fields.needAp;
            v12 = (RecoverItemComponent_CallbackFunc_o *)sub_1C93D20(RecoverItemComponent_CallbackFunc_TypeInfo);
            RecoverItemComponent_CallbackFunc___ctor(
              v12,
              (Il2CppObject *)this,
              Method_RecoverDlgComponent_requestRecover__,
              v13);
            if ( !Item )
              break;
            RecoverItemComponent__setAPRecvItemInfo((RecoverItemComponent_o *)Item, v9, needAp, this, v12, v14);
          }
        }
        LODWORD(MasterName_k__BackingField) = v7->fields._MasterName_k__BackingField;
        if ( (__int64)++v8 >= (int)MasterName_k__BackingField )
          return;
      }
LABEL_22:
      sub_1C93D2C(Master_object, v5);
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

  if ( (byte_4D2AFEA & 1) == 0 )
  {
    sub_1C93AD4(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_4D2AFEA = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1C940C8(v8);
  RecoverDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void RecoverDlgComponent__clearInfoGrid(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4D2AFF1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AFF1 = 1;
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
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1C93D2C(itemListInfoGrid, method);
  }
}


System_String_o *RecoverDlgComponent__get_closeBtnPath(RecoverDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2AFF4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3089/*"BaseWindow/CloseBtn"*/);
    byte_4D2AFF4 = 1;
  }
  return (System_String_o *)StringLiteral_3089/*"BaseWindow/CloseBtn"*/;
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

  if ( (byte_4D2AFEB & 1) == 0 )
  {
    sub_1C93AD4(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    byte_4D2AFEB = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverDlgComponent_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2AFF2 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_RecoverUseItemRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_RecoverDlgComponent_EndRequestUserGameActRecover__);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&RecoverType_Type_TypeInfo);
    sub_1C93AD4(&StringLiteral_23343/*"requestApItem Param: {0}, {1}, {2}"*/);
    byte_4D2AFF2 = 1;
  }
  v19 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v19);
  v18 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17 = num;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  System_String__Format_64467100((System_String_o *)StringLiteral_23343/*"requestApItem Param: {0}, {1}, {2}"*/, v9, v10, v11, 0);
  switch ( type )
  {
    case 1:
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v15,
                         (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_RecoverCmdSpellRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverCmdSpellRequest__beginRequest((RecoverCmdSpellRequest_o *)Request_object, id, 0);
      break;
    case 3:
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v16,
                         (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_RecoverUseItemRequest___);
      if ( !Request_object )
        goto LABEL_19;
      RecoverUseItemRequest__beginRequest((RecoverUseItemRequest_o *)Request_object, id, num, 0);
      break;
    case 2:
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecoverDlgComponent_EndRequestUserGameActRecover__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v12,
                         (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
      if ( Request_object )
      {
        PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, id, num, 0);
        return;
      }
LABEL_19:
      sub_1C93D2C(Request_object, v14);
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
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ABFEE0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ABFE98;
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
  if ( (byte_4D2AFF6 & 1) == 0 )
  {
    sub_1C93AD4(&RecoverDlgComponent_Result_TypeInfo);
    byte_4D2AFF6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecoverDlgComponent_Result_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void RecoverDlgComponent_CallbackFunc__EndInvoke(
        RecoverDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
    sub_1C93D2C(0, method);
  RecoverDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}