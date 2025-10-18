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

  if ( (byte_4C40E14 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    byte_4C40E14 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.beforeList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.afterList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterList, (int32_t)v6, v7, v8);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C40E16 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C37058(&SvtUseNpData_TypeInfo);
    byte_4C40E16 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C372A4(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9
    || (v9->fields.svtUseNpId = id,
        v9->fields.svtNpLv = lv,
        v9->fields.svtId = svtId,
        (afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList) == 0)
    || (items = afterList->fields._items,
        v14 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++afterList->fields._version,
        !items) )
  {
    sub_1C372B4(afterList);
  }
  size = afterList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterList,
      (Il2CppObject *)v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    afterList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v9, v11, v12);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C40E15 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C37058(&SvtUseNpData_TypeInfo);
    byte_4C40E15 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C372A4(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9
    || (v9->fields.svtUseNpId = id,
        v9->fields.svtNpLv = lv,
        v9->fields.svtId = svtId,
        (beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList) == 0)
    || (items = beforeList->fields._items,
        v14 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++beforeList->fields._version,
        !items) )
  {
    sub_1C372B4(beforeList);
  }
  size = beforeList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeList,
      (Il2CppObject *)v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    beforeList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v9, v11, v12);
  }
}


SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterList; // x0

  if ( (byte_4C40E18 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4C40E18 = 1;
  }
  afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList;
  if ( !afterList )
    sub_1C372B4(0);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             afterList,
                             index,
                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


int32_t Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v2; // x19
  struct System_Collections_Generic_List_SvtUseNpData__o *afterList; // x8

  v2 = this;
  if ( (byte_4C40E19 & 1) == 0 )
  {
    this = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    byte_4C40E19 = 1;
  }
  afterList = v2->fields.afterList;
  if ( !afterList )
    sub_1C372B4(this);
  return afterList->fields._size;
}


SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeList; // x0

  if ( (byte_4C40E17 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4C40E17 = 1;
  }
  beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList;
  if ( !beforeList )
    sub_1C372B4(0);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             beforeList,
                             index,
                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        ServantTreasureDeviceAddEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._tdAddEntity_k__BackingField = entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._tdAddEntity_k__BackingField, (int32_t)entity, (int32_t)method, v3);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._tdAddEntity_k__BackingField, (int32_t)value, (int32_t)method, v3);
}