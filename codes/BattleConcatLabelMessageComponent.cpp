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
  __int64 v20; // x0
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4

  v21 = BattleConcatLabelMessageComponent__ResizeLabel(this, method);
  x = v21.fields.x;
  y = v21.fields.y;
  BattleConcatLabelMessageComponent__ResizeBg(this, v21, v5);
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
      {
        v20 = sub_B5D6C8(bgSprite);
        sub_B5D668(v20, 0LL);
      }
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
    sub_B5D69C(bgSprite, v6);
  }
}


WrapLineMessage_o *__fastcall BattleConcatLabelMessageComponent__CreateMessage(
        BattleConcatLabelMessageComponent_o *this,
        System_String_o *text,
        int32_t wrapWidth,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *Object; // x0
  __int64 v14; // x1
  WrapLineMessage_o *v15; // x21

  if ( (byte_42E53F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___, (_DWORD)text, wrapWidth, method);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16002/*"[r]"*/, v10, v11, v12);
    byte_42E53F1 = 1;
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
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v15 = (WrapLineMessage_o *)Object,
        Object = (UnityEngine_GameObject_o *)System_String__Replace_44585024(
                                               text,
                                               (System_String_o *)StringLiteral_26/*"\n"*/,
                                               (System_String_o *)StringLiteral_16002/*"[r]"*/,
                                               0LL),
        !v15) )
  {
    sub_B5D69C(Object, v14);
  }
  WrapLineMessage__Init(v15, (System_String_o *)Object, 0LL);
  WrapLineMessage__UpdateWrapWidth(v15, (float)wrapWidth, 0LL);
  return v15;
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__GetPrintedLabelSize(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  ScriptLineMessage_o *v3; // x0
  UnityEngine_Vector2_o v4; // x1
  UnityEngine_Vector2_o zero; // kr00_8
  struct WrapLineMessage_array *battleMessages; // x19
  int max_length; // w8
  float x; // s8
  float y; // s9
  int v10; // w20
  UnityEngine_Vector2_o PrintedSize; // kr08_8
  float v12; // s0
  float v13; // s0
  float v14; // s1
  __int64 v15; // x0
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
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
      {
        v15 = sub_B5D6C8(v3);
        sub_B5D668(v15, 0LL);
      }
      v3 = (ScriptLineMessage_o *)battleMessages->m_Items[v10];
      if ( !v3 )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize(v3, 0LL);
      x = x + PrintedSize.fields.x;
      v12 = UnityEngine_Mathf__Max(PrintedSize.fields.y, y, 0LL);
      max_length = battleMessages->max_length;
      ++v10;
      y = v12;
      if ( v10 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(v3, v4);
  }
LABEL_7:
  v13 = x;
  v14 = y;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


void __fastcall BattleConcatLabelMessageComponent__OnDestroy(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  BattleConcatLabelMessageComponent___c_c *v18; // x0
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__16_0; // x20
  Il2CppObject *v21; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *v22; // x0

  if ( (byte_42E53F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_WrapLineMessage___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_WrapLineMessage__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_WrapLineMessage___, v8, v9, v10);
    sub_B5D5C4(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, v11, v12, v13);
    sub_B5D5C4(&BattleConcatLabelMessageComponent___c_TypeInfo, v14, v15, v16);
    byte_42E53F3 = 1;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  v18 = BattleConcatLabelMessageComponent___c_TypeInfo;
  if ( (BYTE3(BattleConcatLabelMessageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v18 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__16_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_WrapLineMessage__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__16_0,
      v21,
      Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__,
      (const MethodInfo_258B320 *)Method_System_Action_WrapLineMessage___ctor__);
    v22 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v22->__9__16_0 = (struct System_Action_WrapLineMessage__o *)_9__16_0;
    sub_B5D560(&v22->__9__16_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    battleMessages,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_WrapLineMessage___);
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
    sub_B5D69C(v8, v9);
  UIWidget__set_height(v11, v8, 0LL);
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  BattleConcatLabelMessageComponent___c_c *v36; // x0
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__13_0; // x21
  Il2CppObject *v39; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v42; // x20
  const MethodInfo *v43; // x1
  BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *v44; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v46; // x1
  UnityEngine_Vector2_o v47; // x0
  UnityEngine_Vector2_o v48; // x1
  float v49; // s0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E53F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_WrapLineMessage___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_WrapLineMessage__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_WrapLineMessage___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WrapLineMessage___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_WrapLineMessage__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_WrapLineMessage__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__, v23, v24, v25);
    sub_B5D5C4(&Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__, v26, v27, v28);
    sub_B5D5C4(&BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&BattleConcatLabelMessageComponent___c_TypeInfo, v32, v33, v34);
    byte_42E53F2 = 1;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  v36 = BattleConcatLabelMessageComponent___c_TypeInfo;
  if ( (BYTE3(BattleConcatLabelMessageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo);
    v36 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WrapLineMessage__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__13_0,
      v39,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WrapLineMessage__bool___ctor__);
    v40 = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    v40->__9__13_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__13_0;
    sub_B5D560(&v40->__9__13_0);
  }
  v41 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v42 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v41,
          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v42, 0LL) )
  {
    v44 = (BattleConcatLabelMessageComponent___c__DisplayClass13_0_o *)sub_B5D694(BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo);
    BattleConcatLabelMessageComponent___c__DisplayClass13_0___ctor(v44, 0LL);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v49) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v46);
    if ( !v42 || !v44 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(v47, v48);
    v44->fields.addWidth = (float)((float)maxLabelWidth - v49) / (float)(int)v42->max_length;
    v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_WrapLineMessage__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v50,
      (Il2CppObject *)v44,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__,
      (const MethodInfo_258B320 *)Method_System_Action_WrapLineMessage___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      (System_Collections_Generic_IEnumerable_T__o *)v42,
      (System_Action_T__o *)v50,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v43);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *v21; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v23; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_42E53F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___, (_DWORD)texts, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_string__WrapLineMessage___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_string__WrapLineMessage__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo, v18, v19, v20);
    byte_42E53F0 = 1;
  }
  v21 = (BattleConcatLabelMessageComponent___c__DisplayClass10_0_o *)sub_B5D694(BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo);
  BattleConcatLabelMessageComponent___c__DisplayClass10_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_7;
  v21->fields.__4__this = this;
  sub_B5D560(&v21->fields);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0LL);
  if ( IsNullOrEmpty )
    return;
  if ( !texts )
LABEL_7:
    sub_B5D69C(IsNullOrEmpty, v23);
  v21->fields.wrapWidth = this->fields.maxLabelWidth / (signed int)texts->max_length;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_string__WrapLineMessage__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v24,
    (Il2CppObject *)v21,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__,
    (const MethodInfo_2C3041C *)Method_System_Func_string__WrapLineMessage___ctor__);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v24,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  this->fields.battleMessages = (struct WrapLineMessage_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                  v25,
                                                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  sub_B5D560(&this->fields.battleMessages);
  BattleConcatLabelMessageComponent__Adjust(this, v26);
}


int32_t __fastcall BattleConcatLabelMessageComponent__get_MaxLabelWidth(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLabelWidth;
}


void __fastcall BattleConcatLabelMessageComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C0B & 1) == 0 )
  {
    sub_B5D5C4(&BattleConcatLabelMessageComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7C0B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleConcatLabelMessageComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, text);
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
    sub_B5D69C(this, 0LL);
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0LL).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0LL);
}