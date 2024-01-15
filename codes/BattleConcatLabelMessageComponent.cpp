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
  UnityEngine_Transform_o *transform; // x0
  float v8; // s0
  float v9; // s1
  UIWidget_o *v10; // x0
  float v11; // s10
  float v12; // s11
  UnityEngine_Vector2_o v13; // x0
  UnityEngine_Vector2_o v14; // x1
  UnityEngine_Vector2_o v15; // x2
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UISprite_o *v17; // x9
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  unsigned int v20; // w20
  float v21; // s1
  float v22; // s0
  int v23; // s2
  WrapLineMessage_o *v24; // x0
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4

  v25 = BattleConcatLabelMessageComponent__ResizeLabel(this, method);
  x = v25.fields.x;
  y = v25.fields.y;
  BattleConcatLabelMessageComponent__ResizeBg(this, v25, v5);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_12;
  transform = UnityEngine_Component__get_transform(bgSprite, 0LL);
  if ( !transform )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v10 = (UIWidget_o *)this->fields.bgSprite;
  if ( !v10 )
    goto LABEL_12;
  v11 = v8;
  v12 = v9;
  pivotOffset = UIWidget__get_pivotOffset(v10, 0LL);
  v17 = this->fields.bgSprite;
  if ( !v17 )
    goto LABEL_12;
  battleMessages = this->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_12;
  max_length = battleMessages->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = (float)(v12 + (float)((float)(1.0 - pivotOffset.fields.y) * (float)v17->fields.mHeight))
        - (float)((float)((float)v17->fields.mHeight - y) * 0.5);
    v22 = (float)(v11 + (float)((float)((float)v17->fields.mWidth - x) * 0.5))
        - (float)(pivotOffset.fields.x * (float)v17->fields.mWidth);
    v23 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
      v24 = battleMessages->m_Items[v20];
      if ( !v24 )
        break;
      *(UnityEngine_Vector3_o *)&v22 = WrapLineMessage__SetOffsetMessage(v24, *(UnityEngine_Vector3_o *)&v22, 0LL);
      max_length = battleMessages->max_length;
      if ( (int)++v20 >= max_length )
        return;
    }
LABEL_12:
    sub_B170D4();
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  WrapLineMessage_o *v11; // x21
  System_String_o *v12; // x0

  if ( (byte_40F69F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___, text);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v7);
    sub_B16FFC(&StringLiteral_15748/*"[r]"*/, v8);
    byte_40F69F1 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.wrapMessagePrefab,
             this->fields.dispMessageRoot,
             0LL,
             0LL);
  if ( !Object
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    Object,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v11 = (WrapLineMessage_o *)Component_srcLineSprite,
        v12 = System_String__Replace_43750968(
                text,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_15748/*"[r]"*/,
                0LL),
        !v11) )
  {
    sub_B170D4();
  }
  WrapLineMessage__Init(v11, v12, 0LL);
  WrapLineMessage__UpdateWrapWidth(v11, (float)wrapWidth, 0LL);
  return v11;
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__GetPrintedLabelSize(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x0
  UnityEngine_Vector2_o v4; // x1
  UnityEngine_Vector2_o v5; // x2
  UnityEngine_Vector2_o zero; // kr00_8
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  float x; // s8
  float y; // s9
  int v11; // w20
  ScriptLineMessage_o *v12; // x0
  UnityEngine_Vector2_o PrintedSize; // kr08_8
  float v14; // s0
  float v15; // s0
  float v16; // s1
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
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v12 = (ScriptLineMessage_o *)battleMessages->m_Items[v11];
      if ( !v12 )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize(v12, 0LL);
      x = x + PrintedSize.fields.x;
      v14 = UnityEngine_Mathf__Max(PrintedSize.fields.y, y, 0LL);
      max_length = battleMessages->max_length;
      ++v11;
      y = v14;
      if ( v11 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_B170D4();
  }
LABEL_7:
  v15 = x;
  v16 = y;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


void __fastcall BattleConcatLabelMessageComponent__OnDestroy(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  BattleConcatLabelMessageComponent___c_c *v11; // x0
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__16_0; // x20
  Il2CppObject *v14; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *v15; // x0

  if ( (byte_40F69F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_WrapLineMessage___ctor__, method);
    sub_B16FFC(&System_Action_WrapLineMessage__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_WrapLineMessage___, v7);
    sub_B16FFC(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, v8);
    sub_B16FFC(&BattleConcatLabelMessageComponent___c_TypeInfo, v9);
    byte_40F69F3 = 1;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
  if ( (BYTE3(BattleConcatLabelMessageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__16_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_WrapLineMessage__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__16_0,
      v14,
      Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_WrapLineMessage___ctor__);
    v15 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v15->__9__16_0 = (struct System_Action_WrapLineMessage__o *)_9__16_0;
    sub_B16F98(&v15->__9__16_0, _9__16_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    battleMessages,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_WrapLineMessage___);
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
  int32_t v8; // w0
  float y; // s0
  UIWidget_o *v10; // x19
  int32_t v11; // w0

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
  v11 = BattleUtility__FloorToInt(v5 + (float)(y + y), 0LL);
  if ( !v10 )
LABEL_7:
    sub_B170D4();
  UIWidget__set_height(v10, v11, 0LL);
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  BattleConcatLabelMessageComponent___c_c *v17; // x0
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__13_0; // x21
  Il2CppObject *v20; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v23; // x20
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *v28; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v30; // x1
  UnityEngine_Vector2_o v31; // x1
  UnityEngine_Vector2_o v32; // x2
  UnityEngine_Vector2_o v33; // x3
  UnityEngine_Vector2_o v34; // x4
  float v35; // s0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_40F69F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_WrapLineMessage___ctor__, method);
    sub_B16FFC(&System_Action_WrapLineMessage__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_WrapLineMessage___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WrapLineMessage___, v9);
    sub_B16FFC(&Method_System_Func_WrapLineMessage__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WrapLineMessage__bool__TypeInfo, v11);
    sub_B16FFC(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__, v12);
    sub_B16FFC(&Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__, v13);
    sub_B16FFC(&BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo, v14);
    sub_B16FFC(&BattleConcatLabelMessageComponent___c_TypeInfo, v15);
    byte_40F69F2 = 1;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  v17 = BattleConcatLabelMessageComponent___c_TypeInfo;
  if ( (BYTE3(BattleConcatLabelMessageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v17 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_WrapLineMessage__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__13_0,
      v20,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WrapLineMessage__bool___ctor__);
    v21 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v21->__9__13_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__13_0;
    sub_B16F98(&v21->__9__13_0, _9__13_0);
  }
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v23 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v22,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v23, 0LL) )
  {
    v28 = (BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *)sub_B170CC(
                                                                         BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo,
                                                                         v24,
                                                                         v25,
                                                                         v26,
                                                                         v27);
    BattleConcatLabelMessageComponent___c__DisplayClass13_0___ctor(v28, 0LL);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v35) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v30);
    if ( !v23 || !v28 )
      sub_B170D4();
    v28->fields.addWidth = (float)((float)maxLabelWidth - v35) / (float)(int)v23->max_length;
    v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170CC)(
                                                                                 System_Action_WrapLineMessage__TypeInfo,
                                                                                 v31,
                                                                                 v32,
                                                                                 v33,
                                                                                 v34);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v36,
      (Il2CppObject *)v28,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__,
      (const MethodInfo_24B7310 *)Method_System_Action_WrapLineMessage___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (System_Action_T__o *)v36,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v24);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct WrapLineMessage_array *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_40F69F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___, texts);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v7);
    sub_B16FFC(&Method_System_Func_string__WrapLineMessage___ctor__, v8);
    sub_B16FFC(&System_Func_string__WrapLineMessage__TypeInfo, v9);
    sub_B16FFC(&Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__, v10);
    sub_B16FFC(&BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo, v11);
    byte_40F69F0 = 1;
  }
  v12 = (BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *)sub_B170CC(
                                                                       BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo,
                                                                       texts,
                                                                       method,
                                                                       v3,
                                                                       v4);
  BattleConcatLabelMessageComponent___c__DisplayClass10_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields, this);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0LL) )
    return;
  if ( !texts )
LABEL_7:
    sub_B170D4();
  v12->fields.wrapWidth = this->fields.maxLabelWidth / (signed int)texts->max_length;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_string__WrapLineMessage__TypeInfo,
                                                                                          v13,
                                                                                          v14,
                                                                                          v15,
                                                                                          v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__,
    (const MethodInfo_2B6C28C *)Method_System_Func_string__WrapLineMessage___ctor__);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  v19 = (struct WrapLineMessage_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v18,
                                          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  this->fields.battleMessages = v19;
  sub_B16F98(&this->fields.battleMessages, v19);
  BattleConcatLabelMessageComponent__Adjust(this, v20);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F84F1 & 1) == 0 )
  {
    sub_B16FFC(&BattleConcatLabelMessageComponent___c_TypeInfo, v1);
    byte_40F84F1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleConcatLabelMessageComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleConcatLabelMessageComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0LL).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0LL);
}