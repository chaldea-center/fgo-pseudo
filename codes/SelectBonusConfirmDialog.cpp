void __fastcall SelectBonusConfirmDialog___ctor(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C1CB8E & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1CB8E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectBonusConfirmDialog__Awake(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectBonusConfirmDialog__CheckSerializeFieldAssertion(
        SelectBonusConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectBonusConfirmDialog__Close(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectBonusConfirmDialog__Close_31414724(this, 0LL, v2);
}


void __fastcall SelectBonusConfirmDialog__Close_31414724(
        SelectBonusConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1CB8B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_SelectBonusConfirmDialog_EndClose__, v5);
    byte_4C1CB8B = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C3B708(&this->fields.closeEndFunc);
  this->fields.state = 3;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall SelectBonusConfirmDialog__EndClose(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0LL;
    sub_1C3B708(p_closeEndFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall SelectBonusConfirmDialog__EndOpen(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SelectBonusConfirmDialog__ExecClickedFunc(
        SelectBonusConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct SelectBonusConfirmDialog_CallbackFunc_o *clickedFunc; // x8
  struct SelectBonusConfirmDialog_CallbackFunc_o **p_clickedFunc; // x19

  p_clickedFunc = &this->fields.clickedFunc;
  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))clickedFunc->fields.m_target)(
      clickedFunc->fields.original_method_info,
      result,
      *(_QWORD *)&clickedFunc->fields.extra_arg);
  *p_clickedFunc = 0LL;
  sub_1C3B708(p_clickedFunc);
}


void __fastcall SelectBonusConfirmDialog__Init(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectBonusConfirmDialog__OnClickBackToChoice(
        SelectBonusConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1CB8D & 1) == 0 )
  {
    sub_1C3B764(&Method_SelectBonusConfirmDialog_OnClickBackToChoice__, method);
    byte_4C1CB8D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickBackToChoice__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickBackToChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SelectBonusConfirmDialog_OnClickBackToChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    SelectBonusConfirmDialog__ExecClickedFunc(this, 0, v5);
  }
}


void __fastcall SelectBonusConfirmDialog__OnClickOk(SelectBonusConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1CB8C & 1) == 0 )
  {
    sub_1C3B764(&Method_SelectBonusConfirmDialog_OnClickOk__, method);
    byte_4C1CB8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectBonusConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_SelectBonusConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SelectBonusConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    SelectBonusConfirmDialog__ExecClickedFunc(this, 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusConfirmDialog__Open(
        SelectBonusConfirmDialog_o *this,
        int32_t selectedIndex,
        int32_t type,
        int32_t objectId,
        SelectBonusConfirmDialog_CallbackFunc_o *func,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct SelectBonusConfirmDialog_ViewInfoContainer_array *switchingPartList; // x23
  int max_length; // w8
  unsigned int v18; // w24
  SelectBonusConfirmDialog_ViewInfoContainer_o *v19; // x8
  struct SelectBonusConfirmDialog_ViewInfo_array *switchingPart; // x25
  int v21; // w8
  unsigned int v22; // w26
  SelectBonusConfirmDialog_ViewInfo_o *v23; // x8
  System_Action_o *v24; // x20

  if ( (byte_4C1CB8A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&selectedIndex);
    sub_1C3B764(&Method_SelectBonusConfirmDialog_EndOpen__, v11);
    byte_4C1CB8A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.clickedFunc = func;
  gameObject = (UnityEngine_GameObject_o *)sub_1C3B708(&this->fields.clickedFunc);
  switchingPartList = this->fields.switchingPartList;
  this->fields.state = 1;
  if ( !switchingPartList )
    goto LABEL_19;
  max_length = switchingPartList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        goto LABEL_20;
      v19 = switchingPartList->m_Items[v18];
      if ( !v19 )
        goto LABEL_19;
      switchingPart = v19->fields.switchingPart;
      if ( !switchingPart )
        goto LABEL_19;
      v21 = switchingPart->max_length;
      if ( v21 >= 1 )
        break;
LABEL_16:
      max_length = switchingPartList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_17;
    }
    v22 = 0;
    while ( v22 < v21 )
    {
      v23 = switchingPart->m_Items[v22];
      if ( !v23 )
        goto LABEL_19;
      gameObject = v23->fields.switchingObject;
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, v23->fields.index == selectedIndex, 0LL);
      v21 = switchingPart->max_length;
      if ( (int)++v22 >= v21 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C3B9C8(gameObject, v13, v14, v15);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemIconComponent;
  if ( !gameObject )
LABEL_19:
    sub_1C3B9C0(gameObject, v13);
  ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)gameObject, type, objectId, -1, 0, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v24 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SelectBonusConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
}


void __fastcall SelectBonusConfirmDialog__add_clickedFunc(
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

  if ( (byte_4C1CB88 & 1) == 0 )
  {
    sub_1C3B764(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo, value);
    byte_4C1CB88 = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectBonusConfirmDialog_CallbackFunc_c *)v8->klass != SelectBonusConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusConfirmDialog_o *)sub_1C3BC80(v8);
  SelectBonusConfirmDialog__remove_clickedFunc(v11, v12, v13);
}


void __fastcall SelectBonusConfirmDialog__remove_clickedFunc(
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

  if ( (byte_4C1CB89 & 1) == 0 )
  {
    sub_1C3B764(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo, value);
    byte_4C1CB89 = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectBonusConfirmDialog_CallbackFunc_c *)v8->klass != SelectBonusConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusConfirmDialog_o *)sub_1C3BC80(v8);
  SelectBonusConfirmDialog__CheckSerializeFieldAssertion(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusConfirmDialog_CallbackFunc___ctor(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7483C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A747F4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SelectBonusConfirmDialog_CallbackFunc__BeginInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4C1CB8F & 1) == 0 )
  {
    sub_1C3B764(&SelectBonusConfirmDialog_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4C1CB8F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SelectBonusConfirmDialog_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall SelectBonusConfirmDialog_CallbackFunc__EndInvoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall SelectBonusConfirmDialog_CallbackFunc__Invoke(
        SelectBonusConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SelectBonusConfirmDialog_ViewInfo___ctor(
        SelectBonusConfirmDialog_ViewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectBonusConfirmDialog_ViewInfoContainer___ctor(
        SelectBonusConfirmDialog_ViewInfoContainer_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}