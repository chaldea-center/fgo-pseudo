void BattleFieldStatus___ctor(BattleFieldStatus_o *this, const MethodInfo *method)
{
  struct System_Double_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5973534 & 1) == 0 )
  {
    sub_2213A60(&double___TypeInfo);
    byte_5973534 = 1;
  }
  v3 = (struct System_Double_array *)sub_2213B20(double___TypeInfo, 1);
  this->fields.wkZeroParam = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleFieldStatus__CommonAliveCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct BattleFieldStatus___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973532 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&System_Predicate_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__);
    sub_2213A60(&BattleFieldStatus___c_TypeInfo);
    byte_5973532 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !*(&BattleFieldStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo, datalist);
    All = BattleFieldStatus___c_TypeInfo;
  }
  static_fields = (struct BattleFieldStatus___c_StaticFields *)*((_QWORD *)All + 23);
  _9__3_0 = (System_Predicate_object__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)All + 57) )
    {
      j_il2cpp_runtime_class_init_0(All, datalist);
      static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(_9__3_0, v7, Method_BattleFieldStatus___c__CommonAliveCount_b__3_0__, 0);
    v8 = BattleFieldStatus___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Predicate_BattleServantData__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__3_0, (int32_t)_9__3_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)_9__3_0,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0 )
  {
    sub_2213CDC(All, datalist);
  }
  return *((_DWORD *)All + 6);
}


int32_t BattleFieldStatus__CommonRestCount(
        BattleFieldStatus_o *this,
        System_Collections_Generic_List_BattleServantData__o *datalist,
        const MethodInfo *method)
{
  void *All; // x0
  struct BattleFieldStatus___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct BattleFieldStatus___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973533 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&System_Predicate_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleFieldStatus___c__CommonRestCount_b__4_0__);
    sub_2213A60(&BattleFieldStatus___c_TypeInfo);
    byte_5973533 = 1;
  }
  All = BattleFieldStatus___c_TypeInfo;
  if ( !*(&BattleFieldStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldStatus___c_TypeInfo, datalist);
    All = BattleFieldStatus___c_TypeInfo;
  }
  static_fields = (struct BattleFieldStatus___c_StaticFields *)*((_QWORD *)All + 23);
  _9__4_0 = (System_Predicate_object__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)All + 57) )
    {
      j_il2cpp_runtime_class_init_0(All, datalist);
      static_fields = BattleFieldStatus___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(_9__4_0, v7, Method_BattleFieldStatus___c__CommonRestCount_b__4_0__, 0);
    v8 = BattleFieldStatus___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Predicate_BattleServantData__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__4_0, (int32_t)_9__4_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !datalist
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)datalist,
                (System_Predicate_T__o *)_9__4_0,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__)) == 0 )
  {
    sub_2213CDC(All, datalist);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973535 & 1) == 0 )
  {
    sub_2213A60(&BattleFieldStatus___c_TypeInfo);
    byte_5973535 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleFieldStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFieldStatus___c_TypeInfo->static_fields->__9 = (struct BattleFieldStatus___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleFieldStatus___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return BattleServantData__isAlive(p, 0, 0) || BattleServantData__isGuts(p, 0);
}