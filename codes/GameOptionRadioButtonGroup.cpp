void __fastcall GameOptionRadioButtonGroup___ctor(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42180AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameOptionToggleButton__TypeInfo, v4);
    byte_42180AE = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameOptionToggleButton__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameOptionToggleButton___ctor__);
  this->fields.radioButtonList = (struct System_Collections_Generic_List_GameOptionToggleButton__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.radioButtonList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionRadioButtonGroup__ClearLabels(GameOptionRadioButtonGroup_o *this, const MethodInfo *method)
{
  GameOptionRadioButtonGroup_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  __int64 v7; // x21
  int size; // w8
  unsigned int v9; // w24
  UnityEngine_Object_o *Label; // x20
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v11; // x20

  v2 = this;
  if ( (byte_42180AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (GameOptionRadioButtonGroup_o *)sub_B0D8A4(&string_TypeInfo, v5);
    byte_42180AB = 1;
  }
  radioButtonList = v2->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_20:
    sub_B0D97C(this);
  v7 = 4LL;
  while ( 1 )
  {
    size = radioButtonList->fields._size;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v7);
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
      v11 = v2->fields.radioButtonList;
      if ( !v11 )
        goto LABEL_20;
      if ( v11->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&v11->fields._items->obj.klass + v7);
      if ( !this )
        goto LABEL_20;
      this = (GameOptionRadioButtonGroup_o *)GameOptionToggleButton__get_Label((GameOptionToggleButton_o *)this, method);
      if ( !this )
        goto LABEL_20;
      UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
    }
    radioButtonList = v2->fields.radioButtonList;
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

  if ( (byte_42180AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v5);
    byte_42180AC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    GameOptionToggleButton__ChangeSelectedState((GameOptionToggleButton_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectedCallback, 0LL, v2, v3, v4, v5, v6, v7);
  GameOptionRadioButtonGroup__ClearLabels(this, v9);
  GameOptionRadioButtonGroup__DeselectAll(this, v10);
}


void __fastcall GameOptionRadioButtonGroup__SelectButton(
        GameOptionRadioButtonGroup_o *this,
        UIButton_o *selectedButton,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x22
  int32_t Index; // w1
  const MethodInfo *v22; // x3

  if ( (byte_42180A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__, selectedButton);
    sub_B0D8A4(&Method_System_Predicate_GameOptionToggleButton___ctor__, v5);
    sub_B0D8A4(&System_Predicate_GameOptionToggleButton__TypeInfo, v6);
    sub_B0D8A4(&Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__, v7);
    sub_B0D8A4(&GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, v8);
    byte_42180A9 = 1;
  }
  v9 = sub_B0D974(GameOptionRadioButtonGroup___c__DisplayClass4_0_TypeInfo, selectedButton, method);
  GameOptionRadioButtonGroup___c__DisplayClass4_0___ctor((GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = selectedButton,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)selectedButton,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        radioButtonList = this->fields.radioButtonList,
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_GameOptionToggleButton__TypeInfo,
                                                                         v18,
                                                                         v19),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v9,
          Method_GameOptionRadioButtonGroup___c__DisplayClass4_0__SelectButton_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_GameOptionToggleButton___ctor__),
        !radioButtonList) )
  {
    sub_B0D97C(v10);
  }
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)radioButtonList,
            (System_Predicate_T__o *)v20,
            (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_GameOptionToggleButton__FindIndex__);
  GameOptionRadioButtonGroup__SelectButtonByIndex(this, Index, 1, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionRadioButtonGroup__SelectButtonByIndex(
        GameOptionRadioButtonGroup_o *this,
        int32_t index,
        bool needNotify,
        const MethodInfo *method)
{
  GameOptionRadioButtonGroup_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x22
  int32_t size; // w8
  unsigned int v11; // w23

  v6 = this;
  if ( (byte_42180A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, v7);
    this = (GameOptionRadioButtonGroup_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__,
                                             v8);
    byte_42180A8 = 1;
  }
  radioButtonList = v6->fields.radioButtonList;
  if ( !radioButtonList )
    goto LABEL_15;
  size = radioButtonList->fields._size;
  if ( size > index )
  {
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( size <= v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (GameOptionRadioButtonGroup_o *)radioButtonList->fields._items->m_Items[v11];
        if ( !this )
          break;
        GameOptionToggleButton__ChangeSelectedState(
          (GameOptionToggleButton_o *)this,
          index == v11,
          (const MethodInfo *)needNotify);
        radioButtonList = v6->fields.radioButtonList;
        if ( !radioButtonList )
          break;
        size = radioButtonList->fields._size;
        if ( (int)++v11 >= size )
          goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(this);
    }
LABEL_12:
    if ( needNotify )
      ActionExtensions__Call_int_(
        (System_Action_T__o *)v6->fields.selectedCallback,
        index,
        (const MethodInfo_2D96680 *)Method_ActionExtensions_Call_int___);
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
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x0
  bool v9; // w19
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42180AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__, isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__, v7);
    byte_42180AD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  radioButtonList = this->fields.radioButtonList;
  if ( !radioButtonList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)radioButtonList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameOptionToggleButton__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B0D97C(0LL);
    GameOptionToggleButton__SetButtonEnableWithCollider((GameOptionToggleButton_o *)v11.fields.current, v9, v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameOptionToggleButton__Dispose__);
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
  sub_B0D840(
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameOptionToggleButton__o *radioButtonList; // x21
  __int64 v8; // x22
  int size; // w8
  il2cpp_array_size_t v10; // w24
  UnityEngine_Object_o *Label; // x21
  struct System_Collections_Generic_List_GameOptionToggleButton__o *v12; // x21
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42180AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Count__, texts);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameOptionToggleButton__get_Item__, v5);
    this = (GameOptionRadioButtonGroup_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42180AA = 1;
  }
  radioButtonList = v4->fields.radioButtonList;
  if ( !radioButtonList )
LABEL_23:
    sub_B0D97C(this);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&radioButtonList->fields._items->obj.klass + v8);
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
      v12 = v4->fields.radioButtonList;
      if ( !v12 )
        goto LABEL_23;
      if ( v12->fields._size <= v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (GameOptionRadioButtonGroup_o *)*((_QWORD *)&v12->fields._items->obj.klass + v8);
      if ( !this )
        goto LABEL_23;
      this = (GameOptionRadioButtonGroup_o *)GameOptionToggleButton__get_Label(
                                               (GameOptionToggleButton_o *)this,
                                               (const MethodInfo *)texts);
      if ( v10 >= texts->max_length )
      {
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      if ( !this )
        goto LABEL_23;
      UILabel__set_text((UILabel_o *)this, *((System_String_o **)&texts->obj.klass + v8), 0LL);
    }
    radioButtonList = v4->fields.radioButtonList;
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
  GameOptionRadioButtonGroup___c__DisplayClass4_0_o *v4; // x19
  UIButton_o *Button; // x0
  UnityEngine_Object_o *selectedButton; // x19
  UnityEngine_Object_o *v7; // x20

  v4 = this;
  if ( (byte_4210F70 & 1) == 0 )
  {
    this = (GameOptionRadioButtonGroup___c__DisplayClass4_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4210F70 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
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