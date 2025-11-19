void ConfirmGrandServantResetDialog___ctor(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB100F & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB100F = 1;
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
  struct ConfirmGrandServantResetDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *v4; // x20
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C6B9AC(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
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
  const MethodInfo *v6; // x2

  if ( (byte_4CB100B & 1) == 0 )
  {
    sub_1C6BA08(&Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__);
    sub_1C6BA08(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_4CB100B = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v4 = this->fields.checkSlider,
        v5 = (UIProgressBar_OnDragFinished_o *)sub_1C6BC54(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v5,
          (Il2CppObject *)this,
          Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__,
          0),
        !v4) )
  {
    sub_1C6BC60(checkSlider, method);
  }
  v4->fields.onDragFinished = v5;
  sub_1C6B9AC(&v4->fields.onDragFinished, v5);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v6);
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

  if ( (byte_4CB100D & 1) == 0 )
  {
    sub_1C6BA08(&Method_ConfirmGrandServantResetDialog_OnClickOk__);
    byte_4CB100D = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C6BC60(0, method);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      ConfirmGrandServantResetDialog__Callback(this, 0, v4);
    }
    else
    {
      v5 = Method_ConfirmGrandServantResetDialog_OnClickOk__;
      if ( (*((_BYTE *)Method_ConfirmGrandServantResetDialog_OnClickOk__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C6BA20(Method_ConfirmGrandServantResetDialog_OnClickOk__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ConfirmGrandServantResetDialog__OnEnable(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CB100A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15635/*"Window/Buttons/CancelButton"*/);
    byte_4CB100A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15635/*"Window/Buttons/CancelButton"*/, 0);
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
    sub_1C6BC60(checkSlider, method);
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
  __int64 Master_object; // x0
  __int64 v10; // x1
  int32_t id; // w23
  GrandGraphDetailMaster_o *v12; // x22
  struct System_Int32_array *removeItemIds; // x8
  struct System_Int32_array *removeItemNums; // x9
  __int64 v15; // x24
  int32_t v16; // w21
  int32_t v17; // w27
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x21
  Il2CppObject *v20; // x25
  System_String_o *v21; // x22
  System_Object_array *v22; // x23
  Il2CppObject *v23; // x26
  Il2CppObject *v24; // x24
  Il2CppObject *monitor; // x24
  Il2CppObject *v26; // x24
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB100C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_3745/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/);
    byte_4CB100C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C6B9AC(&this->fields.callbackFunc, callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_33;
  if ( !userServantEntity )
    goto LABEL_33;
  id = grandGraphEntity->fields.id;
  v12 = (GrandGraphDetailMaster_o *)Master_object;
  Master_object = UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v12 )
    goto LABEL_33;
  Master_object = (__int64)GrandGraphDetailMaster__GetEntity(v12, id, Master_object, 0);
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
  v15 = Master_object;
  v16 = removeItemIds->m_Items[0];
  v17 = removeItemNums->m_Items[0];
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v16,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v20 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3745/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0);
  v22 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
  Master_object = (__int64)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v22 )
LABEL_33:
    sub_1C6BC60(Master_object, v10);
  v23 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C6BB44(Master_object, v22->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( !LODWORD(v22->max_length) )
    goto LABEL_34;
  v22->m_Items[0] = v23;
  Master_object = sub_1C6B9AC(v22->m_Items, v23);
  if ( !v15 )
    goto LABEL_33;
  v24 = *(Il2CppObject **)(v15 + 72);
  if ( v24 )
  {
    Master_object = sub_1C6BB44(v24, v22->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v22->max_length) <= 1 )
    goto LABEL_34;
  v22->m_Items[1] = v24;
  Master_object = sub_1C6B9AC(&v22->m_Items[1], v24);
  if ( !v20 )
    goto LABEL_33;
  monitor = (Il2CppObject *)v20[1].monitor;
  if ( monitor )
  {
    Master_object = sub_1C6BB44(v20[1].monitor, v22->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v22->max_length) <= 2 )
    goto LABEL_34;
  v22->m_Items[2] = monitor;
  sub_1C6B9AC(&v22->m_Items[2], monitor);
  v30 = v17;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v26 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C6BB44(Master_object, v22->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_35:
      v29 = sub_1C6BC84();
      sub_1C6BB30(v29, 0);
    }
  }
  if ( LODWORD(v22->max_length) <= 3 )
LABEL_34:
    sub_1C6BC68(Master_object);
  v22->m_Items[3] = v26;
  sub_1C6B9AC(&v22->m_Items[3], v26);
  Master_object = (__int64)System_String__Format_64008236(v21, v22, 0);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_33;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v27);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v28);
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

  if ( (byte_4CB100E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_20647/*"img_slider_thumb_locked"*/);
    sub_1C6BA08(&StringLiteral_20646/*"img_slider_thumb"*/);
    byte_4CB100E = 1;
  }
  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    goto LABEL_9;
  v6 = (System_String_o **)&StringLiteral_20646/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20647/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderThumbSprite, *v6, 0);
  sliderThumbSprite = (UISprite_o *)this->fields.okButton;
  if ( !sliderThumbSprite
    || (v7 = sliderOn,
        UICommonButton__SetButtonEnable((UICommonButton_o *)sliderThumbSprite, v7, 1, 0),
        (sliderThumbSprite = (UISprite_o *)this->fields.okButton) == 0) )
  {
LABEL_9:
    sub_1C6BC60(sliderThumbSprite, sliderOn);
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

  if ( (byte_4CB1008 & 1) == 0 )
  {
    sub_1C6BA08(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4CB1008 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C6BFFC(v8);
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

  if ( (byte_4CB1009 & 1) == 0 )
  {
    sub_1C6BA08(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4CB1009 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C6BFFC(v8);
  ConfirmGrandServantResetDialog__Awake(v11, v12);
}


void ConfirmGrandServantResetDialog_CallbackFunc___ctor(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
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
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A99A3C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A999F4;
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
  if ( (byte_4CB1010 & 1) == 0 )
  {
    sub_1C6BA08(&ConfirmGrandServantResetDialog_Result_TypeInfo);
    byte_4CB1010 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ConfirmGrandServantResetDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ConfirmGrandServantResetDialog_CallbackFunc__EndInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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