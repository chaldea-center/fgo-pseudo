void __fastcall BattleConcatLabelMessageComponent___ctor(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.bgResizeTarget = 0x40000000003LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleConcatLabelMessageComponent__Adjust(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *bgSprite; // x0
  float v8; // s0
  float v9; // s1
  float v10; // s10
  float v11; // s11
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UISprite_o *v13; // x9
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  unsigned int v16; // w20
  float v17; // s1
  float v18; // s0
  int v19; // s2
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  v20 = BattleConcatLabelMessageComponent__ResizeLabel(this, method);
  x = v20.fields.x;
  y = v20.fields.y;
  BattleConcatLabelMessageComponent__ResizeBg(this, v20, v5);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_12;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bgSprite, 0LL);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_12;
  v10 = v8;
  v11 = v9;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)bgSprite, 0LL);
  v13 = this->fields.bgSprite;
  if ( !v13 )
    goto LABEL_12;
  battleMessages = this->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_12;
  max_length = battleMessages->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v17 = (float)(v11 + (float)((float)(1.0 - pivotOffset.fields.y) * (float)v13->fields.mHeight))
        - (float)((float)((float)v13->fields.mHeight - y) * 0.5);
    v18 = (float)(v10 + (float)((float)((float)v13->fields.mWidth - x) * 0.5))
        - (float)(pivotOffset.fields.x * (float)v13->fields.mWidth);
    v19 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BAB680(bgSprite, v6);
      bgSprite = (UnityEngine_Component_o *)battleMessages->m_Items[v16];
      if ( !bgSprite )
        break;
      *(UnityEngine_Vector3_o *)&v18 = WrapLineMessage__SetOffsetMessage(
                                         (WrapLineMessage_o *)bgSprite,
                                         *(UnityEngine_Vector3_o *)&v18,
                                         0LL);
      max_length = battleMessages->max_length;
      if ( (int)++v16 >= max_length )
        return;
    }
LABEL_12:
    sub_1BAB678(bgSprite, v6);
  }
}


WrapLineMessage_o *__fastcall BattleConcatLabelMessageComponent__CreateMessage(
        BattleConcatLabelMessageComponent_o *this,
        System_String_o *text,
        int32_t wrapWidth,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *Object; // x0
  __int64 v10; // x1
  WrapLineMessage_o *v11; // x21

  if ( (byte_4AB8B8E & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___, text);
    sub_1BAB41C(&StringLiteral_43/*"\n"*/, v7);
    sub_1BAB41C(&StringLiteral_16038/*"[r]"*/, v8);
    byte_4AB8B8E = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.wrapMessagePrefab,
             this->fields.dispMessageRoot,
             0LL,
             0LL);
  if ( !Object
    || (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               Object,
                                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v11 = (WrapLineMessage_o *)Object,
        Object = (UnityEngine_GameObject_o *)System_String__Replace_62067756(
                                               text,
                                               (System_String_o *)StringLiteral_43/*"\n"*/,
                                               (System_String_o *)StringLiteral_16038/*"[r]"*/,
                                               0LL),
        !v11) )
  {
    sub_1BAB678(Object, v10);
  }
  WrapLineMessage__Init(v11, (System_String_o *)Object, 0LL);
  WrapLineMessage__UpdateWrapWidth(v11, (float)wrapWidth, 0LL);
  return v11;
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__GetPrintedLabelSize(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  BattleConcatLabelMessageComponent_o *v2; // x19
  struct WrapLineMessage_array *battleMessages; // x19
  struct UnityEngine_Vector2_StaticFields *static_fields; // x9
  int max_length; // w8
  float y; // s8
  float x; // s9
  int v8; // w20
  UnityEngine_Vector2_o PrintedSize; // kr00_8
  float v10; // s0
  float v11; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = this;
  if ( !byte_4AB058A )
  {
    this = (BattleConcatLabelMessageComponent_o *)sub_1BAB41C(&UnityEngine_Vector2_TypeInfo, method);
    byte_4AB058A = 1;
  }
  battleMessages = v2->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_13;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  max_length = battleMessages->max_length;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1BAB680(this, method);
      this = (BattleConcatLabelMessageComponent_o *)battleMessages->m_Items[v8];
      if ( !this )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0LL);
      max_length = battleMessages->max_length;
      ++v8;
      if ( PrintedSize.fields.y > y )
        y = PrintedSize.fields.y;
      x = x + PrintedSize.fields.x;
      if ( v8 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_1BAB678(this, method);
  }
LABEL_11:
  v10 = x;
  v11 = y;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


void __fastcall BattleConcatLabelMessageComponent__OnDestroy(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleConcatLabelMessageComponent___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  System_Action_object__o *_9__16_0; // x20
  Il2CppObject *v9; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4AB8B90 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_WrapLineMessage__TypeInfo, method);
    sub_1BAB41C(&Method_BasicHelper_ForEach_WrapLineMessage___, v3);
    sub_1BAB41C(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, v4);
    sub_1BAB41C(&BattleConcatLabelMessageComponent___c_TypeInfo, v5);
    byte_4AB8B90 = 1;
  }
  v6 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  if ( !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v6 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v6->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleConcatLabelMessageComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1BAB668(System_Action_WrapLineMessage__TypeInfo);
    System_Action_object____ctor(_9__16_0, v9, Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, 0LL);
    static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_WrapLineMessage__o *)_9__16_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    battleMessages,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_WrapLineMessage___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleConcatLabelMessageComponent__ResizeBg(
        BattleConcatLabelMessageComponent_o *this,
        UnityEngine_Vector2_o printedLabelSize,
        const MethodInfo *method)
{
  int32_t bgResizeTarget; // w8
  float v4; // s1
  float v5; // s8
  UIWidget_o *bgSprite; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  float y; // s0
  UIWidget_o *v11; // x19

  bgResizeTarget = this->fields.bgResizeTarget;
  v5 = v4;
  if ( (bgResizeTarget & 1) != 0 )
  {
    bgSprite = (UIWidget_o *)this->fields.bgSprite;
    v8 = BattleUtility__FloorToInt(
           printedLabelSize.fields.x + (float)(this->fields.paddingLabel.fields.x + this->fields.paddingLabel.fields.x),
           0LL);
    if ( !bgSprite )
      goto LABEL_7;
    UIWidget__set_width(bgSprite, v8, 0LL);
    bgResizeTarget = this->fields.bgResizeTarget;
  }
  if ( (bgResizeTarget & 2) == 0 )
    return;
  y = this->fields.paddingLabel.fields.y;
  v11 = (UIWidget_o *)this->fields.bgSprite;
  v8 = BattleUtility__FloorToInt(v5 + (float)(y + y), 0LL);
  if ( !v11 )
LABEL_7:
    sub_1BAB678(v8, v9);
  UIWidget__set_height(v11, v8, 0LL);
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleConcatLabelMessageComponent___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  System_Func_object__bool__o *_9__13_0; // x21
  Il2CppObject *v14; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x20
  const MethodInfo *v20; // x1
  __int64 v21; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v23; // x1
  UnityEngine_Vector2_o v24; // x0
  UnityEngine_Vector2_o v25; // x1
  float v26; // s0
  System_Action_object__o *v27; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4AB8B8F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_WrapLineMessage__TypeInfo, method);
    sub_1BAB41C(&Method_BasicHelper_ForEach_WrapLineMessage___, v3);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v4);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_WrapLineMessage___, v5);
    sub_1BAB41C(&System_Func_WrapLineMessage__bool__TypeInfo, v6);
    sub_1BAB41C(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__, v7);
    sub_1BAB41C(&Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__, v8);
    sub_1BAB41C(&BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo, v9);
    sub_1BAB41C(&BattleConcatLabelMessageComponent___c_TypeInfo, v10);
    byte_4AB8B8F = 1;
  }
  v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  if ( !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v11->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_WrapLineMessage__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__13_0,
      v14,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__,
      0LL);
    static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__13_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v19, 0LL) )
  {
    v21 = sub_1BAB668(BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v21, 0LL);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v26) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v23);
    if ( !v19 || !v21 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BAB678)(v24, v25);
    *(float *)(v21 + 16) = (float)((float)maxLabelWidth - v26) / (float)(int)v19->max_length;
    v27 = (System_Action_object__o *)sub_1BAB668(System_Action_WrapLineMessage__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)v21,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v19,
      (System_Action_T__o *)v27,
      (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v20);
  y = PrintedLabelSize.fields.y;
  x = PrintedLabelSize.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void __fastcall BattleConcatLabelMessageComponent__SetTexts(
        BattleConcatLabelMessageComponent_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Func_object__object__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1

  if ( (byte_4AB8B8D & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___, texts);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v5);
    sub_1BAB41C(&System_Func_string__WrapLineMessage__TypeInfo, v6);
    sub_1BAB41C(&Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__, v7);
    sub_1BAB41C(&BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo, v8);
    byte_4AB8B8D = 1;
  }
  v9 = sub_1BAB668(BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0LL);
  if ( IsNullOrEmpty )
    return;
  if ( !texts )
LABEL_7:
    sub_1BAB678(IsNullOrEmpty, v11);
  *(_DWORD *)(v9 + 24) = this->fields.maxLabelWidth / (signed int)texts->max_length;
  v14 = (System_Func_object__object__o *)sub_1BAB668(System_Func_string__WrapLineMessage__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__,
    0LL);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_2EF4318 *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  this->fields.battleMessages = (struct WrapLineMessage_array *)v16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleMessages, (int32_t)v16, v17, v18);
  BattleConcatLabelMessageComponent__Adjust(this, v19);
}


int32_t __fastcall BattleConcatLabelMessageComponent__get_MaxLabelWidth(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLabelWidth;
}


void __fastcall BattleConcatLabelMessageComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB8B91 & 1) == 0 )
  {
    sub_1BAB41C(&BattleConcatLabelMessageComponent___c_TypeInfo, v1);
    byte_4AB8B91 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(BattleConcatLabelMessageComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleConcatLabelMessageComponent___c_TypeInfo->static_fields->__9 = (struct BattleConcatLabelMessageComponent___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)BattleConcatLabelMessageComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleConcatLabelMessageComponent___c___ctor(
        BattleConcatLabelMessageComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleConcatLabelMessageComponent___c___OnDestroy_b__16_0(
        BattleConcatLabelMessageComponent___c_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_1BAB678(this, 0LL);
  ((void (__fastcall *)(WrapLineMessage_o *, Il2CppMethodPointer))message->klass->vtable._4_Quit.method)(
    message,
    message->klass->vtable._5_AfterParseEachChar.methodPtr);
}


bool __fastcall BattleConcatLabelMessageComponent___c___ResizeLabel_b__13_0(
        BattleConcatLabelMessageComponent___c_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_1BAB678(this, 0LL);
  return message->fields._IsWrapWidth_k__BackingField;
}


void __fastcall BattleConcatLabelMessageComponent___c__DisplayClass10_0___ctor(
        BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WrapLineMessage_o *__fastcall BattleConcatLabelMessageComponent___c__DisplayClass10_0___SetTexts_b__0(
        BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BAB678(this, text);
  return BattleConcatLabelMessageComponent__CreateMessage(this->fields.__4__this, text, this->fields.wrapWidth, v3);
}


void __fastcall BattleConcatLabelMessageComponent___c__DisplayClass13_0___ctor(
        BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleConcatLabelMessageComponent___c__DisplayClass13_0___ResizeLabel_b__1(
        BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  float x; // s0

  if ( !message )
    sub_1BAB678(this, 0LL);
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0LL).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0LL);
}