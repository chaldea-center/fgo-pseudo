void ServantStatusCharaGraphViewerListViewIndicator___ctor(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void ServantStatusCharaGraphViewerListViewIndicator__Init(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyCenter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onModifyCenterItem = onModifyCenter;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onModifyCenterItem, (int32_t)onModifyCenter, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphViewerListViewIndicator__OnModifyCenterItem(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  struct ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyCenterItem; // x8
  __int64 naturalAligment; // x11
  ListViewItem_o *v12; // x1

  if ( (byte_4C335EA & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4C335EA = 1;
  }
  onModifyCenterItem = this->fields.onModifyCenterItem;
  if ( onModifyCenterItem )
  {
    if ( item
      && (naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment,
          item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ServantStatusCharaGraphListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
        v12 = item;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    ((void (__fastcall *)(intptr_t, ListViewItem_o *, intptr_t, intptr_t, bool, bool, bool, const MethodInfo *))onModifyCenterItem->fields.invoke_impl)(
      onModifyCenterItem->fields.method_code,
      v12,
      onModifyCenterItem->fields.method,
      onModifyCenterItem->fields.invoke_impl,
      isBottom,
      isLeft,
      isRight,
      method);
  }
}


void ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A71E90;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A71F8C;
          else
            v9 = sub_1A71F50;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A71ECC;
        }
        else
        {
          v9 = sub_1A71EA0;
        }
      }
      else
      {
        v9 = sub_1A71E70;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A71E28;
}


System_IAsyncResult_o *ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__BeginInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = item;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__EndInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__Invoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, ServantStatusCharaGraphListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    item,
    this->fields.method);
}