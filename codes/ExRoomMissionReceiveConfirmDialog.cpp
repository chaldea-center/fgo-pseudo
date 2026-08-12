void ExRoomMissionReceiveConfirmDialog___ctor(
        ExRoomMissionReceiveConfirmDialog_o *this,
        System_Collections_Generic_List_ExRoomMissionListOutput__o *sourceMissions,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w21
  System_Collections_Generic_List_object__o *klass; // x22
  Il2CppObject *Item; // x24
  ExRoomMissionReceiveConfirmDialogItem_o *v16; // x23
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_596AF28 & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionReceiveConfirmDialogItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__TypeInfo);
    byte_596AF28 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem___ctor__);
  this->fields._Items_k__BackingField = (struct System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__o *)v5;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_2213A04(p_fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( sourceMissions && sourceMissions->fields._size >= 1 )
  {
    v13 = 0;
    do
    {
      klass = (System_Collections_Generic_List_object__o *)p_fields->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)sourceMissions,
               v13,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
      v16 = (ExRoomMissionReceiveConfirmDialogItem_o *)sub_2213CCC(ExRoomMissionReceiveConfirmDialogItem_TypeInfo);
      ExRoomMissionReceiveConfirmDialogItem___ctor(v16, (ExRoomMissionListOutput_o *)Item, v17);
      if ( !klass
        || (items = klass->fields._items,
            v27 = Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__Add__,
            ++klass->fields._version,
            !items) )
      {
        sub_2213CDC(v18, v19);
      }
      size = klass->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          klass,
          (Il2CppObject *)v16,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        klass->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v16, v20, v21, v22, v23, v24, v25);
      }
      ++v13;
    }
    while ( v13 < sourceMissions->fields._size );
  }
}


System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__o *ExRoomMissionReceiveConfirmDialog__get_Items(
        ExRoomMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  return this->fields._Items_k__BackingField;
}


void ExRoomMissionReceiveConfirmDialog__set_Items(
        ExRoomMissionReceiveConfirmDialog_o *this,
        System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Items_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}