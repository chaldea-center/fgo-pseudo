void SupportSelectDeckListViewObject___ctor(SupportSelectDeckListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D28D65 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D28D65 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SupportSelectDeckListViewObject__Awake(SupportSelectDeckListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D28D62 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___);
    byte_4D28D62 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___);
  this->fields.itemDraw = (struct SupportSelectDeckListViewItemDraw_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  SupportSelectDeckListViewItem_c *v5; // x10
  struct ListViewItem_o *v6; // x21
  UnityEngine_Object_o *itemDraw; // x20
  SupportSelectDeckListViewItemDraw_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D28D63 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SupportSelectDeckListViewItem_TypeInfo);
    byte_4D28D63 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = SupportSelectDeckListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == SupportSelectDeckListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v5 == SupportSelectDeckListViewItem_TypeInfo )
      {
        itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = (SupportSelectDeckListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          if ( !v6 || (v8 = this->fields.itemDraw) == 0 )
            sub_1C942F0(v8, v9);
          SupportSelectDeckListViewItemDraw__SetSupportData(
            v8,
            (SupportServantData_o *)v6[1].klass,
            (bool)v6[1].monitor,
            BYTE1(v6[1].monitor),
            v10);
        }
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

  if ( (byte_4D28D64 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectDeckListViewItem_TypeInfo);
    sub_1C94098(&Method_SupportSelectDeckListViewObject_OnSelected__);
    byte_4D28D64 = 1;
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
      v5 = (_QWORD *)sub_1C940B0(Method_SupportSelectDeckListViewObject_OnSelected__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void SupportSelectDeckListViewObject__SetMode(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onSelected = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onSelected, 0, (int32_t)method, v3, v4, v5, v6, v7);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    mode == 2,
    this->klass->vtable._9_SetInput.method);
}


void SupportSelectDeckListViewObject__SetMode_36274596(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onSelected = onSelected;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelected,
    (int32_t)onSelected,
    (int32_t)onSelected,
    (int32_t)method,
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
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectDeckListViewObject_o *v11; // x0
  SupportSelectDeckListViewObject_OnSelectEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D28D60 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    byte_4D28D60 = 1;
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
    v9 = sub_1CEFE6C(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  SupportSelectDeckListViewObject__remove_onSelected(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectDeckListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D28D61 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    byte_4D28D61 = 1;
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
    v9 = sub_1CEFE6C(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  SupportSelectDeckListViewObject__Awake(v11, v12);
}


void SupportSelectDeckListViewObject_OnSelectEvent___ctor(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC4F0C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC4EC4;
}


System_IAsyncResult_o *SupportSelectDeckListViewObject_OnSelectEvent__BeginInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = deckId;
  if ( (byte_4D28D66 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D28D66 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void SupportSelectDeckListViewObject_OnSelectEvent__EndInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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