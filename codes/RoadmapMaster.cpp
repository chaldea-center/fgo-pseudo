void RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59710C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
    byte_59710C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    519,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59710C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
    byte_59710C1 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3F157EC *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
}


RoadmapEntity_o *RoadmapMaster__GetInProgressRoadmapEntity(RoadmapMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  System_Predicate_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t LastIndex; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  System_Func_object__bool__o *v12; // x22
  RoadmapEntity_o *result; // x0

  if ( (byte_59710BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Last_RoadmapEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_2213A60(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
    sub_2213A60(&System_Predicate_RoadmapEntity__TypeInfo);
    sub_2213A60(&Method_RoadmapMaster_IsDispBoard__);
    sub_2213A60(&Method_RoadmapMaster_IsWarRewardBoard__);
    sub_2213A60(&Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__);
    byte_59710BF = 1;
  }
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(this, method);
  v4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_RoadmapMaster_IsWarRewardBoard__, 0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  v6 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                      v5,
                                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v7 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RoadmapEntity__TypeInfo);
  System_Predicate_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__,
    0);
  if ( !v6 )
    sub_2213CDC(v8, v9);
  LastIndex = System_Collections_Generic_List_object___FindLastIndex(
                v6,
                (System_Predicate_T__o *)v7,
                (const MethodInfo_4484598 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
  v11 = System_Linq_Enumerable__Skip_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          LastIndex + 1,
          (const MethodInfo_3899B4C *)Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
  v12 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v12, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                v11,
                                (System_Func_TSource__bool__o *)v12,
                                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
    return (RoadmapEntity_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                (const MethodInfo_3883CD8 *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  return result;
}


System_Collections_Generic_List_RoadmapEntity__o *RoadmapMaster__GetSortedAllEntityList(
        RoadmapMaster_o *this,
        const MethodInfo *method)
{
  RoadmapMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct RoadmapMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct RoadmapMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  RoadmapMaster___c_c *v17; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x19
  struct RoadmapMaster___c_StaticFields *v19; // x9
  System_Func_object__int__o *_9__3_1; // x20
  Il2CppObject *v21; // x21
  struct RoadmapMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_59710BD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_2213A60(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_2213A60(&Method_RoadmapMaster___c__GetSortedAllEntityList_b__3_0__);
    sub_2213A60(&Method_RoadmapMaster___c__GetSortedAllEntityList_b__3_1__);
    sub_2213A60(&RoadmapMaster___c_TypeInfo);
    byte_59710BD = 1;
  }
  v3 = RoadmapMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&RoadmapMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo, method);
    v3 = RoadmapMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v7, Method_RoadmapMaster___c__GetSortedAllEntityList_b__3_0__, 0);
    v8 = RoadmapMaster___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__3_0, (int32_t)_9__3_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v17 = RoadmapMaster___c_TypeInfo;
  v18 = v15;
  if ( !*(&RoadmapMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo, v16);
    v17 = RoadmapMaster___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__3_1 = (System_Func_object__int__o *)v19->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = RoadmapMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_1, v21, Method_RoadmapMaster___c__GetSortedAllEntityList_b__3_1__, 0);
    v22 = RoadmapMaster___c_TypeInfo->static_fields;
    v22->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__3_1, (int32_t)_9__3_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v29,
                                                               (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


System_Collections_Generic_List_RoadmapEntity__o *RoadmapMaster__GetSortedDispBoardEntityList(
        RoadmapMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_RoadmapEntity__o *SortedAllEntityList; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_59710BE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_2213A60(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_2213A60(&Method_RoadmapMaster_IsDispBoard__);
    byte_59710BE = 1;
  }
  SortedAllEntityList = RoadmapMaster__GetSortedAllEntityList(this, method);
  v4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)SortedAllEntityList,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v5,
                                                               (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


bool RoadmapMaster__IsDispAchieved(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_59710BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59710BC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, roadmap);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_2213CDC(Master_object, v5);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayAchievedCommonReleaseId,
           0,
           0,
           0);
}


bool RoadmapMaster__IsDispBoard(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_59710BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59710BB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, roadmap);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_2213CDC(Master_object, v5);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayBoardCommonReleaseId,
           0,
           0,
           0);
}


bool RoadmapMaster__IsWarRewardBoard(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  if ( !roadmap )
    sub_2213CDC(this, 0);
  return roadmap->fields.type == 1;
}


// local variable allocation has failed, the output may be wrong!
bool RoadmapMaster__TryGetEntity(
        RoadmapMaster_o *this,
        RoadmapEntity_o **entity,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59710C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
    byte_59710C2 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
}


bool RoadmapMaster___GetInProgressRoadmapEntity_b__5_0(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  _BOOL8 IsDispBoard; // x0
  const MethodInfo *v5; // x2

  IsDispBoard = RoadmapMaster__IsDispBoard(this, roadmap, method);
  return IsDispBoard && RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)IsDispBoard, roadmap, v5);
}


void RoadmapMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59710C3 & 1) == 0 )
  {
    sub_2213A60(&RoadmapMaster___c_TypeInfo);
    byte_59710C3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RoadmapMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RoadmapMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RoadmapMaster___c___ctor(RoadmapMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RoadmapMaster___c___GetSortedAllEntityList_b__3_0(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_2213CDC(this, 0);
  return roadmap->fields.tabGroup;
}


int32_t RoadmapMaster___c___GetSortedAllEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_2213CDC(this, 0);
  return roadmap->fields.groupIndex;
}