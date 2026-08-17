void ConfirmGrandServantResetDialog___ctor(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B2E3 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B2E3 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *v9; // x20
  struct ConfirmGrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2

  if ( (byte_596B2DF & 1) == 0 )
  {
    sub_2213A60(&Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__);
    sub_2213A60(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_596B2DF = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v4 = this->fields.checkSlider,
        v5 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v5,
          (Il2CppObject *)this,
          Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__,
          0),
        !v4) )
  {
    sub_2213CDC(checkSlider, method);
  }
  v4->fields.onDragFinished = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.onDragFinished, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_596B2E1 & 1) == 0 )
  {
    sub_2213A60(&Method_ConfirmGrandServantResetDialog_OnClickOk__);
    byte_596B2E1 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_2213CDC(0, method);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      ConfirmGrandServantResetDialog__Callback(this, 0, v4);
    }
    else
    {
      v5 = Method_ConfirmGrandServantResetDialog_OnClickOk__;
      if ( (*((_BYTE *)Method_ConfirmGrandServantResetDialog_OnClickOk__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ConfirmGrandServantResetDialog_OnClickOk__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void ConfirmGrandServantResetDialog__OnEnable(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596B2DE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16256/*"Window/Buttons/CancelButton"*/);
    byte_596B2DE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16256/*"Window/Buttons/CancelButton"*/, 0);
}


void ConfirmGrandServantResetDialog__OnSliderDragFinished(
        ConfirmGrandServantResetDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  float v5; // s1
  bool v6; // w20
  const MethodInfo *v7; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_6;
  value = UIProgressBar__get_value(checkSlider, 0);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( value < 0.9 )
  {
    v5 = 0.0;
    if ( checkSlider )
      goto LABEL_4;
LABEL_6:
    sub_2213CDC(checkSlider, method);
  }
  v5 = 1.0;
  if ( !checkSlider )
    goto LABEL_6;
LABEL_4:
  v6 = value >= 0.9;
  UIProgressBar__set_value(checkSlider, v5, 0);
  ConfirmGrandServantResetDialog__SetSlider(this, v6, v7);
}


void ConfirmGrandServantResetDialog__Open(
        ConfirmGrandServantResetDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        ConfirmGrandServantResetDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 Master_object; // x0
  __int64 v15; // x1
  GrandGraphDetailMaster_o *v16; // x22
  int32_t id; // w23
  struct System_Int32_array *removeItemIds; // x8
  struct System_Int32_array *removeItemNums; // x9
  __int64 v20; // x24
  int32_t v21; // w21
  int32_t v22; // w27
  Il2CppObject *Entity; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *messageLabel; // x21
  Il2CppObject *v27; // x25
  System_String_o *v28; // x22
  System_Object_array *v29; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x26
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x24
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *monitor; // x24
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x24
  const MethodInfo *v59; // x2
  __int64 v60; // x0
  int32_t v61; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596B2E0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_3896/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/);
    byte_596B2E0 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userServantEntity,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_33;
  if ( !userServantEntity )
    goto LABEL_33;
  v16 = (GrandGraphDetailMaster_o *)Master_object;
  id = grandGraphEntity->fields.id;
  Master_object = UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v16 )
    goto LABEL_33;
  Master_object = (__int64)GrandGraphDetailMaster__GetEntity(v16, id, Master_object, 0);
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
  v20 = Master_object;
  v21 = removeItemIds->m_Items[0];
  v22 = removeItemNums->m_Items[0];
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v21,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v27 = Entity;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3896/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0);
  v29 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
  Master_object = (__int64)UserServantEntity__GetSvtName(userServantEntity, 1, 0);
  if ( !v29 )
LABEL_33:
    sub_2213CDC(Master_object, v15);
  v36 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_2213BB4(Master_object, v29->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( !LODWORD(v29->max_length) )
    goto LABEL_34;
  v29->m_Items[0] = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v29->m_Items, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  if ( !v20 )
    goto LABEL_33;
  v44 = *(Il2CppObject **)(v20 + 72);
  if ( v44 )
  {
    Master_object = sub_2213BB4(v44, v29->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( (v29->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_34;
  v29->m_Items[1] = v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->m_Items[1], (int32_t)v44, v38, v39, v40, v41, v42, v43);
  if ( !v27 )
    goto LABEL_33;
  monitor = (Il2CppObject *)v27[1].monitor;
  if ( monitor )
  {
    Master_object = sub_2213BB4(v27[1].monitor, v29->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_35;
  }
  if ( LODWORD(v29->max_length) <= 2 )
    goto LABEL_34;
  v29->m_Items[2] = monitor;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->m_Items[2], (int32_t)monitor, v45, v46, v47, v48, v49, v50);
  v61 = v22;
  Master_object = j_il2cpp_value_box_0(qword_5984348, &v61);
  v58 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_2213BB4(Master_object, v29->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_35:
      v60 = sub_2213D00(Master_object, v37);
      sub_2213BA0(v60, 0);
    }
  }
  if ( (v29->max_length & 0xFFFFFFFC) == 0 )
LABEL_34:
    sub_2213CE4(Master_object);
  v29->m_Items[3] = v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->m_Items[3], (int32_t)v58, v52, v53, v54, v55, v56, v57);
  Master_object = (__int64)System_String__Format_75698016(v28, v29, 0);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_33;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0, 0);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v59);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ConfirmGrandServantResetDialog__SetSlider(
        ConfirmGrandServantResetDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderThumbSprite; // x0
  __int64 *v6; // x8

  if ( (byte_596B2E2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21576/*"img_slider_thumb_locked"*/);
    sub_2213A60(&StringLiteral_21575/*"img_slider_thumb"*/);
    byte_596B2E2 = 1;
  }
  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    goto LABEL_9;
  v6 = &StringLiteral_21575/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21576/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderThumbSprite, (System_String_o *)*v6, 0);
  sliderThumbSprite = (UISprite_o *)this->fields.okButton;
  if ( !sliderThumbSprite
    || (UICommonButton__SetButtonEnable((UICommonButton_o *)sliderThumbSprite, sliderOn, 1, 0),
        (sliderThumbSprite = (UISprite_o *)this->fields.okButton) == 0) )
  {
LABEL_9:
    sub_2213CDC(sliderThumbSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderThumbSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderThumbSprite,
    sliderOn,
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ConfirmGrandServantResetDialog_o *v13; // x0
  ConfirmGrandServantResetDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B2DC & 1) == 0 )
  {
    sub_2213A60(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_596B2DC = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ConfirmGrandServantResetDialog_o *)sub_221405C(
                                              v8,
                                              ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo,
                                              v9,
                                              v10);
  ConfirmGrandServantResetDialog__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ConfirmGrandServantResetDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B2DD & 1) == 0 )
  {
    sub_2213A60(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_596B2DD = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ConfirmGrandServantResetDialog_o *)sub_221405C(
                                              v8,
                                              ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo,
                                              v9,
                                              v10);
  ConfirmGrandServantResetDialog__Awake(v13, v14);
}


void ConfirmGrandServantResetDialog_CallbackFunc___ctor(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2001810;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20017C8;
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
  if ( (byte_596B2E4 & 1) == 0 )
  {
    sub_2213A60(&ConfirmGrandServantResetDialog_Result_TypeInfo);
    byte_596B2E4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ConfirmGrandServantResetDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ConfirmGrandServantResetDialog_CallbackFunc__EndInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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