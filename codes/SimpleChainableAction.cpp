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
  sub_B2C2F8(
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
  System_Action_Action__array *v5; // x20
  unsigned __int64 v6; // x24
  signed __int64 v7; // x25
  System_Int32_array ***m_Items; // x26
  BattleServantConfConponent_o *v9; // x21
  System_Int32_array **v10; // x23
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v25; // x0
  __int64 v26; // x0

  v2 = sysActions;
  if ( (byte_4186D4C & 1) == 0 )
  {
    sub_B2C35C(&SimpleChainableAction___TypeInfo, method);
    sysActions = (System_Action_Action__array *)sub_B2C35C(&SimpleChainableAction_TypeInfo, v3);
    byte_4186D4C = 1;
  }
  if ( !v2 )
LABEL_14:
    sub_B2C434(sysActions, method);
  v4 = *(_QWORD *)&v2->max_length;
  sysActions = (System_Action_Action__array *)sub_B2C374(SimpleChainableAction___TypeInfo, (unsigned int)v4);
  v5 = sysActions;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    v7 = (int)v4;
    m_Items = (System_Int32_array ***)v2->m_Items;
    v9 = (BattleServantConfConponent_o *)sysActions->m_Items;
    do
    {
      if ( v6 >= v2->max_length )
        goto LABEL_13;
      v10 = *m_Items;
      v11 = sub_B2C42C(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v11, 0LL);
      *(_QWORD *)(v11 + 40) = v10;
      sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 40), v10, v12, v13, v14, v15, v16, v17);
      if ( !v5 )
        goto LABEL_14;
      if ( v11 )
      {
        sysActions = (System_Action_Action__array *)sub_B2C41C(v11, v5->obj.klass->_1.element_class);
        if ( !sysActions )
        {
          v26 = sub_B2C454();
          sub_B2C400(v26, 0LL);
        }
      }
      if ( v6 >= v5->max_length )
      {
LABEL_13:
        v25 = sub_B2C460(sysActions);
        sub_B2C400(v25, 0LL);
      }
      v9->klass = (BattleServantConfConponent_c *)v11;
      sub_B2C2F8(v9, (System_Int32_array **)v11, v18, v19, v20, v21, v22, v23);
      ++v6;
      ++m_Items;
      v9 = (BattleServantConfConponent_o *)((char *)v9 + 8);
    }
    while ( (__int64)v6 < v7 );
  }
  return (SimpleChainableAction_array *)v5;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v5; // x0
  __int64 v6; // x1
  BlankEarth_QAARotateEarthResponse_o *v7; // x21

  if ( (byte_4186D4B & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_Action___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    byte_4186D4B = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  if ( !this )
    sub_B2C434(v5, v6);
  v7 = (BlankEarth_QAARotateEarthResponse_o *)v5;
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    sysChainAction,
    v7,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_Action___);
}