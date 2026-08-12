void SupportSelectDeckListViewObject___ctor(SupportSelectDeckListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CC3D & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596CC3D = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SupportSelectDeckListViewObject__Awake(SupportSelectDeckListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CC3A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___);
    byte_596CC3A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___);
  this->fields.itemDraw = (struct SupportSelectDeckListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void SupportSelectDeckListViewObject__Init(SupportSelectDeckListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  SupportSelectDeckListViewItemDraw_o *v9; // x0

  if ( (byte_596CC3B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportSelectDeckListViewItem_TypeInfo);
    byte_596CC3B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = SupportSelectDeckListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectDeckListViewItem_TypeInfo )
    {
      itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
      {
        v9 = this->fields.itemDraw;
        if ( !v9 )
          sub_2213CDC(0, v7);
        SupportSelectDeckListViewItemDraw__SetSupportData(
          v9,
          (SupportServantData_o *)linkItem[1].klass,
          (bool)linkItem[1].monitor,
          BYTE1(linkItem[1].monitor),
          v8);
      }
    }
  }
}


void SupportSelectDeckListViewObject__OnSelected(SupportSelectDeckListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ListViewItem_c *klass; // x9
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // x8

  if ( (byte_596CC3C & 1) == 0 )
  {
    sub_2213A60(&SupportSelectDeckListViewItem_TypeInfo);
    sub_2213A60(&Method_SupportSelectDeckListViewObject_OnSelected__);
    byte_596CC3C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = SupportSelectDeckListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectDeckListViewItem_TypeInfo
    && (klass = linkItem[1].klass) != 0
    && BYTE1(linkItem[1].monitor) )
  {
    onSelected = this->fields.onSelected;
    if ( onSelected )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onSelected->fields.invoke_impl)(
        onSelected->fields.method_code,
        LODWORD(klass->_1.interopData),
        onSelected->fields.method);
  }
  else
  {
    v5 = Method_SupportSelectDeckListViewObject_OnSelected__;
    if ( (*((_BYTE *)Method_SupportSelectDeckListViewObject_OnSelected__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_SupportSelectDeckListViewObject_OnSelected__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void SupportSelectDeckListViewObject__SetMode(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onSelected = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelected,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    mode == 2,
    this->klass->vtable._9_SetInput.method);
}


void SupportSelectDeckListViewObject__SetMode_42452184(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onSelected = onSelected;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelected,
    (int32_t)onSelected,
    (System_String_o *)onSelected,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    mode == 2,
    this->klass->vtable._9_SetInput.method);
}


void SupportSelectDeckListViewObject__add_onSelected(
        SupportSelectDeckListViewObject_o *this,
        SupportSelectDeckListViewObject_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectDeckListViewObject_o *v13; // x0
  SupportSelectDeckListViewObject_OnSelectEvent_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596CC38 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    byte_596CC38 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectDeckListViewObject_OnSelectEvent_c *)v8->klass != SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onSelected, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, v9, v10);
  SupportSelectDeckListViewObject__remove_onSelected(v13, v14, v15);
}


void SupportSelectDeckListViewObject__remove_onSelected(
        SupportSelectDeckListViewObject_o *this,
        SupportSelectDeckListViewObject_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectDeckListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596CC39 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    byte_596CC39 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectDeckListViewObject_OnSelectEvent_c *)v8->klass != SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onSelected, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, v9, v10);
  SupportSelectDeckListViewObject__Awake(v13, v14);
}


void SupportSelectDeckListViewObject_OnSelectEvent___ctor(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_20071F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_20071AC;
}


System_IAsyncResult_o *SupportSelectDeckListViewObject_OnSelectEvent__BeginInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = deckId;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void SupportSelectDeckListViewObject_OnSelectEvent__EndInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void SupportSelectDeckListViewObject_OnSelectEvent__Invoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    deckId,
    this->fields.method);
}