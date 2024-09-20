void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4A566DF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
    byte_4A566DF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v3;
  sub_1B88554(&this->fields.radioButtonList, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *Label; // x21

  if ( (byte_4A566DC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A566DC = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_15:
    sub_1B8880C(radioButtonList, method);
  v4 = 0;
  while ( v4 < radioButtonList->fields._size )
  {
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v4,
                                                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_15;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)radioButtonList,
                                      method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v4,
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       method);
      if ( !radioButtonList )
        goto LABEL_15;
      UILabel__set_text((UILabel_o *)radioButtonList, string_TypeInfo->static_fields->Empty, 0LL);
    }
    radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
    ++v4;
    if ( !radioButtonList )
      goto LABEL_15;
  }
}


void __fastcall GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A566DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_4A566DD = 1;
  }
  memset(&v6, 0, sizeof(v6));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    radioButtonList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1B8880C(0LL, v4);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__Init(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  this->fields.selectedCallback = 0LL;
  sub_1B88554(&this->fields.selectedCallback, 0LL);
  GameOptionRadioButtonGroup__ClearLabels(this, v3);
  GameOptionRadioButtonGroup__DeselectAll(this, v4);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x20
  System_Predicate_object__o *v9; // x22
  int32_t Index; // w1
  const MethodInfo *v11; // x3

  if ( (byte_4A566DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
    sub_1B885B0(&System_Predicate_GameOptionToggleButton__TypeInfo);
    sub_1B885B0(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__);
    sub_1B885B0(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
    byte_4A566DA = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5
    || (v5[1].klass = (Il2CppClass *)selectedButton,
        sub_1B88554(&v5[1], selectedButton),
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_GameOptionToggleButton__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          v5,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          0LL),
        !radioButtonList) )
  {
    sub_1B8880C(v6, v7);
  }
  Index = System_Collections_Generic_List_object___FindIndex(
            radioButtonList,
            (System_Predicate_T__o *)v9,
            (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t size; // w8
  int32_t v9; // w22
  const MethodInfo *v10; // x2

  if ( (byte_4A566D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    byte_4A566D9 = 1;
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
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
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
      sub_1B8880C(radioButtonList, *(_QWORD *)&index);
    }
LABEL_10:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.selectedCallback,
        index,
        (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  bool v6; // w19
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A566DE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_4A566DE = 1;
  }
  memset(&v9, 0, sizeof(v9));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1B8880C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    radioButtonList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v7);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v9.fields._current, v6, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__SetButtonSelectedCallback(
        GameOptionRadioButtonGroup_o *this,
        System_Action_int__o *selectedCallback,
        const MethodInfo *method)
{
  this->fields.selectedCallback = selectedCallback;
  sub_1B88554(&this->fields.selectedCallback, selectedCallback);
}


void __fastcall GameOptionRadioButtonGroup__SetLabels(
        GameOptionRadioButtonGroup_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  signed __int64 v6; // x21
  UnityEngine_Object_o *Label; // x22

  if ( (byte_4A566DB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A566DB = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_18:
    sub_1B8880C(radioButtonList, texts);
  v6 = 0LL;
  while ( v6 < radioButtonList->fields._size )
  {
    if ( !texts )
      goto LABEL_18;
    if ( v6 >= (int)texts->max_length )
      break;
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v6,
                                                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_18;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)radioButtonList,
                                      (const MethodInfo *)texts);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v6,
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       (const MethodInfo *)texts);
      if ( v6 >= (unsigned __int64)texts->max_length )
        sub_1B88814(radioButtonList, texts);
      if ( !radioButtonList )
        goto LABEL_18;
      UILabel__set_text((UILabel_o *)radioButtonList, texts->m_Items[v6], 0LL);
    }
    radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
    ++v6;
    if ( !radioButtonList )
      goto LABEL_18;
  }
}


void __fastcall GameOptionRadioButtonGroup___c__DisplayClass4_0___ctor(
        GameOptionRadioButtonGroup___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GameOptionRadioButtonGroup___c__DisplayClass4_0___SelectButton_b__0(
        GameOptionRadioButtonGroup___c__DisplayClass4_0_o *this,
        GameOptionToggleButton_o *x,
        const MethodInfo *method)
{
  GameOptionRadioButtonGroup___c__DisplayClass4_0_o *v4; // x19
  UIButton_o *Button; // x0
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v7; // x20

  v4 = this;
  if ( (byte_4A566E0 & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A566E0 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  Button = GameOptionToggleButton__get_Button(x, (const MethodInfo *)x);
  selectedButton = (UnityEngine_Object_o *)v4->fields.selectedButton;
  v7 = (UnityEngine_Object_o *)Button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(v7, selectedButton, 0LL);
}