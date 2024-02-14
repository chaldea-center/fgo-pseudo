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
  sub_B0D840(
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
  System_Action_Action__array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_Action__array *v7; // x20
  unsigned __int64 v8; // x24
  signed __int64 v9; // x25
  System_Int32_array ***m_Items; // x26
  BattleServantConfConponent_o *v11; // x21
  System_Int32_array **v12; // x23
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v27; // x0
  __int64 v28; // x0

  v2 = sysActions;
  if ( (byte_42154CF & 1) == 0 )
  {
    sub_B0D8A4(&SimpleChainableAction___TypeInfo, method);
    sysActions = (System_Action_Action__array *)sub_B0D8A4(&SimpleChainableAction_TypeInfo, v3);
    byte_42154CF = 1;
  }
  if ( !v2 )
LABEL_14:
    sub_B0D97C(sysActions);
  v4 = *(_QWORD *)&v2->max_length;
  sysActions = (System_Action_Action__array *)sub_B0D8BC(SimpleChainableAction___TypeInfo, (unsigned int)v4);
  v7 = sysActions;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    v9 = (int)v4;
    m_Items = (System_Int32_array ***)v2->m_Items;
    v11 = (BattleServantConfConponent_o *)sysActions->m_Items;
    do
    {
      if ( v8 >= v2->max_length )
        goto LABEL_13;
      v12 = *m_Items;
      v13 = sub_B0D974(SimpleChainableAction_TypeInfo, v5, v6);
      ChainableActionBase___ctor((ChainableActionBase_o *)v13, 0LL);
      *(_QWORD *)(v13 + 40) = v12;
      sub_B0D840((BattleServantConfConponent_o *)(v13 + 40), v12, v14, v15, v16, v17, v18, v19);
      if ( !v7 )
        goto LABEL_14;
      if ( v13 )
      {
        sysActions = (System_Action_Action__array *)sub_B0D964(v13, v7->obj.klass->_1.element_class);
        if ( !sysActions )
        {
          v28 = sub_B0D99C(0LL);
          sub_B0D948(v28, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
      {
LABEL_13:
        v27 = sub_B0D9A8(sysActions);
        sub_B0D948(v27, 0LL);
      }
      v11->klass = (BattleServantConfConponent_c *)v13;
      sub_B0D840(v11, (System_Int32_array **)v13, v20, v21, v22, v23, v24, v25);
      ++v8;
      ++m_Items;
      v11 = (BattleServantConfConponent_o *)((char *)v11 + 8);
    }
    while ( (__int64)v8 < v9 );
  }
  return (SimpleChainableAction_array *)v7;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v6; // x0
  BlankEarth_QAARotateEarthResponse_o *v7; // x21

  if ( (byte_42154CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_Action___, method);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    byte_42154CE = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  if ( !this )
    sub_B0D97C(v6);
  v7 = (BlankEarth_QAARotateEarthResponse_o *)v6;
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    sysChainAction,
    v7,
    (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_Action___);
}