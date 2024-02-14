void __fastcall BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  struct System_Double_array *v3; // x0

  if ( (byte_42117E3 & 1) == 0 )
  {
    sub_B0D8A4(&double___TypeInfo, method);
    byte_42117E3 = 1;
  }
  v3 = (struct System_Double_array *)sub_B0D8BC(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v3;
  sub_B0D840(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__3_0; // x20
  Il2CppObject *v12; // x21
  struct BattleFieldStatus___c_StaticFields *v13; // x0

  if ( (byte_42117E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v4);
    sub_B0D8A4(&Method_System_Predicate_BattleServantData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleServantData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, v7);
    sub_B0D8A4(&BattleFieldStatus___c_TypeInfo, v8);
    byte_42117E1 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( (BYTE3(BattleFieldStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    All = BattleFieldStatus___c_TypeInfo;
  }
  static_fields = (struct BattleFieldStatus___c_StaticFields *)*((_QWORD *)All + 23);
  _9__3_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleServantData__TypeInfo,
                                                                         datalist,
                                                                         method);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__3_0,
      v12,
      Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleServantData___ctor__);
    v13 = BattleFieldStatus___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Predicate_BattleServantData__o *)_9__3_0;
    sub_B0D840(&v13->__9__3_0, _9__3_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__3_0,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return *((_DWORD *)All + 6);
}


int32_t __fastcall BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x20
  Il2CppObject *v12; // x21
  struct BattleFieldStatus___c_StaticFields *v13; // x0

  if ( (byte_42117E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v4);
    sub_B0D8A4(&Method_System_Predicate_BattleServantData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleServantData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, v7);
    sub_B0D8A4(&BattleFieldStatus___c_TypeInfo, v8);
    byte_42117E2 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( (BYTE3(BattleFieldStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    All = BattleFieldStatus___c_TypeInfo;
  }
  static_fields = (struct BattleFieldStatus___c_StaticFields *)*((_QWORD *)All + 23);
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleServantData__TypeInfo,
                                                                         datalist,
                                                                         method);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v12,
      Method_BattleFieldStatus___c__CommonRestCount_b__4_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleServantData___ctor__);
    v13 = BattleFieldStatus___c_TypeInfo->static_fields;
    v13->__9__4_0 = (struct System_Predicate_BattleServantData__o *)_9__4_0;
    sub_B0D840(&v13->__9__4_0, _9__4_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__4_0,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return *((_DWORD *)All + 6);
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213907 & 1) == 0 )
  {
    sub_B0D8A4(&BattleFieldStatus___c_TypeInfo, v1);
    byte_4213907 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleFieldStatus___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return BattleServantData__isAlive(p, 0, 0LL) || BattleServantData__isGuts(p, 0LL);
}