void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B3B6B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
    byte_42B3B6B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameOptionToggleButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.radioButtonList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  GameOptionRadioButtonGroup_o *v2; // x19
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  __int64 v4; // x21
  int size; // w8
  unsigned int v6; // w24
  UnityEngine_Object_o *Label; // x20
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v8; // x20

  v2 = this;
  if ( (byte_42B3B68 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (GameOptionRadioButtonGroup_o *)sub_B52984(&string_TypeInfo);
    byte_42B3B68 = 1;
  }
  radioButtonList = v2->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_20:
    sub_B52A5C(this, method);
  v4 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v6 = v4 - 4;
    if ( (int)v4 - 4 >= size )
      break;
    if ( size <= v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v4);
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
      v8 = v2->fields.radioButtonList;
      if ( !v8 )
        goto LABEL_20;
      if ( v8->fields._size <= v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&v8->fields._items->obj.klass + v4);
      if ( !this )
        goto LABEL_20;
      this = (GameOptionRadioButtonGroup_o *)GameOptionToggleButton__get_Label((GameOptionToggleButton_o *)this, method);
      if ( !this )
        goto LABEL_20;
      UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
    }
    radioButtonList = v2->fields.radioButtonList;
    ++v4;
    if ( !radioButtonList )
      goto LABEL_20;
  }
}


void __fastcall GameOptionRadioButtonGroup__DeselectAll(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B3B69 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_42B3B69 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v4);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v6.fields.current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.selectedCallback, 0LL, v2, v3, v4, v5, v6, v7);
  GameOptionRadioButtonGroup__ClearLabels(this, v9);
  GameOptionRadioButtonGroup__DeselectAll(this, v10);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x22
  int32_t Index; // w1
  const MethodInfo *v17; // x3

  if ( (byte_42B3B66 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
    sub_B52984(&Method_System_Predicate_GameOptionToggleButton___ctor__);
    sub_B52984(&System_Predicate_GameOptionToggleButton__TypeInfo);
    sub_B52984(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__);
    sub_B52984(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
    byte_42B3B66 = 1;
  }
  v5 = sub_B52A54(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo);
  GameOptionRadioButtonGroup___c__DisplayClass4_0___ctor((GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = selectedButton,
        sub_B52920(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)selectedButton,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        radioButtonList = this->fields.radioButtonList,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_GameOptionToggleButton__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_GameOptionToggleButton___ctor__),
        !radioButtonList) )
  {
    sub_B52A5C(v6, v7);
  }
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)radioButtonList,
            (System_Predicate_T__o *)v15,
            (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  GameOptionRadioButtonGroup_o *v6; // x21
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x22
  int32_t size; // w8
  unsigned int v9; // w23

  v6 = this;
  if ( (byte_42B3B65 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_int___);
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    this = (GameOptionRadioButtonGroup_o *)sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    byte_42B3B65 = 1;
  }
  radioButtonList = v6->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_15;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( size <= v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        this = (GameOptionRadioButtonGroup_o *)radioButtonList->fields._items->m_Items[v9];
        if ( !this )
          break;
        GameOptionToggleButton__ChangeSelectedState(
          (GameOptionToggleButton_o *)this,
          index == v9,
          (const MethodInfo *)needNotify);
        radioButtonList = v6->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        size = radioButtonList->fields._size;
        if ( (int)++v9 >= size )
          goto LABEL_12;
      }
LABEL_15:
      sub_B52A5C(this, *(_QWORD *)&index);
    }
LABEL_12:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)v6->fields.selectedCallback,
        index,
        (const MethodInfo_2D61644 *)Method_ActionExtensions_Call_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SetButtonEnableWithCollider(
        GameOptionRadioButtonGroup_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x0
  bool v6; // w19
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B3B6A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
    byte_42B3B6A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B52A5C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B52A5C(0LL, v7);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v9.fields.current, v6, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
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
  sub_B52920(
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
  GameOptionRadioButtonGroup_o *v4; // x20
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x21
  __int64 v6; // x22
  int size; // w8
  il2cpp_array_size_t v8; // w24
  UnityEngine_Object_o *Label; // x21
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v10; // x21
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42B3B67 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__);
    this = (GameOptionRadioButtonGroup_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3B67 = 1;
  }
  radioButtonList = v4->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_23:
    sub_B52A5C(this, texts);
  v6 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
      break;
    if ( !texts )
      goto LABEL_23;
    if ( (signed int)v8 >= (signed int)texts->max_length )
      break;
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v6);
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
      v10 = v4->fields.radioButtonList;
      if ( !v10 )
        goto LABEL_23;
      if ( v10->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&v10->fields._items->obj.klass + v6);
      if ( !this )
        goto LABEL_23;
      this = (GameOptionRadioButtonGroup_o *)GameOptionToggleButton__get_Label(
                                               (GameOptionToggleButton_o *)this,
                                               (const MethodInfo *)texts);
      if ( v8 >= texts->max_length )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      if ( !this )
        goto LABEL_23;
      UILabel__set_text((UILabel_o *)this, *((System_String_o **)&texts->obj.klass + v6), 0LL);
    }
    radioButtonList = v4->fields.radioButtonList;
    ++v6;
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
  GameOptionRadioButtonGroup___c__DisplayClass4_0_o *v4; // x19
  UIButton_o *Button; // x0
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v7; // x20

  v4 = this;
  if ( (byte_42ACE3C & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACE3C = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  Button = GameOptionToggleButton__get_Button(x, 0LL);
  selectedButton = (UnityEngine_Object_o *)v4->fields.selectedButton;
  v7 = (UnityEngine_Object_o *)Button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(v7, selectedButton, 0LL);
}