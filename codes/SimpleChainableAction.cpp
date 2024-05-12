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
  sub_B77560(
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
  __int64 v3; // x21
  System_Action_Action__array *v4; // x20
  unsigned __int64 v5; // x24
  signed __int64 v6; // x25
  System_Int32_array ***m_Items; // x26
  BattleServantConfConponent_o *v8; // x21
  System_Int32_array **v9; // x23
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v24; // x0
  __int64 v25; // x0

  v2 = sysActions;
  if ( (byte_438C036 & 1) == 0 )
  {
    sub_B775C4(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_B775C4(&SimpleChainableAction_TypeInfo);
    byte_438C036 = 1;
  }
  if ( !v2 )
LABEL_14:
    sub_B7769C(sysActions, method);
  v3 = *(_QWORD *)&v2->max_length;
  sysActions = (System_Action_Action__array *)sub_B775DC(SimpleChainableAction___TypeInfo, (unsigned int)v3);
  v4 = sysActions;
  if ( (int)v3 >= 1 )
  {
    v5 = 0LL;
    v6 = (int)v3;
    m_Items = (System_Int32_array ***)v2->m_Items;
    v8 = (BattleServantConfConponent_o *)sysActions->m_Items;
    do
    {
      if ( v5 >= v2->max_length )
        goto LABEL_13;
      v9 = *m_Items;
      v10 = sub_B77694(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v10, 0LL);
      *(_QWORD *)(v10 + 40) = v9;
      sub_B77560((BattleServantConfConponent_o *)(v10 + 40), v9, v11, v12, v13, v14, v15, v16);
      if ( !v4 )
        goto LABEL_14;
      if ( v10 )
      {
        sysActions = (System_Action_Action__array *)sub_B77684(v10, v4->obj.klass->_1.element_class);
        if ( !sysActions )
        {
          v25 = sub_B776BC(0LL);
          sub_B77668(v25, 0LL);
        }
      }
      if ( v5 >= v4->max_length )
      {
LABEL_13:
        v24 = sub_B776C8(sysActions);
        sub_B77668(v24, 0LL);
      }
      v8->klass = (BattleServantConfConponent_c *)v10;
      sub_B77560(v8, (System_Int32_array **)v10, v17, v18, v19, v20, v21, v22);
      ++v5;
      ++m_Items;
      v8 = (BattleServantConfConponent_o *)((char *)v8 + 8);
    }
    while ( (__int64)v5 < v6 );
  }
  return (SimpleChainableAction_array *)v4;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x0
  __int64 v5; // x1
  BlankEarth_QAARotateEarthResponse_o *v6; // x21

  if ( (byte_438C035 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_Action___);
    sub_B775C4(&System_Action_TypeInfo);
    byte_438C035 = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  if ( !this )
    sub_B7769C(v4, v5);
  v6 = (BlankEarth_QAARotateEarthResponse_o *)v4;
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    sysChainAction,
    v6,
    (const MethodInfo_2C3C35C *)Method_ActionExtensions_Call_Action___);
}