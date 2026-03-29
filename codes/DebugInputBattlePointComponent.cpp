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
    sub_1C93D2C(debugMenuTran, method);
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
  struct UIToggle_Validate_o *validator; // x8
  int invoke_impl; // w9
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UIToggle_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4D31F69 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4D31F69 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
LABEL_20:
    sub_1C93D2C(value, v5);
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
      validator = value[2].fields.validator;
      if ( !validator )
        goto LABEL_20;
      invoke_impl = validator->fields.invoke_impl;
      if ( (int)v7 >= invoke_impl )
        return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v3;
      if ( (unsigned int)v7 >= invoke_impl )
LABEL_22:
        sub_1C93D34(value);
      value = (UIToggle_o *)BattleData__getPlayerServantData(
                              (BattleData_o *)value,
                              *((_DWORD *)&validator->fields.m_target + v7),
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UIToggle_array *targetPlayerToggleList; // x8
  int max_length; // w8
  DebugInputBattlePointComponent_o *v12; // x19
  int v13; // w9
  struct UIToggle_array *uiUpdateTypeToggleList; // x8
  int v15; // w8
  int v16; // w9
  struct UIToggle_array *overwriteToggleList; // x8
  int v18; // w8
  int v19; // w9
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UIToggle_array *v32; // x21
  int v33; // w8
  __int64 v34; // x22
  char v35; // w9
  UIToggle_o *v36; // x20
  struct UIToggle_array *v37; // x21
  int v38; // w8
  __int64 v39; // x22
  char v40; // w9
  UIToggle_o *v41; // x20
  UIInput_o *battlePointIdInput; // x20
  UIInput_o *battlePointValueInput; // x20
  struct UIInput_o *v44; // x8
  struct UIInput_o *v45; // x9
  int v46; // [xsp+Ch] [xbp-34h] BYREF

  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
    goto LABEL_33;
  max_length = targetPlayerToggleList->max_length;
  v12 = this;
  v13 = -1;
  do
    ++v13;
  while ( v13 < max_length );
  uiUpdateTypeToggleList = this->fields.uiUpdateTypeToggleList;
  if ( !uiUpdateTypeToggleList )
    goto LABEL_33;
  v15 = uiUpdateTypeToggleList->max_length;
  v16 = -1;
  do
    ++v16;
  while ( v16 < v15 );
  overwriteToggleList = this->fields.overwriteToggleList;
  if ( !overwriteToggleList )
    goto LABEL_33;
  v18 = overwriteToggleList->max_length;
  v19 = -1;
  do
    ++v19;
  while ( v19 < v18 );
  this->fields.data = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (int32_t)debugMenuTran,
    (int32_t)onSubmitCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v12->fields.debugMenuTran = debugMenuTran;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v12->fields.debugMenuTran,
    (int32_t)debugMenuTran,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v12->fields.onSubmitCallback = onSubmitCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v12->fields.onSubmitCallback,
    (int32_t)onSubmitCallback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this = (DebugInputBattlePointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
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
  if ( !v12->fields.isFirstOpen )
    return;
  this = (DebugInputBattlePointComponent_o *)v12->fields.scrollView;
  v12->fields.isFirstOpen = 0;
  if ( !this )
    goto LABEL_33;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
  v32 = v12->fields.uiUpdateTypeToggleList;
  if ( !v32 )
    goto LABEL_33;
  v33 = v32->max_length;
  if ( v33 >= 1 )
  {
    v34 = 0;
    v35 = 1;
    while ( (unsigned int)v34 < v33 )
    {
      v36 = v32->m_Items[v34];
      if ( !v36 )
        goto LABEL_33;
      UIToggle__set_value(v32->m_Items[v34++], v35 & 1, 0);
      v36->fields.group = 123;
      v46 = v34;
      v33 = v32->max_length;
      v35 = 0;
      if ( (int)v34 >= v33 )
        goto LABEL_21;
    }
LABEL_34:
    sub_1C93D34(this);
  }
LABEL_21:
  v37 = v12->fields.overwriteToggleList;
  if ( !v37 )
    goto LABEL_33;
  v38 = v37->max_length;
  if ( v38 >= 1 )
  {
    v39 = 0;
    v40 = 1;
    while ( (unsigned int)v39 < v38 )
    {
      v41 = v37->m_Items[v39];
      if ( !v41 )
        goto LABEL_33;
      UIToggle__set_value(v37->m_Items[v39++], v40 & 1, 0);
      v41->fields.group = 456;
      v46 = v39;
      v38 = v37->max_length;
      v40 = 0;
      if ( (int)v39 >= v38 )
        goto LABEL_27;
    }
    goto LABEL_34;
  }
LABEL_27:
  battlePointIdInput = v12->fields.battlePointIdInput;
  v46 = 1;
  this = (DebugInputBattlePointComponent_o *)System_Int32__ToString((int32_t)&v46, 0);
  if ( !battlePointIdInput )
    goto LABEL_33;
  UIInput__set_value(battlePointIdInput, (System_String_o *)this, 0);
  battlePointValueInput = v12->fields.battlePointValueInput;
  v46 = 100;
  this = (DebugInputBattlePointComponent_o *)System_Int32__ToString((int32_t)&v46, 0);
  if ( !battlePointValueInput
    || (UIInput__set_value(battlePointValueInput, (System_String_o *)this, 0),
        (v44 = v12->fields.battlePointValueInput) == 0)
    || (v45 = v12->fields.battlePointIdInput, v44->fields.validation = 1, !v45) )
  {
LABEL_33:
    sub_1C93D2C(this, data);
  }
  v45->fields.validation = 1;
  v44->fields.keyboardType = 4;
  v45->fields.keyboardType = 4;
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
    sub_1C93D34(battlePointIdInput);
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
        sub_1C93D2C(battlePointIdInput, method);
      }
      goto LABEL_17;
    }
  }
LABEL_15:
  ActionExtensions__Call(this->fields.onSubmitCallback, 0);
}