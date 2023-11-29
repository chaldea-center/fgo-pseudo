void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FF54E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo, v6);
    byte_40FF54E = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameOptionToggleButton__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.radioButtonList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  __int64 v7; // x21
  int size; // w8
  unsigned int v9; // w24
  GameOptionToggleButton_o *v10; // x0
  UnityEngine_Object_o *Label; // x20
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v12; // x20
  GameOptionToggleButton_o *v13; // x0
  UILabel_o *v14; // x0

  if ( (byte_40FF54C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    byte_40FF54C = 1;
  }
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_20:
    sub_B170D4();
  v7 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = (GameOptionToggleButton_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v7);
    if ( !v10 )
      goto LABEL_20;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(v10, method);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
    {
      v12 = this->fields.radioButtonList;
      if ( !v12 )
        goto LABEL_20;
      if ( v12->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = (GameOptionToggleButton_o *)*((_QWORD *)&v12->fields._items->obj.klass + v7);
      if ( !v13 )
        goto LABEL_20;
      v14 = GameOptionToggleButton__get_Label(v13, method);
      if ( !v14 )
        goto LABEL_20;
      UILabel__set_text(v14, string_TypeInfo->static_fields->Empty, 0LL);
    }
    radioButtonList = this->fields.radioButtonList;
    ++v7;
    if ( !radioButtonList )
      goto LABEL_20;
  }
}


void __fastcall GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FF54D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v5);
    byte_40FF54D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectedCallback, 0LL, v2, v3, v4, v5, v6, v7);
  GameOptionRadioButtonGroup__ClearLabels(this, v9);
  GameOptionRadioButtonGroup__DeselectAll(this, v10);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x22
  int32_t Index; // w1
  const MethodInfo *v25; // x2

  if ( (byte_40FF54A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__, selectedButton);
    sub_B16FFC(&Method_System_Predicate_GameOptionToggleButton___ctor__, v7);
    sub_B16FFC(&System_Predicate_GameOptionToggleButton__TypeInfo, v8);
    sub_B16FFC(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__, v9);
    sub_B16FFC(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, v10);
    byte_40FF54A = 1;
  }
  v11 = sub_B170CC(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, selectedButton, method, v3, v4);
  GameOptionRadioButtonGroup___c__DisplayClass4_0___ctor((GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = selectedButton,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)selectedButton,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        radioButtonList = this->fields.radioButtonList,
        v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_GameOptionToggleButton__TypeInfo,
                                                                         v19,
                                                                         v20,
                                                                         v21,
                                                                         v22),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v23,
          (Il2CppObject *)v11,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_GameOptionToggleButton___ctor__),
        !radioButtonList) )
  {
    sub_B170D4();
  }
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)radioButtonList,
            (System_Predicate_T__o *)v23,
            (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x21
  int32_t size; // w8
  unsigned int v9; // w22
  GameOptionToggleButton_o *v10; // x0

  if ( (byte_40FF549 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v6);
    byte_40FF549 = 1;
  }
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_14;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( size <= v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v10 = radioButtonList->fields._items->m_Items[v9];
        if ( !v10 )
          break;
        GameOptionToggleButton__ChangeSelectedState(v10, index == v9, method);
        radioButtonList = this->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        size = radioButtonList->fields._size;
        if ( (int)++v9 >= size )
          goto LABEL_12;
      }
LABEL_14:
      sub_B170D4();
    }
LABEL_12:
    ActionExtensions__Call_int_(
      (System_Action_T__o *)this->fields.selectedCallback,
      index,
      (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
  }
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
  sub_B16F98(
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x21
  __int64 v8; // x22
  int size; // w8
  il2cpp_array_size_t v10; // w24
  GameOptionToggleButton_o *v11; // x0
  UnityEngine_Object_o *Label; // x21
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v13; // x21
  GameOptionToggleButton_o *v14; // x0
  UILabel_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_40FF54B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, texts);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FF54B = 1;
  }
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_23:
    sub_B170D4();
  v8 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= size )
      break;
    if ( !texts )
      goto LABEL_23;
    if ( (signed int)v10 >= (signed int)texts->max_length )
      break;
    if ( size <= v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = (GameOptionToggleButton_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v8);
    if ( !v11 )
      goto LABEL_23;
    Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(v11, (const MethodInfo *)texts);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
    {
      v13 = this->fields.radioButtonList;
      if ( !v13 )
        goto LABEL_23;
      if ( v13->fields._size <= v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v14 = (GameOptionToggleButton_o *)*((_QWORD *)&v13->fields._items->obj.klass + v8);
      if ( !v14 )
        goto LABEL_23;
      v15 = GameOptionToggleButton__get_Label(v14, (const MethodInfo *)texts);
      if ( v10 >= texts->max_length )
      {
        sub_B17100(v15, v16, v17);
        sub_B170A0();
      }
      if ( !v15 )
        goto LABEL_23;
      UILabel__set_text(v15, *((System_String_o **)&texts->obj.klass + v8), 0LL);
    }
    radioButtonList = this->fields.radioButtonList;
    ++v8;
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
  UIButton_o *Button; // x0
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v7; // x20

  if ( (byte_40F68D9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F68D9 = 1;
  }
  if ( !x )
    sub_B170D4();
  Button = GameOptionToggleButton__get_Button(x, 0LL);
  selectedButton = (UnityEngine_Object_o *)this->fields.selectedButton;
  v7 = (UnityEngine_Object_o *)Button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(v7, selectedButton, 0LL);
}