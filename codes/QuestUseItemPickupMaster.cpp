void __fastcall QuestUseItemPickupMaster___ctor(QuestUseItemPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B451E7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__, method);
    byte_4B451E7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    538,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestUseItemPickupMaster__TryGetPriority(
        QuestUseItemPickupMaster_o *this,
        int32_t itemId,
        int32_t groupId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v17; // x0
  System_Func_TSource__bool__o *v18; // x22
  __int64 *v19; // x8
  Il2CppObject *v20; // x0

  if ( (byte_4B451E6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___, *(_QWORD *)&itemId);
    sub_1BDB878(&System_Func_QuestUseItemPickupEntity__bool__TypeInfo, v9);
    sub_1BDB878(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__, v10);
    sub_1BDB878(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__, v11);
    sub_1BDB878(&QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo, v12);
    byte_4B451E6 = 1;
  }
  v13 = sub_1BDBAC4(QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BDBAD4(v14, v15);
  *(_DWORD *)(v13 + 16) = groupId;
  *(_DWORD *)(v13 + 20) = itemId;
  list = this->fields.list;
  v17 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
  v18 = (System_Func_TSource__bool__o *)v17;
  if ( groupId )
    v19 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__;
  else
    v19 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__;
  System_Func_object__bool____ctor(v17, (Il2CppObject *)v13, *v19, 0LL);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          v18,
          (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
  if ( v20 )
    return (int32_t)v20[3].klass;
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
    sub_1BDBAD4(this, 0LL);
  return e->fields.groupId == this->fields.groupId && QuestUseItemPickupEntity__IsOpen(e, 0LL, method);
}


bool __fastcall QuestUseItemPickupMaster___c__DisplayClass0_0___TryGetPriority_b__1(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        QuestUseItemPickupEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BDBAD4(this, 0LL);
  return e->fields.itemId == this->fields.itemId && QuestUseItemPickupEntity__IsOpen(e, 0LL, method);
}