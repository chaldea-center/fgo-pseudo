void UIEventTrigger___ctor(UIEventTrigger_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_List_object__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_List_object__o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_Collections_Generic_List_object__o *v73; // x20
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_Collections_Generic_List_object__o *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  System_Collections_Generic_List_object__o *v87; // x20
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7

  if ( (byte_4CCBAD2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4CCBAD2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onHoverOver = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onHoverOver, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onHoverOut = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onHoverOut, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPress = (struct System_Collections_Generic_List_EventDelegate__o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onPress, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onRelease = (struct System_Collections_Generic_List_EventDelegate__o *)v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onRelease, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSelect = (struct System_Collections_Generic_List_EventDelegate__o *)v31;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onSelect, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDeselect = (struct System_Collections_Generic_List_EventDelegate__o *)v38;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDeselect, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v45;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onClick, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v52;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDoubleClick, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragStart = (struct System_Collections_Generic_List_EventDelegate__o *)v59;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDragStart, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragEnd = (struct System_Collections_Generic_List_EventDelegate__o *)v66;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDragEnd, (int32_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragOver = (struct System_Collections_Generic_List_EventDelegate__o *)v73;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDragOver, (int32_t)v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragOut = (struct System_Collections_Generic_List_EventDelegate__o *)v80;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDragOut, (int32_t)v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDrag = (struct System_Collections_Generic_List_EventDelegate__o *)v87;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDrag, (int32_t)v87, v88, v89, v90, v91, v92, v93);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIEventTrigger__OnClick(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCBACB & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBACB = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onClick, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v11, v12, v13, v14, v15, v16);
  }
}


void UIEventTrigger__OnDoubleClick(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_EventDelegate__o *onDoubleClick; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCBACC & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBACC = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onDoubleClick = this->fields.onDoubleClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onDoubleClick, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v11, v12, v13, v14, v15, v16);
  }
}


void UIEventTrigger__OnDrag(UIEventTrigger_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_EventDelegate__o *onDrag; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CCBAD1 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBAD1 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onDrag = this->fields.onDrag;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onDrag, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v12, v13, v14, v15, v16, v17);
  }
}


void UIEventTrigger__OnDragEnd(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_EventDelegate__o *onDragEnd; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCBACE & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBACE = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onDragEnd = this->fields.onDragEnd;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onDragEnd, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v11, v12, v13, v14, v15, v16);
  }
}


void UIEventTrigger__OnDragOut(UIEventTrigger_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_EventDelegate__o *onDragOut; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CCBAD0 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBAD0 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onDragOut = this->fields.onDragOut;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onDragOut, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v12, v13, v14, v15, v16, v17);
  }
}


void UIEventTrigger__OnDragOver(UIEventTrigger_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_EventDelegate__o *onDragOver; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CCBACF & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBACF = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onDragOver = this->fields.onDragOver;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onDragOver, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v12, v13, v14, v15, v16, v17);
  }
}


void UIEventTrigger__OnDragStart(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_EventDelegate__o *onDragStart; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCBACD & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBACD = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onDragStart = this->fields.onDragStart;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onDragStart, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v11, v12, v13, v14, v15, v16);
  }
}


void UIEventTrigger__OnHover(UIEventTrigger_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_EventDelegate__o *onHoverOver; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCBAC8 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBAC8 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    if ( isOver )
      onHoverOver = this->fields.onHoverOver;
    else
      onHoverOver = this->fields.onHoverOut;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onHoverOver, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v13, v14, v15, v16, v17, v18);
  }
}


void UIEventTrigger__OnPress(UIEventTrigger_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_EventDelegate__o *onPress; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCBAC9 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBAC9 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    if ( pressed )
      onPress = this->fields.onPress;
    else
      onPress = this->fields.onRelease;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onPress, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v13, v14, v15, v16, v17, v18);
  }
}


void UIEventTrigger__OnSelect(UIEventTrigger_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_EventDelegate__o *onSelect; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCBACA & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIEventTrigger_TypeInfo);
    byte_4CCBACA = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    if ( selected )
      onSelect = this->fields.onSelect;
    else
      onSelect = this->fields.onDeselect;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49587556(onSelect, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)UIEventTrigger_TypeInfo->static_fields, 0, v13, v14, v15, v16, v17, v18);
  }
}