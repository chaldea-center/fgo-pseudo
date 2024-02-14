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
  UnityEngine_Component_o *bgSprite; // x0
  float v7; // s0
  float v8; // s1
  float v9; // s10
  float v10; // s11
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UISprite_o *v12; // x9
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  unsigned int v15; // w20
  float v16; // s1
  float v17; // s0
  int v18; // s2
  __int64 v19; // x0
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
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bgSprite, 0LL);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_12;
  v9 = v7;
  v10 = v8;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)bgSprite, 0LL);
  v12 = this->fields.bgSprite;
  if ( !v12 )
    goto LABEL_12;
  battleMessages = this->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_12;
  max_length = battleMessages->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v16 = (float)(v10 + (float)((float)(1.0 - pivotOffset.fields.y) * (float)v12->fields.mHeight))
        - (float)((float)((float)v12->fields.mHeight - y) * 0.5);
    v17 = (float)(v9 + (float)((float)((float)v12->fields.mWidth - x) * 0.5))
        - (float)(pivotOffset.fields.x * (float)v12->fields.mWidth);
    v18 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v19 = sub_B0D9A8(bgSprite);
        sub_B0D948(v19, 0LL);
      }
      bgSprite = (UnityEngine_Component_o *)battleMessages->m_Items[v15];
      if ( !bgSprite )
        break;
      *(UnityEngine_Vector3_o *)&v17 = WrapLineMessage__SetOffsetMessage(
                                         (WrapLineMessage_o *)bgSprite,
                                         *(UnityEngine_Vector3_o *)&v17,
                                         0LL);
      max_length = battleMessages->max_length;
      if ( (int)++v15 >= max_length )
        return;
    }
LABEL_12:
    sub_B0D97C(bgSprite);
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
  WrapLineMessage_o *v10; // x21

  if ( (byte_42114BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___, text);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v7);
    sub_B0D8A4(&StringLiteral_15858/*"[r]"*/, v8);
    byte_42114BE = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.wrapMessagePrefab,
             this->fields.dispMessageRoot,
             0LL,
             0LL);
  if ( !Object
    || (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               Object,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v10 = (WrapLineMessage_o *)Object,
        Object = (UnityEngine_GameObject_o *)System_String__Replace_43857140(
                                               text,
                                               (System_String_o *)StringLiteral_26/*"\n"*/,
                                               (System_String_o *)StringLiteral_15858/*"[r]"*/,
                                               0LL),
        !v10) )
  {
    sub_B0D97C(Object);
  }
  WrapLineMessage__Init(v10, (System_String_o *)Object, 0LL);
  WrapLineMessage__UpdateWrapWidth(v10, (float)wrapWidth, 0LL);
  return v10;
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__GetPrintedLabelSize(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  ScriptLineMessage_o *v3; // x0
  UnityEngine_Vector2_o zero; // kr00_8
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  float x; // s8
  float y; // s9
  int v9; // w20
  UnityEngine_Vector2_o PrintedSize; // kr08_8
  float v11; // s0
  float v12; // s0
  float v13; // s1
  __int64 v14; // x0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  zero = UnityEngine_Vector2__get_zero(0LL);
  battleMessages = this->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_9;
  max_length = battleMessages->max_length;
  x = zero.fields.x;
  y = zero.fields.y;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
      {
        v14 = sub_B0D9A8(v3);
        sub_B0D948(v14, 0LL);
      }
      v3 = (ScriptLineMessage_o *)battleMessages->m_Items[v9];
      if ( !v3 )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize(v3, 0LL);
      x = x + PrintedSize.fields.x;
      v11 = UnityEngine_Mathf__Max(PrintedSize.fields.y, y, 0LL);
      max_length = battleMessages->max_length;
      ++v9;
      y = v11;
      if ( v9 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_B0D97C(v3);
  }
LABEL_7:
  v12 = x;
  v13 = y;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


void __fastcall BattleConcatLabelMessageComponent__OnDestroy(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  BattleConcatLabelMessageComponent___c_c *v9; // x0
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__16_0; // x20
  Il2CppObject *v12; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *v13; // x0

  if ( (byte_42114C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_WrapLineMessage___ctor__, method);
    sub_B0D8A4(&System_Action_WrapLineMessage__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_WrapLineMessage___, v5);
    sub_B0D8A4(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, v6);
    sub_B0D8A4(&BattleConcatLabelMessageComponent___c_TypeInfo, v7);
    byte_42114C0 = 1;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  v9 = BattleConcatLabelMessageComponent___c_TypeInfo;
  if ( (BYTE3(BattleConcatLabelMessageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v9 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__16_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_WrapLineMessage__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__16_0,
      v12,
      Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_WrapLineMessage___ctor__);
    v13 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v13->__9__16_0 = (struct System_Action_WrapLineMessage__o *)_9__16_0;
    sub_B0D840(&v13->__9__16_0, _9__16_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    battleMessages,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_WrapLineMessage___);
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
  float y; // s0
  UIWidget_o *v10; // x19

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
  v10 = (UIWidget_o *)this->fields.bgSprite;
  v8 = BattleUtility__FloorToInt(v5 + (float)(y + y), 0LL);
  if ( !v10 )
LABEL_7:
    sub_B0D97C(v8);
  UIWidget__set_height(v10, v8, 0LL);
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  BattleConcatLabelMessageComponent___c_c *v15; // x0
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__13_0; // x21
  Il2CppObject *v18; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v21; // x20
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *v24; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v26; // x1
  UnityEngine_Vector2_o v27; // x0
  UnityEngine_Vector2_o v28; // x1
  UnityEngine_Vector2_o v29; // x2
  float v30; // s0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42114BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_WrapLineMessage___ctor__, method);
    sub_B0D8A4(&System_Action_WrapLineMessage__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_WrapLineMessage___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WrapLineMessage___, v7);
    sub_B0D8A4(&Method_System_Func_WrapLineMessage__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_WrapLineMessage__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__, v10);
    sub_B0D8A4(&Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__, v11);
    sub_B0D8A4(&BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo, v12);
    sub_B0D8A4(&BattleConcatLabelMessageComponent___c_TypeInfo, v13);
    byte_42114BF = 1;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  v15 = BattleConcatLabelMessageComponent___c_TypeInfo;
  if ( (BYTE3(BattleConcatLabelMessageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v15 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_WrapLineMessage__bool__TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__13_0,
      v18,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WrapLineMessage__bool___ctor__);
    v19 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v19->__9__13_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__13_0;
    sub_B0D840(&v19->__9__13_0, _9__13_0);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v21 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v20,
          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v21, 0LL) )
  {
    v24 = (BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *)sub_B0D974(
                                                                         BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo,
                                                                         v22,
                                                                         v23);
    BattleConcatLabelMessageComponent___c__DisplayClass13_0___ctor(v24, 0LL);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v30) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v26);
    if ( !v21 || !v24 )
      ((void (__fastcall __noreturn *)(_QWORD))sub_B0D97C)(v27);
    v24->fields.addWidth = (float)((float)maxLabelWidth - v30) / (float)(int)v21->max_length;
    v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_B0D974)(
                                                                                 System_Action_WrapLineMessage__TypeInfo,
                                                                                 v28,
                                                                                 v29);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v31,
      (Il2CppObject *)v24,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__,
      (const MethodInfo_246EA3C *)Method_System_Action_WrapLineMessage___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (System_Action_T__o *)v31,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v22);
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
  __int64 v9; // x1
  BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *v10; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct WrapLineMessage_array *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_42114BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___, texts);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v5);
    sub_B0D8A4(&Method_System_Func_string__WrapLineMessage___ctor__, v6);
    sub_B0D8A4(&System_Func_string__WrapLineMessage__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__, v8);
    sub_B0D8A4(&BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo, v9);
    byte_42114BD = 1;
  }
  v10 = (BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *)sub_B0D974(
                                                                       BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo,
                                                                       texts,
                                                                       method);
  BattleConcatLabelMessageComponent___c__DisplayClass10_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_7;
  v10->fields.__4__this = this;
  sub_B0D840(&v10->fields, this);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0LL);
  if ( IsNullOrEmpty )
    return;
  if ( !texts )
LABEL_7:
    sub_B0D97C(IsNullOrEmpty);
  v10->fields.wrapWidth = this->fields.maxLabelWidth / (signed int)texts->max_length;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_string__WrapLineMessage__TypeInfo,
                                                                                          v12,
                                                                                          v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__,
    (const MethodInfo_261A104 *)Method_System_Func_string__WrapLineMessage___ctor__);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  v16 = (struct WrapLineMessage_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v15,
                                          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  this->fields.battleMessages = v16;
  sub_B0D840(&this->fields.battleMessages, v16);
  BattleConcatLabelMessageComponent__Adjust(this, v17);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138E0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleConcatLabelMessageComponent___c_TypeInfo, v1);
    byte_42138E0 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleConcatLabelMessageComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  BattleConcatLabelMessageComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  return BattleConcatLabelMessageComponent__CreateMessage(_4__this, text, this->fields.wrapWidth, 0LL);
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
    sub_B0D97C(this);
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0LL).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0LL);
}