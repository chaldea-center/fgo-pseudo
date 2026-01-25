void ConfirmGrandServantResetDialog___ctor(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CE92F0 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE92F0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ConfirmGrandServantResetDialog__Awake(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ConfirmGrandServantResetDialog__Callback(
        ConfirmGrandServantResetDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *v9; // x20
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void ConfirmGrandServantResetDialog__Close(
        ConfirmGrandServantResetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void ConfirmGrandServantResetDialog__Init(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v4; // x20
  UIProgressBar_OnDragFinished_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_4CE92EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__);
    sub_1C7BAE8(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_4CE92EC = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v4 = this->fields.checkSlider,
        v5 = (UIProgressBar_OnDragFinished_o *)sub_1C7BD34(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v5,
          (Il2CppObject *)this,
          Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__,
          0),
        !v4) )
  {
    sub_1C7BD40(checkSlider, method);
  }
  v4->fields.onDragFinished = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.onDragFinished, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ConfirmGrandServantResetDialog__OnClickCancel(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    ConfirmGrandServantResetDialog__Callback(this, 1, v2);
}


void ConfirmGrandServantResetDialog__OnClickOk(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4CE92EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ConfirmGrandServantResetDialog_OnClickOk__);
    byte_4CE92EE = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C7BD40(0, method);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      ConfirmGrandServantResetDialog__Callback(this, 0, v4);
    }
    else
    {
      v5 = Method_ConfirmGrandServantResetDialog_OnClickOk__;
      if ( (*((_BYTE *)Method_ConfirmGrandServantResetDialog_OnClickOk__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C7BB00(Method_ConfirmGrandServantResetDialog_OnClickOk__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ConfirmGrandServantResetDialog__OnEnable(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CE92EB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15696/*"Window/Buttons/CancelButton"*/);
    byte_4CE92EB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_15696/*"Window/Buttons/CancelButton"*/, 0);
}


void ConfirmGrandServantResetDialog__OnSliderDragFinished(
        ConfirmGrandServantResetDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0) )
  {
    sub_1C7BD40(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  ConfirmGrandServantResetDialog__SetSlider(this, v7, v8);
}


void ConfirmGrandServantResetDialog__Open(
        ConfirmGrandServantResetDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        ConfirmGrandServantResetDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 Master_object; // x0
  __int64 v13; // x1
  int32_t id; // w23
  GrandGraphDetailMaster_o *v15; // x22
  struct System_Int32_array *removeItemIds; // x8
  struct System_Int32_array *removeItemNums; // x9
  __int64 v18; // x24
  int32_t v19; // w21
  int32_t v20; // w27
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x21
  Il2CppObject *v23; // x25
  System_String_o *v24; // x22
  System_Object_array *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *v39; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *monitor; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  Il2CppObject *v53; // x24
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x2
  __int64 v56; // x0
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CE92ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&StringLiteral_3759/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/);
    byte_4CE92ED = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userServantEntity,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_33;
  if ( !userServantEntity )
    goto LABEL_33;
  id = grandGraphEntity->fields.id;
  v15 = (GrandGraphDetailMaster_o *)Master_object;
  Master_object = UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v15 )
    goto LABEL_33;
  Master_object = (__int64)GrandGraphDetailMaster__GetEntity(v15, id, Master_object, 0);
  removeItemIds = grandGraphEntity->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_33;
  if ( !LODWORD(removeItemIds->max_length) )
    goto LABEL_34;
  removeItemNums = grandGraphEntity->fields.removeItemNums;
  if ( !removeItemNums )
    goto LABEL_33;
  if ( !LODWORD(removeItemNums->max_length) )
    goto LABEL_34;
  v18 = Master_object;
  v19 = removeItemIds->m_Items[0];
  v20 = removeItemNums->m_Items[0];
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v19,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v23 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0);
  v25 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 4);
  Master_object = (__int64)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v25 )
LABEL_33:
    sub_1C7BD40(Master_object, v13);
  v32 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C7BC24(Master_object, v25->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_34;
  v25->m_Items[0] = v32;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v25->m_Items, (int32_t)v32, v26, v27, v28, v29, v30, v31);
  if ( !v18 )
    goto LABEL_33;
  v39 = *(Il2CppObject **)(v18 + 72);
  if ( v39 )
  {
    Master_object = sub_1C7BC24(v39, v25->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v25->max_length) <= 1 )
    goto LABEL_34;
  v25->m_Items[1] = v39;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[1], (int32_t)v39, v33, v34, v35, v36, v37, v38);
  if ( !v23 )
    goto LABEL_33;
  monitor = (Il2CppObject *)v23[1].monitor;
  if ( monitor )
  {
    Master_object = sub_1C7BC24(v23[1].monitor, v25->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_34;
  v25->m_Items[2] = monitor;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[2], (int32_t)monitor, v40, v41, v42, v43, v44, v45);
  v57 = v20;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v53 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C7BC24(Master_object, v25->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_35:
      v56 = sub_1C7BD64();
      sub_1C7BC10(v56, 0);
    }
  }
  if ( LODWORD(v25->max_length) <= 3 )
LABEL_34:
    sub_1C7BD48(Master_object);
  v25->m_Items[3] = v53;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[3], (int32_t)v53, v47, v48, v49, v50, v51, v52);
  Master_object = (__int64)System_String__Format_64218356(v24, v25, 0);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_33;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0, v54);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v55);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ConfirmGrandServantResetDialog__SetSlider(
        ConfirmGrandServantResetDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderThumbSprite; // x0
  System_String_o **v6; // x8
  _BOOL4 v7; // w20

  if ( (byte_4CE92EF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20753/*"img_slider_thumb_locked"*/);
    sub_1C7BAE8(&StringLiteral_20752/*"img_slider_thumb"*/);
    byte_4CE92EF = 1;
  }
  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    goto LABEL_9;
  v6 = (System_String_o **)&StringLiteral_20752/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20753/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderThumbSprite, *v6, 0);
  sliderThumbSprite = (UISprite_o *)this->fields.okButton;
  if ( !sliderThumbSprite
    || (v7 = sliderOn,
        UICommonButton__SetButtonEnable((UICommonButton_o *)sliderThumbSprite, v7, 1, 0),
        (sliderThumbSprite = (UISprite_o *)this->fields.okButton) == 0) )
  {
LABEL_9:
    sub_1C7BD40(sliderThumbSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, _BOOL4, const MethodInfo *))sliderThumbSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderThumbSprite,
    v7,
    sliderThumbSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void ConfirmGrandServantResetDialog__add_callbackFunc(
        ConfirmGrandServantResetDialog_o *this,
        ConfirmGrandServantResetDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ConfirmGrandServantResetDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ConfirmGrandServantResetDialog_o *v11; // x0
  ConfirmGrandServantResetDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE92E9 & 1) == 0 )
  {
    sub_1C7BAE8(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4CE92E9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ConfirmGrandServantResetDialog_CallbackFunc_c *)v8->klass != ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C7C0DC(v8);
  ConfirmGrandServantResetDialog__remove_callbackFunc(v11, v12, v13);
}


void ConfirmGrandServantResetDialog__remove_callbackFunc(
        ConfirmGrandServantResetDialog_o *this,
        ConfirmGrandServantResetDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ConfirmGrandServantResetDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ConfirmGrandServantResetDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE92EA & 1) == 0 )
  {
    sub_1C7BAE8(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4CE92EA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ConfirmGrandServantResetDialog_CallbackFunc_c *)v8->klass != ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C7C0DC(v8);
  ConfirmGrandServantResetDialog__Awake(v11, v12);
}


void ConfirmGrandServantResetDialog_CallbackFunc___ctor(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA9620;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA95D8;
}


System_IAsyncResult_o *ConfirmGrandServantResetDialog_CallbackFunc__BeginInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CE92F1 & 1) == 0 )
  {
    sub_1C7BAE8(&ConfirmGrandServantResetDialog_Result_TypeInfo);
    byte_4CE92F1 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ConfirmGrandServantResetDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ConfirmGrandServantResetDialog_CallbackFunc__EndInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ConfirmGrandServantResetDialog_CallbackFunc__Invoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}