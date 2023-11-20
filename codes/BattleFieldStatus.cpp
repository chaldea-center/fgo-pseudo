void __fastcall BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Double_array *v4; // x0

  if ( (byte_40F730D & 1) == 0 )
  {
    sub_B16FFC(&double___TypeInfo, method);
    byte_40F730D = 1;
  }
  v4 = (struct System_Double_array *)sub_B17014(double___TypeInfo, 1LL, v2);
  this->fields.wkZeroParam = v4;
  sub_B16F98(&this->fields, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleFieldStatus___c_c *v11; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct BattleFieldStatus___c_StaticFields *v15; // x0
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40F730B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v6);
    sub_B16FFC(&Method_System_Predicate_BattleServantData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleServantData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, v9);
    sub_B16FFC(&BattleFieldStatus___c_TypeInfo, v10);
    byte_40F730B = 1;
  }
  v11 = BattleFieldStatus___c_TypeInfo;
  if ( (BYTE3(BattleFieldStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    v11 = BattleFieldStatus___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__3_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleServantData__TypeInfo,
                                                                         datalist,
                                                                         method,
                                                                         v3,
                                                                         v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__3_0,
      v14,
      Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleServantData___ctor__);
    v15 = BattleFieldStatus___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Predicate_BattleServantData__o *)_9__3_0;
    sub_B16F98(&v15->__9__3_0, _9__3_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__3_0,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return All->fields._size;
}


int32_t __fastcall BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleFieldStatus___c_c *v11; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct BattleFieldStatus___c_StaticFields *v15; // x0
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40F730C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v6);
    sub_B16FFC(&Method_System_Predicate_BattleServantData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleServantData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, v9);
    sub_B16FFC(&BattleFieldStatus___c_TypeInfo, v10);
    byte_40F730C = 1;
  }
  v11 = BattleFieldStatus___c_TypeInfo;
  if ( (BYTE3(BattleFieldStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    v11 = BattleFieldStatus___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleServantData__TypeInfo,
                                                                         datalist,
                                                                         method,
                                                                         v3,
                                                                         v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v14,
      Method_BattleFieldStatus___c__CommonRestCount_b__4_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleServantData___ctor__);
    v15 = BattleFieldStatus___c_TypeInfo->static_fields;
    v15->__9__4_0 = (struct System_Predicate_BattleServantData__o *)_9__4_0;
    sub_B16F98(&v15->__9__4_0, _9__4_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__4_0,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return All->fields._size;
}


System_Double_array *__fastcall BattleFieldStatus__getAiParam(
        BattleFieldStatus_o *this,
        BattleData_o *bData,
        int32_t param,
        int32_t turn,
        int32_t actCnt,
        System_Int64_array *checkparams,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  return this->fields.wkZeroParam;
}


bool __fastcall BattleFieldStatus__isAiTarget(
        BattleFieldStatus_o *this,
        ConditionsInformation_CheckInfo_o *info,
        System_Int64_array *indiv,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall BattleFieldStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0

  if ( (byte_40F8518 & 1) == 0 )
  {
    sub_B16FFC(&BattleFieldStatus___c_TypeInfo, v1);
    byte_40F8518 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleFieldStatus___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleFieldStatus___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleFieldStatus___c___ctor(BattleFieldStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldStatus___c___CommonAliveCount_b__3_0(
        BattleFieldStatus___c_o *this,
        BattleServantData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B170D4();
  if ( !p->fields.isEntry )
    return 0;
  if ( BattleServantData__isAlive(p, 0, 0LL) )
    return 1;
  return BattleServantData__isGuts(p, 0LL);
}


bool __fastcall BattleFieldStatus___c___CommonRestCount_b__4_0(
        BattleFieldStatus___c_o *this,
        BattleServantData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B170D4();
  return BattleServantData__isAlive(p, 0, 0LL) || BattleServantData__isGuts(p, 0LL);
}