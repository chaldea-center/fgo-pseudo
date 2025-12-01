void GrandGraphDetailMaster___ctor(GrandGraphDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7825 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string___ctor__);
    byte_4CC7825 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    550,
    (const MethodInfo_340B614 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string___ctor__);
}


GrandGraphDetailEntity_array *GrandGraphDetailMaster__GetEntitiesByBaseClassId(
        GrandGraphDetailMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4CC7821 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GrandGraphDetailEntity__ToArray__);
    sub_1C713B0(&Method_ObservableCollectionExtensions_FindAll_GrandGraphDetailEntity___);
    sub_1C713B0(&System_Predicate_GrandGraphDetailEntity__TypeInfo);
    sub_1C713B0(&Method_GrandGraphDetailMaster___c__DisplayClass0_0__GetEntitiesByBaseClassId_b__0__);
    sub_1C713B0(&GrandGraphDetailMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CC7821 = 1;
  }
  v5 = sub_1C715FC(GrandGraphDetailMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = baseClassId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v9 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_GrandGraphDetailEntity__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_GrandGraphDetailMaster___c__DisplayClass0_0__GetEntitiesByBaseClassId_b__0__,
          0),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v9,
                        (const MethodInfo_31D9008 *)Method_ObservableCollectionExtensions_FindAll_GrandGraphDetailEntity___)) == 0) )
  {
    sub_1C71608(All_object, v7);
  }
  return (GrandGraphDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)All_object,
                                           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_GrandGraphDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GrandGraphDetailEntity_o *GrandGraphDetailMaster__GetEntity(
        GrandGraphDetailMaster_o *this,
        int32_t grandGraphId,
        int32_t baseClassId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7826 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__GetEntity__);
    byte_4CC7826 = 1;
  }
  PK = (Il2CppObject *)GrandGraphDetailEntity__CreatePK(grandGraphId, baseClassId, *(const MethodInfo **)&baseClassId);
  return (GrandGraphDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_340D938 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__GetEntity__);
}


int32_t GrandGraphDetailMaster__GetGrandClassId(
        GrandGraphDetailMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4CC7822 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
    sub_1C713B0(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C713B0(&Method_GrandGraphDetailMaster___c__DisplayClass1_0__GetGrandClassId_b__0__);
    sub_1C713B0(&GrandGraphDetailMaster___c__DisplayClass1_0_TypeInfo);
    byte_4CC7822 = 1;
  }
  v5 = sub_1C715FC(GrandGraphDetailMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = baseClassId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandGraphDetailMaster___c__DisplayClass1_0__GetGrandClassId_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  if ( v10 )
    LODWORD(v10) = v10[1].monitor;
  return (int)v10;
}


GrandGraphDetailEntity_array *GrandGraphDetailMaster__GetGrandGraphDetailEntitiesFromGrandClassId(
        GrandGraphDetailMaster_o *this,
        int32_t grandClassId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4CC7824 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_GrandGraphDetailEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
    sub_1C713B0(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C713B0(&Method_GrandGraphDetailMaster___c__DisplayClass3_0__GetGrandGraphDetailEntitiesFromGrandClassId_b__0__);
    sub_1C713B0(&GrandGraphDetailMaster___c__DisplayClass3_0_TypeInfo);
    byte_4CC7824 = 1;
  }
  v5 = sub_1C715FC(GrandGraphDetailMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = grandClassId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandGraphDetailMaster___c__DisplayClass3_0__GetGrandGraphDetailEntitiesFromGrandClassId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
  return (GrandGraphDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v10,
                                           (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_GrandGraphDetailEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool GrandGraphDetailMaster__TryGetEntity(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t grandGraphId,
        int32_t baseClassId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7827 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__TryGetEntity__);
    byte_4CC7827 = 1;
  }
  PK = (Il2CppObject *)GrandGraphDetailEntity__CreatePK(grandGraphId, baseClassId, *(const MethodInfo **)&grandGraphId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__TryGetEntity__);
}


bool GrandGraphDetailMaster__TryGetEntityByGrandGraphId(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC7823 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
    sub_1C713B0(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C713B0(&Method_GrandGraphDetailMaster___c__DisplayClass2_0__TryGetEntityByGrandGraphId_b__0__);
    sub_1C713B0(&GrandGraphDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_4CC7823 = 1;
  }
  v7 = sub_1C715FC(GrandGraphDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = grandGraphId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_GrandGraphDetailMaster___c__DisplayClass2_0__TryGetEntityByGrandGraphId_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  *entity = (GrandGraphDetailEntity_o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)entity, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  return *entity != 0;
}


void GrandGraphDetailMaster___c__DisplayClass0_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandGraphDetailMaster___c__DisplayClass0_0___GetEntitiesByBaseClassId_b__0(
        GrandGraphDetailMaster___c__DisplayClass0_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.baseClassId == this->fields.baseClassId;
}


void GrandGraphDetailMaster___c__DisplayClass1_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandGraphDetailMaster___c__DisplayClass1_0___GetGrandClassId_b__0(
        GrandGraphDetailMaster___c__DisplayClass1_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.baseClassId == this->fields.baseClassId;
}


void GrandGraphDetailMaster___c__DisplayClass2_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandGraphDetailMaster___c__DisplayClass2_0___TryGetEntityByGrandGraphId_b__0(
        GrandGraphDetailMaster___c__DisplayClass2_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.grandGraphId == this->fields.grandGraphId;
}


void GrandGraphDetailMaster___c__DisplayClass3_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandGraphDetailMaster___c__DisplayClass3_0___GetGrandGraphDetailEntitiesFromGrandClassId_b__0(
        GrandGraphDetailMaster___c__DisplayClass3_0_o *this,
        GrandGraphDetailEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C71608(this, 0);
  return v->fields.grandClassId == this->fields.grandClassId;
}