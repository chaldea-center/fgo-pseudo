void __fastcall BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  struct System_Double_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B39834 & 1) == 0 )
  {
    sub_1BD3458(&double___TypeInfo, method);
    byte_4B39834 = 1;
  }
  v3 = (struct System_Double_array *)sub_1BD3500(double___TypeInfo, 1LL);
  this->fields.wkZeroParam = v3;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  void *All; // x0
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x21
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B39832 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v4);
    sub_1BD3458(&System_Predicate_BattleServantData__TypeInfo, v5);
    sub_1BD3458(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, v6);
    sub_1BD3458(&BattleFieldStatus___c_TypeInfo, v7);
    byte_4B39832 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    All = BattleFieldStatus___c_TypeInfo;
  }
  v9 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleFieldStatus___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)All + 23);
    v9 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v9, v10, Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, 0LL);
    static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Predicate_BattleServantData__o *)v9;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_35C14A0 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_1BD36B4(All, datalist);
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
  void *All; // x0
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x21
  struct BattleFieldStatus___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B39833 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, datalist);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v4);
    sub_1BD3458(&System_Predicate_BattleServantData__TypeInfo, v5);
    sub_1BD3458(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, v6);
    sub_1BD3458(&BattleFieldStatus___c_TypeInfo, v7);
    byte_4B39833 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !BattleFieldStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo);
    All = BattleFieldStatus___c_TypeInfo;
  }
  v9 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 16LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleFieldStatus___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)All + 23);
    v9 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v9, v10, Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, 0LL);
    static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleServantData__o *)v9;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_35C14A0 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0LL )
  {
    sub_1BD36B4(All, datalist);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B39835 & 1) == 0 )
  {
    sub_1BD3458(&BattleFieldStatus___c_TypeInfo, v1);
    byte_4B39835 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(BattleFieldStatus___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleFieldStatus___c_TypeInfo->static_fields->__9 = (struct BattleFieldStatus___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)BattleFieldStatus___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
  return BattleServantData__isAlive(p, 0, 0LL) || BattleServantData__isGuts(p, 0LL);
}