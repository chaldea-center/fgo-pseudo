void ExRoomMissionListDisplayState___ctor(
        ExRoomMissionListDisplayState_o *this,
        System_Collections_Generic_List_ExRoomMissionListViewItem__o *displayModels,
        System_Collections_Generic_List_ExRoomMissionListViewItem__o *allModels,
        int32_t filter,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *AllModels_k__BackingField; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ExRoomMissionListDisplayState_Fields *p_fields; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Collections_Generic_List_ExRoomMissionListViewItem__o **p_AllModels_k__BackingField; // x20
  ExRoomMissionListDisplayState_o *v25; // x0
  const MethodInfo *v26; // x2
  struct System_String_o *FilterLabelSpriteName; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x2
  int v35; // w23
  int32_t v36; // w22
  Il2CppObject *Item; // x0
  int32_t v38; // w22
  int32_t size; // w27
  Il2CppObject *v40; // x0
  System_String_o *v41; // x21
  struct System_Collections_Generic_List_ExRoomMissionListViewItem__o *v42; // x8
  Il2CppObject *v43; // x20
  Il2CppObject *v44; // x0
  struct System_String_o *v45; // x0
  struct System_String_o **p_MissionCountLabelText_k__BackingField; // x19
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v53; // [xsp+8h] [xbp-58h] BYREF
  int v54; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5932DBA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomMissionListViewItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8906/*"MASTER_MISSION_COMPLETE_NUM"*/);
    byte_5932DBA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !displayModels )
  {
    displayModels = (System_Collections_Generic_List_ExRoomMissionListViewItem__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomMissionListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)displayModels,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomMissionListViewItem___ctor__);
  }
  if ( !this )
    goto LABEL_22;
  this->fields._DisplayModels_k__BackingField = displayModels;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)displayModels, v11, v12, v13, v14, v15, v16);
  if ( !allModels )
  {
    allModels = (System_Collections_Generic_List_ExRoomMissionListViewItem__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomMissionListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)allModels,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomMissionListViewItem___ctor__);
  }
  this->fields._AllModels_k__BackingField = allModels;
  p_AllModels_k__BackingField = &this->fields._AllModels_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AllModels_k__BackingField,
    (int32_t)allModels,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._CurrentFilter_k__BackingField = filter;
  FilterLabelSpriteName = ExRoomMissionListDisplayState__GetFilterLabelSpriteName(v25, filter, v26);
  this->fields._FilterLabelSpriteName_k__BackingField = FilterLabelSpriteName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FilterLabelSpriteName_k__BackingField,
    (int32_t)FilterLabelSpriteName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  AllModels_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllModels_k__BackingField;
  if ( !AllModels_k__BackingField )
    goto LABEL_22;
  v35 = 0;
  v36 = 0;
  while ( v36 < AllModels_k__BackingField->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             AllModels_k__BackingField,
             v36,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[17].monitor) == 4 )
        ++v35;
    }
    AllModels_k__BackingField = (System_Collections_Generic_List_object__o *)*p_AllModels_k__BackingField;
    ++v36;
    if ( !*p_AllModels_k__BackingField )
      goto LABEL_22;
  }
  AllModels_k__BackingField = (System_Collections_Generic_List_object__o *)p_fields->_DisplayModels_k__BackingField;
  if ( !p_fields->_DisplayModels_k__BackingField )
    goto LABEL_22;
  v38 = 0;
  while ( 1 )
  {
    size = AllModels_k__BackingField->fields._size;
    if ( v38 >= size )
      break;
    v40 = System_Collections_Generic_List_object___get_Item(
            AllModels_k__BackingField,
            v38,
            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Item__);
    if ( v40 )
    {
      if ( LODWORD(v40[17].monitor) == 3 )
        break;
    }
    AllModels_k__BackingField = (System_Collections_Generic_List_object__o *)p_fields->_DisplayModels_k__BackingField;
    ++v38;
    if ( !p_fields->_DisplayModels_k__BackingField )
      goto LABEL_22;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v34);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8906/*"MASTER_MISSION_COMPLETE_NUM"*/, 0);
  v54 = v35;
  AllModels_k__BackingField = (System_Collections_Generic_List_object__o *)j_il2cpp_value_box_0(qword_594C070, &v54);
  v42 = *p_AllModels_k__BackingField;
  if ( !*p_AllModels_k__BackingField )
LABEL_22:
    sub_21FFECC(AllModels_k__BackingField, v10);
  v43 = (Il2CppObject *)AllModels_k__BackingField;
  v53 = v42->fields._size;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v53);
  v45 = System_String__Format_75484576(v41, v43, v44, 0);
  this->fields._MissionCountLabelText_k__BackingField = v45;
  p_MissionCountLabelText_k__BackingField = &this->fields._MissionCountLabelText_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_MissionCountLabelText_k__BackingField,
    (int32_t)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  *((_BYTE *)p_MissionCountLabelText_k__BackingField + 8) = v38 < size;
}


System_String_o *ExRoomMissionListDisplayState__GetFilterLabelSpriteName(
        ExRoomMissionListDisplayState_o *this,
        int32_t filter,
        const MethodInfo *method)
{
  System_String_o ***v4; // x8

  if ( (byte_5932DBB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18291/*"btn_txt_completed"*/);
    sub_21FFC50(&StringLiteral_18325/*"btn_txt_receipt"*/);
    sub_21FFC50(&StringLiteral_18324/*"btn_txt_progress"*/);
    sub_21FFC50(&StringLiteral_18273/*"btn_txt_all"*/);
    byte_5932DBB = 1;
  }
  v4 = (System_String_o ***)(qword_594C0B8 + 184);
  if ( (unsigned int)filter < 4 )
    v4 = (System_String_o ***)&off_5296238[filter];
  return **v4;
}


System_Collections_Generic_List_ExRoomMissionListViewItem__o *ExRoomMissionListDisplayState__get_AllModels(
        ExRoomMissionListDisplayState_o *this,
        const MethodInfo *method)
{
  return this->fields._AllModels_k__BackingField;
}


bool ExRoomMissionListDisplayState__get_CanReceiveAll(ExRoomMissionListDisplayState_o *this, const MethodInfo *method)
{
  return this->fields._CanReceiveAll_k__BackingField;
}


int32_t ExRoomMissionListDisplayState__get_CurrentFilter(
        ExRoomMissionListDisplayState_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentFilter_k__BackingField;
}


System_Collections_Generic_List_ExRoomMissionListViewItem__o *ExRoomMissionListDisplayState__get_DisplayModels(
        ExRoomMissionListDisplayState_o *this,
        const MethodInfo *method)
{
  return this->fields._DisplayModels_k__BackingField;
}


System_String_o *ExRoomMissionListDisplayState__get_FilterLabelSpriteName(
        ExRoomMissionListDisplayState_o *this,
        const MethodInfo *method)
{
  return this->fields._FilterLabelSpriteName_k__BackingField;
}


System_String_o *ExRoomMissionListDisplayState__get_MissionCountLabelText(
        ExRoomMissionListDisplayState_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionCountLabelText_k__BackingField;
}


void ExRoomMissionListDisplayState__set_AllModels(
        ExRoomMissionListDisplayState_o *this,
        System_Collections_Generic_List_ExRoomMissionListViewItem__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AllModels_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AllModels_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListDisplayState__set_CanReceiveAll(
        ExRoomMissionListDisplayState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._CanReceiveAll_k__BackingField = value;
}


void ExRoomMissionListDisplayState__set_CurrentFilter(
        ExRoomMissionListDisplayState_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CurrentFilter_k__BackingField = value;
}


void ExRoomMissionListDisplayState__set_DisplayModels(
        ExRoomMissionListDisplayState_o *this,
        System_Collections_Generic_List_ExRoomMissionListViewItem__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DisplayModels_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListDisplayState__set_FilterLabelSpriteName(
        ExRoomMissionListDisplayState_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FilterLabelSpriteName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FilterLabelSpriteName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListDisplayState__set_MissionCountLabelText(
        ExRoomMissionListDisplayState_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MissionCountLabelText_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MissionCountLabelText_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}