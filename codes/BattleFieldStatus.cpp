void __fastcall BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  if ( (byte_434EAF6 & 1) == 0 )
  {
    sub_B70694(&double___TypeInfo);
    byte_434EAF6 = 1;
  }
  this->fields.wkZeroParam = (struct System_Double_array *)sub_B706AC(double___TypeInfo, 1LL);
  sub_B70630(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct BattleFieldStatus___c_StaticFields *v8; // x0

  if ( (byte_434EAF4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_B70694(&Method_System_Predicate_BattleServantData___ctor__);
    sub_B70694(&System_Predicate_BattleServantData__TypeInfo);
    sub_B70694(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__);
    sub_B70694(&BattleFieldStatus___c_TypeInfo);
    byte_434EAF4 = 1;
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
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__3_0,
      v7,
      Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleServantData___ctor__);
    v8 = BattleFieldStatus___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Predicate_BattleServantData__o *)_9__3_0;
    sub_B70630(&v8->__9__3_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__3_0,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B7076C(All, datalist);
  }
  return *((_DWORD *)All + 6);
}


int32_t __fastcall BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct BattleFieldStatus___c_StaticFields *v8; // x0

  if ( (byte_434EAF5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_B70694(&Method_System_Predicate_BattleServantData___ctor__);
    sub_B70694(&System_Predicate_BattleServantData__TypeInfo);
    sub_B70694(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__);
    sub_B70694(&BattleFieldStatus___c_TypeInfo);
    byte_434EAF5 = 1;
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
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v7,
      Method_BattleFieldStatus___c__CommonRestCount_b__4_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleServantData___ctor__);
    v8 = BattleFieldStatus___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Predicate_BattleServantData__o *)_9__4_0;
    sub_B70630(&v8->__9__4_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__4_0,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B7076C(All, datalist);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_435139D & 1) == 0 )
  {
    sub_B70694(&BattleFieldStatus___c_TypeInfo);
    byte_435139D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleFieldStatus___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, 0LL);
  return BattleServantData__isAlive(p, 0, 0LL) || BattleServantData__isGuts(p, 0LL);
}