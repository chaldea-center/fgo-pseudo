void SelectBonusConfirmDialog___ctor(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593270C & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593270C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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

  SelectBonusConfirmDialog__Close_38413772(this, 0, v2);
}


void SelectBonusConfirmDialog__Close_38413772(
        SelectBonusConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5932709 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectBonusConfirmDialog_EndClose__);
    byte_5932709 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void SelectBonusConfirmDialog__EndClose(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SelectBonusConfirmDialog_CallbackFunc_o *clickedFunc; // x8
  MissionNaviTransitionBoardItem_o *p_clickedFunc; // x19

  p_clickedFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickedFunc;
  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      result,
      clickedFunc->fields.method);
  p_clickedFunc->klass = 0;
  sub_21FFBF4(p_clickedFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  if ( (byte_593270B & 1) == 0 )
  {
    sub_21FFC50(&Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    byte_593270B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickBackToChoice__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickBackToChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SelectBonusConfirmDialog__ExecClickedFunc(this, 0, v5);
  }
}


void SelectBonusConfirmDialog__OnClickOk(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593270A & 1) == 0 )
  {
    sub_21FFC50(&Method_SelectBonusConfirmDialog_OnClickOk__);
    byte_593270A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SelectBonusConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct SelectBonusConfirmDialog_ViewInfoContainer_array *switchingPartList; // x23
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v21; // x24
  SelectBonusConfirmDialog_ViewInfoContainer_o *v22; // x8
  struct SelectBonusConfirmDialog_ViewInfo_array *switchingPart; // x25
  int max_length; // w8
  __int64 v25; // x26
  SelectBonusConfirmDialog_ViewInfo_o *v26; // x8
  System_Action_o *v27; // x20

  if ( (byte_5932708 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectBonusConfirmDialog_EndOpen__);
    byte_5932708 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.clickedFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickedFunc,
    (int32_t)func,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  switchingPartList = this->fields.switchingPartList;
  this->fields.state = 1;
  if ( !switchingPartList )
    goto LABEL_19;
  max_length_low = LODWORD(switchingPartList->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length_low )
        goto LABEL_20;
      v22 = switchingPartList->m_Items[v21];
      if ( !v22 )
        goto LABEL_19;
      switchingPart = v22->fields.switchingPart;
      if ( !switchingPart )
        goto LABEL_19;
      max_length = switchingPart->max_length;
      if ( max_length >= 1 )
        break;
LABEL_16:
      max_length_low = LODWORD(switchingPartList->max_length);
      if ( (int)++v21 >= (int)max_length_low )
        goto LABEL_17;
    }
    v25 = 0;
    while ( (unsigned int)v25 < max_length )
    {
      v26 = switchingPart->m_Items[v25];
      if ( !v26 )
        goto LABEL_19;
      gameObject = v26->fields.switchingObject;
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, v26->fields.index == selectedIndex, 0);
      max_length = switchingPart->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_16;
    }
LABEL_20:
    sub_21FFED4(gameObject);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemIconComponent;
  if ( !gameObject )
LABEL_19:
    sub_21FFECC(gameObject, v12);
  ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)gameObject, type, objectId, -1, 0, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SelectBonusConfirmDialog_o *v13; // x0
  SelectBonusConfirmDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5932706 & 1) == 0 )
  {
    sub_21FFC50(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    byte_5932706 = 1;
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
    v11 = sub_223767C(p_clickedFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SelectBonusConfirmDialog_o *)sub_220024C(v8, SelectBonusConfirmDialog_CallbackFunc_TypeInfo, v9, v10);
  SelectBonusConfirmDialog__remove_clickedFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SelectBonusConfirmDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5932707 & 1) == 0 )
  {
    sub_21FFC50(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    byte_5932707 = 1;
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
    v11 = sub_223767C(p_clickedFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SelectBonusConfirmDialog_o *)sub_220024C(v8, SelectBonusConfirmDialog_CallbackFunc_TypeInfo, v9, v10);
  SelectBonusConfirmDialog__CheckSerializeFieldAssertion(v13, v14);
}


void SelectBonusConfirmDialog_CallbackFunc___ctor(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FECF04;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FECEBC;
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
  if ( (byte_593270D & 1) == 0 )
  {
    sub_21FFC50(&SelectBonusConfirmDialog_ResultClicked_TypeInfo);
    byte_593270D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SelectBonusConfirmDialog_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SelectBonusConfirmDialog_CallbackFunc__EndInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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