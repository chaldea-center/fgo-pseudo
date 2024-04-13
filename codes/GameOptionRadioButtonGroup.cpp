void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC65B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo, v5, v6, v7);
    byte_42EC65B = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.radioButtonList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  GameOptionRadioButtonGroup_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  __int64 v15; // x21
  int size; // w8
  unsigned int v17; // w24
  UnityEngine_Object_o *Label; // x20
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v19; // x20

  v4 = this;
  if ( (byte_42EC658 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (GameOptionRadioButtonGroup_o *)sub_B5D5C4(&string_TypeInfo, v11, v12, v13);
    byte_42EC658 = 1;
  }
  radioButtonList = v4->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_20:
    sub_B5D69C(this, method);
  v15 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v17 = v15 - 4;
    if ( (int)v15 - 4 >= size )
      break;
    if ( size <= v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v15);
    if ( !this )
      goto LABEL_20;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label((GameOptionToggleButton_o *)this, method);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (GameOptionRadioButtonGroup_o *)UnityEngine_Object__op_Inequality(Label, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v4->fields.radioButtonList;
      if ( !v19 )
        goto LABEL_20;
      if ( v19->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&v19->fields._items->obj.klass + v15);
      if ( !this )
        goto LABEL_20;
      this = (GameOptionRadioButtonGroup_o *)GameOptionToggleButton__get_Label((GameOptionToggleButton_o *)this, method);
      if ( !this )
        goto LABEL_20;
      UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
    }
    radioButtonList = v4->fields.radioButtonList;
    ++v15;
    if ( !radioButtonList )
      goto LABEL_20;
  }
}


void __fastcall GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC659 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v11, v12, v13);
    byte_42EC659 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v15);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v17.fields.current, 0, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__Init(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.selectedCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectedCallback, 0LL, v2, v3, v4, v5, v6, v7);
  GameOptionRadioButtonGroup__ClearLabels(this, v9);
  GameOptionRadioButtonGroup__DeselectAll(this, v10);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x22
  int32_t Index; // w1
  const MethodInfo *v30; // x3

  if ( (byte_42EC656 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__,
      (_DWORD)selectedButton,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_GameOptionToggleButton___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_GameOptionToggleButton__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__, v12, v13, v14);
    sub_B5D5C4(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, v15, v16, v17);
    byte_42EC656 = 1;
  }
  v18 = sub_B5D694(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
  GameOptionRadioButtonGroup___c__DisplayClass4_0___ctor((GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = selectedButton,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)selectedButton,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        radioButtonList = this->fields.radioButtonList,
        v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_GameOptionToggleButton__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v28,
          (Il2CppObject *)v18,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_GameOptionToggleButton___ctor__),
        !radioButtonList) )
  {
    sub_B5D69C(v19, v20);
  }
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)radioButtonList,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  GameOptionRadioButtonGroup_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x22
  int32_t size; // w8
  unsigned int v15; // w23

  v6 = this;
  if ( (byte_42EC655 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int___, index, needNotify, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, v7, v8, v9);
    this = (GameOptionRadioButtonGroup_o *)sub_B5D5C4(
                                             &Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__,
                                             v10,
                                             v11,
                                             v12);
    byte_42EC655 = 1;
  }
  radioButtonList = v6->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_15;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (GameOptionRadioButtonGroup_o *)radioButtonList->fields._items->m_Items[v15];
        if ( !this )
          break;
        GameOptionToggleButton__ChangeSelectedState(
          (GameOptionToggleButton_o *)this,
          index == v15,
          (const MethodInfo *)needNotify);
        radioButtonList = v6->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        size = radioButtonList->fields._size;
        if ( (int)++v15 >= size )
          goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(this, *(_QWORD *)&index);
    }
LABEL_12:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)v6->fields.selectedCallback,
        index,
        (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x0
  bool v16; // w19
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC65A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v12, v13, v14);
    byte_42EC65A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B5D69C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v16 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v17);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v19.fields.current, v16, v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
}


void __fastcall GameOptionRadioButtonGroup__SetButtonSelectedCallback(
        GameOptionRadioButtonGroup_o *this,
        System_Action_int__o *selectedCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.selectedCallback = selectedCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectedCallback,
    (System_Int32_array **)selectedCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall GameOptionRadioButtonGroup__SetLabels(
        GameOptionRadioButtonGroup_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GameOptionRadioButtonGroup_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x21
  __int64 v13; // x22
  int size; // w8
  il2cpp_array_size_t v15; // w24
  UnityEngine_Object_o *Label; // x21
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v17; // x21
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42EC657 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__,
      (_DWORD)texts,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v6, v7, v8);
    this = (GameOptionRadioButtonGroup_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EC657 = 1;
  }
  radioButtonList = v5->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_23:
    sub_B5D69C(this, texts);
  v13 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v15 = v13 - 4;
    if ( (int)v13 - 4 >= size )
      break;
    if ( !texts )
      goto LABEL_23;
    if ( (signed int)v15 >= (signed int)texts->max_length )
      break;
    if ( size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v13);
    if ( !this )
      goto LABEL_23;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(
                                      (GameOptionToggleButton_o *)this,
                                      (const MethodInfo *)texts);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (GameOptionRadioButtonGroup_o *)UnityEngine_Object__op_Inequality(Label, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = v5->fields.radioButtonList;
      if ( !v17 )
        goto LABEL_23;
      if ( v17->fields._size <= v15 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&v17->fields._items->obj.klass + v13);
      if ( !this )
        goto LABEL_23;
      this = (GameOptionRadioButtonGroup_o *)GameOptionToggleButton__get_Label(
                                               (GameOptionToggleButton_o *)this,
                                               (const MethodInfo *)texts);
      if ( v15 >= texts->max_length )
      {
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
      }
      if ( !this )
        goto LABEL_23;
      UILabel__set_text((UILabel_o *)this, *((System_String_o **)&texts->obj.klass + v13), 0LL);
    }
    radioButtonList = v5->fields.radioButtonList;
    ++v13;
    if ( !radioButtonList )
      goto LABEL_23;
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
  __int64 v3; // x3
  GameOptionRadioButtonGroup___c__DisplayClass4_0_o *v5; // x19
  UIButton_o *Button; // x0
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v8; // x20

  v5 = this;
  if ( (byte_42E56F4 & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_B5D5C4(
                                                                  &UnityEngine_Object_TypeInfo,
                                                                  (_DWORD)x,
                                                                  (_DWORD)method,
                                                                  v3);
    byte_42E56F4 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  Button = GameOptionToggleButton__get_Button(x, 0LL);
  selectedButton = (UnityEngine_Object_o *)v5->fields.selectedButton;
  v8 = (UnityEngine_Object_o *)Button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(v8, selectedButton, 0LL);
}