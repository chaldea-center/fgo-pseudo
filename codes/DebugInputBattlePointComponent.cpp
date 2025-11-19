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
    sub_1C6BC60(debugMenuTran, method);
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
  __int64 v7; // x21
  int max_length; // w9
  struct System_Collections_Generic_List_EventDelegate__o *onChange; // x8
  int size; // w9
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  UIToggle_o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4CB78B2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CB78B2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
LABEL_20:
    sub_1C6BC60(value, v5);
  v7 = 0;
  while ( 1 )
  {
    max_length = targetPlayerToggleList->max_length;
    if ( (int)v7 >= max_length )
      return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v3;
    if ( (unsigned int)v7 >= max_length )
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
      onChange = value[2].fields.onChange;
      if ( !onChange )
        goto LABEL_20;
      size = onChange->fields._size;
      if ( (int)v7 >= size )
        return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v3;
      if ( (unsigned int)v7 >= size )
LABEL_22:
        sub_1C6BC68(value);
      value = (UIToggle_o *)BattleData__getPlayerServantData(
                              (BattleData_o *)value,
                              *((_DWORD *)&onChange->fields._syncRoot + v7),
                              0);
      if ( value )
      {
        if ( !v3 )
          goto LABEL_20;
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_20;
        v15 = v3->fields._size;
        v16 = value;
        if ( (unsigned int)v15 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)value,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + v15;
          v3->fields._size = v15 + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
  struct UIToggle_array *targetPlayerToggleList; // x8
  int max_length; // w8
  DebugInputBattlePointComponent_o *v9; // x19
  int v10; // w9
  struct UIToggle_array *uiUpdateTypeToggleList; // x8
  int v12; // w8
  int v13; // w9
  struct UIToggle_array *overwriteToggleList; // x8
  int v15; // w8
  int v16; // w9
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UIToggle_array *v21; // x21
  int v22; // w8
  __int64 v23; // x22
  char v24; // w9
  UIToggle_o *v25; // x20
  struct UIToggle_array *v26; // x21
  int v27; // w8
  __int64 v28; // x22
  char v29; // w9
  UIToggle_o *v30; // x20
  UIInput_o *battlePointIdInput; // x20
  UIInput_o *battlePointValueInput; // x20
  struct UIInput_o *v33; // x8
  struct UIInput_o *v34; // x9
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
    goto LABEL_33;
  max_length = targetPlayerToggleList->max_length;
  v9 = this;
  v10 = -1;
  do
    ++v10;
  while ( v10 < max_length );
  uiUpdateTypeToggleList = this->fields.uiUpdateTypeToggleList;
  if ( !uiUpdateTypeToggleList )
    goto LABEL_33;
  v12 = uiUpdateTypeToggleList->max_length;
  v13 = -1;
  do
    ++v13;
  while ( v13 < v12 );
  overwriteToggleList = this->fields.overwriteToggleList;
  if ( !overwriteToggleList )
    goto LABEL_33;
  v15 = overwriteToggleList->max_length;
  v16 = -1;
  do
    ++v16;
  while ( v16 < v15 );
  this->fields.data = data;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.data,
    (int32_t)data,
    (int32_t)debugMenuTran,
    (const MethodInfo *)onSubmitCallback);
  v9->fields.debugMenuTran = debugMenuTran;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields.debugMenuTran, (int32_t)debugMenuTran, v17, v18);
  v9->fields.onSubmitCallback = onSubmitCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields.onSubmitCallback, (int32_t)onSubmitCallback, v19, v20);
  this = (DebugInputBattlePointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !debugMenuTran )
    goto LABEL_33;
  this = (DebugInputBattlePointComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)debugMenuTran,
                                               0);
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !v9->fields.isFirstOpen )
    return;
  this = (DebugInputBattlePointComponent_o *)v9->fields.scrollView;
  v9->fields.isFirstOpen = 0;
  if ( !this )
    goto LABEL_33;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
  v21 = v9->fields.uiUpdateTypeToggleList;
  if ( !v21 )
    goto LABEL_33;
  v22 = v21->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    v24 = 1;
    while ( (unsigned int)v23 < v22 )
    {
      v25 = v21->m_Items[v23];
      if ( !v25 )
        goto LABEL_33;
      UIToggle__set_value(v21->m_Items[v23++], v24 & 1, 0);
      v25->fields.group = 123;
      v35 = v23;
      v22 = v21->max_length;
      v24 = 0;
      if ( (int)v23 >= v22 )
        goto LABEL_21;
    }
LABEL_34:
    sub_1C6BC68(this);
  }
LABEL_21:
  v26 = v9->fields.overwriteToggleList;
  if ( !v26 )
    goto LABEL_33;
  v27 = v26->max_length;
  if ( v27 >= 1 )
  {
    v28 = 0;
    v29 = 1;
    while ( (unsigned int)v28 < v27 )
    {
      v30 = v26->m_Items[v28];
      if ( !v30 )
        goto LABEL_33;
      UIToggle__set_value(v26->m_Items[v28++], v29 & 1, 0);
      v30->fields.group = 456;
      v35 = v28;
      v27 = v26->max_length;
      v29 = 0;
      if ( (int)v28 >= v27 )
        goto LABEL_27;
    }
    goto LABEL_34;
  }
LABEL_27:
  battlePointIdInput = v9->fields.battlePointIdInput;
  v35 = 1;
  this = (DebugInputBattlePointComponent_o *)System_Int32__ToString((int32_t)&v35, 0);
  if ( !battlePointIdInput )
    goto LABEL_33;
  UIInput__set_value(battlePointIdInput, (System_String_o *)this, 0);
  battlePointValueInput = v9->fields.battlePointValueInput;
  v35 = 100;
  this = (DebugInputBattlePointComponent_o *)System_Int32__ToString((int32_t)&v35, 0);
  if ( !battlePointValueInput
    || (UIInput__set_value(battlePointValueInput, (System_String_o *)this, 0),
        (v33 = v9->fields.battlePointValueInput) == 0)
    || (v34 = v9->fields.battlePointIdInput, v33->fields.validation = 1, !v34) )
  {
LABEL_33:
    sub_1C6BC60(this, data);
  }
  v34->fields.validation = 1;
  v33->fields.keyboardType = 4;
  v34->fields.keyboardType = 4;
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

  *(_QWORD *)result = 0;
  battlePointIdInput = (UIToggle_o *)this->fields.battlePointIdInput;
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
    sub_1C6BC68(battlePointIdInput);
  battlePointIdInput = overwriteToggleList->m_Items[0];
  if ( !battlePointIdInput )
    goto LABEL_16;
  battlePointIdInput = (UIToggle_o *)UIToggle__get_value(battlePointIdInput, 0);
  if ( ((unsigned __int8)battlePointIdInput & 1) != 0 )
  {
    uiUpdateTypeToggleList = this->fields.uiUpdateTypeToggleList;
    if ( !uiUpdateTypeToggleList )
      goto LABEL_16;
    if ( LODWORD(uiUpdateTypeToggleList->max_length) <= 1 )
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
        sub_1C6BC60(battlePointIdInput, method);
      }
      goto LABEL_17;
    }
  }
LABEL_15:
  ActionExtensions__Call(this->fields.onSubmitCallback, 0);
}