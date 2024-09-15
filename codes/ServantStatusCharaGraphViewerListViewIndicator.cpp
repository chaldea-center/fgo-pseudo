void __fastcall ServantStatusCharaGraphViewerListViewIndicator___ctor(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator__Init(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyCenter,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.onModifyCenterItem = onModifyCenter;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.onModifyCenterItem,
    (int32_t)onModifyCenter,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewIndicator__OnModifyCenterItem(
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
  __int64 methodPtr_low; // x11
  ListViewItem_o *v12; // x1

  if ( (byte_4A29BFF & 1) == 0 )
  {
    sub_1B761C0(&ServantStatusCharaGraphListViewItem_TypeInfo, manager);
    byte_4A29BFF = 1;
  }
  onModifyCenterItem = this->fields.onModifyCenterItem;
  if ( onModifyCenterItem )
  {
    if ( item
      && (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantStatusCharaGraphListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
        v12 = item;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ListViewItem_o *, _QWORD, Il2CppObject *, bool, bool, bool, const MethodInfo *))onModifyCenterItem->fields.m_target)(
      onModifyCenterItem->fields.original_method_info,
      v12,
      *(_QWORD *)&onModifyCenterItem->fields.extra_arg,
      onModifyCenterItem->fields.m_target,
      isBottom,
      isLeft,
      isRight,
      method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19B74A8;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B76278(v6);
        v12 = sub_1B76734(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19B75A4;
          else
            v9 = (Il2CppObject *)sub_19B7568;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19B74E4;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19B74B8;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19B7488;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B7440;
}


System_IAsyncResult_o *__fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__BeginInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = item;
  return (System_IAsyncResult_o *)sub_1B76174(this, &v6, callback, object);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__EndInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__Invoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ServantStatusCharaGraphListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}