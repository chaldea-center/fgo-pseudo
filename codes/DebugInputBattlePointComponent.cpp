void DebugInputBattlePointComponent___ctor(DebugInputBattlePointComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirstOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputBattlePointComponent__Cancel(DebugInputBattlePointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *debugMenuTran; // x0

  debugMenuTran = (UnityEngine_Component_o *)this->fields.debugMenuTran;
  if ( !debugMenuTran
    || (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugMenuTran, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 1, 0),
        (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
    sub_21FFECC(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *DebugInputBattlePointComponent__GetTargetSvtList(
        DebugInputBattlePointComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UIToggle_o *value; // x0
  __int64 v5; // x1
  struct UIToggle_array *targetPlayerToggleList; // x8
  unsigned int v7; // w22
  unsigned int max_length; // w9
  struct UIToggle_Validate_o *validator; // x8
  unsigned int invoke_impl; // w9
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UIToggle_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_5939C9F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_5939C9F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
LABEL_20:
    sub_21FFECC(value, v5);
  v7 = 0;
  while ( 1 )
  {
    max_length = targetPlayerToggleList->max_length;
    if ( (int)v7 >= (int)max_length )
      return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v3;
    if ( v7 >= max_length )
      goto LABEL_22;
    value = targetPlayerToggleList->m_Items[v7];
    if ( !value )
      goto LABEL_20;
    value = (UIToggle_o *)UIToggle__get_value(value, 0);
    if ( ((unsigned __int8)value & 1) != 0 )
    {
      value = (UIToggle_o *)this->fields.data;
      if ( !value )
        goto LABEL_20;
      validator = value[2].fields.validator;
      if ( !validator )
        goto LABEL_20;
      invoke_impl = validator->fields.invoke_impl;
      if ( (int)v7 >= (int)invoke_impl )
        return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v3;
      if ( v7 >= invoke_impl )
LABEL_22:
        sub_21FFED4(value);
      value = (UIToggle_o *)BattleData__getPlayerServantData(
                              (BattleData_o *)value,
                              *((_DWORD *)&validator->fields.m_target + (int)v7),
                              0);
      if ( value )
      {
        if ( !v3 )
          goto LABEL_20;
        items = v3->fields._items;
        v18 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v3->fields._size;
        v20 = value;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)value,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    targetPlayerToggleList = this->fields.targetPlayerToggleList;
    ++v7;
    if ( !targetPlayerToggleList )
      goto LABEL_20;
  }
}


void DebugInputBattlePointComponent__Open(
        DebugInputBattlePointComponent_o *this,
        BattleData_o *data,
        UnityEngine_Transform_o *debugMenuTran,
        System_Action_o *onSubmitCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UIToggle_array *targetPlayerToggleList; // x8
  DebugInputBattlePointComponent_o *v9; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x0
  __int64 v25; // x1
  struct UIToggle_array *uiUpdateTypeToggleList; // x22
  int max_length; // w9
  __int64 v28; // x21
  char v29; // w8
  UIToggle_o *v30; // x20
  struct UIToggle_array *overwriteToggleList; // x22
  int v32; // w9
  char v33; // w8
  UIToggle_o *v34; // x20
  UIInput_o *battlePointIdInput; // x20
  UIInput_o *battlePointValueInput; // x20
  struct UIInput_o *v37; // x8
  struct UIInput_o *v38; // x9
  int v39; // [xsp+Ch] [xbp-34h] BYREF

  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  v39 = 0;
  if ( !targetPlayerToggleList )
    goto LABEL_31;
  v9 = this;
  if ( !this->fields.uiUpdateTypeToggleList )
    goto LABEL_31;
  if ( !this->fields.overwriteToggleList )
    goto LABEL_31;
  this->fields.data = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (System_String_o *)debugMenuTran,
    (System_String_o *)onSubmitCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  v9->fields.debugMenuTran = debugMenuTran;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.debugMenuTran,
    (int32_t)debugMenuTran,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v9->fields.onSubmitCallback = onSubmitCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.onSubmitCallback,
    (int32_t)onSubmitCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (DebugInputBattlePointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !debugMenuTran )
    goto LABEL_31;
  this = (DebugInputBattlePointComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)debugMenuTran,
                                               0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !v9->fields.isFirstOpen )
    return;
  this = (DebugInputBattlePointComponent_o *)v9->fields.scrollView;
  v9->fields.isFirstOpen = 0;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
  uiUpdateTypeToggleList = v9->fields.uiUpdateTypeToggleList;
  if ( !uiUpdateTypeToggleList )
    goto LABEL_32;
  max_length = uiUpdateTypeToggleList->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    v29 = 1;
    while ( (unsigned int)v28 < max_length )
    {
      v30 = uiUpdateTypeToggleList->m_Items[v28];
      if ( !v30 )
      {
LABEL_29:
        v39 = v28;
        sub_21FFECC(v24, v25);
      }
      UIToggle__set_value(uiUpdateTypeToggleList->m_Items[v28], v29 & 1, 0);
      max_length = uiUpdateTypeToggleList->max_length;
      ++v28;
      v29 = 0;
      v30->fields.group = 123;
      if ( (int)v28 >= max_length )
        goto LABEL_17;
    }
LABEL_30:
    v39 = v28;
    sub_21FFED4(v24);
  }
  LODWORD(v28) = 0;
LABEL_17:
  overwriteToggleList = v9->fields.overwriteToggleList;
  v39 = v28;
  if ( !overwriteToggleList )
  {
LABEL_32:
    v39 = 0;
    sub_21FFECC(v24, v25);
  }
  v32 = overwriteToggleList->max_length;
  if ( v32 >= 1 )
  {
    v28 = 0;
    v33 = 1;
    while ( (unsigned int)v28 < v32 )
    {
      v34 = overwriteToggleList->m_Items[v28];
      if ( !v34 )
        goto LABEL_29;
      UIToggle__set_value(overwriteToggleList->m_Items[v28], v33 & 1, 0);
      v32 = overwriteToggleList->max_length;
      ++v28;
      v33 = 0;
      v34->fields.group = 456;
      if ( (int)v28 >= v32 )
        goto LABEL_23;
    }
    goto LABEL_30;
  }
LABEL_23:
  battlePointIdInput = v9->fields.battlePointIdInput;
  v39 = 1;
  this = (DebugInputBattlePointComponent_o *)System_Int32__ToString((int32_t)&v39, 0);
  if ( !battlePointIdInput )
    goto LABEL_31;
  UIInput__set_value(battlePointIdInput, (System_String_o *)this, 0);
  battlePointValueInput = v9->fields.battlePointValueInput;
  v39 = 100;
  this = (DebugInputBattlePointComponent_o *)System_Int32__ToString((int32_t)&v39, 0);
  if ( !battlePointValueInput
    || (UIInput__set_value(battlePointValueInput, (System_String_o *)this, 0),
        (v37 = v9->fields.battlePointValueInput) == 0)
    || (v38 = v9->fields.battlePointIdInput, v37->fields.validation = 1, !v38) )
  {
LABEL_31:
    sub_21FFECC(this, data);
  }
  v38->fields.validation = 1;
  v37->fields.keyboardType = 4;
  v38->fields.keyboardType = 4;
}


void DebugInputBattlePointComponent__Submit(DebugInputBattlePointComponent_o *this, const MethodInfo *method)
{
  UIToggle_o *battlePointIdInput; // x0
  System_String_o *value; // x0
  System_String_o *v5; // x0
  struct UIToggle_array *overwriteToggleList; // x8
  struct UIToggle_array *uiUpdateTypeToggleList; // x8
  struct UIToggle_array *v8; // x8
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  battlePointIdInput = (UIToggle_o *)this->fields.battlePointIdInput;
  *(_QWORD *)result = 0;
  if ( !battlePointIdInput )
    goto LABEL_16;
  value = UIInput__get_value((UIInput_o *)battlePointIdInput, 0);
  System_Int32__TryParse(value, &result[1], 0);
  battlePointIdInput = (UIToggle_o *)this->fields.battlePointValueInput;
  if ( !battlePointIdInput )
    goto LABEL_16;
  v5 = UIInput__get_value((UIInput_o *)battlePointIdInput, 0);
  battlePointIdInput = (UIToggle_o *)System_Int32__TryParse(v5, result, 0);
  overwriteToggleList = this->fields.overwriteToggleList;
  if ( !overwriteToggleList )
    goto LABEL_16;
  if ( !LODWORD(overwriteToggleList->max_length) )
LABEL_17:
    sub_21FFED4(battlePointIdInput);
  battlePointIdInput = overwriteToggleList->m_Items[0];
  if ( !battlePointIdInput )
    goto LABEL_16;
  battlePointIdInput = (UIToggle_o *)UIToggle__get_value(battlePointIdInput, 0);
  if ( ((unsigned __int8)battlePointIdInput & 1) != 0 )
  {
    uiUpdateTypeToggleList = this->fields.uiUpdateTypeToggleList;
    if ( !uiUpdateTypeToggleList )
      goto LABEL_16;
    if ( (uiUpdateTypeToggleList->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_17;
    battlePointIdInput = uiUpdateTypeToggleList->m_Items[1];
    if ( !battlePointIdInput )
      goto LABEL_16;
    battlePointIdInput = (UIToggle_o *)UIToggle__get_value(battlePointIdInput, 0);
    if ( ((unsigned __int8)battlePointIdInput & 1) == 0 )
    {
      v8 = this->fields.uiUpdateTypeToggleList;
      if ( !v8 )
        goto LABEL_16;
      if ( LODWORD(v8->max_length) > 2 )
      {
        battlePointIdInput = v8->m_Items[2];
        if ( battlePointIdInput )
        {
          UIToggle__get_value(battlePointIdInput, 0);
          goto LABEL_15;
        }
LABEL_16:
        sub_21FFECC(battlePointIdInput, method);
      }
      goto LABEL_17;
    }
  }
LABEL_15:
  ActionExtensions__Call(this->fields.onSubmitCallback, 0);
}