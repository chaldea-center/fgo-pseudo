void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B11601 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo, v5, v6);
    byte_4B11601 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameOptionToggleButton__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v7;
  sub_1BCA784(&this->fields.radioButtonList, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t v11; // w20
  __int64 v12; // x1
  UnityEngine_Object_o *Label; // x21

  if ( (byte_4B115FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    byte_4B115FE = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_15:
    sub_1BCAA3C(radioButtonList, method);
  v11 = 0;
  while ( v11 < radioButtonList->fields._size )
  {
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v11,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_15;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)radioButtonList,
                                      method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_15;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v11,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
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
    ++v11;
    if ( !radioButtonList )
      goto LABEL_15;
  }
}


void __fastcall GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B115FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v8, v9);
    byte_4B115FF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    radioButtonList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v11);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v13.fields._current, 0, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__Init(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  this->fields.selectedCallback = 0LL;
  sub_1BCA784(&this->fields.selectedCallback, 0LL);
  GameOptionRadioButtonGroup__ClearLabels(this, v3);
  GameOptionRadioButtonGroup__DeselectAll(this, v4);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *radioButtonList; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Predicate_object__o *v19; // x22
  int32_t Index; // w1
  const MethodInfo *v21; // x3

  if ( (byte_4B115FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__, selectedButton, method);
    sub_1BCA7E0(&System_Predicate_GameOptionToggleButton__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__, v8, v9);
    sub_1BCA7E0(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, v10, v11);
    byte_4B115FC = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(
                          GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo,
                          selectedButton,
                          method,
                          v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12
    || (v12[1].klass = (Il2CppClass *)selectedButton,
        sub_1BCA784(&v12[1], selectedButton),
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList,
        v19 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_GameOptionToggleButton__TypeInfo,
                                              v16,
                                              v17,
                                              v18),
        System_Predicate_object____ctor(
          v19,
          v12,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          0LL),
        !radioButtonList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  Index = System_Collections_Generic_List_object___FindIndex(
            radioButtonList,
            (System_Predicate_T__o *)v19,
            (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  int32_t size; // w8
  int32_t v13; // w22
  const MethodInfo *v14; // x2

  if ( (byte_4B115FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index, needNotify);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v9, v10);
    byte_4B115FB = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_13;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         radioButtonList,
                                                                         v13,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
        if ( !radioButtonList )
          break;
        GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)radioButtonList, index == v13, v14);
        radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        if ( ++v13 >= radioButtonList->fields._size )
          goto LABEL_10;
      }
LABEL_13:
      sub_1BCAA3C(radioButtonList, *(_QWORD *)&index);
    }
LABEL_10:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.selectedCallback,
        index,
        (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  bool v12; // w19
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11600 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, isEnable, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v9, v10);
    byte_4B11600 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_1BCAA3C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    radioButtonList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v12 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v13);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v15.fields._current, v12, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__SetButtonSelectedCallback(
        GameOptionRadioButtonGroup_o *this,
        System_Action_int__o *selectedCallback,
        const MethodInfo *method)
{
  this->fields.selectedCallback = selectedCallback;
  sub_1BCA784(&this->fields.selectedCallback, selectedCallback);
}


void __fastcall GameOptionRadioButtonGroup__SetLabels(
        GameOptionRadioButtonGroup_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *radioButtonList; // x0
  signed __int64 v10; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *Label; // x22

  if ( (byte_4B115FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, texts, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B115FD = 1;
  }
  radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_18:
    sub_1BCAA3C(radioButtonList, texts);
  v10 = 0LL;
  while ( v10 < radioButtonList->fields._size )
  {
    if ( !texts )
      goto LABEL_18;
    if ( v10 >= (int)texts->max_length )
      break;
    radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     radioButtonList,
                                                                     v10,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    if ( !radioButtonList )
      goto LABEL_18;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)radioButtonList,
                                      (const MethodInfo *)texts);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
    {
      radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       radioButtonList,
                                                                       v10,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
      if ( !radioButtonList )
        goto LABEL_18;
      radioButtonList = (System_Collections_Generic_List_object__o *)GameOptionToggleButton__get_Label(
                                                                       (GameOptionToggleButton_o *)radioButtonList,
                                                                       (const MethodInfo *)texts);
      if ( v10 >= (unsigned __int64)texts->max_length )
        sub_1BCAA44(radioButtonList, texts);
      if ( !radioButtonList )
        goto LABEL_18;
      UILabel__set_text((UILabel_o *)radioButtonList, texts->m_Items[v10], 0LL);
    }
    radioButtonList = (System_Collections_Generic_List_object__o *)this->fields.radioButtonList;
    ++v10;
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
  __int64 v6; // x1
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v8; // x20

  v4 = this;
  if ( (byte_4B11602 & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B11602 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  Button = GameOptionToggleButton__get_Button(x, (const MethodInfo *)x);
  selectedButton = (UnityEngine_Object_o *)v4->fields.selectedButton;
  v8 = (UnityEngine_Object_o *)Button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  return UnityEngine_Object__op_Equality(v8, selectedButton, 0LL);
}