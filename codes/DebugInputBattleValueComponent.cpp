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
    sub_1CE6958(debugMenuTran, method);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UIToggle_array *overwriteToggleList; // x8
  int max_length; // w8
  DebugInputBattleValueComponent_o *v12; // x19
  int v13; // w9
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UIToggle_array *v26; // x21
  int v27; // w8
  __int64 v28; // x22
  char v29; // w9
  UIToggle_o *v30; // x20
  UIInput_o *battleValueIdInput; // x20
  UIInput_o *battleValueNumInput; // x20
  struct UIInput_o *v33; // x8
  struct UIInput_o *v34; // x9
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  overwriteToggleList = this->fields.overwriteToggleList;
  if ( !overwriteToggleList )
    goto LABEL_20;
  max_length = overwriteToggleList->max_length;
  v12 = this;
  v13 = -1;
  do
    ++v13;
  while ( v13 < max_length );
  this->fields.data = data;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (int32_t)debugMenuTran,
    (int32_t)onSubmitCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v12->fields.debugMenuTran = debugMenuTran;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v12->fields.debugMenuTran,
    (int32_t)debugMenuTran,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v12->fields.onSubmitCallback = onSubmitCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v12->fields.onSubmitCallback,
    (int32_t)onSubmitCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this = (DebugInputBattleValueComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
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
  if ( v12->fields.isFirstOpen )
  {
    v26 = v12->fields.overwriteToggleList;
    v12->fields.isFirstOpen = 0;
    if ( !v26 )
      goto LABEL_20;
    v27 = v26->max_length;
    if ( v27 >= 1 )
    {
      v28 = 0;
      v29 = 1;
      while ( 1 )
      {
        if ( (unsigned int)v28 >= v27 )
          sub_1CE6960(this);
        v30 = v26->m_Items[v28];
        if ( !v30 )
          break;
        UIToggle__set_value(v26->m_Items[v28++], v29 & 1, 0);
        v30->fields.group = 234;
        v35 = v28;
        v27 = v26->max_length;
        v29 = 0;
        if ( (int)v28 >= v27 )
          goto LABEL_14;
      }
LABEL_20:
      sub_1CE6958(this, data);
    }
LABEL_14:
    battleValueIdInput = v12->fields.battleValueIdInput;
    v35 = 1;
    this = (DebugInputBattleValueComponent_o *)System_Int32__ToString((int32_t)&v35, 0);
    if ( !battleValueIdInput )
      goto LABEL_20;
    UIInput__set_value(battleValueIdInput, (System_String_o *)this, 0);
    battleValueNumInput = v12->fields.battleValueNumInput;
    v35 = 100;
    this = (DebugInputBattleValueComponent_o *)System_Int32__ToString((int32_t)&v35, 0);
    if ( !battleValueNumInput )
      goto LABEL_20;
    UIInput__set_value(battleValueNumInput, (System_String_o *)this, 0);
    v33 = v12->fields.battleValueNumInput;
    if ( !v33 )
      goto LABEL_20;
    v34 = v12->fields.battleValueIdInput;
    v33->fields.validation = 1;
    if ( !v34 )
      goto LABEL_20;
    v34->fields.validation = 1;
    v33->fields.keyboardType = 4;
    v34->fields.keyboardType = 4;
  }
}


void DebugInputBattleValueComponent__Submit(DebugInputBattleValueComponent_o *this, const MethodInfo *method)
{
  UIInput_o *battleValueIdInput; // x0
  System_String_o *value; // x0
  System_String_o *v5; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)result = 0;
  battleValueIdInput = this->fields.battleValueIdInput;
  if ( !battleValueIdInput
    || (value = UIInput__get_value(battleValueIdInput, 0),
        System_Int32__TryParse(value, &result[1], 0),
        (battleValueIdInput = this->fields.battleValueNumInput) == 0) )
  {
    sub_1CE6958(battleValueIdInput, method);
  }
  v5 = UIInput__get_value(battleValueIdInput, 0);
  System_Int32__TryParse(v5, result, 0);
  ActionExtensions__Call(this->fields.onSubmitCallback, 0);
}