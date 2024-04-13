void __fastcall WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E93B1 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93B1 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__Callback(WarehouseConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  WarehouseConfirmMenu_CallbackFunc_o *v9; // x19
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WarehouseConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_26285464(this, 0LL, v2);
}


void __fastcall WarehouseConfirmMenu__Close_26285464(
        WarehouseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E93AD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarehouseConfirmMenu_EndClose__, v10, v11, v12);
    byte_42E93AD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall WarehouseConfirmMenu__EndClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  WarehouseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall WarehouseConfirmMenu__EndOpen(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall WarehouseConfirmMenu__Init(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E93AB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E93AB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__OnClickCancel(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E93AF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall WarehouseConfirmMenu__OnClickClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E93B0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93B0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall WarehouseConfirmMenu__OnClickDecide(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w0
  const MethodInfo *v6; // x2

  if ( (byte_42E93AE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( this->fields.kind > 3u )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v5 = 0;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v5 = 8;
    }
    SoundManager__playSystemSe(v5, 0LL);
    WarehouseConfirmMenu__Callback(this, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu__Open(
        WarehouseConfirmMenu_o *this,
        int32_t kind,
        WarehouseConfirmMenu_CallbackFunc_o *callback,
        int32_t param1,
        int32_t param2,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v92; // x1
  UnityEngine_GameObject_o *v93; // x23
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v98; // x8
  UILabel_o *v99; // x20
  UILabel_o *v100; // x20
  UILabel_o *v101; // x20
  UILabel_o *v102; // x20
  UILabel_o *v103; // x20
  UILabel_o *v104; // x20
  UILabel_o *v105; // x20
  UILabel_o *v106; // x22
  UILabel_o *v107; // x22
  __int64 *v108; // x8
  UILabel_o *v109; // x22
  System_String_o *v110; // x23
  Il2CppObject *v111; // x21
  Il2CppObject *v112; // x0
  UILabel_o *v113; // x22
  UILabel_o *v114; // x22
  __int64 *v115; // x8
  UILabel_o *v116; // x22
  System_String_o *v117; // x23
  Il2CppObject *v118; // x21
  Il2CppObject *v119; // x0
  System_Action_o *v120; // x20
  int32_t v121; // [xsp+8h] [xbp-38h] BYREF
  int32_t v122; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E93AC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)callback, *(_QWORD *)&param1);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_WarehouseConfirmMenu_EndOpen__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_15462/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_15481/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_15478/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_15480/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_15464/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_15476/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_15473/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_15482/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_15483/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_15475/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_15459/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_15477/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_15460/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_15471/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_15484/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_15472/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_15474/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_15479/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_15458/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_15465/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_15463/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_15461/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, v88, v89, v90);
    byte_42E93AC = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      *(System_String_array ***)&param1,
      *(System_Boolean_array ***)&param2,
      (System_Int32_array **)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( (unsigned int)kind < 4 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject
        || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL)
        || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
              gameObject,
              0LL,
              1LL,
              gameObject->klass[1]._1.interfaceOffsets),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL)
        || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
              gameObject,
              0LL,
              1LL,
              gameObject->klass[1]._1.interfaceOffsets),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL) )
      {
LABEL_84:
        sub_B5D69C(gameObject, v92);
      }
    }
    else
    {
      if ( (unsigned int)(kind - 4) > 7 )
      {
LABEL_29:
        switch ( kind )
        {
          case 0:
          case 1:
            titleLabel = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15461/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !titleLabel )
              goto LABEL_84;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15460/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/,
                                                       0LL);
            if ( !messageLabel )
              goto LABEL_84;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15459/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/,
                                                       0LL);
            if ( !decideLabel )
              goto LABEL_84;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v98 = &StringLiteral_15458/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
            goto LABEL_80;
          case 2:
          case 3:
            v101 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15465/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v101 )
              goto LABEL_84;
            UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
            v102 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15464/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/,
                                                       0LL);
            if ( !v102 )
              goto LABEL_84;
            UILabel__set_text(v102, (System_String_o *)gameObject, 0LL);
            v103 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15463/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/,
                                                       0LL);
            if ( !v103 )
              goto LABEL_84;
            UILabel__set_text(v103, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v98 = &StringLiteral_15462/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
            goto LABEL_80;
          case 4:
          case 5:
            v99 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15473/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !v99 )
              goto LABEL_84;
            UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
            v100 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15472/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/,
                                                       0LL);
            if ( !v100 )
              goto LABEL_84;
            UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v98 = &StringLiteral_15471/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
            goto LABEL_80;
          case 6:
          case 7:
            v104 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15476/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v104 )
              goto LABEL_84;
            UILabel__set_text(v104, (System_String_o *)gameObject, 0LL);
            v105 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15475/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/,
                                                       0LL);
            if ( !v105 )
              goto LABEL_84;
            UILabel__set_text(v105, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v98 = &StringLiteral_15474/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
            goto LABEL_80;
          case 8:
            v106 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15480/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !v106 )
              goto LABEL_84;
            UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
            v107 = this->fields.messageLabel;
            v108 = &StringLiteral_15479/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
            goto LABEL_66;
          case 9:
            v109 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15480/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !v109 )
              goto LABEL_84;
            UILabel__set_text(v109, (System_String_o *)gameObject, 0LL);
            v107 = this->fields.messageLabel;
            v108 = &StringLiteral_15478/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
LABEL_66:
            v110 = LocalizationManager__Get((System_String_o *)*v108, 0LL);
            v122 = param1;
            v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
            v121 = param2;
            v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121);
            gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v110, v111, v112, 0LL);
            if ( !v107 )
              goto LABEL_84;
            UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v98 = &StringLiteral_15477/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
            goto LABEL_80;
          case 10:
            v113 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15484/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v113 )
              goto LABEL_84;
            UILabel__set_text(v113, (System_String_o *)gameObject, 0LL);
            v114 = this->fields.messageLabel;
            v115 = &StringLiteral_15483/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
            goto LABEL_78;
          case 11:
            v116 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15484/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v116 )
              goto LABEL_84;
            UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
            v114 = this->fields.messageLabel;
            v115 = &StringLiteral_15482/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
LABEL_78:
            v117 = LocalizationManager__Get((System_String_o *)*v115, 0LL);
            v122 = param1;
            v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
            v121 = param2;
            v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121);
            gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v117, v118, v119, 0LL);
            if ( !v114 )
              goto LABEL_84;
            UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v98 = &StringLiteral_15481/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
LABEL_80:
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v98, 0LL);
            if ( !cancelLabel )
              goto LABEL_84;
            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_82:
            this->fields.state = 1;
            v120 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v120, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v120, 0, 0LL);
            break;
          default:
            goto LABEL_82;
        }
        return;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
        gameObject,
        0LL,
        1LL,
        gameObject->klass[1]._1.interfaceOffsets);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
    }
    v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v93, 0LL);
    goto LABEL_29;
  }
}


void __fastcall WarehouseConfirmMenu__add_callbackFunc(
        WarehouseConfirmMenu_o *this,
        WarehouseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WarehouseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WarehouseConfirmMenu_o *v12; // x0
  WarehouseConfirmMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E93A9 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E93A9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WarehouseConfirmMenu_CallbackFunc_c *)v9->klass != WarehouseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WarehouseConfirmMenu_o *)sub_B5D990(v9);
  WarehouseConfirmMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall WarehouseConfirmMenu__remove_callbackFunc(
        WarehouseConfirmMenu_o *this,
        WarehouseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WarehouseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WarehouseConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E93AA & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E93AA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WarehouseConfirmMenu_CallbackFunc_c *)v9->klass != WarehouseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WarehouseConfirmMenu_o *)sub_B5D990(v9);
  WarehouseConfirmMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu_CallbackFunc___ctor(
        WarehouseConfirmMenu_CallbackFunc_o *this,
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall WarehouseConfirmMenu_CallbackFunc__BeginInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E5FED & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5FED = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu_CallbackFunc__Invoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WarehouseConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  WarehouseConfirmMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  WarehouseConfirmMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (WarehouseConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}