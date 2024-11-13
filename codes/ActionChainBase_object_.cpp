void __fastcall ActionChainBase_object____ctor(
        ActionChainBase_T__o *this,
        System_Object_array *chains,
        const MethodInfo_3221C14 *method)
{
  ChainableActionBase___ctor((ChainableActionBase_o *)this, 0LL);
  ((void (__fastcall *)(ActionChainBase_T__o *, void *))this->klass->vtable._6_Init.method)(
    this,
    this->klass[1]._1.image);
  ActionChainBase_object___AddRange(
    this,
    chains,
    (const MethodInfo_3221CC8 *)method->klass->rgctx_data->_3_ActionChainBase_T__AddRange);
}


ActionChainBase_T__o *__fastcall ActionChainBase_object___AddRange(
        ActionChainBase_T__o *this,
        System_Object_array *chainElems,
        const MethodInfo_3221CC8 *method)
{
  __int64 v3; // x3
  ActionChainBase_T__o *v6; // x21
  signed int max_length; // w8
  unsigned int v8; // w24
  Il2CppObject *v9; // x22
  System_Action_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Action_o *endCallback; // x8
  MethodInfo *_8_System_Collections_Generic_List_T__Add; // x9
  __int64 nextAction_low; // x10
  System_Action_c **v26; // x8

  v6 = this;
  if ( (byte_4B1C0E0 & 1) == 0 )
  {
    this = (ActionChainBase_T__o *)sub_1BCA7E0(&System_Action_TypeInfo, chainElems, method);
    byte_4B1C0E0 = 1;
  }
  if ( !v6 )
    goto LABEL_17;
  if ( !v6->fields._IsExecuted_k__BackingField )
  {
    if ( !chainElems )
      goto LABEL_17;
    max_length = chainElems->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_1BCAA44(this, chainElems);
        v9 = chainElems->m_Items[v8];
        v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, chainElems, method, v3);
        System_Action___ctor(
          v10,
          (Il2CppObject *)v6,
          (intptr_t)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext,
          0LL);
        if ( !v9 )
          break;
        v9[1].monitor = v10;
        sub_1BCA784((PartyOrganizationUtility_o *)&v9[1].monitor, (int64_t)v10, v11, v12, v13, v14, v15, v16);
        this = *(ActionChainBase_T__o **)&v6->fields.currentIndex;
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
            v9,
            (const MethodInfo_35A1C5C *)_8_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
        }
        else
        {
          v26 = &endCallback->klass + nextAction_low;
          LODWORD(this->fields.nextAction) = nextAction_low + 1;
          v26[4] = (System_Action_c *)v9;
          sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v9, v17, v18, v19, v20, v21, v22);
        }
        max_length = chainElems->max_length;
        if ( (int)++v8 >= max_length )
          return v6;
      }
LABEL_17:
      sub_1BCAA3C(this, chainElems);
    }
  }
  return v6;
}


void __fastcall ActionChainBase_object___DoNext(ActionChainBase_T__o *this, const MethodInfo_3222190 *method)
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
      sub_1BCAA3C(0LL, method);
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
               (const MethodInfo_35A198C *)method->klass->rgctx_data->_19_ActionChainBase_T__ExecuteCurrentAction);
      ((void (__fastcall *)(ActionChainBase_T__o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
        this,
        Item,
        this->klass[1]._1.name);
    }
  }
}


void __fastcall ActionChainBase_object___ExecuteOnDetail(ActionChainBase_T__o *this, const MethodInfo_3222180 *method)
{
  ActionChainBase_object___DoNext(
    this,
    (const MethodInfo_3222190 *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
}


void __fastcall ActionChainBase_object___Init(ActionChainBase_T__o *this, const MethodInfo_3221C60 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 _4_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v7; // x0
  ActionChainBase_T__c *klass; // x8
  int64_t v9; // x20
  int32_t *p_currentIndex; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  *((_DWORD *)&this->fields._IsExecuted_k__BackingField + 1) = -1;
  _4_System_Collections_Generic_List_T = (__int64)method->klass->rgctx_data->_4_System_Collections_Generic_List_T_;
  if ( (*(_BYTE *)(_4_System_Collections_Generic_List_T + 309) & 1) == 0 )
    _4_System_Collections_Generic_List_T = sub_1C1C6BC();
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(_4_System_Collections_Generic_List_T, method, v2, v3);
  klass = method->klass;
  v9 = (int64_t)v7;
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)klass->rgctx_data->_5_System_Collections_Generic_List_T___ctor);
  *(_QWORD *)&this->fields.currentIndex = v9;
  p_currentIndex = &this->fields.currentIndex;
  sub_1BCA784((PartyOrganizationUtility_o *)p_currentIndex, v9, v11, v12, v13, v14, v15, v16);
  *((_WORD *)p_currentIndex + 4) = 0;
}


void __fastcall ActionChainBase_object___PauseNext(ActionChainBase_T__o *this, const MethodInfo_3221E10 *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    1,
    (const MethodInfo_3221E64 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
}


void __fastcall ActionChainBase_object___ResumeNext(ActionChainBase_T__o *this, const MethodInfo_3221E24 *method)
{
  ActionChainBase_object___SetIsPausing(
    this,
    0,
    (const MethodInfo_3221E64 *)method->klass->rgctx_data->_9_ActionChainBase_T__SetIsPausing);
  ActionChainBase_object___StartPendingNextAction(
    this,
    (const MethodInfo_3221FF0 *)method->klass->rgctx_data->_10_ActionChainBase_T__StartPendingNextAction);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionChainBase_object___SetIsPausing(
        ActionChainBase_T__o *this,
        bool value,
        const MethodInfo_3221E64 *method)
{
  bool v6; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x0
  bool v10; // w20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  v6 = value;
  if ( (byte_4B1C0E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionChainBase_ChainableActionBase__SetIsPausing__, value, method);
    sub_1BCA7E0(&ActionChainBase_ChainableActionBase__TypeInfo, v7, v8);
    byte_4B1C0E1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v9 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  LOBYTE(this->fields.children) = v6;
  if ( !v9 )
    sub_1BCAA3C(0LL, value);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    v9,
    (const MethodInfo_35A2754 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  v10 = value;
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v13.fields._current )
    {
      methodPtr_low = LOBYTE(ActionChainBase_ChainableActionBase__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (ActionChainBase_ChainableActionBase__c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___SetIsPausing(
          (ActionChainBase_T__o *)v13.fields._current,
          v10,
          (const MethodInfo_3221E64 *)Method_ActionChainBase_ChainableActionBase__SetIsPausing__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}


void __fastcall ActionChainBase_object___StartPendingNextAction(
        ActionChainBase_T__o *this,
        const MethodInfo_3221FF0 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B1C0E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__, method, v2);
    sub_1BCA7E0(&ActionChainBase_ChainableActionBase__TypeInfo, v5, v6);
    byte_4B1C0E2 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( BYTE1(this->fields.children) )
  {
    BYTE1(this->fields.children) = 0;
    ActionChainBase_object___DoNext(
      this,
      (const MethodInfo_3222190 *)method->klass->rgctx_data->_7_ActionChainBase_T__DoNext);
  }
  v7 = *(System_Collections_Generic_List_object__o **)&this->fields.currentIndex;
  if ( !v7 )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v7,
    (const MethodInfo_35A2754 *)method->klass->rgctx_data->_11_System_Collections_Generic_List_T__GetEnumerator);
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3316D1C *)method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext) )
  {
    if ( v10.fields._current )
    {
      methodPtr_low = LOBYTE(ActionChainBase_ChainableActionBase__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v10.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (ActionChainBase_ChainableActionBase__c *)v10.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == ActionChainBase_ChainableActionBase__TypeInfo )
      {
        ActionChainBase_object___StartPendingNextAction(
          (ActionChainBase_T__o *)v10.fields._current,
          (const MethodInfo_3221FF0 *)Method_ActionChainBase_ChainableActionBase__StartPendingNextAction__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3316D18 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_T__get_Count);
}