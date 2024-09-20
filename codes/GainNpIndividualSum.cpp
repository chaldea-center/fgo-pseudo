void __fastcall GainNpIndividualSum___ctor(GainNpIndividualSum_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GainNpIndividualSum__GetSameIndiualitySum(
        BattleData_o *data,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *v10; // x19
  System_Int32_array *vals; // x20
  System_Collections_Generic_List_int__o *v12; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  int32_t v16; // w4
  System_Int32_array *TargetIds; // x0
  const MethodInfo_34E0A1C *v18; // x2
  BattleData_o *v19; // x1
  int v20; // w23
  int v21; // w21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v25; // x1
  BattleServantData_o *v26; // x22
  int v27; // w21
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF

  v10 = data;
  if ( (byte_4A5DD5B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5DD5B = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v12 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v12,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_29:
    sub_1B8880C(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v12 )
        goto LABEL_29;
      items = v12->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          targetId,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = targetId;
      }
      goto LABEL_17;
    case 1:
      v16 = 3;
      goto LABEL_14;
    case 2:
      v16 = 6;
LABEL_14:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v16, 0LL, 0LL);
      if ( !v12 )
        goto LABEL_29;
      v19 = data;
      v18 = (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v12 )
        goto LABEL_29;
      System_Collections_Generic_List_int___AddRange(
        v12,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v18 = (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__;
      v19 = (BattleData_o *)TargetIds;
      break;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 113, 0, 0LL);
      if ( v12 )
        goto LABEL_19;
      goto LABEL_29;
  }
  System_Collections_Generic_List_int___AddRange(v12, (System_Collections_Generic_IEnumerable_T__o *)v19, v18);
LABEL_17:
  LODWORD(data) = DataVals__GetParam(baseVals, 113, 0, 0LL);
LABEL_19:
  v20 = (int)data;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    v12,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v21 = 0;
  v30 = v29;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v22 )
      break;
    if ( !v10 )
      sub_1B8880C(v22, v23);
    ServantData = BattleData__getServantData(v10, v30.fields._current, 0LL);
    v26 = ServantData;
    if ( !ServantData )
      sub_1B8880C(0LL, v25);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v27 = BattleServantData__getSameIndiualityServantSum(v26, vals, 0LL) + v21;
      v21 = BattleServantData__getSameIndiualityBuffSum(v26, vals, v20 < 1, 0, 0, 0LL) + v27;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v21;
}