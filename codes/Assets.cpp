void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB4109 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    byte_4CB4109 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.beforeList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.afterList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.afterList, (int32_t)v6, v7, v8);
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t id,
        int32_t lv,
        int32_t svtId,
        const MethodInfo *method)
{
  SvtUseNpData_o *v9; // x19
  System_Collections_Generic_List_object__o *afterList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4CB410B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C6BA08(&SvtUseNpData_TypeInfo);
    byte_4CB410B = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C6BC54(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9
    || (v9->fields.svtUseNpId = id,
        v9->fields.svtNpLv = lv,
        v9->fields.svtId = svtId,
        (afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList) == 0)
    || (items = afterList->fields._items,
        v15 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++afterList->fields._version,
        !items) )
  {
    sub_1C6BC60(afterList, v11);
  }
  size = afterList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterList,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    afterList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
  }
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t id,
        int32_t lv,
        int32_t svtId,
        const MethodInfo *method)
{
  SvtUseNpData_o *v9; // x19
  System_Collections_Generic_List_object__o *beforeList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4CB410A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C6BA08(&SvtUseNpData_TypeInfo);
    byte_4CB410A = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C6BC54(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9
    || (v9->fields.svtUseNpId = id,
        v9->fields.svtNpLv = lv,
        v9->fields.svtId = svtId,
        (beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList) == 0)
    || (items = beforeList->fields._items,
        v15 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++beforeList->fields._version,
        !items) )
  {
    sub_1C6BC60(beforeList, v11);
  }
  size = beforeList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeList,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    beforeList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterList; // x0

  if ( (byte_4CB410D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4CB410D = 1;
  }
  afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList;
  if ( !afterList )
    sub_1C6BC60(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             afterList,
                             index,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


int32_t Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v2; // x19
  struct System_Collections_Generic_List_SvtUseNpData__o *afterList; // x8

  v2 = this;
  if ( (byte_4CB410E & 1) == 0 )
  {
    this = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    byte_4CB410E = 1;
  }
  afterList = v2->fields.afterList;
  if ( !afterList )
    sub_1C6BC60(this, method);
  return afterList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeList; // x0

  if ( (byte_4CB410C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4CB410C = 1;
  }
  beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList;
  if ( !beforeList )
    sub_1C6BC60(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             beforeList,
                             index,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        ServantTreasureDeviceAddEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._tdAddEntity_k__BackingField = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._tdAddEntity_k__BackingField, (int32_t)entity, (int32_t)method, v3);
}


ServantTreasureDeviceAddEntity_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__get_tdAddEntity(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  return this->fields._tdAddEntity_k__BackingField;
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__set_tdAddEntity(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        ServantTreasureDeviceAddEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._tdAddEntity_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._tdAddEntity_k__BackingField, (int32_t)value, (int32_t)method, v3);
}