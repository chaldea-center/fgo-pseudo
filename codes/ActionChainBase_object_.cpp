void __fastcall ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_32A5434 *method)
{
  ChainableActionBase___ctor((ChainableActionBase_o *)this, 0LL);
  ((void (__fastcall *)(ActionChainBase_T__o *, void *))this->klass->vtable._6_Init.method)(
    this,
    this->klass[1]._1.image);
  ActionChainBase_object___AddRange(
    this,
    chains,
    (const MethodInfo_32A54E8 *)method->klass->rgctx_data->_3_ActionChainBase_T__AddRange);
}


ActionChainBase_T__o *__fastcall ActionChainBase_object___AddRange(
        ActionChainBase_T__o *this,
        System_Object_array *chainElems,
        const MethodInfo_32A54E8 *method)
{
  ActionChainBase_T__o *v5; // x21
  signed int max_length; // w8
  unsigned int v7; // w24
  Il2CppObject *v8; // x22
  System_Action_o *v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Action_o *endCallback; // x8
  MethodInfo *_8_System_Collections_Generic_List_T__Add; // x9
  __int64 nextAction_low; // x10
  System_Action_c **v25; // x8

  v5 = this;
  if ( (byte_4BBA7CA & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_1C13D24(&System_Action_TypeInfo, chainElems);
    byte_4BBA7CA = 1;
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
          sub_1C13F88(this, chainElems);
        v8 = chainElems->m_Items[v7];
        v9 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          (intptr_t)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext,
          0LL);
        if ( !v8 )
          break;
        v8[1].monitor = v9;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v8[1].monitor, (int64_t)v9, v10, v11, v12, v13, v14, v15);
        this = *(ActionChainBase_T__o **)&v5->fields.currentIndex;
        if ( !this )
          break;
        endCallback = this->fields.endCallback;
        _8_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_8_System_Collections_Generic_List_T__Add;
        ++HIDWORD(this->fields.nextAction);
        if ( !endCallback )
          break;
        nextAction_low = SLODWORD(this->fields.nextAction);
        if ( (unsigned int)nextAction_low >= LODWORD(endCallback->fields.m_target) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v8,
            (const MethodInfo_362D1CC *)_8_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
        }
        else
        {
          v25 = &endCallback->klass + nextAction_low;
          LODWORD(this->fields.nextAction) = nextAction_low + 1;
          v25[4] = (System_Action_c *)v8;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v8, v16, v17, v18, v19, v20, v21);
        }
        max_length = chainElems->max_length;
        if ( (int)++v7 >= max_length )
          return v5;
      }
LABEL_17:
      sub_1C13F80(this, chainElems);
    }
  }
  return v5;
}


void __fastcall ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_32A59B0 *method)
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
      sub_1C13F80(0LL, method);
    if ( v4 >= v3->fields._size )
    {
      ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppMethodPointer))this->klass->vtable._5_End.method)(
        this,
        this->klass->vtable._6_Init.methodPtr);
    }
    else
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v3,
               v4,
               (const MethodInfo_362CEFC *)method->klass->rgctx_data->_19_ActionChainBase_T__ExecuteCurrentAction);
      ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
        this,
        Item,
        this->klass[1]._1.name);
    }
  }
}


void __fastcall ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_32A59A0 *method)
{
  ActionChainBase_object___DoNext(
    this,
    (const MethodInfo_32A59B0 *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
}


void __fastcall ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_32A5480 *method)
{
  __int64 _4_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v5; // x0
  ActionChainBase_T__c *klass; // x8
  int64_t v7; // x20
  int32_t *p_currentIndex; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = -1;
  _4_System_Collections_Generic_List_T = (__int64)method->klass->rgctx_data->_4_System_Collections_Generic_List_T_;
  if ( (*(_BYTE *)(_4_System_Collections_Generic_List_T + 309) & 1) == 0 )
    _4_System_Collections_Generic_List_T = sub_1C65C00();
  v5 = (System_Collections_Generic_List_object__o *)sub_1C13F70(_4_System_Collections_Generic_List_T);
  klass = method->klass;
  v7 = (int64_t)v5;
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_362C998 *)klass->rgctx_data->_5_System_Collections_Generic_List_T___ctor);
  *(_QWORD *)&this->fields.currentIndex = v7;
  p_currentIndex = &this->fields.currentIndex;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_currentIndex, v7, v9, v10, v11, v12, v13, v14);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void __fastcall ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_32A5630 *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    1,
    (const MethodInfo_32A5684 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
}


void __fastcall ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_32A5644 *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    0,
    (const MethodInfo_32A5684 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
  ActionChainBase_object___StartPendingNextAction(
    this,
    (const MethodInfo_32A5810 *)method->klass->rgctx_data->_10_ActionChainBase_T__StartPendingNextAction);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionChainBase_object___SetIsPausing(
        ActionChainBase_T__o *this,
        bool value,
        const MethodInfo_32A5684 *method)
{
  bool v6; // w22
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x0
  bool v9; // w20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  v6 = value;
  if ( (byte_4BBA7CB & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__, value);
    sub_1C13D24(&ActionChainBase_ChainableActionBase__TypeInfo, v7);
    byte_4BBA7CB = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v8 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  LOBYTE(this->fields.children) = v6;
  if ( !v8 )
    sub_1C13F80(0LL, value);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    v8,
    (const MethodInfo_362DCC4 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  v9 = value;
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_33BEBE8 *)method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v12.fields._current )
    {
      methodPtr_low = LOBYTE(ActionChainBase_ChainableActionBase__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (ActionChainBase_ChainableActionBase__c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___SetIsPausing(
          (ActionChainBase_T__o *)v12.fields._current,
          v9,
          (const MethodInfo_32A5684 *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33BEBE4 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}


void __fastcall ActionChainBase_object___StartPendingNextAction(
        ActionChainBase_T__o *this,
        const MethodInfo_32A5810 *method)
{
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4BBA7CC & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__, method);
    sub_1C13D24(&ActionChainBase_ChainableActionBase__TypeInfo, v4);
    byte_4BBA7CC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( BYTE1(this->fields.children) )
  {
    BYTE1(this->fields.children) = 0;
    ActionChainBase_object___DoNext(
      this,
      (const MethodInfo_32A59B0 *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
  }
  v5 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  if ( !v5 )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    v5,
    (const MethodInfo_362DCC4 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_33BEBE8 *)method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v8.fields._current )
    {
      methodPtr_low = LOBYTE(ActionChainBase_ChainableActionBase__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v8.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (ActionChainBase_ChainableActionBase__c *)v8.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___StartPendingNextAction(
          (ActionChainBase_T__o *)v8.fields._current,
          (const MethodInfo_32A5810 *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33BEBE4 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}