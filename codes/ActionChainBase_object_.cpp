void ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_3F0E38C *method)
{
  ChainableActionBase___ctor((ChainableActionBase_o *)this, 0);
  ((void (__fastcall *)(ActionChainBase_T__o *, const MethodInfo *))this->klass->vtable._6_Init.methodPtr)(
    this,
    this->klass->vtable._6_Init.method);
  ActionChainBase_object___AddRange(
    this,
    chains,
    (const MethodInfo_3F0E444 *)method->klass->rgctx_data->_3_ActionChainBase_T__AddRange);
}


ActionChainBase_T__o *ActionChainBase_object___AddRange(
        ActionChainBase_T__o *this,
        System_Object_array *chainElems,
        const MethodInfo_3F0E444 *method)
{
  ActionChainBase_T__o *v5; // x21
  int max_length; // w8
  unsigned int v7; // w25
  Il2CppObject *v8; // x22
  System_Action_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Action_o *endCallback; // x8
  MethodInfo *_8_System_Collections_Generic_List_T__Add; // x9
  __int64 nextAction_low; // x10
  System_Action_c **v25; // x8

  v5 = this;
  if ( (byte_593F051 & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_21FFC50(&System_Action_TypeInfo);
    byte_593F051 = 1;
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
          sub_21FFED4(this);
        v8 = chainElems->m_Items[v7];
        v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          (intptr_t)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext,
          0);
        if ( !v8 )
          break;
        v8[1].monitor = v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8[1].monitor, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
            (const MethodInfo_444FB2C *)_8_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
        }
        else
        {
          v25 = &endCallback->klass + nextAction_low;
          LODWORD(this->fields.nextAction) = nextAction_low + 1;
          v25[4] = (System_Action_c *)v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v8, v16, v17, v18, v19, v20, v21);
        }
        max_length = chainElems->max_length;
        if ( (int)++v7 >= max_length )
          return v5;
      }
LABEL_17:
      sub_21FFECC(this, chainElems);
    }
  }
  return v5;
}


void ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_3F0E8FC *method)
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
      sub_21FFECC(0, method);
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
               (const MethodInfo_444F85C *)method->klass->rgctx_data->_19_ActionChainBase_T__ExecuteCurrentAction);
      ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppObject *, void *))this->klass[1]._1.image)(
        this,
        Item,
        this->klass[1]._1.gc_desc);
    }
  }
}


void ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_3F0E8EC *method)
{
  ActionChainBase_object___DoNext(
    this,
    (const MethodInfo_3F0E8FC *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
}


void ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_3F0E3D8 *method)
{
  ActionChainBase_T__c *klass; // x9
  __int64 _4_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v6; // x0
  ActionChainBase_T__c *v7; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t *p_currentIndex; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  klass = method->klass;
  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = -1;
  _4_System_Collections_Generic_List_T = (__int64)klass->rgctx_data->_4_System_Collections_Generic_List_T_;
  if ( (*(_WORD *)(_4_System_Collections_Generic_List_T + 309) & 1) == 0 )
    _4_System_Collections_Generic_List_T = sub_2237AF8();
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(_4_System_Collections_Generic_List_T);
  v7 = method->klass;
  v8 = v6;
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)v7->rgctx_data->_5_System_Collections_Generic_List_T___ctor);
  *(_QWORD *)&this->fields.currentIndex = v8;
  p_currentIndex = &this->fields.currentIndex;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_currentIndex, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_3F0E58C *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    1,
    (const MethodInfo_3F0E5E0 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
}


void ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_3F0E5A0 *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    0,
    (const MethodInfo_3F0E5E0 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
  ActionChainBase_object___StartPendingNextAction(
    this,
    (const MethodInfo_3F0E760 *)method->klass->rgctx_data->_10_ActionChainBase_T__StartPendingNextAction);
}


// local variable allocation has failed, the output may be wrong!
void ActionChainBase_object___SetIsPausing(ActionChainBase_T__o *this, bool value, const MethodInfo_3F0E5E0 *method)
{
  const MethodInfo_3F0E5E0 *v3; // x20
  bool v6; // w22
  System_Collections_Generic_List_object__o *v7; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+20h] [xbp-50h] BYREF
  const MethodInfo_3F0E5E0 *v10; // [xsp+38h] [xbp-38h]

  v3 = method;
  v6 = value;
  v10 = method;
  if ( (byte_593F052 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
    sub_21FFC50(&ActionChainBase_ChainableActionBase__TypeInfo);
    byte_593F052 = 1;
  }
  v7 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  memset(&v9, 0, sizeof(v9));
  LOBYTE(this->fields.children) = v6;
  if ( !v7 )
    sub_21FFECC(0, value);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v7,
    (const MethodInfo_4450604 *)v3->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40C7F4C *)v3->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v9.fields._current )
    {
      naturalAligment = ActionChainBase_ChainableActionBase__TypeInfo->_2.naturalAligment;
      if ( v9.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ActionChainBase_ChainableActionBase__c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___SetIsPausing(
          (ActionChainBase_T__o *)v9.fields._current,
          value,
          (const MethodInfo_3F0E5E0 *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
      }
    }
    v3 = v10;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)v10->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}


void ActionChainBase_object___StartPendingNextAction(ActionChainBase_T__o *this, const MethodInfo_3F0E760 *method)
{
  const MethodInfo_3F0E760 *v2; // x19
  int v4; // w8
  ActionChainBase_T__c *klass; // x8
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF
  const MethodInfo_3F0E760 *v9; // [xsp+38h] [xbp-28h]

  v9 = method;
  v2 = method;
  if ( (byte_593F053 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
    sub_21FFC50(&ActionChainBase_ChainableActionBase__TypeInfo);
    byte_593F053 = 1;
  }
  v4 = BYTE1(this->fields.children);
  memset(&v8, 0, sizeof(v8));
  if ( v4 )
  {
    klass = v2->klass;
    BYTE1(this->fields.children) = 0;
    ActionChainBase_object___DoNext(this, (const MethodInfo_3F0E8FC *)klass->rgctx_data->_7_ActionChainBase_T__DoNext);
  }
  v6 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  if ( !v6 )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    v6,
    (const MethodInfo_4450604 *)v2->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40C7F4C *)v2->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v8.fields._current )
    {
      naturalAligment = ActionChainBase_ChainableActionBase__TypeInfo->_2.naturalAligment;
      if ( v8.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ActionChainBase_ChainableActionBase__c *)v8.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___StartPendingNextAction(
          (ActionChainBase_T__o *)v8.fields._current,
          (const MethodInfo_3F0E760 *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
      }
    }
    v2 = v9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40C7F48 *)v9->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}