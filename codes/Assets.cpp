void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5936421 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    byte_5936421 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.beforeList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  this->fields.afterList = (struct System_Collections_Generic_List_SvtUseNpData__o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.afterList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t id,
        int32_t lv,
        int32_t svtId,
        const MethodInfo *method)
{
  SvtUseNpData_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *afterList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  Il2CppClass **v23; // x0

  if ( (byte_5936423 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_21FFC50(&SvtUseNpData_TypeInfo);
    byte_5936423 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_21FFEBC(SvtUseNpData_TypeInfo);
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
        v21 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++afterList->fields._version,
        !items) )
  {
LABEL_9:
    sub_21FFECC(v10, v11);
  }
  size = afterList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterList,
      (Il2CppObject *)v9,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    afterList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v9, v13, v14, v15, v16, v17, v18);
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
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *beforeList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  Il2CppClass **v23; // x0

  if ( (byte_5936422 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_21FFC50(&SvtUseNpData_TypeInfo);
    byte_5936422 = 1;
  }
  v9 = (SvtUseNpData_o *)sub_21FFEBC(SvtUseNpData_TypeInfo);
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
        v21 = Method_System_Collections_Generic_List_SvtUseNpData__Add__,
        ++beforeList->fields._version,
        !items) )
  {
LABEL_9:
    sub_21FFECC(v10, v11);
  }
  size = beforeList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeList,
      (Il2CppObject *)v9,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    beforeList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterList; // x0

  if ( (byte_5936426 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_5936426 = 1;
  }
  afterList = (System_Collections_Generic_List_object__o *)this->fields.afterList;
  if ( !afterList )
    sub_21FFECC(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             afterList,
                             index,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


int32_t Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v2; // x19
  struct System_Collections_Generic_List_SvtUseNpData__o *afterList; // x8

  v2 = this;
  if ( (byte_5936427 & 1) == 0 )
  {
    this = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    byte_5936427 = 1;
  }
  afterList = v2->fields.afterList;
  if ( !afterList )
    sub_21FFECC(this, method);
  return afterList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
SvtUseNpData_o *Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeList; // x0

  if ( (byte_5936425 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    byte_5936425 = 1;
  }
  beforeList = (System_Collections_Generic_List_object__o *)this->fields.beforeList;
  if ( !beforeList )
    sub_21FFECC(0, *(_QWORD *)&index);
  return (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                             beforeList,
                             index,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
void Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetMaskData(
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *this,
        bool *maskFlag,
        System_String_o **closedMessage,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1

  if ( (byte_5936424 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936424 = 1;
  }
  tdAddEntity_k__BackingField = this->fields._tdAddEntity_k__BackingField;
  if ( tdAddEntity_k__BackingField )
  {
    v13 = System_Array__IndexOf_int_(
            tdAddEntity_k__BackingField->fields.treasureDeviceIds,
            treasureDeviceId,
            (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
    if ( !this->fields._tdAddEntity_k__BackingField )
      sub_21FFECC(v13, v14);
    ServantTreasureDeviceAddEntity__GetMaskInfo(
      this->fields._tdAddEntity_k__BackingField,
      v13,
      maskFlag,
      closedMessage,
      0);
  }
  else
  {
    *maskFlag = 0;
    v15 = (int)StringLiteral_1/*""*/;
    *closedMessage = (System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)closedMessage,
      v15,
      (System_String_o *)closedMessage,
      *(System_String_o **)&treasureDeviceId,
      (int32_t)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._tdAddEntity_k__BackingField = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._tdAddEntity_k__BackingField,
    (int32_t)entity,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._tdAddEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._tdAddEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}