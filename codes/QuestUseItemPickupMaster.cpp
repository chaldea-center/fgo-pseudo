void __fastcall QuestUseItemPickupMaster___ctor(QuestUseItemPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB6C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
    byte_4BDCB6C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    535,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
}


int32_t __fastcall QuestUseItemPickupMaster__TryGetPriority(
        QuestUseItemPickupMaster_o *this,
        int32_t itemId,
        int32_t groupId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v13; // x0
  System_Func_TSource__bool__o *v14; // x22
  __int64 *v15; // x8
  Il2CppObject *v16; // x0

  if ( (byte_4BDCB6B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
    sub_1C21E38(&System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
    sub_1C21E38(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__);
    sub_1C21E38(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__);
    sub_1C21E38(&QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
    byte_4BDCB6B = 1;
  }
  v9 = sub_1C22084(QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_DWORD *)(v9 + 16) = groupId;
  *(_DWORD *)(v9 + 20) = itemId;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
  v14 = (System_Func_TSource__bool__o *)v13;
  if ( groupId )
    v15 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__;
  else
    v15 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__;
  System_Func_object__bool____ctor(v13, (Il2CppObject *)v9, *v15, 0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          v14,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
  if ( v16 )
    return (int32_t)v16[3].klass;
  return defaultValue;
}


void __fastcall QuestUseItemPickupMaster___c__DisplayClass0_0___ctor(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestUseItemPickupMaster___c__DisplayClass0_0___TryGetPriority_b__0(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        QuestUseItemPickupEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.groupId == this->fields.groupId && QuestUseItemPickupEntity__IsOpen(e, 0LL, method);
}


bool __fastcall QuestUseItemPickupMaster___c__DisplayClass0_0___TryGetPriority_b__1(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        QuestUseItemPickupEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.itemId == this->fields.itemId && QuestUseItemPickupEntity__IsOpen(e, 0LL, method);
}