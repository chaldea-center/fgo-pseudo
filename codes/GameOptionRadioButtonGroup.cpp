void GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B56C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
    byte_596B56C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.radioButtonList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t v4; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *Label; // x21

  if ( (byte_596B569 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B569 = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_15:
    sub_2213CDC(radioButtonList, method);
  v4 = 0;
  while ( v4 < radioButtonList->fields._size )
  {
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v4,
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_15;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)radioButtonList,
                                      method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(Label, 0, 0) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v4,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       method);
      if ( !radioButtonList )
        goto LABEL_15;
      UILabel__set_text((UILabel_o *)radioButtonList, **(System_String_o ***)(qword_5984390 + 184), 0);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B56A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_596B56A = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  memset(&v6, 0, sizeof(v6));
  if ( !radioButtonList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    radioButtonList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_2213CDC(0, v4);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void GameOptionRadioButtonGroup__Init(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.selectedCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectedCallback, 0, v2, v3, v4, v5, v6, v7);
  GameOptionRadioButtonGroup__ClearLabels(this, v9);
  GameOptionRadioButtonGroup__DeselectAll(this, v10);
}


void GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *radioButtonList; // x20
  System_Predicate_object__o *v15; // x22
  int32_t Index; // w1
  const MethodInfo *v17; // x3

  if ( (byte_596B567 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
    sub_2213A60(&System_Predicate_GameOptionToggleButton__TypeInfo);
    sub_2213A60(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__);
    sub_2213A60(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
    byte_596B567 = 1;
  }
  v5 = sub_2213CCC(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = selectedButton,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)selectedButton, v8, v9, v10, v11, v12, v13),
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList,
        v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_GameOptionToggleButton__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          0),
        !radioButtonList) )
  {
    sub_2213CDC(v6, v7);
  }
  Index = System_Collections_Generic_List_object___FindIndex(
            radioButtonList,
            (System_Predicate_T__o *)v15,
            (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v17);
}


// local variable allocation has failed, the output may be wrong!
void GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t v8; // w22
  const MethodInfo *v9; // x2

  if ( (byte_596B566 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    byte_596B566 = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_9:
    sub_2213CDC(radioButtonList, *(_QWORD *)&index);
  if ( radioButtonList->fields._size > index )
  {
    v8 = 0;
    while ( v8 < radioButtonList->fields._size )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v8,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( radioButtonList )
      {
        GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)radioButtonList, index == v8, v9);
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
        ++v8;
        if ( radioButtonList )
          continue;
      }
      goto LABEL_9;
    }
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.selectedCallback,
        index,
        (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B56B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_596B56B = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  memset(&v8, 0, sizeof(v8));
  if ( !radioButtonList )
    sub_2213CDC(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    radioButtonList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v6);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v8.fields._current, isEnable, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void GameOptionRadioButtonGroup__SetButtonSelectedCallback(
        GameOptionRadioButtonGroup_o *this,
        System_Action_int__o *selectedCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.selectedCallback = selectedCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedCallback,
    (int32_t)selectedCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GameOptionRadioButtonGroup__SetLabels(
        GameOptionRadioButtonGroup_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  signed __int64 v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *Label; // x22

  if ( (byte_596B568 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B568 = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_18:
    sub_2213CDC(radioButtonList, texts);
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
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_18;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)radioButtonList,
                                      (const MethodInfo *)texts);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(Label, 0, 0) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v6,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       (const MethodInfo *)texts);
      if ( v6 >= (unsigned __int64)LODWORD(texts->max_length) )
        sub_2213CE4(radioButtonList);
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v9; // x20

  v4 = this;
  if ( (byte_596B56D & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B56D = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  Button = GameOptionToggleButton__get_Button(x, (const MethodInfo *)x);
  selectedButton = (UnityEngine_Object_o *)v4->fields.selectedButton;
  v9 = (UnityEngine_Object_o *)Button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  return UnityEngine_Object__op_Equality(v9, selectedButton, 0);
}