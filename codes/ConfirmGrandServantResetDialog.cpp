void ConfirmGrandServantResetDialog___ctor(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3275D & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3275D = 1;
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
    sub_1C32BC4(p_callbackFunc, 0);
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

  if ( (byte_4C32759 & 1) == 0 )
  {
    sub_1C32C20(&Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__);
    sub_1C32C20(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_4C32759 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v4 = this->fields.checkSlider,
        v5 = (UIProgressBar_OnDragFinished_o *)sub_1C32E6C(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v5,
          (Il2CppObject *)this,
          Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__,
          0),
        !v4) )
  {
    sub_1C32E7C(checkSlider);
  }
  v4->fields.onDragFinished = v5;
  sub_1C32BC4(&v4->fields.onDragFinished, v5);
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

  if ( (byte_4C3275B & 1) == 0 )
  {
    sub_1C32C20(&Method_ConfirmGrandServantResetDialog_OnClickOk__);
    byte_4C3275B = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C32E7C(0);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      ConfirmGrandServantResetDialog__Callback(this, 0, v4);
    }
    else
    {
      v5 = Method_ConfirmGrandServantResetDialog_OnClickOk__;
      if ( (*((_BYTE *)Method_ConfirmGrandServantResetDialog_OnClickOk__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_ConfirmGrandServantResetDialog_OnClickOk__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ConfirmGrandServantResetDialog__OnEnable(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C32758 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15636/*"Window/Buttons/CancelButton"*/);
    byte_4C32758 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_15636/*"Window/Buttons/CancelButton"*/, 0);
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
    sub_1C32E7C(checkSlider);
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
  int32_t id; // w23
  GrandGraphDetailMaster_o *v11; // x22
  struct System_Int32_array *removeItemIds; // x8
  struct System_Int32_array *removeItemNums; // x9
  __int64 v14; // x24
  int32_t v15; // w21
  int32_t v16; // w27
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x21
  Il2CppObject *v19; // x25
  System_String_o *v20; // x22
  System_Object_array *v21; // x23
  Il2CppObject *v22; // x26
  Il2CppObject *v23; // x24
  Il2CppObject *monitor; // x24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x24
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3275A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_3753/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/);
    byte_4C3275A = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C32BC4(&this->fields.callbackFunc, callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_33;
  if ( !userServantEntity )
    goto LABEL_33;
  id = grandGraphEntity->fields.id;
  v11 = (GrandGraphDetailMaster_o *)Master_object;
  Master_object = UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v11 )
    goto LABEL_33;
  Master_object = (__int64)GrandGraphDetailMaster__GetEntity(v11, id, Master_object, 0);
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
  v14 = Master_object;
  v15 = removeItemIds->m_Items[0];
  v16 = removeItemNums->m_Items[0];
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v15,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v19 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0);
  v21 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 4);
  Master_object = (__int64)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v21 )
LABEL_33:
    sub_1C32E7C(Master_object);
  v22 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C32D5C(Master_object, v21->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_34;
  v21->m_Items[0] = v22;
  Master_object = sub_1C32BC4(v21->m_Items, v22);
  if ( !v14 )
    goto LABEL_33;
  v23 = *(Il2CppObject **)(v14 + 72);
  if ( v23 )
  {
    Master_object = sub_1C32D5C(v23, v21->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_34;
  v21->m_Items[1] = v23;
  Master_object = sub_1C32BC4(&v21->m_Items[1], v23);
  if ( !v19 )
    goto LABEL_33;
  monitor = (Il2CppObject *)v19[1].monitor;
  if ( monitor )
  {
    Master_object = sub_1C32D5C(v19[1].monitor, v21->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v21->max_length) <= 2 )
    goto LABEL_34;
  v21->m_Items[2] = monitor;
  sub_1C32BC4(&v21->m_Items[2], monitor);
  v35 = v16;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v35, v25, v26, v27, v28, v29, v30);
  v31 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C32D5C(Master_object, v21->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_35:
      v34 = sub_1C32EA0();
      sub_1C32D48(v34, 0);
    }
  }
  if ( LODWORD(v21->max_length) <= 3 )
LABEL_34:
    sub_1C32E84(Master_object);
  v21->m_Items[3] = v31;
  sub_1C32BC4(&v21->m_Items[3], v31);
  Master_object = (__int64)System_String__Format_63559972(v20, v21, 0);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_33;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v32);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v33);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ConfirmGrandServantResetDialog__SetSlider(
        ConfirmGrandServantResetDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderThumbSprite; // x0
  System_String_o **v6; // x8
  _BOOL4 v7; // w20

  if ( (byte_4C3275C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20579/*"img_slider_thumb_locked"*/);
    sub_1C32C20(&StringLiteral_20578/*"img_slider_thumb"*/);
    byte_4C3275C = 1;
  }
  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    goto LABEL_9;
  v6 = (System_String_o **)&StringLiteral_20578/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20579/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderThumbSprite, *v6, 0);
  sliderThumbSprite = (UISprite_o *)this->fields.okButton;
  if ( !sliderThumbSprite
    || (v7 = sliderOn,
        UICommonButton__SetButtonEnable((UICommonButton_o *)sliderThumbSprite, v7, 1, 0),
        (sliderThumbSprite = (UISprite_o *)this->fields.okButton) == 0) )
  {
LABEL_9:
    sub_1C32E7C(sliderThumbSprite);
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

  if ( (byte_4C32756 & 1) == 0 )
  {
    sub_1C32C20(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4C32756 = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C3313C(v8);
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

  if ( (byte_4C32757 & 1) == 0 )
  {
    sub_1C32C20(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4C32757 = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C3313C(v8);
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
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6F8EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6F8A4;
}


System_IAsyncResult_o *ConfirmGrandServantResetDialog_CallbackFunc__BeginInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C3275E & 1) == 0 )
  {
    sub_1C32C20(&ConfirmGrandServantResetDialog_Result_TypeInfo);
    byte_4C3275E = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             ConfirmGrandServantResetDialog_Result_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void ConfirmGrandServantResetDialog_CallbackFunc__EndInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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