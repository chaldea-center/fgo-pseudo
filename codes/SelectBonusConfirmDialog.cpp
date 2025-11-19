void SelectBonusConfirmDialog___ctor(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB0283 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB0283 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectBonusConfirmDialog__Awake(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SelectBonusConfirmDialog__CheckSerializeFieldAssertion(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void SelectBonusConfirmDialog__Close(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectBonusConfirmDialog__Close_31610616(this, 0, v2);
}


void SelectBonusConfirmDialog__Close_31610616(
        SelectBonusConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CB0280 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SelectBonusConfirmDialog_EndClose__);
    byte_4CB0280 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C6B9AC(&this->fields.closeEndFunc, callback);
  this->fields.state = 3;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void SelectBonusConfirmDialog__EndClose(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C6B9AC(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void SelectBonusConfirmDialog__EndOpen(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SelectBonusConfirmDialog__ExecClickedFunc(
        SelectBonusConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct SelectBonusConfirmDialog_CallbackFunc_o *clickedFunc; // x8
  struct SelectBonusConfirmDialog_CallbackFunc_o **p_clickedFunc; // x19

  p_clickedFunc = &this->fields.clickedFunc;
  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      result,
      clickedFunc->fields.method);
  *p_clickedFunc = 0;
  sub_1C6B9AC(p_clickedFunc, 0);
}


void SelectBonusConfirmDialog__Init(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectBonusConfirmDialog__OnClickBackToChoice(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CB0282 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    byte_4CB0282 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickBackToChoice__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickBackToChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SelectBonusConfirmDialog__ExecClickedFunc(this, 0, v5);
  }
}


void SelectBonusConfirmDialog__OnClickOk(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CB0281 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SelectBonusConfirmDialog_OnClickOk__);
    byte_4CB0281 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SelectBonusConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    SelectBonusConfirmDialog__ExecClickedFunc(this, 1, v5);
  }
}


void SelectBonusConfirmDialog__Open(
        SelectBonusConfirmDialog_o *this,
        int32_t selectedIndex,
        int32_t type,
        int32_t objectId,
        SelectBonusConfirmDialog_CallbackFunc_o *func,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  struct SelectBonusConfirmDialog_ViewInfoContainer_array *switchingPartList; // x23
  int max_length; // w8
  unsigned int v15; // w24
  SelectBonusConfirmDialog_ViewInfoContainer_o *v16; // x8
  struct SelectBonusConfirmDialog_ViewInfo_array *switchingPart; // x25
  int v18; // w8
  unsigned int v19; // w26
  SelectBonusConfirmDialog_ViewInfo_o *v20; // x8
  System_Action_o *v21; // x20

  if ( (byte_4CB027F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SelectBonusConfirmDialog_EndOpen__);
    byte_4CB027F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.clickedFunc = func;
  gameObject = (UnityEngine_GameObject_o *)sub_1C6B9AC(&this->fields.clickedFunc, func);
  switchingPartList = this->fields.switchingPartList;
  this->fields.state = 1;
  if ( !switchingPartList )
    goto LABEL_19;
  max_length = switchingPartList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_20;
      v16 = switchingPartList->m_Items[v15];
      if ( !v16 )
        goto LABEL_19;
      switchingPart = v16->fields.switchingPart;
      if ( !switchingPart )
        goto LABEL_19;
      v18 = switchingPart->max_length;
      if ( v18 >= 1 )
        break;
LABEL_16:
      max_length = switchingPartList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_17;
    }
    v19 = 0;
    while ( v19 < v18 )
    {
      v20 = switchingPart->m_Items[v19];
      if ( !v20 )
        goto LABEL_19;
      gameObject = v20->fields.switchingObject;
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, v20->fields.index == selectedIndex, 0);
      v18 = switchingPart->max_length;
      if ( (int)++v19 >= v18 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C6BC68(gameObject);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemIconComponent;
  if ( !gameObject )
LABEL_19:
    sub_1C6BC60(gameObject, v12);
  ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)gameObject, type, objectId, -1, 0, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
}


void SelectBonusConfirmDialog__add_clickedFunc(
        SelectBonusConfirmDialog_o *this,
        SelectBonusConfirmDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectBonusConfirmDialog_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectBonusConfirmDialog_CallbackFunc_o *clickedFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectBonusConfirmDialog_o *v11; // x0
  SelectBonusConfirmDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB027D & 1) == 0 )
  {
    sub_1C6BA08(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    byte_4CB027D = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SelectBonusConfirmDialog_CallbackFunc_c *)v8->klass != SelectBonusConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusConfirmDialog_o *)sub_1C6BFFC(v8);
  SelectBonusConfirmDialog__remove_clickedFunc(v11, v12, v13);
}


void SelectBonusConfirmDialog__remove_clickedFunc(
        SelectBonusConfirmDialog_o *this,
        SelectBonusConfirmDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectBonusConfirmDialog_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectBonusConfirmDialog_CallbackFunc_o *clickedFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectBonusConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB027E & 1) == 0 )
  {
    sub_1C6BA08(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    byte_4CB027E = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SelectBonusConfirmDialog_CallbackFunc_c *)v8->klass != SelectBonusConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusConfirmDialog_o *)sub_1C6BFFC(v8);
  SelectBonusConfirmDialog__CheckSerializeFieldAssertion(v11, v12);
}


void SelectBonusConfirmDialog_CallbackFunc___ctor(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1A985AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A98564;
}


System_IAsyncResult_o *SelectBonusConfirmDialog_CallbackFunc__BeginInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CB0284 & 1) == 0 )
  {
    sub_1C6BA08(&SelectBonusConfirmDialog_ResultClicked_TypeInfo);
    byte_4CB0284 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SelectBonusConfirmDialog_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void SelectBonusConfirmDialog_CallbackFunc__EndInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void SelectBonusConfirmDialog_CallbackFunc__Invoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void SelectBonusConfirmDialog_ViewInfo___ctor(SelectBonusConfirmDialog_ViewInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectBonusConfirmDialog_ViewInfoContainer___ctor(
        SelectBonusConfirmDialog_ViewInfoContainer_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}