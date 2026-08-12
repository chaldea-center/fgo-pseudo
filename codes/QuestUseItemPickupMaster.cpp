void QuestUseItemPickupMaster___ctor(QuestUseItemPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971078 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
    byte_5971078 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    540,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
}


int32_t QuestUseItemPickupMaster__TryGetPriority(
        QuestUseItemPickupMaster_o *this,
        int32_t itemId,
        int32_t groupId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_object__bool__o *v13; // x0
  System_Func_TSource__bool__o *v14; // x21
  intptr_t *v15; // x8
  Il2CppObject *v16; // x0

  if ( (byte_5971077 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
    sub_2213A60(&System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__);
    sub_2213A60(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__);
    sub_2213A60(&QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
    byte_5971077 = 1;
  }
  v9 = sub_2213CCC(QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  list = this->fields.list;
  *(_DWORD *)(v9 + 16) = groupId;
  *(_DWORD *)(v9 + 20) = itemId;
  v13 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
  v14 = (System_Func_TSource__bool__o *)v13;
  if ( groupId )
    v15 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__;
  else
    v15 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__;
  System_Func_object__bool____ctor(v13, (Il2CppObject *)v9, *v15, 0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          v14,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
  if ( v16 )
    return (int32_t)v16[3].klass;
  return defaultValue;
}


void QuestUseItemPickupMaster___c__DisplayClass0_0___ctor(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestUseItemPickupMaster___c__DisplayClass0_0___TryGetPriority_b__0(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        QuestUseItemPickupEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.groupId == this->fields.groupId && QuestUseItemPickupEntity__IsOpen(e, 0, method);
}


bool QuestUseItemPickupMaster___c__DisplayClass0_0___TryGetPriority_b__1(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        QuestUseItemPickupEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.itemId == this->fields.itemId && QuestUseItemPickupEntity__IsOpen(e, 0, method);
}