void BattleConcatLabelMessageComponent___ctor(BattleConcatLabelMessageComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.bgResizeTarget = 0x40000000003LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleConcatLabelMessageComponent__Adjust(BattleConcatLabelMessageComponent_o *this, const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *bgSprite; // x0
  float v8; // s10
  float v9; // s11
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UISprite_o *v11; // x9
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  unsigned int v14; // w20
  float v15; // s1
  float v16; // s0 OVERLAPPED
  int v17; // s2
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v18 = BattleConcatLabelMessageComponent__ResizeLabel(this, method);
  x = v18.fields.x;
  y = v18.fields.y;
  BattleConcatLabelMessageComponent__ResizeBg(this, v18, v5);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_12;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bgSprite, 0);
  if ( !bgSprite )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bgSprite, 0);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_12;
  v8 = localPosition.fields.x;
  v9 = localPosition.fields.y;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)bgSprite, 0);
  v11 = this->fields.bgSprite;
  if ( !v11 )
    goto LABEL_12;
  battleMessages = this->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_12;
  max_length = battleMessages->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = (float)(v9 + (float)((float)(1.0 - pivotOffset.fields.y) * (float)v11->fields.mHeight))
        - (float)((float)((float)v11->fields.mHeight - y) * 0.5);
    v16 = (float)(v8 + (float)((float)((float)v11->fields.mWidth - x) * 0.5))
        - (float)(pivotOffset.fields.x * (float)v11->fields.mWidth);
    v17 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C3E7C8(bgSprite, v6);
      bgSprite = (UnityEngine_Component_o *)battleMessages->m_Items[v14];
      if ( !bgSprite )
        break;
      *(UnityEngine_Vector3_o *)&v16 = WrapLineMessage__SetOffsetMessage(
                                         (WrapLineMessage_o *)bgSprite,
                                         *(UnityEngine_Vector3_o *)&v16,
                                         0);
      max_length = battleMessages->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_12:
    sub_1C3E7C0(bgSprite, v6);
  }
}


WrapLineMessage_o *BattleConcatLabelMessageComponent__CreateMessage(
        BattleConcatLabelMessageComponent_o *this,
        System_String_o *text,
        int32_t wrapWidth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x0
  __int64 v8; // x1
  WrapLineMessage_o *v9; // x21

  if ( (byte_4C5A1D1 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_16010/*"[r]"*/);
    byte_4C5A1D1 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.wrapMessagePrefab,
             this->fields.dispMessageRoot,
             0,
             0);
  if ( !Object
    || (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               Object,
                                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v9 = (WrapLineMessage_o *)Object,
        Object = (UnityEngine_GameObject_o *)System_String__Replace_63683016(
                                               text,
                                               (System_String_o *)StringLiteral_43/*"\n"*/,
                                               (System_String_o *)StringLiteral_16010/*"[r]"*/,
                                               0),
        !v9) )
  {
    sub_1C3E7C0(Object, v8);
  }
  WrapLineMessage__Init(v9, (System_String_o *)Object, 0);
  WrapLineMessage__UpdateWrapWidth(v9, (float)wrapWidth, 0);
  return v9;
}


UnityEngine_Vector2_o BattleConcatLabelMessageComponent__GetPrintedLabelSize(
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
  if ( !byte_4C5059A )
  {
    this = (BattleConcatLabelMessageComponent_o *)sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
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
        sub_1C3E7C8(this, method);
      this = (BattleConcatLabelMessageComponent_o *)battleMessages->m_Items[v8];
      if ( !this )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0);
      max_length = battleMessages->max_length;
      ++v8;
      if ( PrintedSize.fields.y > y )
        y = PrintedSize.fields.y;
      x = x + PrintedSize.fields.x;
      if ( v8 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_1C3E7C0(this, method);
  }
LABEL_11:
  v10 = x;
  v11 = y;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


void BattleConcatLabelMessageComponent__OnDestroy(BattleConcatLabelMessageComponent_o *this, const MethodInfo *method)
{
  BattleConcatLabelMessageComponent___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  System_Action_object__o *_9__16_0; // x20
  Il2CppObject *v6; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C5A1D3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_WrapLineMessage__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_WrapLineMessage___);
    sub_1C3E564(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__);
    sub_1C3E564(&BattleConcatLabelMessageComponent___c_TypeInfo);
    byte_4C5A1D3 = 1;
  }
  v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  if ( !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v3->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_WrapLineMessage__TypeInfo);
    System_Action_object____ctor(_9__16_0, v6, Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, 0);
    static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_WrapLineMessage__o *)_9__16_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    battleMessages,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_WrapLineMessage___);
}


void BattleConcatLabelMessageComponent__ResizeBg(
        BattleConcatLabelMessageComponent_o *this,
        UnityEngine_Vector2_o printedLabelSize,
        const MethodInfo *method)
{
  int32_t bgResizeTarget; // w8
  float y; // s8
  UIWidget_o *bgSprite; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  float v9; // s0
  UIWidget_o *v10; // x19

  bgResizeTarget = this->fields.bgResizeTarget;
  y = printedLabelSize.fields.y;
  if ( (bgResizeTarget & 1) != 0 )
  {
    bgSprite = (UIWidget_o *)this->fields.bgSprite;
    v7 = BattleUtility__FloorToInt(
           printedLabelSize.fields.x + (float)(this->fields.paddingLabel.fields.x + this->fields.paddingLabel.fields.x),
           0);
    if ( !bgSprite )
      goto LABEL_7;
    UIWidget__set_width(bgSprite, v7, 0);
    bgResizeTarget = this->fields.bgResizeTarget;
  }
  if ( (bgResizeTarget & 2) == 0 )
    return;
  v9 = this->fields.paddingLabel.fields.y;
  v10 = (UIWidget_o *)this->fields.bgSprite;
  v7 = BattleUtility__FloorToInt(y + (float)(v9 + v9), 0);
  if ( !v10 )
LABEL_7:
    sub_1C3E7C0(v7, v8);
  UIWidget__set_height(v10, v7, 0);
}


UnityEngine_Vector2_o BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  BattleConcatLabelMessageComponent___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  System_Func_object__bool__o *_9__13_0; // x21
  Il2CppObject *v6; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Object_array *v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v15; // x1
  UnityEngine_Vector2_o v16; // x0
  UnityEngine_Vector2_o v17; // x1
  float v18; // s0
  System_Action_object__o *v19; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C5A1D2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_WrapLineMessage__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_WrapLineMessage___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WrapLineMessage___);
    sub_1C3E564(&System_Func_WrapLineMessage__bool__TypeInfo);
    sub_1C3E564(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__);
    sub_1C3E564(&Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__);
    sub_1C3E564(&BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C3E564(&BattleConcatLabelMessageComponent___c_TypeInfo);
    byte_4C5A1D2 = 1;
  }
  v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  if ( !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v3->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WrapLineMessage__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__13_0,
      v6,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__,
      0);
    static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__13_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v11 = System_Linq_Enumerable__ToArray_object_(
          v10,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0) )
  {
    v13 = sub_1C3E7B0(BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v18) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v15);
    if ( !v11 || !v13 )
      sub_1C3E7C0(v16, v17);
    *(float *)(v13 + 16) = (float)((float)maxLabelWidth - v18) / (float)SLODWORD(v11->max_length);
    v19 = (System_Action_object__o *)sub_1C3E7B0(System_Action_WrapLineMessage__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__,
      0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (System_Action_T__o *)v19,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v12);
  y = PrintedLabelSize.fields.y;
  x = PrintedLabelSize.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void BattleConcatLabelMessageComponent__SetTexts(
        BattleConcatLabelMessageComponent_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_object__object__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4C5A1D0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
    sub_1C3E564(&System_Func_string__WrapLineMessage__TypeInfo);
    sub_1C3E564(&Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__);
    sub_1C3E564(&BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo);
    byte_4C5A1D0 = 1;
  }
  v5 = sub_1C3E7B0(BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0);
  if ( IsNullOrEmpty )
    return;
  if ( !texts )
LABEL_7:
    sub_1C3E7C0(IsNullOrEmpty, v7);
  *(_DWORD *)(v5 + 24) = this->fields.maxLabelWidth / SLODWORD(texts->max_length);
  v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_string__WrapLineMessage__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__,
    0);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          v11,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  this->fields.battleMessages = (struct WrapLineMessage_array *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.battleMessages, (int32_t)v12, v13, v14);
  BattleConcatLabelMessageComponent__Adjust(this, v15);
}


int32_t BattleConcatLabelMessageComponent__get_MaxLabelWidth(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLabelWidth;
}


void BattleConcatLabelMessageComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5A1D4 & 1) == 0 )
  {
    sub_1C3E564(&BattleConcatLabelMessageComponent___c_TypeInfo);
    byte_4C5A1D4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleConcatLabelMessageComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleConcatLabelMessageComponent___c_TypeInfo->static_fields->__9 = (struct BattleConcatLabelMessageComponent___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BattleConcatLabelMessageComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void BattleConcatLabelMessageComponent___c___ctor(
        BattleConcatLabelMessageComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleConcatLabelMessageComponent___c___OnDestroy_b__16_0(
        BattleConcatLabelMessageComponent___c_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(WrapLineMessage_o *, const MethodInfo *))message->klass->vtable._4_Quit.methodPtr)(
    message,
    message->klass->vtable._4_Quit.method);
}


bool BattleConcatLabelMessageComponent___c___ResizeLabel_b__13_0(
        BattleConcatLabelMessageComponent___c_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_1C3E7C0(this, 0);
  return message->fields._IsWrapWidth_k__BackingField;
}


void BattleConcatLabelMessageComponent___c__DisplayClass10_0___ctor(
        BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WrapLineMessage_o *BattleConcatLabelMessageComponent___c__DisplayClass10_0___SetTexts_b__0(
        BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C3E7C0(this, text);
  return BattleConcatLabelMessageComponent__CreateMessage(this->fields.__4__this, text, this->fields.wrapWidth, v3);
}


void BattleConcatLabelMessageComponent___c__DisplayClass13_0___ctor(
        BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleConcatLabelMessageComponent___c__DisplayClass13_0___ResizeLabel_b__1(
        BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  float x; // s0

  if ( !message )
    sub_1C3E7C0(this, 0);
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0);
}