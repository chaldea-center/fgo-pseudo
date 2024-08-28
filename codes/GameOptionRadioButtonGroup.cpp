void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4A04222 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo, v3);
    byte_4A04222 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v4;
  sub_1B68678(&this->fields.radioButtonList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t v7; // w20
  UnityEngine_Object_o *Label; // x21

  if ( (byte_4A0421F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&string_TypeInfo, v5);
    byte_4A0421F = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_15:
    sub_1B68930(radioButtonList, method);
  v7 = 0;
  while ( v7 < radioButtonList->fields._size )
  {
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v7,
                                                                     (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
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
                                                                       v7,
                                                                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
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
    ++v7;
    if ( !radioButtonList )
      goto LABEL_15;
  }
}


void __fastcall GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A04220 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v5);
    byte_4A04220 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1B68930(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    radioButtonList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B68930(0LL, v7);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v9.fields._current, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__Init(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  this->fields.selectedCallback = 0LL;
  sub_1B68678(&this->fields.selectedCallback);
  GameOptionRadioButtonGroup__ClearLabels(this, v3);
  GameOptionRadioButtonGroup__DeselectAll(this, v4);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x20
  System_Predicate_object__o *v12; // x22
  int32_t Index; // w1
  const MethodInfo *v14; // x3

  if ( (byte_4A0421D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__, selectedButton);
    sub_1B686D4(&System_Predicate_GameOptionToggleButton__TypeInfo, v5);
    sub_1B686D4(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__, v6);
    sub_1B686D4(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, v7);
    byte_4A0421D = 1;
  }
  v8 = (Il2CppObject *)sub_1B68920(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8
    || (v8[1].klass = (Il2CppClass *)selectedButton,
        sub_1B68678(&v8[1]),
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList,
        v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_GameOptionToggleButton__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          v8,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          0LL),
        !radioButtonList) )
  {
    sub_1B68930(v9, v10);
  }
  Index = System_Collections_Generic_List_object___FindIndex(
            radioButtonList,
            (System_Predicate_T__o *)v12,
            (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t size; // w8
  int32_t v11; // w22
  const MethodInfo *v12; // x2

  if ( (byte_4A0421C & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v8);
    byte_4A0421C = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_13;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         radioButtonList,
                                                                         v11,
                                                                         (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
        if ( !radioButtonList )
          break;
        GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)radioButtonList, index == v11, v12);
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        if ( ++v11 >= radioButtonList->fields._size )
          goto LABEL_10;
      }
LABEL_13:
      sub_1B68930(radioButtonList, *(_QWORD *)&index);
    }
LABEL_10:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.selectedCallback,
        index,
        (const MethodInfo_2DA12B8 *)Method_ActionExtensions_Call_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  bool v9; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A04221 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, isEnable);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v7);
    byte_4A04221 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1B68930(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    radioButtonList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B68930(0LL, v10);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v12.fields._current, v9, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__SetButtonSelectedCallback(
        GameOptionRadioButtonGroup_o *this,
        System_Action_int__o *selectedCallback,
        const MethodInfo *method)
{
  this->fields.selectedCallback = selectedCallback;
  sub_1B68678(&this->fields.selectedCallback);
}


void __fastcall GameOptionRadioButtonGroup__SetLabels(
        GameOptionRadioButtonGroup_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  signed __int64 v8; // x21
  UnityEngine_Object_o *Label; // x22

  if ( (byte_4A0421E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, texts);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    byte_4A0421E = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_18:
    sub_1B68930(radioButtonList, texts);
  v8 = 0LL;
  while ( v8 < radioButtonList->fields._size )
  {
    if ( !texts )
      goto LABEL_18;
    if ( v8 >= (int)texts->max_length )
      break;
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v8,
                                                                     (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
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
                                                                       v8,
                                                                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       (const MethodInfo *)texts);
      if ( v8 >= (unsigned __int64)texts->max_length )
        sub_1B68938(radioButtonList, texts);
      if ( !radioButtonList )
        goto LABEL_18;
      UILabel__set_text((UILabel_o *)radioButtonList, texts->m_Items[v8], 0LL);
    }
    radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
    ++v8;
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
  if ( (byte_4A04223 & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, x);
    byte_4A04223 = 1;
  }
  if ( !x )
    sub_1B68930(this, x);
  Button = GameOptionToggleButton__get_Button(x, (const MethodInfo *)x);
  selectedButton = (UnityEngine_Object_o *)v4->fields.selectedButton;
  v7 = (UnityEngine_Object_o *)Button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(v7, selectedButton, 0LL);
}