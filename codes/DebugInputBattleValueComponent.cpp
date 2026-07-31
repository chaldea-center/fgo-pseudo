void DebugInputBattleValueComponent___ctor(DebugInputBattleValueComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirstOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputBattleValueComponent__Cancel(DebugInputBattleValueComponent_o *this, const MethodInfo *method)
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


void DebugInputBattleValueComponent__Open(
        DebugInputBattleValueComponent_o *this,
        BattleData_o *data,
        UnityEngine_Transform_o *debugMenuTran,
        System_Action_o *onSubmitCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UIToggle_array *overwriteToggleList; // x8
  DebugInputBattleValueComponent_o *v11; // x19
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
  struct UIToggle_array *v26; // x21
  int max_length; // w9
  __int64 v28; // x22
  char v29; // w8
  UIToggle_o *v30; // x20
  UIInput_o *battleValueIdInput; // x20
  UIInput_o *battleValueNumInput; // x20
  struct UIInput_o *v33; // x8
  struct UIInput_o *v34; // x9
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  overwriteToggleList = this->fields.overwriteToggleList;
  v35 = 0;
  if ( !overwriteToggleList )
    goto LABEL_20;
  v11 = this;
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
  v11->fields.debugMenuTran = debugMenuTran;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.debugMenuTran,
    (int32_t)debugMenuTran,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v11->fields.onSubmitCallback = onSubmitCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.onSubmitCallback,
    (int32_t)onSubmitCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (DebugInputBattleValueComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !debugMenuTran )
    goto LABEL_20;
  this = (DebugInputBattleValueComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)debugMenuTran,
                                               0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !v11->fields.isFirstOpen )
    return;
  v26 = v11->fields.overwriteToggleList;
  v11->fields.isFirstOpen = 0;
  if ( !v26 )
  {
    v35 = 0;
    sub_21FFECC(v24, v25);
  }
  max_length = v26->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    v29 = 1;
    do
    {
      if ( (unsigned int)v28 >= max_length )
      {
        v35 = v28;
        sub_21FFED4(v24);
      }
      v30 = v26->m_Items[v28];
      if ( !v30 )
      {
        v35 = v28;
        sub_21FFECC(v24, v25);
      }
      UIToggle__set_value(v26->m_Items[v28], v29 & 1, 0);
      max_length = v26->max_length;
      ++v28;
      v29 = 0;
      v30->fields.group = 234;
    }
    while ( (int)v28 < max_length );
  }
  battleValueIdInput = v11->fields.battleValueIdInput;
  v35 = 1;
  this = (DebugInputBattleValueComponent_o *)System_Int32__ToString((int32_t)&v35, 0);
  if ( !battleValueIdInput )
    goto LABEL_20;
  UIInput__set_value(battleValueIdInput, (System_String_o *)this, 0);
  battleValueNumInput = v11->fields.battleValueNumInput;
  v35 = 100;
  this = (DebugInputBattleValueComponent_o *)System_Int32__ToString((int32_t)&v35, 0);
  if ( !battleValueNumInput
    || (UIInput__set_value(battleValueNumInput, (System_String_o *)this, 0), (v33 = v11->fields.battleValueNumInput) == 0)
    || (v34 = v11->fields.battleValueIdInput, v33->fields.validation = 1, !v34) )
  {
LABEL_20:
    sub_21FFECC(this, data);
  }
  v34->fields.validation = 1;
  v33->fields.keyboardType = 4;
  v34->fields.keyboardType = 4;
}


void DebugInputBattleValueComponent__Submit(DebugInputBattleValueComponent_o *this, const MethodInfo *method)
{
  UIInput_o *battleValueIdInput; // x0
  System_String_o *value; // x0
  System_String_o *v5; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  battleValueIdInput = this->fields.battleValueIdInput;
  *(_QWORD *)result = 0;
  if ( !battleValueIdInput
    || (value = UIInput__get_value(battleValueIdInput, 0),
        System_Int32__TryParse(value, &result[1], 0),
        (battleValueIdInput = this->fields.battleValueNumInput) == 0) )
  {
    sub_21FFECC(battleValueIdInput, method);
  }
  v5 = UIInput__get_value(battleValueIdInput, 0);
  System_Int32__TryParse(v5, result, 0);
  ActionExtensions__Call(this->fields.onSubmitCallback, 0);
}