void GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3DFD5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
    byte_4C3DFD5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.radioButtonList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *Label; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4C3DFD2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    byte_4C3DFD2 = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_15:
    sub_1C372B4(radioButtonList);
  v4 = 0;
  while ( v4 < radioButtonList->fields._size )
  {
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v4,
                                                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_15;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label((GameOptionToggleButton_o *)radioButtonList, v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(Label, 0, 0) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v4,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       v7);
      if ( !radioButtonList )
        goto LABEL_15;
      UILabel__set_text((UILabel_o *)radioButtonList, string_TypeInfo->static_fields->Empty, 0);
    }
    radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
    ++v4;
    if ( !radioButtonList )
      goto LABEL_15;
  }
}


void GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3DFD3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_4C3DFD3 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    radioButtonList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v5.fields._current, 0, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void GameOptionRadioButtonGroup__Init(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.selectedCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedCallback, 0, v2, v3);
  GameOptionRadioButtonGroup__ClearLabels(this, v5);
  GameOptionRadioButtonGroup__DeselectAll(this, v6);
}


void GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *radioButtonList; // x20
  System_Predicate_object__o *v10; // x22
  int32_t Index; // w1
  const MethodInfo *v12; // x3

  if ( (byte_4C3DFD0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
    sub_1C37058(&System_Predicate_GameOptionToggleButton__TypeInfo);
    sub_1C37058(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__);
    sub_1C37058(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
    byte_4C3DFD0 = 1;
  }
  v5 = sub_1C372A4(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = selectedButton,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)selectedButton, v7, v8),
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList,
        v10 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_GameOptionToggleButton__TypeInfo),
        System_Predicate_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          0),
        !radioButtonList) )
  {
    sub_1C372B4(v6);
  }
  Index = System_Collections_Generic_List_object___FindIndex(
            radioButtonList,
            (System_Predicate_T__o *)v10,
            (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v12);
}


void GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t size; // w8
  int32_t v9; // w22
  const MethodInfo *v10; // x2

  if ( (byte_4C3DFCF & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    byte_4C3DFCF = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_13;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         radioButtonList,
                                                                         v9,
                                                                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
        if ( !radioButtonList )
          break;
        GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)radioButtonList, index == v9, v10);
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        if ( ++v9 >= radioButtonList->fields._size )
          goto LABEL_10;
      }
LABEL_13:
      sub_1C372B4(radioButtonList);
    }
LABEL_10:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.selectedCallback,
        index,
        (const MethodInfo_30344A8 *)Method_ActionExtensions_Call_int___);
  }
}


void GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  bool v6; // w19
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3DFD4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_4C3DFD4 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    radioButtonList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C372B4(0);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v8.fields._current, v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void GameOptionRadioButtonGroup__SetButtonSelectedCallback(
        GameOptionRadioButtonGroup_o *this,
        System_Action_int__o *selectedCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selectedCallback = selectedCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedCallback, (int32_t)selectedCallback, (int32_t)method, v3);
}


void GameOptionRadioButtonGroup__SetLabels(
        GameOptionRadioButtonGroup_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  signed __int64 v6; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Label; // x22
  const MethodInfo *v9; // x1

  if ( (byte_4C3DFD1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFD1 = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_18:
    sub_1C372B4(radioButtonList);
  v6 = 0;
  while ( v6 < radioButtonList->fields._size )
  {
    if ( !texts )
      goto LABEL_18;
    if ( v6 >= SLODWORD(texts->max_length) )
      break;
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v6,
                                                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_18;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label((GameOptionToggleButton_o *)radioButtonList, v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(Label, 0, 0) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v6,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       v9);
      if ( v6 >= (unsigned __int64)LODWORD(texts->max_length) )
        sub_1C372BC(radioButtonList);
      if ( !radioButtonList )
        goto LABEL_18;
      UILabel__set_text((UILabel_o *)radioButtonList, texts->m_Items[v6], 0);
    }
    radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
    ++v6;
    if ( !radioButtonList )
      goto LABEL_18;
  }
}


void GameOptionRadioButtonGroup___c__DisplayClass4_0___ctor(
        GameOptionRadioButtonGroup___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GameOptionRadioButtonGroup___c__DisplayClass4_0___SelectButton_b__0(
        GameOptionRadioButtonGroup___c__DisplayClass4_0_o *this,
        GameOptionToggleButton_o *x,
        const MethodInfo *method)
{
  GameOptionRadioButtonGroup___c__DisplayClass4_0_o *v4; // x19
  UIButton_o *Button; // x0
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v7; // x20

  v4 = this;
  if ( (byte_4C3DFD6 & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFD6 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  Button = GameOptionToggleButton__get_Button(x, (const MethodInfo *)x);
  selectedButton = (UnityEngine_Object_o *)v4->fields.selectedButton;
  v7 = (UnityEngine_Object_o *)Button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(v7, selectedButton, 0);
}