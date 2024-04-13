void __fastcall BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5933 & 1) == 0 )
  {
    sub_B5D5C4(&double___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5933 = 1;
  }
  this->fields.wkZeroParam = (struct System_Double_array *)sub_B5D5DC(double___TypeInfo, 1LL);
  sub_B5D560(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct BattleFieldStatus___c_StaticFields *v24; // x0

  if ( (byte_42E5931 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleServantData__FindAll__,
      (_DWORD)datalist,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_BattleServantData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_BattleServantData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, v14, v15, v16);
    sub_B5D5C4(&BattleFieldStatus___c_TypeInfo, v17, v18, v19);
    byte_42E5931 = 1;
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
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__3_0,
      v23,
      Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleServantData___ctor__);
    v24 = BattleFieldStatus___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Predicate_BattleServantData__o *)_9__3_0;
    sub_B5D560(&v24->__9__3_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__3_0,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B5D69C(All, datalist);
  }
  return *((_DWORD *)All + 6);
}


int32_t __fastcall BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x20
  Il2CppObject *v23; // x21
  struct BattleFieldStatus___c_StaticFields *v24; // x0

  if ( (byte_42E5932 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleServantData__FindAll__,
      (_DWORD)datalist,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_BattleServantData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_BattleServantData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, v14, v15, v16);
    sub_B5D5C4(&BattleFieldStatus___c_TypeInfo, v17, v18, v19);
    byte_42E5932 = 1;
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
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v23,
      Method_BattleFieldStatus___c__CommonRestCount_b__4_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleServantData___ctor__);
    v24 = BattleFieldStatus___c_TypeInfo->static_fields;
    v24->__9__4_0 = (struct System_Predicate_BattleServantData__o *)_9__4_0;
    sub_B5D560(&v24->__9__4_0);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)datalist,
                (System_Predicate_T__o *)_9__4_0,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_B5D69C(All, datalist);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C32 & 1) == 0 )
  {
    sub_B5D5C4(&BattleFieldStatus___c_TypeInfo, v1, v2, v3);
    byte_42E7C32 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleFieldStatus___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return BattleServantData__isAlive(p, 0, 0LL) || BattleServantData__isGuts(p, 0LL);
}