void GalleryMaster___ctor(GalleryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C275CE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GalleryMaster__GalleryEntity__int___ctor__);
    byte_4C275CE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    542,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_GalleryMaster__GalleryEntity__int___ctor__);
}


System_Collections_Generic_List_GalleryEntity__o *GalleryMaster__GetEnableGalleryEntitiesByWarId(
        GalleryMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C275CC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_GalleryEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_GalleryEntity___);
    sub_1C2D490(&System_Func_GalleryEntity__bool__TypeInfo);
    sub_1C2D490(&Method_GalleryMaster___c__DisplayClass0_0__GetEnableGalleryEntitiesByWarId_b__0__);
    sub_1C2D490(&GalleryMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C275CC = 1;
  }
  v5 = sub_1C2D6DC(GalleryMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GalleryEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GalleryMaster___c__DisplayClass0_0__GetEnableGalleryEntitiesByWarId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_GalleryEntity___);
  return (System_Collections_Generic_List_GalleryEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v10,
                                                               (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GalleryEntity___);
}


bool GalleryMaster__HasEnableGalleryWar(GalleryMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C275CD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_GalleryEntity____78033824);
    sub_1C2D490(&System_Func_GalleryEntity__bool__TypeInfo);
    sub_1C2D490(&Method_GalleryMaster___c__DisplayClass1_0__HasEnableGalleryWar_b__0__);
    sub_1C2D490(&GalleryMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C275CD = 1;
  }
  v5 = sub_1C2D6DC(GalleryMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GalleryEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GalleryMaster___c__DisplayClass1_0__HasEnableGalleryWar_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51233692(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_30DC39C *)Method_System_Linq_Enumerable_Any_GalleryEntity____78033824);
}


void GalleryMaster___c__DisplayClass0_0___ctor(GalleryMaster___c__DisplayClass0_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GalleryMaster___c__DisplayClass0_0___GetEnableGalleryEntitiesByWarId_b__0(
        GalleryMaster___c__DisplayClass0_0_o *this,
        GalleryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.warId == this->fields.warId
      && GalleryEntity__IsEnableGallery(entity, (const MethodInfo *)entity);
}


void GalleryMaster___c__DisplayClass1_0___ctor(GalleryMaster___c__DisplayClass1_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GalleryMaster___c__DisplayClass1_0___HasEnableGalleryWar_b__0(
        GalleryMaster___c__DisplayClass1_0_o *this,
        GalleryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.warId == this->fields.warId
      && GalleryEntity__IsEnableGallery(entity, (const MethodInfo *)entity);
}