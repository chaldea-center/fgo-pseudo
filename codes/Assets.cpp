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

  if ( (byte_4D2E805 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    byte_4D2E805 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.beforeList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.afterList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.afterList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  const MethodInfo *v12; // x4
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4D2E807 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C93AD4(&SvtUseNpData_TypeInfo);
    byte_4D2E807 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C93D20(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.svtUseNpId = id;
  v9->fields.svtNpLv = lv;
  v9->fields.svtId = svtId;
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetMaskData(
    this,
    &v9->fields.MaskFlag,
    &v9->fields.ClosedMessage,
    id,
    v12);
  afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList;
  if ( !afterList
    || (items = afterList->fields._items,
        v20 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++afterList->fields._version,
        !items) )
  {
LABEL_9:
    sub_1C93D2C(afterList, v11);
  }
  size = afterList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterList,
      (Il2CppObject *)v9,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    afterList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v9, v13, v14, v15, v16, v17, v18);
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
  const MethodInfo *v12; // x4
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4D2E806 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C93AD4(&SvtUseNpData_TypeInfo);
    byte_4D2E806 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_1C93D20(SvtUseNpData_TypeInfo);
  SvtUseNpData___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.svtUseNpId = id;
  v9->fields.svtNpLv = lv;
  v9->fields.svtId = svtId;
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetMaskData(
    this,
    &v9->fields.MaskFlag,
    &v9->fields.ClosedMessage,
    id,
    v12);
  beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList;
  if ( !beforeList
    || (items = beforeList->fields._items,
        v20 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++beforeList->fields._version,
        !items) )
  {
LABEL_9:
    sub_1C93D2C(beforeList, v11);
  }
  size = beforeList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeList,
      (Il2CppObject *)v9,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    beforeList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterList; // x0

  if ( (byte_4D2E80A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4D2E80A = 1;
  }
  afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList;
  if ( !afterList )
    sub_1C93D2C(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             afterList,
                             index,
                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


int32_t Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v2; // x19
  struct System_Collections_Generic_List_SvtUseNpData__o *afterList; // x8

  v2 = this;
  if ( (byte_4D2E80B & 1) == 0 )
  {
    this = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    byte_4D2E80B = 1;
  }
  afterList = v2->fields.afterList;
  if ( !afterList )
    sub_1C93D2C(this, method);
  return afterList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeList; // x0

  if ( (byte_4D2E809 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_4D2E809 = 1;
  }
  beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList;
  if ( !beforeList )
    sub_1C93D2C(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             beforeList,
                             index,
                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetMaskData(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        bool *maskFlag,
        System_String_o **closedMessage,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  __int64 v13; // x0
  __int64 v14; // x1
  ServantTreasureDeviceAddEntity_o *v15; // x8

  if ( (byte_4D2E808 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E808 = 1;
  }
  tdAddEntity_k__BackingField = this->fields._tdAddEntity_k__BackingField;
  if ( tdAddEntity_k__BackingField )
  {
    v13 = System_Array__IndexOf_int_(
            tdAddEntity_k__BackingField->fields.treasureDeviceIds,
            treasureDeviceId,
            (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
    v15 = this->fields._tdAddEntity_k__BackingField;
    if ( !v15 )
      sub_1C93D2C(v13, v14);
    ServantTreasureDeviceAddEntity__GetMaskInfo(v15, v13, maskFlag, closedMessage, 0);
  }
  else
  {
    *maskFlag = 0;
    *closedMessage = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)closedMessage,
      StringLiteral_1/*""*/,
      (int32_t)closedMessage,
      treasureDeviceId,
      (System_String_o *)method,
      v5,
      v6,
      v7);
  }
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
  sub_1C93A78(
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._tdAddEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}