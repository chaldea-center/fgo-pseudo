void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEC4CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    byte_4CEC4CE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.beforeList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.afterList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.afterList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4CEC4D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C7BAE8(&SvtUseNpData_TypeInfo);
    byte_4CEC4D0 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C7BD34(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9
    || (v9->fields.svtUseNpId = id,
        v9->fields.svtNpLv = lv,
        v9->fields.svtId = svtId,
        (afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList) == 0)
    || (items = afterList->fields._items,
        v19 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++afterList->fields._version,
        !items) )
  {
    sub_1C7BD40(afterList, v11);
  }
  size = afterList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterList,
      (Il2CppObject *)v9,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    afterList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4CEC4CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C7BAE8(&SvtUseNpData_TypeInfo);
    byte_4CEC4CF = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C7BD34(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9
    || (v9->fields.svtUseNpId = id,
        v9->fields.svtNpLv = lv,
        v9->fields.svtId = svtId,
        (beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList) == 0)
    || (items = beforeList->fields._items,
        v19 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++beforeList->fields._version,
        !items) )
  {
    sub_1C7BD40(beforeList, v11);
  }
  size = beforeList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeList,
      (Il2CppObject *)v9,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    beforeList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterList; // x0

  if ( (byte_4CEC4D2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4CEC4D2 = 1;
  }
  afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList;
  if ( !afterList )
    sub_1C7BD40(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             afterList,
                             index,
                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


int32_t Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v2; // x19
  struct System_Collections_Generic_List_SvtUseNpData__o *afterList; // x8

  v2 = this;
  if ( (byte_4CEC4D3 & 1) == 0 )
  {
    this = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    byte_4CEC4D3 = 1;
  }
  afterList = v2->fields.afterList;
  if ( !afterList )
    sub_1C7BD40(this, method);
  return afterList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeList; // x0

  if ( (byte_4CEC4D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4CEC4D1 = 1;
  }
  beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList;
  if ( !beforeList )
    sub_1C7BD40(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             beforeList,
                             index,
                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        ServantTreasureDeviceAddEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._tdAddEntity_k__BackingField = entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._tdAddEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._tdAddEntity_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._tdAddEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}