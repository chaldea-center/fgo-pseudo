void GrandGraphDetailMaster___ctor(GrandGraphDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37DEB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string___ctor__);
    byte_4C37DEB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    550,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string___ctor__);
}


GrandGraphDetailEntity_array *GrandGraphDetailMaster__GetEntitiesByBaseClassId(
        GrandGraphDetailMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C37DE7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandGraphDetailEntity__ToArray__);
    sub_1C32C20(&Method_ObservableCollectionExtensions_FindAll_GrandGraphDetailEntity___);
    sub_1C32C20(&System_Predicate_GrandGraphDetailEntity__TypeInfo);
    sub_1C32C20(&Method_GrandGraphDetailMaster___c__DisplayClass0_0__GetEntitiesByBaseClassId_b__0__);
    sub_1C32C20(&GrandGraphDetailMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C37DE7 = 1;
  }
  v5 = sub_1C32E6C(GrandGraphDetailMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = baseClassId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_GrandGraphDetailEntity__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_GrandGraphDetailMaster___c__DisplayClass0_0__GetEntitiesByBaseClassId_b__0__,
          0),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v8,
                        (const MethodInfo_316AAA8 *)Method_ObservableCollectionExtensions_FindAll_GrandGraphDetailEntity___)) == 0) )
  {
    sub_1C32E7C(All_object);
  }
  return (GrandGraphDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)All_object,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GrandGraphDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GrandGraphDetailEntity_o *GrandGraphDetailMaster__GetEntity(
        GrandGraphDetailMaster_o *this,
        int32_t grandGraphId,
        int32_t baseClassId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37DEC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__GetEntity__);
    byte_4C37DEC = 1;
  }
  PK = (Il2CppObject *)GrandGraphDetailEntity__CreatePK(grandGraphId, baseClassId, *(const MethodInfo **)&baseClassId);
  return (GrandGraphDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__GetEntity__);
}


int32_t GrandGraphDetailMaster__GetGrandClassId(
        GrandGraphDetailMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x20
  Il2CppObject *v9; // x0

  if ( (byte_4C37DE8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
    sub_1C32C20(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C32C20(&Method_GrandGraphDetailMaster___c__DisplayClass1_0__GetGrandClassId_b__0__);
    sub_1C32C20(&GrandGraphDetailMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C37DE8 = 1;
  }
  v5 = sub_1C32E6C(GrandGraphDetailMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = baseClassId;
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandGraphDetailMaster___c__DisplayClass1_0__GetGrandClassId_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  if ( v9 )
    LODWORD(v9) = v9[1].monitor;
  return (int)v9;
}


GrandGraphDetailEntity_array *GrandGraphDetailMaster__GetGrandGraphDetailEntitiesFromGrandClassId(
        GrandGraphDetailMaster_o *this,
        int32_t grandClassId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C37DEA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_GrandGraphDetailEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
    sub_1C32C20(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C32C20(&Method_GrandGraphDetailMaster___c__DisplayClass3_0__GetGrandGraphDetailEntitiesFromGrandClassId_b__0__);
    sub_1C32C20(&GrandGraphDetailMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C37DEA = 1;
  }
  v5 = sub_1C32E6C(GrandGraphDetailMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = grandClassId;
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandGraphDetailMaster___c__DisplayClass3_0__GetGrandGraphDetailEntitiesFromGrandClassId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
  return (GrandGraphDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v9,
                                           (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_GrandGraphDetailEntity___);
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

  if ( (byte_4C37DED & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__TryGetEntity__);
    byte_4C37DED = 1;
  }
  PK = (Il2CppObject *)GrandGraphDetailEntity__CreatePK(grandGraphId, baseClassId, *(const MethodInfo **)&grandGraphId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__TryGetEntity__);
}


bool GrandGraphDetailMaster__TryGetEntityByGrandGraphId(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v10; // x21
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C37DE9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
    sub_1C32C20(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C32C20(&Method_GrandGraphDetailMaster___c__DisplayClass2_0__TryGetEntityByGrandGraphId_b__0__);
    sub_1C32C20(&GrandGraphDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_4C37DE9 = 1;
  }
  v7 = sub_1C32E6C(GrandGraphDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = grandGraphId;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_GrandGraphDetailMaster___c__DisplayClass2_0__TryGetEntityByGrandGraphId_b__0__,
    0);
  v11 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  *entity = (GrandGraphDetailEntity_o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)entity, (int32_t)v11, v12, v13);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return v->fields.grandClassId == this->fields.grandClassId;
}