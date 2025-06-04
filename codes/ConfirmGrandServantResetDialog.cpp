void __fastcall ConfirmGrandServantResetDialog___ctor(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AFCEAD & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFCEAD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmGrandServantResetDialog__Awake(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmGrandServantResetDialog__Callback(
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
    *p_callbackFunc = 0LL;
    sub_1BC2FAC(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ConfirmGrandServantResetDialog__Close(
        ConfirmGrandServantResetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall ConfirmGrandServantResetDialog__Init(ConfirmGrandServantResetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v5; // x20
  UIProgressBar_OnDragFinished_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4AFCEA9 & 1) == 0 )
  {
    sub_1BC3008(&Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__, method);
    sub_1BC3008(&UIProgressBar_OnDragFinished_TypeInfo, v3);
    byte_4AFCEA9 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0LL),
        v5 = this->fields.checkSlider,
        v6 = (UIProgressBar_OnDragFinished_o *)sub_1BC3254(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v6,
          (Il2CppObject *)this,
          Method_ConfirmGrandServantResetDialog_OnSliderDragFinished__,
          0LL),
        !v5) )
  {
    sub_1BC3264(checkSlider, method);
  }
  v5->fields.onDragFinished = v6;
  sub_1BC2FAC(&v5->fields.onDragFinished);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v7);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmGrandServantResetDialog__OnClickCancel(
        ConfirmGrandServantResetDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    ConfirmGrandServantResetDialog__Callback(this, 1, v2);
}


void __fastcall ConfirmGrandServantResetDialog__OnClickOk(
        ConfirmGrandServantResetDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4AFCEAB & 1) == 0 )
  {
    sub_1BC3008(&Method_ConfirmGrandServantResetDialog_OnClickOk__, method);
    byte_4AFCEAB = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1BC3264(0LL, method);
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      ConfirmGrandServantResetDialog__Callback(this, 0, v4);
    }
    else
    {
      v5 = Method_ConfirmGrandServantResetDialog_OnClickOk__;
      if ( (*((_BYTE *)Method_ConfirmGrandServantResetDialog_OnClickOk__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BC3020(Method_ConfirmGrandServantResetDialog_OnClickOk__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
    }
  }
}


void __fastcall ConfirmGrandServantResetDialog__OnEnable(
        ConfirmGrandServantResetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4AFCEA8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15492/*"Window/Buttons/CancelButton"*/, method);
    byte_4AFCEA8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_15492/*"Window/Buttons/CancelButton"*/, 0LL);
}


void __fastcall ConfirmGrandServantResetDialog__OnSliderDragFinished(
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
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1BC3264(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  ConfirmGrandServantResetDialog__SetSlider(this, v7, v8);
}


void __fastcall ConfirmGrandServantResetDialog__Open(
        ConfirmGrandServantResetDialog_o *this,
        UserServantEntity_o *userServantEntity,
        ConfirmGrandServantResetDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 Master_object; // x0
  __int64 v16; // x1
  GrandGraphMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  __int64 v20; // x2
  __int64 v21; // x8
  __int64 v22; // x24
  __int64 v23; // x9
  int32_t v24; // w21
  int v25; // w27
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x21
  Il2CppObject *v28; // x25
  System_String_o *v29; // x22
  System_Object_array *v30; // x23
  Il2CppObject *v31; // x26
  Il2CppObject *v32; // x24
  Il2CppObject *monitor; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x24
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4AFCEAA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphMaster___, userServantEntity);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1BC3008(&int_TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&object___TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_3717/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, v14);
    byte_4AFCEAA = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BC2FAC(&this->fields.callbackFunc);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !userServantEntity )
    goto LABEL_34;
  v17 = (GrandGraphMaster_o *)Master_object;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v19;
  *(_QWORD *)&v42.fields.fakeValue = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v42, 0LL);
  if ( !v17 )
    goto LABEL_34;
  Master_object = (__int64)GrandGraphMaster__GetEntityBySvtId(v17, Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_34;
  v21 = *(_QWORD *)(Master_object + 72);
  v22 = Master_object;
  if ( !v21 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_35;
  v23 = *(_QWORD *)(Master_object + 80);
  if ( !v23 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_35;
  v24 = *(_DWORD *)(v21 + 32);
  v25 = *(_DWORD *)(v23 + 32);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_34;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v24,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v28 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"CONFIRM_GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0LL);
  v30 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 4LL);
  Master_object = (__int64)UserServantEntity__GetSvtName(userServantEntity, 0LL);
  if ( !v30 )
LABEL_34:
    sub_1BC3264(Master_object, v16);
  v31 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1BC3144(Master_object, v30->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_36;
  }
  if ( !v30->max_length )
    goto LABEL_35;
  v30->m_Items[0] = v31;
  Master_object = sub_1BC2FAC(v30->m_Items);
  v32 = *(Il2CppObject **)(v22 + 32);
  if ( v32 )
  {
    Master_object = sub_1BC3144(v32, v30->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_36;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_35;
  v30->m_Items[1] = v32;
  Master_object = sub_1BC2FAC(&v30->m_Items[1]);
  if ( !v28 )
    goto LABEL_34;
  monitor = (Il2CppObject *)v28[1].monitor;
  if ( monitor )
  {
    Master_object = sub_1BC3144(v28[1].monitor, v30->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_36;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_35;
  v30->m_Items[2] = monitor;
  sub_1BC2FAC(&v30->m_Items[2]);
  v41 = v25;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v41, v34, v35, v36);
  v37 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1BC3144(Master_object, v30->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_36:
      v40 = sub_1BC3288();
      sub_1BC3130(v40, 0LL);
    }
  }
  if ( v30->max_length <= 3 )
LABEL_35:
    sub_1BC326C(Master_object, v16, v20);
  v30->m_Items[3] = v37;
  sub_1BC2FAC(&v30->m_Items[3]);
  Master_object = (__int64)System_String__Format_62390076(v29, v30, 0LL);
  if ( !messageLabel )
    goto LABEL_34;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (__int64)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_34;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v38);
  ConfirmGrandServantResetDialog__SetSlider(this, 0, v39);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ConfirmGrandServantResetDialog__SetSlider(
        ConfirmGrandServantResetDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *sliderThumbSprite; // x0
  System_String_o **v7; // x8
  _BOOL4 v8; // w20

  if ( (byte_4AFCEAC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20380/*"img_slider_thumb_locked"*/, sliderOn);
    sub_1BC3008(&StringLiteral_20379/*"img_slider_thumb"*/, v5);
    byte_4AFCEAC = 1;
  }
  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    goto LABEL_9;
  v7 = (System_String_o **)&StringLiteral_20379/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_20380/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderThumbSprite, *v7, 0LL);
  sliderThumbSprite = (UISprite_o *)this->fields.okButton;
  if ( !sliderThumbSprite
    || (v8 = sliderOn,
        UICommonButton__SetButtonEnable((UICommonButton_o *)sliderThumbSprite, v8, 1, 0LL),
        (sliderThumbSprite = (UISprite_o *)this->fields.okButton) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(sliderThumbSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, _BOOL4, Il2CppMethodPointer))sliderThumbSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderThumbSprite,
    v8,
    sliderThumbSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall ConfirmGrandServantResetDialog__add_callbackFunc(
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

  if ( (byte_4AFCEA6 & 1) == 0 )
  {
    sub_1BC3008(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo, value);
    byte_4AFCEA6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ConfirmGrandServantResetDialog_CallbackFunc_c *)v8->klass != ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1BC3524(v8);
  ConfirmGrandServantResetDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ConfirmGrandServantResetDialog__remove_callbackFunc(
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

  if ( (byte_4AFCEA7 & 1) == 0 )
  {
    sub_1BC3008(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo, value);
    byte_4AFCEA7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ConfirmGrandServantResetDialog_CallbackFunc_c *)v8->klass != ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmGrandServantResetDialog_o *)sub_1BC3524(v8);
  ConfirmGrandServantResetDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ConfirmGrandServantResetDialog_CallbackFunc___ctor(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
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
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05AA0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05A58;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ConfirmGrandServantResetDialog_CallbackFunc__BeginInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4AFCEAE & 1) == 0 )
  {
    sub_1BC3008(&ConfirmGrandServantResetDialog_Result_TypeInfo, *(_QWORD *)&result);
    byte_4AFCEAE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ConfirmGrandServantResetDialog_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall ConfirmGrandServantResetDialog_CallbackFunc__EndInvoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall ConfirmGrandServantResetDialog_CallbackFunc__Invoke(
        ConfirmGrandServantResetDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}