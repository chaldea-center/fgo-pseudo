void UIEventTrigger___ctor(UIEventTrigger_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_List_object__o *v52; // x20
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_List_object__o *v59; // x20
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Collections_Generic_List_object__o *v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Collections_Generic_List_object__o *v73; // x20
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_List_object__o *v80; // x20
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Collections_Generic_List_object__o *v87; // x20
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7

  if ( (byte_5974FE1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_5974FE1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onHoverOver = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onHoverOver, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onHoverOut = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onHoverOut, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPress = (struct System_Collections_Generic_List_EventDelegate__o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onPress, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onRelease = (struct System_Collections_Generic_List_EventDelegate__o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onRelease, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSelect = (struct System_Collections_Generic_List_EventDelegate__o *)v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onSelect, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDeselect = (struct System_Collections_Generic_List_EventDelegate__o *)v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDeselect, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v52;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDoubleClick,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragStart = (struct System_Collections_Generic_List_EventDelegate__o *)v59;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDragStart, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragEnd = (struct System_Collections_Generic_List_EventDelegate__o *)v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDragEnd, (int32_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragOver = (struct System_Collections_Generic_List_EventDelegate__o *)v73;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDragOver, (int32_t)v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDragOut = (struct System_Collections_Generic_List_EventDelegate__o *)v80;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDragOut, (int32_t)v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDrag = (struct System_Collections_Generic_List_EventDelegate__o *)v87;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDrag, (int32_t)v87, v88, v89, v90, v91, v92, v93);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIEventTrigger__OnClick(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974FDA & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FDA = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onClick = this->fields.onClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Execute_56285144(onClick, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
}


void UIEventTrigger__OnDoubleClick(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onDoubleClick; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974FDB & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FDB = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onDoubleClick = this->fields.onDoubleClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Execute_56285144(onDoubleClick, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
}


void UIEventTrigger__OnDrag(UIEventTrigger_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_Collections_Generic_List_EventDelegate__o *onDrag; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5974FE0 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FE0 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onDrag = this->fields.onDrag;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v11);
    EventDelegate__Execute_56285144(onDrag, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void UIEventTrigger__OnDragEnd(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onDragEnd; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974FDD & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FDD = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onDragEnd = this->fields.onDragEnd;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Execute_56285144(onDragEnd, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
}


void UIEventTrigger__OnDragOut(UIEventTrigger_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_Collections_Generic_List_EventDelegate__o *onDragOut; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5974FDF & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FDF = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onDragOut = this->fields.onDragOut;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v11);
    EventDelegate__Execute_56285144(onDragOut, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void UIEventTrigger__OnDragOver(UIEventTrigger_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_Collections_Generic_List_EventDelegate__o *onDragOver; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5974FDE & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FDE = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    onDragOver = this->fields.onDragOver;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v11);
    EventDelegate__Execute_56285144(onDragOver, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void UIEventTrigger__OnDragStart(UIEventTrigger_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onDragStart; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974FDC & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FDC = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onDragStart = this->fields.onDragStart;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Execute_56285144(onDragStart, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEventTrigger__OnHover(UIEventTrigger_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  int v13; // w8
  System_Collections_Generic_List_EventDelegate__o *onHoverOver; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974FD7 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FD7 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOver);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v13 = *(&EventDelegate_TypeInfo->_2.cctor_finished + 1);
    if ( isOver )
    {
      onHoverOver = this->fields.onHoverOver;
      if ( !v13 )
        goto LABEL_10;
    }
    else
    {
      onHoverOver = this->fields.onHoverOut;
      if ( !v13 )
LABEL_10:
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
    }
    EventDelegate__Execute_56285144(onHoverOver, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEventTrigger__OnPress(UIEventTrigger_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  int v13; // w8
  System_Collections_Generic_List_EventDelegate__o *onPress; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974FD8 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FD8 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v13 = *(&EventDelegate_TypeInfo->_2.cctor_finished + 1);
    if ( pressed )
    {
      onPress = this->fields.onPress;
      if ( !v13 )
        goto LABEL_10;
    }
    else
    {
      onPress = this->fields.onRelease;
      if ( !v13 )
LABEL_10:
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
    }
    EventDelegate__Execute_56285144(onPress, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEventTrigger__OnSelect(UIEventTrigger_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  int v13; // w8
  System_Collections_Generic_List_EventDelegate__o *onSelect; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974FD9 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIEventTrigger_TypeInfo);
    byte_5974FD9 = 1;
  }
  current = (UnityEngine_Object_o *)UIEventTrigger_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selected);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    UIEventTrigger_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      (int32_t)this,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v13 = *(&EventDelegate_TypeInfo->_2.cctor_finished + 1);
    if ( selected )
    {
      onSelect = this->fields.onSelect;
      if ( !v13 )
        goto LABEL_10;
    }
    else
    {
      onSelect = this->fields.onDeselect;
      if ( !v13 )
LABEL_10:
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
    }
    EventDelegate__Execute_56285144(onSelect, 0);
    UIEventTrigger_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIEventTrigger_TypeInfo->static_fields,
      0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}