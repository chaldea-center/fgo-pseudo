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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onModifyCenterItem = onModifyCenter;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onModifyCenterItem,
    (int64_t)onModifyCenter,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4B62B3F & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewItem_TypeInfo, manager);
    byte_4B62B3F = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A21660;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BE4B84(v10);
        v16 = sub_1BE5040(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A2175C;
          else
            v13 = (Il2CppObject *)sub_1A21720;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A2169C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A21670;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A21640;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A215F8;
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
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v6, callback, object);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__EndInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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