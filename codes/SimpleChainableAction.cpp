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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  SimpleChainableAction_array *v11; // x20
  unsigned __int64 v12; // x24
  signed __int64 v13; // x25
  System_Action_Action__o **m_Items; // x26
  BattleServantConfConponent_o *v15; // x21
  System_Int32_array **v16; // x23
  __int64 v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F91E0 & 1) == 0 )
  {
    sub_B16FFC(&SimpleChainableAction___TypeInfo, method);
    sub_B16FFC(&SimpleChainableAction_TypeInfo, v4);
    byte_40F91E0 = 1;
  }
  if ( !sysActions )
LABEL_14:
    sub_B170D4();
  v5 = *(_QWORD *)&sysActions->max_length;
  v6 = sub_B17014(SimpleChainableAction___TypeInfo, (unsigned int)v5, v2);
  v11 = (SimpleChainableAction_array *)v6;
  if ( (int)v5 >= 1 )
  {
    v12 = 0LL;
    v13 = (int)v5;
    m_Items = sysActions->m_Items;
    v15 = (BattleServantConfConponent_o *)(v6 + 32);
    do
    {
      if ( v12 >= sysActions->max_length )
        goto LABEL_13;
      v16 = (System_Int32_array **)*m_Items;
      v17 = sub_B170CC(SimpleChainableAction_TypeInfo, v7, v8, v9, v10);
      ChainableActionBase___ctor((ChainableActionBase_o *)v17, 0LL);
      *(_QWORD *)(v17 + 40) = v16;
      sub_B16F98((BattleServantConfConponent_o *)(v17 + 40), v16, v18, v19, v20, v21, v22, v23);
      if ( !v11 )
        goto LABEL_14;
      if ( v17 )
      {
        v6 = sub_B170BC(v17, v11->obj.klass->_1.element_class);
        if ( !v6 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v12 >= v11->max_length )
      {
LABEL_13:
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      v15->klass = (BattleServantConfConponent_c *)v17;
      sub_B16F98(v15, (System_Int32_array **)v17, v8, v24, v25, v26, v27, v28);
      ++v12;
      ++m_Items;
      v15 = (BattleServantConfConponent_o *)((char *)v15 + 8);
    }
    while ( (__int64)v12 < v13 );
  }
  return v11;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v8; // x0
  BlankEarth_QAARotateEarthResponse_o *v9; // x21

  if ( (byte_40F91DF & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_Action___, method);
    sub_B16FFC(&System_Action_TypeInfo, v6);
    byte_40F91DF = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  if ( !this )
    sub_B170D4();
  v9 = (BlankEarth_QAARotateEarthResponse_o *)v8;
  System_Action___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    sysChainAction,
    v9,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_Action___);
}