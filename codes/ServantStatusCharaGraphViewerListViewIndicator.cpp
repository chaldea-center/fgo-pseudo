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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onModifyCenterItem = onModifyCenter;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onModifyCenterItem,
    (int32_t)onModifyCenter,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC2EF7 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4CC2EF7 = 1;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AA1728;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C71468(method);
        v16 = sub_1C719FC(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AA1824;
          else
            v13 = sub_1AA17E8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AA1764;
        }
        else
        {
          v13 = sub_1AA1738;
        }
      }
      else
      {
        v13 = sub_1AA1708;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA16C0;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


void ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__EndInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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