void QuestUseItemPickupMaster___ctor(QuestUseItemPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7BBA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
    byte_4CC7BBA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    538,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_QuestUseItemPickupMaster__QuestUseItemPickupEntity__int___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v13; // x0
  System_Func_TSource__bool__o *v14; // x22
  intptr_t *v15; // x8
  Il2CppObject *v16; // x0

  if ( (byte_4CC7BB9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
    sub_1C713B0(&System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
    sub_1C713B0(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__);
    sub_1C713B0(&Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__);
    sub_1C713B0(&QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CC7BB9 = 1;
  }
  v9 = sub_1C715FC(QuestUseItemPickupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
  *(_DWORD *)(v9 + 16) = groupId;
  *(_DWORD *)(v9 + 20) = itemId;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_QuestUseItemPickupEntity__bool__TypeInfo);
  v14 = (System_Func_TSource__bool__o *)v13;
  if ( groupId )
    v15 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__0__;
  else
    v15 = &Method_QuestUseItemPickupMaster___c__DisplayClass0_0__TryGetPriority_b__1__;
  System_Func_object__bool____ctor(v13, (Il2CppObject *)v9, *v15, 0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          v14,
          (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemPickupEntity___);
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
    sub_1C71608(this, 0);
  return e->fields.groupId == this->fields.groupId && QuestUseItemPickupEntity__IsOpen(e, 0, method);
}


bool QuestUseItemPickupMaster___c__DisplayClass0_0___TryGetPriority_b__1(
        QuestUseItemPickupMaster___c__DisplayClass0_0_o *this,
        QuestUseItemPickupEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.itemId == this->fields.itemId && QuestUseItemPickupEntity__IsOpen(e, 0, method);
}