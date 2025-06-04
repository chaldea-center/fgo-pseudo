void __fastcall SupportSelectDeckListViewObject___ctor(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFE6A0 & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4AFE6A0 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SupportSelectDeckListViewObject__Awake(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFE69D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___, method);
    byte_4AFE69D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BC3264(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___);
  this->fields.itemDraw = (struct SupportSelectDeckListViewItemDraw_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall SupportSelectDeckListViewObject__Init(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  SupportSelectDeckListViewItem_c *v6; // x10
  struct ListViewItem_o *v7; // x21
  UnityEngine_Object_o *itemDraw; // x20
  SupportSelectDeckListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4AFE69E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&SupportSelectDeckListViewItem_TypeInfo, v3);
    byte_4AFE69E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(SupportSelectDeckListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == SupportSelectDeckListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v6 == SupportSelectDeckListViewItem_TypeInfo )
      {
        itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = (SupportSelectDeckListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          if ( !v7 || (v9 = this->fields.itemDraw) == 0LL )
            sub_1BC3264(v9, v10);
          SupportSelectDeckListViewItemDraw__SetSupportData(
            v9,
            (SupportServantData_o *)v7[1].klass,
            (bool)v7[1].monitor,
            BYTE1(v7[1].monitor),
            v11);
        }
      }
    }
  }
}


void __fastcall SupportSelectDeckListViewObject__OnSelected(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ListViewItem_c *klass; // x9
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4AFE69F & 1) == 0 )
  {
    sub_1BC3008(&SupportSelectDeckListViewItem_TypeInfo, method);
    sub_1BC3008(&Method_SupportSelectDeckListViewObject_OnSelected__, v3);
    byte_4AFE69F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(SupportSelectDeckListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectDeckListViewItem_TypeInfo
    && (klass = linkItem[1].klass) != 0LL
    && BYTE1(linkItem[1].monitor) )
  {
    onSelected = this->fields.onSelected;
    if ( onSelected )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onSelected->fields.m_target)(
        onSelected->fields.original_method_info,
        LODWORD(klass->_1.interopData),
        *(_QWORD *)&onSelected->fields.extra_arg);
  }
  else
  {
    v6 = Method_SupportSelectDeckListViewObject_OnSelected__;
    if ( (*((_BYTE *)Method_SupportSelectDeckListViewObject_OnSelected__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_SupportSelectDeckListViewObject_OnSelected__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewObject__SetMode(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onSelected = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onSelected, 0, (int32_t)method, v3);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    mode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall SupportSelectDeckListViewObject__SetMode_34699564(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected,
        const MethodInfo *method)
{
  this->fields.onSelected = onSelected;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onSelected, (int32_t)onSelected, (int32_t)onSelected, method);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    mode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall SupportSelectDeckListViewObject__add_onSelected(
        SupportSelectDeckListViewObject_o *this,
        SupportSelectDeckListViewObject_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectDeckListViewObject_o *v11; // x0
  SupportSelectDeckListViewObject_OnSelectEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4AFE69B & 1) == 0 )
  {
    sub_1BC3008(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, value);
    byte_4AFE69B = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectDeckListViewObject_OnSelectEvent_c *)v8->klass != SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  SupportSelectDeckListViewObject__remove_onSelected(v11, v12, v13);
}


void __fastcall SupportSelectDeckListViewObject__remove_onSelected(
        SupportSelectDeckListViewObject_o *this,
        SupportSelectDeckListViewObject_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectDeckListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4AFE69C & 1) == 0 )
  {
    sub_1BC3008(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, value);
    byte_4AFE69C = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectDeckListViewObject_OnSelectEvent_c *)v8->klass != SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  SupportSelectDeckListViewObject__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewObject_OnSelectEvent___ctor(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09D3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09CF4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectDeckListViewObject_OnSelectEvent__BeginInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = deckId;
  if ( (byte_4AFE6A1 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&deckId);
    byte_4AFE6A1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall SupportSelectDeckListViewObject_OnSelectEvent__EndInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall SupportSelectDeckListViewObject_OnSelectEvent__Invoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    deckId,
    *(_QWORD *)&this->fields.extra_arg);
}