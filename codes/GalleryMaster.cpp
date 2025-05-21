void __fastcall GalleryMaster___ctor(GalleryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44D5A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_GalleryMaster__GalleryEntity__int___ctor__, method);
    byte_4B44D5A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    542,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_GalleryMaster__GalleryEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GalleryEntity__o *__fastcall GalleryMaster__GetEnableGalleryEntitiesByWarId(
        GalleryMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B44D58 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_GalleryEntity___, *(_QWORD *)&warId);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_GalleryEntity___, v5);
    sub_1BDB878(&System_Func_GalleryEntity__bool__TypeInfo, v6);
    sub_1BDB878(&Method_GalleryMaster___c__DisplayClass0_0__GetEnableGalleryEntitiesByWarId_b__0__, v7);
    sub_1BDB878(&GalleryMaster___c__DisplayClass0_0_TypeInfo, v8);
    byte_4B44D58 = 1;
  }
  v9 = sub_1BDBAC4(GalleryMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_DWORD *)(v9 + 16) = warId;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GalleryEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_GalleryMaster___c__DisplayClass0_0__GetEnableGalleryEntitiesByWarId_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_GalleryEntity___);
  return (System_Collections_Generic_List_GalleryEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v14,
                                                               (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GalleryMaster__HasEnableGalleryWar(GalleryMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B44D59 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_GalleryEntity____77113392, *(_QWORD *)&warId);
    sub_1BDB878(&System_Func_GalleryEntity__bool__TypeInfo, v5);
    sub_1BDB878(&Method_GalleryMaster___c__DisplayClass1_0__HasEnableGalleryWar_b__0__, v6);
    sub_1BDB878(&GalleryMaster___c__DisplayClass1_0_TypeInfo, v7);
    byte_4B44D59 = 1;
  }
  v8 = sub_1BDBAC4(GalleryMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BDBAD4(v9, v10);
  *(_DWORD *)(v8 + 16) = warId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GalleryEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_GalleryMaster___c__DisplayClass1_0__HasEnableGalleryWar_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__50599108(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_30414C4 *)Method_System_Linq_Enumerable_Any_GalleryEntity____77113392);
}


void __fastcall GalleryMaster___c__DisplayClass0_0___ctor(
        GalleryMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GalleryMaster___c__DisplayClass0_0___GetEnableGalleryEntitiesByWarId_b__0(
        GalleryMaster___c__DisplayClass0_0_o *this,
        GalleryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BDBAD4(this, 0LL);
  return entity->fields.warId == this->fields.warId
      && GalleryEntity__IsEnableGallery(entity, (const MethodInfo *)entity);
}


void __fastcall GalleryMaster___c__DisplayClass1_0___ctor(
        GalleryMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GalleryMaster___c__DisplayClass1_0___HasEnableGalleryWar_b__0(
        GalleryMaster___c__DisplayClass1_0_o *this,
        GalleryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BDBAD4(this, 0LL);
  return entity->fields.warId == this->fields.warId
      && GalleryEntity__IsEnableGallery(entity, (const MethodInfo *)entity);
}