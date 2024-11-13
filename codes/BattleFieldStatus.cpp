void __fastcall BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Double_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1885A & 1) == 0 )
  {
    sub_1BCA7E0(&double___TypeInfo, method, v2);
    byte_4B1885A = 1;
  }
  v4 = (struct System_Double_array *)sub_1BCA888(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *All; // x0
  System_Predicate_object__o *v14; // x20
  Il2CppObject *v15; // x21
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18858 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v5, v6);
    sub_1BCA7E0(&System_Predicate_BattleServantData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, v9, v10);
    sub_1BCA7E0(&BattleFieldStatus___c_TypeInfo, v11, v12);
    byte_4B18858 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo, datalist);
    All = BattleFieldStatus___c_TypeInfo;
  }
  v14 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 8LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All, datalist);
      All = BattleFieldStatus___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)All + 23);
    v14 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleServantData__TypeInfo, datalist, method, v3);
    System_Predicate_object____ctor(v14, v15, Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, 0LL);
    static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Predicate_BattleServantData__o *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_1BCAA3C(All, datalist);
  }
  return *((_DWORD *)All + 6);
}


int32_t __fastcall BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *All; // x0
  System_Predicate_object__o *v14; // x20
  Il2CppObject *v15; // x21
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18859 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v5, v6);
    sub_1BCA7E0(&System_Predicate_BattleServantData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, v9, v10);
    sub_1BCA7E0(&BattleFieldStatus___c_TypeInfo, v11, v12);
    byte_4B18859 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo, datalist);
    All = BattleFieldStatus___c_TypeInfo;
  }
  v14 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 16LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All, datalist);
      All = BattleFieldStatus___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)All + 23);
    v14 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleServantData__TypeInfo, datalist, method, v3);
    System_Predicate_object____ctor(v14, v15, Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, 0LL);
    static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleServantData__o *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)v14,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_1BCAA3C(All, datalist);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1885B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFieldStatus___c_TypeInfo, v1, v2);
    byte_4B1885B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleFieldStatus___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleFieldStatus___c_TypeInfo->static_fields->__9 = (struct BattleFieldStatus___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleFieldStatus___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__isAlive(p, 0, 0LL) || BattleServantData__isGuts(p, 0LL);
}