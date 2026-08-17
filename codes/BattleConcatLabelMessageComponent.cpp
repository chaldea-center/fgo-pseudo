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
  __int64 v14; // x20
  float mWidth; // s2
  float v16; // s0
  float v17; // s5
  float v18; // s1
  int v19; // s2
  float v20; // s0 OVERLAPPED
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v21 = BattleConcatLabelMessageComponent__ResizeLabel(this, method);
  x = v21.fields.x;
  y = v21.fields.y;
  BattleConcatLabelMessageComponent__ResizeBg(this, v21, v5);
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
    mWidth = (float)v11->fields.mWidth;
    v16 = pivotOffset.fields.x * mWidth;
    v17 = (float)(mWidth - x) * 0.5;
    v18 = (float)(v9 + (float)((float)(1.0 - pivotOffset.fields.y) * (float)v11->fields.mHeight))
        - (float)((float)((float)v11->fields.mHeight - y) * 0.5);
    v19 = 0;
    v20 = (float)(v8 + v17) - v16;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        sub_2213CE4(bgSprite);
      bgSprite = (UnityEngine_Component_o *)battleMessages->m_Items[v14];
      if ( !bgSprite )
        break;
      *(UnityEngine_Vector3_o *)&v20 = WrapLineMessage__SetOffsetMessage(
                                         (WrapLineMessage_o *)bgSprite,
                                         *(UnityEngine_Vector3_o *)&v20,
                                         0);
      max_length = battleMessages->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_12:
    sub_2213CDC(bgSprite, v6);
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

  if ( (byte_5973F12 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_16632/*"[r]"*/);
    byte_5973F12 = 1;
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
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v9 = (WrapLineMessage_o *)Object,
        Object = (UnityEngine_GameObject_o *)System_String__Replace_75703400(
                                               text,
                                               (System_String_o *)StringLiteral_43/*"\n"*/,
                                               (System_String_o *)StringLiteral_16632/*"[r]"*/,
                                               0),
        !v9) )
  {
    sub_2213CDC(Object, v8);
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
  __int64 v8; // x20
  UnityEngine_Vector2_o PrintedSize; // kr00_8
  float v10; // s0
  float v11; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = this;
  if ( !byte_59699C0 )
  {
    this = (BattleConcatLabelMessageComponent_o *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  battleMessages = v2->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_12;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  max_length = battleMessages->max_length;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_2213CE4(this);
      this = (BattleConcatLabelMessageComponent_o *)battleMessages->m_Items[v8];
      if ( !this )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0);
      x = x + PrintedSize.fields.x;
      max_length = battleMessages->max_length;
      ++v8;
      if ( PrintedSize.fields.y > y )
        y = PrintedSize.fields.y;
      if ( (int)v8 >= max_length )
        goto LABEL_11;
    }
LABEL_12:
    sub_2213CDC(this, method);
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
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__17_0; // x20
  Il2CppObject *v7; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973F14 & 1) == 0 )
  {
    sub_2213A60(&System_Action_WrapLineMessage__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_WrapLineMessage___);
    sub_2213A60(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__17_0__);
    sub_2213A60(&BattleConcatLabelMessageComponent___c_TypeInfo);
    byte_5973F14 = 1;
  }
  v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  if ( !*(&BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo, method);
    v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__17_0 = (System_Action_object__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Action_object__o *)sub_2213CCC(System_Action_WrapLineMessage__TypeInfo);
    System_Action_object____ctor(_9__17_0, v7, Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__17_0__, 0);
    v8 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v8->__9__17_0 = (struct System_Action_WrapLineMessage__o *)_9__17_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__17_0, (int32_t)_9__17_0, v9, v10, v11, v12, v13, v14);
  }
  BasicHelper__ForEach_object_(
    battleMessages,
    (System_Action_T__o *)_9__17_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_WrapLineMessage___);
}


void BattleConcatLabelMessageComponent__ResizeBg(
        BattleConcatLabelMessageComponent_o *this,
        UnityEngine_Vector2_o printedLabelSize,
        const MethodInfo *method)
{
  float y; // s8
  int32_t bgResizeTarget; // w8
  UIWidget_o *bgSprite; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  float v9; // s0
  UIWidget_o *v10; // x19

  y = printedLabelSize.fields.y;
  bgResizeTarget = this->fields.bgResizeTarget;
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
    sub_2213CDC(v7, v8);
  UIWidget__set_height(v10, v7, 0);
}


UnityEngine_Vector2_o BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  BattleConcatLabelMessageComponent___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__14_0; // x21
  Il2CppObject *v7; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x20
  const MethodInfo *v17; // x1
  __int64 v18; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v20; // x1
  UnityEngine_Vector2_o v21; // x0
  UnityEngine_Vector2_o v22; // x1
  float v23; // s0
  System_Action_WrapLineMessage__c *v24; // x0
  System_Action_object__o *v25; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5973F13 & 1) == 0 )
  {
    sub_2213A60(&System_Action_WrapLineMessage__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_WrapLineMessage___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WrapLineMessage___);
    sub_2213A60(&System_Func_WrapLineMessage__bool__TypeInfo);
    sub_2213A60(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__14_0__);
    sub_2213A60(&Method_BattleConcatLabelMessageComponent___c__DisplayClass14_0__ResizeLabel_b__1__);
    sub_2213A60(&BattleConcatLabelMessageComponent___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&BattleConcatLabelMessageComponent___c_TypeInfo);
    byte_5973F13 = 1;
  }
  v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  if ( !*(&BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo, method);
    v3 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__14_0 = (System_Func_object__bool__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WrapLineMessage__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__14_0,
      v7,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__14_0__,
      0);
    v8 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v8->__9__14_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__14_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, 0) )
  {
    v18 = sub_2213CCC(BattleConcatLabelMessageComponent___c__DisplayClass14_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v23) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v20);
    if ( !v16 || !v18 )
      sub_2213CDC(v21, v22);
    v24 = System_Action_WrapLineMessage__TypeInfo;
    *(float *)(v18 + 16) = (float)((float)maxLabelWidth - v23) / (float)SLODWORD(v16->max_length);
    v25 = (System_Action_object__o *)sub_2213CCC(v24);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)v18,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass14_0__ResizeLabel_b__1__,
      0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v16,
      (System_Action_T__o *)v25,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v17);
  y = PrintedLabelSize.fields.y;
  x = PrintedLabelSize.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattleConcatLabelMessageComponent__SetActivateBgSprite(
        BattleConcatLabelMessageComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5973F15 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F15 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void BattleConcatLabelMessageComponent__SetTexts(
        BattleConcatLabelMessageComponent_o *this,
        System_String_array *texts,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_string__WrapLineMessage__c *v14; // x0
  System_Func_object__object__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5973F11 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
    sub_2213A60(&System_Func_string__WrapLineMessage__TypeInfo);
    sub_2213A60(&Method_BattleConcatLabelMessageComponent___c__DisplayClass11_0__SetTexts_b__0__);
    sub_2213A60(&BattleConcatLabelMessageComponent___c__DisplayClass11_0_TypeInfo);
    byte_5973F11 = 1;
  }
  v5 = sub_2213CCC(BattleConcatLabelMessageComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0);
  if ( IsNullOrEmpty )
    return;
  if ( !texts )
LABEL_7:
    sub_2213CDC(IsNullOrEmpty, v7);
  v14 = System_Func_string__WrapLineMessage__TypeInfo;
  *(_DWORD *)(v5 + 24) = this->fields.maxLabelWidth / SLODWORD(texts->max_length);
  v15 = (System_Func_object__object__o *)sub_2213CCC(v14);
  System_Func_object__object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass11_0__SetTexts_b__0__,
    0);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  this->fields.battleMessages = (struct WrapLineMessage_array *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleMessages,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ((void (__fastcall *)(BattleConcatLabelMessageComponent_o *, const MethodInfo *))this->klass->vtable._4_Adjust.methodPtr)(
    this,
    this->klass->vtable._4_Adjust.method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973F16 & 1) == 0 )
  {
    sub_2213A60(&BattleConcatLabelMessageComponent___c_TypeInfo);
    byte_5973F16 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleConcatLabelMessageComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleConcatLabelMessageComponent___c_TypeInfo->static_fields->__9 = (struct BattleConcatLabelMessageComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleConcatLabelMessageComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleConcatLabelMessageComponent___c___ctor(
        BattleConcatLabelMessageComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleConcatLabelMessageComponent___c___OnDestroy_b__17_0(
        BattleConcatLabelMessageComponent___c_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(WrapLineMessage_o *, const MethodInfo *))message->klass->vtable._4_Quit.methodPtr)(
    message,
    message->klass->vtable._4_Quit.method);
}


bool BattleConcatLabelMessageComponent___c___ResizeLabel_b__14_0(
        BattleConcatLabelMessageComponent___c_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_2213CDC(this, 0);
  return message->fields._IsWrapWidth_k__BackingField;
}


void BattleConcatLabelMessageComponent___c__DisplayClass11_0___ctor(
        BattleConcatLabelMessageComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WrapLineMessage_o *BattleConcatLabelMessageComponent___c__DisplayClass11_0___SetTexts_b__0(
        BattleConcatLabelMessageComponent___c__DisplayClass11_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, text);
  return BattleConcatLabelMessageComponent__CreateMessage(this->fields.__4__this, text, this->fields.wrapWidth, v3);
}


void BattleConcatLabelMessageComponent___c__DisplayClass14_0___ctor(
        BattleConcatLabelMessageComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleConcatLabelMessageComponent___c__DisplayClass14_0___ResizeLabel_b__1(
        BattleConcatLabelMessageComponent___c__DisplayClass14_0_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  float x; // s0

  if ( !message )
    sub_2213CDC(this, 0);
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0);
}