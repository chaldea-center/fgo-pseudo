void SelectBonusConfirmDialog___ctor(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C31A6B & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31A6B = 1;
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

  SelectBonusConfirmDialog__Close_31383716(this, 0, v2);
}


void SelectBonusConfirmDialog__Close_31383716(
        SelectBonusConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C31A68 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SelectBonusConfirmDialog_EndClose__);
    byte_4C31A68 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C32BC4(&this->fields.closeEndFunc, callback);
  this->fields.state = 3;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    sub_1C32BC4(p_closeEndFunc, 0);
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
  sub_1C32BC4(p_clickedFunc, 0);
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

  if ( (byte_4C31A6A & 1) == 0 )
  {
    sub_1C32C20(&Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    byte_4C31A6A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickBackToChoice__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickBackToChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SelectBonusConfirmDialog__ExecClickedFunc(this, 0, v5);
  }
}


void SelectBonusConfirmDialog__OnClickOk(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C31A69 & 1) == 0 )
  {
    sub_1C32C20(&Method_SelectBonusConfirmDialog_OnClickOk__);
    byte_4C31A69 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SelectBonusConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  struct SelectBonusConfirmDialog_ViewInfoContainer_array *switchingPartList; // x23
  int max_length; // w8
  unsigned int v14; // w24
  SelectBonusConfirmDialog_ViewInfoContainer_o *v15; // x8
  struct SelectBonusConfirmDialog_ViewInfo_array *switchingPart; // x25
  int v17; // w8
  unsigned int v18; // w26
  SelectBonusConfirmDialog_ViewInfo_o *v19; // x8
  System_Action_o *v20; // x20

  if ( (byte_4C31A67 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SelectBonusConfirmDialog_EndOpen__);
    byte_4C31A67 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.clickedFunc = func;
  gameObject = (UnityEngine_GameObject_o *)sub_1C32BC4(&this->fields.clickedFunc, func);
  switchingPartList = this->fields.switchingPartList;
  this->fields.state = 1;
  if ( !switchingPartList )
    goto LABEL_19;
  max_length = switchingPartList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        goto LABEL_20;
      v15 = switchingPartList->m_Items[v14];
      if ( !v15 )
        goto LABEL_19;
      switchingPart = v15->fields.switchingPart;
      if ( !switchingPart )
        goto LABEL_19;
      v17 = switchingPart->max_length;
      if ( v17 >= 1 )
        break;
LABEL_16:
      max_length = switchingPartList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_17;
    }
    v18 = 0;
    while ( v18 < v17 )
    {
      v19 = switchingPart->m_Items[v18];
      if ( !v19 )
        goto LABEL_19;
      gameObject = v19->fields.switchingObject;
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, v19->fields.index == selectedIndex, 0);
      v17 = switchingPart->max_length;
      if ( (int)++v18 >= v17 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C32E84(gameObject);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemIconComponent;
  if ( !gameObject )
LABEL_19:
    sub_1C32E7C(gameObject);
  ItemIconComponent__SetGift_40822420((ItemIconComponent_o *)gameObject, type, objectId, -1, 0, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
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

  if ( (byte_4C31A65 & 1) == 0 )
  {
    sub_1C32C20(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    byte_4C31A65 = 1;
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
    v9 = sub_1C6CE78(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusConfirmDialog_o *)sub_1C3313C(v8);
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

  if ( (byte_4C31A66 & 1) == 0 )
  {
    sub_1C32C20(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    byte_4C31A66 = 1;
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
    v9 = sub_1C6CE78(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusConfirmDialog_o *)sub_1C3313C(v8);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6E6A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E65C;
}


System_IAsyncResult_o *SelectBonusConfirmDialog_CallbackFunc__BeginInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
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
  if ( (byte_4C31A6C & 1) == 0 )
  {
    sub_1C32C20(&SelectBonusConfirmDialog_ResultClicked_TypeInfo);
    byte_4C31A6C = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             SelectBonusConfirmDialog_ResultClicked_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void SelectBonusConfirmDialog_CallbackFunc__EndInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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