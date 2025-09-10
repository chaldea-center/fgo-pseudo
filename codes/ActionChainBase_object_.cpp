void ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_33F80E0 *method)
{
  ChainableActionBase___ctor((ChainableActionBase_o *)this, 0);
  ((void (__fastcall *)(ActionChainBase_T__o *, const MethodInfo *))this->klass->vtable._6_Init.methodPtr)(
    this,
    this->klass->vtable._6_Init.method);
  ActionChainBase_object___AddRange(
    this,
    chains,
    (const MethodInfo_33F8194 *)method->klass->rgctx_data->_3_ActionChainBase_T__AddRange);
}


ActionChainBase_T__o *ActionChainBase_object___AddRange(
        ActionChainBase_T__o *this,
        System_Object_array *chainElems,
        const MethodInfo_33F8194 *method)
{
  ActionChainBase_T__o *v5; // x21
  int max_length; // w8
  unsigned int v7; // w24
  Il2CppObject *v8; // x22
  System_Action_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *endCallback; // x8
  MethodInfo *_8_System_Collections_Generic_List_T__Add; // x9
  __int64 nextAction_low; // x10
  System_Action_c **v17; // x8

  v5 = this;
  if ( (byte_4C2CE22 & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2CE22 = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  if ( !v5->fields._IsExecuted_k__BackingField )
  {
    if ( !chainElems )
      goto LABEL_17;
    max_length = chainElems->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C2D6F4(this, chainElems, method);
        v8 = chainElems->m_Items[v7];
        v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          (intptr_t)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext,
          0);
        if ( !v8 )
          break;
        v8[1].monitor = v9;
        sub_1C2D434((CGThumbnailListItem_o *)&v8[1].monitor, (int32_t)v9, v10, v11);
        this = *(ActionChainBase_T__o **)&v5->fields.currentIndex;
        if ( !this )
          break;
        endCallback = this->fields.endCallback;
        _8_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_8_System_Collections_Generic_List_T__Add;
        ++HIDWORD(this->fields.nextAction);
        if ( !endCallback )
          break;
        nextAction_low = SLODWORD(this->fields.nextAction);
        if ( (unsigned int)nextAction_low >= LODWORD(endCallback->fields.invoke_impl) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v8,
            (const MethodInfo_3789B84 *)_8_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
        }
        else
        {
          v17 = &endCallback->klass + nextAction_low;
          LODWORD(this->fields.nextAction) = nextAction_low + 1;
          v17[4] = (System_Action_c *)v8;
          sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v8, v12, v13);
        }
        max_length = chainElems->max_length;
        if ( (int)++v7 >= max_length )
          return v5;
      }
LABEL_17:
      sub_1C2D6EC(this, chainElems);
    }
  }
  return v5;
}


void ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_33F865C *method)
{
  System_Collections_Generic_List_object__o *v3; // x0
  int32_t v4; // w8
  Il2CppObject *Item; // x1

  if ( LOBYTE(this->fields.children) )
  {
    BYTE1(this->fields.children) = 1;
  }
  else
  {
    v3 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
    v4 = *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) + 1;
    *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = v4;
    if ( !v3 )
      sub_1C2D6EC(0, method);
    if ( v4 >= v3->fields._size )
    {
      ((void (__fastcall *)(ActionChainBase_T__o *, const MethodInfo *))this->klass->vtable._5_End.methodPtr)(
        this,
        this->klass->vtable._5_End.method);
    }
    else
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v3,
               v4,
               (const MethodInfo_37898B4 *)method->klass->rgctx_data->_19_ActionChainBase_T__ExecuteCurrentAction);
      ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppObject *, void *))this->klass[1]._1.image)(
        this,
        Item,
        this->klass[1]._1.gc_desc);
    }
  }
}


void ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_33F864C *method)
{
  ActionChainBase_object___DoNext(
    this,
    (const MethodInfo_33F865C *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
}


void ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_33F812C *method)
{
  __int64 _4_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v5; // x0
  ActionChainBase_T__c *klass; // x8
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t *p_currentIndex; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = -1;
  _4_System_Collections_Generic_List_T = (__int64)method->klass->rgctx_data->_4_System_Collections_Generic_List_T_;
  if ( (*(_BYTE *)(_4_System_Collections_Generic_List_T + 309) & 1) == 0 )
    _4_System_Collections_Generic_List_T = sub_1C7DBA4();
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(_4_System_Collections_Generic_List_T);
  klass = method->klass;
  v7 = v5;
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)klass->rgctx_data->_5_System_Collections_Generic_List_T___ctor);
  *(_QWORD *)&this->fields.currentIndex = v7;
  p_currentIndex = &this->fields.currentIndex;
  sub_1C2D434((CGThumbnailListItem_o *)p_currentIndex, (int32_t)v7, v9, v10);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_33F82DC *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    1,
    (const MethodInfo_33F8330 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
}


void ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_33F82F0 *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    0,
    (const MethodInfo_33F8330 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
  ActionChainBase_object___StartPendingNextAction(
    this,
    (const MethodInfo_33F84BC *)method->klass->rgctx_data->_10_ActionChainBase_T__StartPendingNextAction);
}


// local variable allocation has failed, the output may be wrong!
void ActionChainBase_object___SetIsPausing(ActionChainBase_T__o *this, bool value, const MethodInfo_33F8330 *method)
{
  bool v6; // w22
  System_Collections_Generic_List_object__o *v7; // x0
  bool v8; // w20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  v6 = value;
  if ( (byte_4C2CE23 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
    sub_1C2D490(&ActionChainBase_ChainableActionBase__TypeInfo);
    byte_4C2CE23 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v7 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  LOBYTE(this->fields.children) = v6;
  if ( !v7 )
    sub_1C2D6EC(0, value);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    v7,
    (const MethodInfo_378A67C *)method->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  v8 = value;
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3514508 *)method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v11.fields._current )
    {
      naturalAligment = ActionChainBase_ChainableActionBase__TypeInfo->_2.naturalAligment;
      if ( v11.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ActionChainBase_ChainableActionBase__c *)v11.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___SetIsPausing(
          (ActionChainBase_T__o *)v11.fields._current,
          v8,
          (const MethodInfo_33F8330 *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3514504 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}


void ActionChainBase_object___StartPendingNextAction(ActionChainBase_T__o *this, const MethodInfo_33F84BC *method)
{
  System_Collections_Generic_List_object__o *v4; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C2CE24 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
    sub_1C2D490(&ActionChainBase_ChainableActionBase__TypeInfo);
    byte_4C2CE24 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( BYTE1(this->fields.children) )
  {
    BYTE1(this->fields.children) = 0;
    ActionChainBase_object___DoNext(
      this,
      (const MethodInfo_33F865C *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
  }
  v4 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  if ( !v4 )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    v4,
    (const MethodInfo_378A67C *)method->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  v7 = v6;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3514508 *)method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v7.fields._current )
    {
      naturalAligment = ActionChainBase_ChainableActionBase__TypeInfo->_2.naturalAligment;
      if ( v7.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ActionChainBase_ChainableActionBase__c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___StartPendingNextAction(
          (ActionChainBase_T__o *)v7.fields._current,
          (const MethodInfo_33F84BC *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3514504 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}