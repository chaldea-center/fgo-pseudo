void __fastcall SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  ChainableActionBase___ctor((ChainableActionBase_o *)this, 0LL);
  this->fields.sysChainAction = action;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sysChainAction,
    (System_Int32_array **)action,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


SimpleChainableAction_array *__fastcall SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_Action__array *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x21
  System_Action_Action__array *v9; // x20
  unsigned __int64 v10; // x24
  signed __int64 v11; // x25
  System_Int32_array ***m_Items; // x26
  BattleServantConfConponent_o *v13; // x21
  System_Int32_array **v14; // x23
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v29; // x0
  __int64 v30; // x0

  v4 = sysActions;
  if ( (byte_42E9794 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleChainableAction___TypeInfo, (_DWORD)method, v2, v3);
    sysActions = (System_Action_Action__array *)sub_B5D5C4(&SimpleChainableAction_TypeInfo, v5, v6, v7);
    byte_42E9794 = 1;
  }
  if ( !v4 )
LABEL_14:
    sub_B5D69C(sysActions, method);
  v8 = *(_QWORD *)&v4->max_length;
  sysActions = (System_Action_Action__array *)sub_B5D5DC(SimpleChainableAction___TypeInfo, (unsigned int)v8);
  v9 = sysActions;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    v11 = (int)v8;
    m_Items = (System_Int32_array ***)v4->m_Items;
    v13 = (BattleServantConfConponent_o *)sysActions->m_Items;
    do
    {
      if ( v10 >= v4->max_length )
        goto LABEL_13;
      v14 = *m_Items;
      v15 = sub_B5D694(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v15, 0LL);
      *(_QWORD *)(v15 + 40) = v14;
      sub_B5D560((BattleServantConfConponent_o *)(v15 + 40), v14, v16, v17, v18, v19, v20, v21);
      if ( !v9 )
        goto LABEL_14;
      if ( v15 )
      {
        sysActions = (System_Action_Action__array *)sub_B5D684(v15, v9->obj.klass->_1.element_class);
        if ( !sysActions )
        {
          v30 = sub_B5D6BC(0LL);
          sub_B5D668(v30, 0LL);
        }
      }
      if ( v10 >= v9->max_length )
      {
LABEL_13:
        v29 = sub_B5D6C8(sysActions);
        sub_B5D668(v29, 0LL);
      }
      v13->klass = (BattleServantConfConponent_c *)v15;
      sub_B5D560(v13, (System_Int32_array **)v15, v22, v23, v24, v25, v26, v27);
      ++v10;
      ++m_Items;
      v13 = (BattleServantConfConponent_o *)((char *)v13 + 8);
    }
    while ( (__int64)v10 < v11 );
  }
  return (SimpleChainableAction_array *)v9;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v9; // x0
  __int64 v10; // x1
  BlankEarth_QAARotateEarthResponse_o *v11; // x21

  if ( (byte_42E9793 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_Action___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    byte_42E9793 = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  if ( !this )
    sub_B5D69C(v9, v10);
  v11 = (BlankEarth_QAARotateEarthResponse_o *)v9;
  System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    sysChainAction,
    v11,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_Action___);
}