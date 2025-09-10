void ConfirmGrandServantResetDialog___ctor(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C2208E & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2208E = 1;
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
    sub_1C2D434(p_callbackFunc);
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

  if ( (byte_4C2208A & 1) == 0 )
  {
    sub_1C2D490(&Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__);
    sub_1C2D490(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_4C2208A = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v4 = this->fields.checkSlider,
        v5 = (UIProgressBar_OnDragFinished_o *)sub_1C2D6DC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v5,
          (Il2CppObject *)this,
          Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__,
          0),
        !v4) )
  {
    sub_1C2D6EC(checkSlider, method);
  }
  v4->fields.onDragFinished = v5;
  sub_1C2D434(&v4->fields.onDragFinished);
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

  if ( (byte_4C2208C & 1) == 0 )
  {
    sub_1C2D490(&Method_ConfirmGrandServantResetDialog_OnClickOk__);
    byte_4C2208C = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C2D6EC(0, method);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      ConfirmGrandServantResetDialog__Callback(this, 0, v4);
    }
    else
    {
      v5 = Method_ConfirmGrandServantResetDialog_OnClickOk__;
      if ( (*((_BYTE *)Method_ConfirmGrandServantResetDialog_OnClickOk__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C2D4A8(Method_ConfirmGrandServantResetDialog_OnClickOk__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ConfirmGrandServantResetDialog__OnEnable(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C22089 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15635/*"Window/Buttons/CancelButton"*/);
    byte_4C22089 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15635/*"Window/Buttons/CancelButton"*/, 0);
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
    sub_1C2D6EC(checkSlider, method);
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
  __int64 v13; // x2
  struct System_Int32_array *removeItemIds; // x8
  struct System_Int32_array *removeItemNums; // x9
  __int64 v16; // x24
  int32_t v17; // w21
  int32_t v18; // w27
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x21
  Il2CppObject *v21; // x25
  System_String_o *v22; // x22
  System_Object_array *v23; // x23
  Il2CppObject *v24; // x26
  Il2CppObject *v25; // x24
  Il2CppObject *monitor; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x24
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C2208B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&StringLiteral_3746/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/);
    byte_4C2208B = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
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
  v16 = Master_object;
  v17 = removeItemIds->m_Items[0];
  v18 = removeItemNums->m_Items[0];
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v17,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v21 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3746/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0);
  v23 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 4);
  Master_object = (__int64)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v23 )
LABEL_33:
    sub_1C2D6EC(Master_object, v10);
  v24 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C2D5CC(Master_object, v23->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_34;
  v23->m_Items[0] = v24;
  Master_object = sub_1C2D434(v23->m_Items);
  if ( !v16 )
    goto LABEL_33;
  v25 = *(Il2CppObject **)(v16 + 72);
  if ( v25 )
  {
    Master_object = sub_1C2D5CC(v25, v23->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_34;
  v23->m_Items[1] = v25;
  Master_object = sub_1C2D434(&v23->m_Items[1]);
  if ( !v21 )
    goto LABEL_33;
  monitor = (Il2CppObject *)v21[1].monitor;
  if ( monitor )
  {
    Master_object = sub_1C2D5CC(v21[1].monitor, v23->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_34;
  v23->m_Items[2] = monitor;
  sub_1C2D434(&v23->m_Items[2]);
  v34 = v18;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v34, v27, v28, v29);
  v30 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C2D5CC(Master_object, v23->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_35:
      v33 = sub_1C2D710();
      sub_1C2D5B8(v33, 0);
    }
  }
  if ( LODWORD(v23->max_length) <= 3 )
LABEL_34:
    sub_1C2D6F4(Master_object, v10, v13);
  v23->m_Items[3] = v30;
  sub_1C2D434(&v23->m_Items[3]);
  Master_object = (__int64)System_String__Format_63499292(v22, v23, 0);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_33;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v31);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v32);
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

  if ( (byte_4C2208D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20567/*"img_slider_thumb_locked"*/);
    sub_1C2D490(&StringLiteral_20566/*"img_slider_thumb"*/);
    byte_4C2208D = 1;
  }
  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    goto LABEL_9;
  v6 = (System_String_o **)&StringLiteral_20566/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20567/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderThumbSprite, *v6, 0);
  sliderThumbSprite = (UISprite_o *)this->fields.okButton;
  if ( !sliderThumbSprite
    || (v7 = sliderOn,
        UICommonButton__SetButtonEnable((UICommonButton_o *)sliderThumbSprite, v7, 1, 0),
        (sliderThumbSprite = (UISprite_o *)this->fields.okButton) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(sliderThumbSprite, sliderOn);
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

  if ( (byte_4C22087 & 1) == 0 )
  {
    sub_1C2D490(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4C22087 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C2D9AC(v8);
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

  if ( (byte_4C22088 & 1) == 0 )
  {
    sub_1C2D490(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4C22088 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1C2D9AC(v8);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6A1C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6A17C;
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
  if ( (byte_4C2208F & 1) == 0 )
  {
    sub_1C2D490(&ConfirmGrandServantResetDialog_Result_TypeInfo);
    byte_4C2208F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ConfirmGrandServantResetDialog_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ConfirmGrandServantResetDialog_CallbackFunc__EndInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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