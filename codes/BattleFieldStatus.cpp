void BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  struct System_Double_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C45AC7 & 1) == 0 )
  {
    sub_1C37058(&double___TypeInfo);
    byte_4C45AC7 = 1;
  }
  v3 = (struct System_Double_array *)sub_1C37100(double___TypeInfo, 1);
  this->fields.wkZeroParam = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  void *All; // x0
  System_Predicate_object__o *v5; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45AC5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C37058(&System_Predicate_BattleServantData__TypeInfo);
    sub_1C37058(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__);
    sub_1C37058(&BattleFieldStatus___c_TypeInfo);
    byte_4C45AC5 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    All = BattleFieldStatus___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleFieldStatus___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)All + 23);
    v5 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, 0);
    static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Predicate_BattleServantData__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v5, v8, v9);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)v5,
                (const MethodInfo_37A3734 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0 )
  {
    sub_1C372B4(All);
  }
  return *((_DWORD *)All + 6);
}


int32_t BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  void *All; // x0
  System_Predicate_object__o *v5; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45AC6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C37058(&System_Predicate_BattleServantData__TypeInfo);
    sub_1C37058(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__);
    sub_1C37058(&BattleFieldStatus___c_TypeInfo);
    byte_4C45AC6 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    All = BattleFieldStatus___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 16LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleFieldStatus___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)All + 23);
    v5 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, 0);
    static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleServantData__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v5, v8, v9);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)v5,
                (const MethodInfo_37A3734 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0 )
  {
    sub_1C372B4(All);
  }
  return *((_DWORD *)All + 6);
}


System_Double_array *BattleFieldStatus__getAiParam(
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


bool BattleFieldStatus__isAiTarget(
        BattleFieldStatus_o *this,
        ConditionsInformation_CheckInfo_o *info,
        System_Int64_array *indiv,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  return 1;
}


void BattleFieldStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45AC8 & 1) == 0 )
  {
    sub_1C37058(&BattleFieldStatus___c_TypeInfo);
    byte_4C45AC8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleFieldStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFieldStatus___c_TypeInfo->static_fields->__9 = (struct BattleFieldStatus___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleFieldStatus___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleFieldStatus___c___ctor(BattleFieldStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldStatus___c___CommonAliveCount_b__3_0(
        BattleFieldStatus___c_o *this,
        BattleServantData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_1C372B4(this);
  if ( !p->fields.isEntry )
    return 0;
  if ( BattleServantData__isAlive(p, 0, 0) )
    return 1;
  return BattleServantData__isGuts(p, 0);
}


bool BattleFieldStatus___c___CommonRestCount_b__4_0(
        BattleFieldStatus___c_o *this,
        BattleServantData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_1C372B4(this);
  return BattleServantData__isAlive(p, 0, 0) || BattleServantData__isGuts(p, 0);
}