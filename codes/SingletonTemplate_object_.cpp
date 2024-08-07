void __fastcall SingletonTemplate_object____ctor(SingletonTemplate_CLASS__o *this, const MethodInfo_36EEE48 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SingletonTemplate_object___Delete(const MethodInfo_36EEE54 *method)
{
  SingletonTemplate_CLASS__c *klass; // x0
  __int64 _2_SingletonTemplate_CLASS; // x0
  SingletonTemplate_CLASS__c *v4; // x0
  __int64 v5; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (SingletonTemplate_CLASS__c *)sub_1BB68DC(klass);
  _2_SingletonTemplate_CLASS = (__int64)klass->rgctx_data->_2_SingletonTemplate_CLASS_;
  if ( (*(_BYTE *)(_2_SingletonTemplate_CLASS + 309) & 1) == 0 )
    _2_SingletonTemplate_CLASS = sub_1BB68DC(_2_SingletonTemplate_CLASS);
  if ( **(_QWORD **)(_2_SingletonTemplate_CLASS + 184) )
  {
    v4 = method->klass;
    if ( (BYTE5(v4->vtable._0_Equals.methodPtr) & 1) == 0 )
      v4 = (SingletonTemplate_CLASS__c *)sub_1BB68DC(v4);
    v5 = (__int64)v4->rgctx_data->_2_SingletonTemplate_CLASS_;
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1BB68DC(v5);
    **(_QWORD **)(v5 + 184) = 0LL;
  }
}


void __fastcall SingletonTemplate_object___Destroy(SingletonTemplate_CLASS__o *this, const MethodInfo_36EEE50 *method)
{
  ;
}


Il2CppObject *__fastcall SingletonTemplate_object___get_Instance(const MethodInfo_36EED50 *method)
{
  SingletonTemplate_CLASS__c *klass; // x0
  __int64 _2_SingletonTemplate_CLASS; // x0
  SingletonTemplate_CLASS__c *v4; // x0
  Il2CppObject *Instance_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  SingletonTemplate_CLASS__c *v8; // x8
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  SingletonTemplate_CLASS__c *v11; // x0
  __int64 v12; // x0
  SingletonTemplate_CLASS__c *v13; // x0
  __int64 v14; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (SingletonTemplate_CLASS__c *)sub_1BB68DC(klass);
  _2_SingletonTemplate_CLASS = (__int64)klass->rgctx_data->_2_SingletonTemplate_CLASS_;
  if ( (*(_BYTE *)(_2_SingletonTemplate_CLASS + 309) & 1) == 0 )
    _2_SingletonTemplate_CLASS = sub_1BB68DC(_2_SingletonTemplate_CLASS);
  if ( !**(_QWORD **)(_2_SingletonTemplate_CLASS + 184) )
  {
    v4 = method->klass;
    if ( (BYTE5(v4->vtable._0_Equals.methodPtr) & 1) == 0 )
      v4 = (SingletonTemplate_CLASS__c *)sub_1BB68DC(v4);
    Instance_object = System_Activator__CreateInstance_object_((const MethodInfo_2D944E0 *)v4->rgctx_data->_3_System_Activator_CreateInstance_CLASS_);
    v8 = method->klass;
    v9 = Instance_object;
    if ( (BYTE5(v8->vtable._0_Equals.methodPtr) & 1) == 0 )
      v8 = (SingletonTemplate_CLASS__c *)sub_1BB68DC(method->klass);
    v10 = (__int64)v8->rgctx_data->_2_SingletonTemplate_CLASS_;
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB68DC(v10);
    **(_QWORD **)(v10 + 184) = v9;
    v11 = method->klass;
    if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
      v11 = (SingletonTemplate_CLASS__c *)sub_1BB68DC(v11);
    v12 = (__int64)v11->rgctx_data->_2_SingletonTemplate_CLASS_;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BB68DC(v12);
    sub_1B649A4(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v9, v6, v7);
  }
  v13 = method->klass;
  if ( (BYTE5(v13->vtable._0_Equals.methodPtr) & 1) == 0 )
    v13 = (SingletonTemplate_CLASS__c *)sub_1BB68DC(v13);
  v14 = (__int64)v13->rgctx_data->_2_SingletonTemplate_CLASS_;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB68DC(v14);
  return **(Il2CppObject ***)(v14 + 184);
}