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
        sub_1BCAA44(bgSprite, v6);
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
    sub_1BCAA3C(bgSprite, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
WrapLineMessage_o *__fastcall BattleConcatLabelMessageComponent__CreateMessage(
        BattleConcatLabelMessageComponent_o *this,
        System_String_o *text,
        int32_t wrapWidth,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v12; // x1
  WrapLineMessage_o *v13; // x21

  if ( (byte_4B19073 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___, text, *(_QWORD *)&wrapWidth);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16175/*"[r]"*/, v9, v10);
    byte_4B19073 = 1;
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
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WrapLineMessage___),
        !text)
    || (v13 = (WrapLineMessage_o *)Object,
        Object = (UnityEngine_GameObject_o *)System_String__Replace_62420848(
                                               text,
                                               (System_String_o *)StringLiteral_43/*"\n"*/,
                                               (System_String_o *)StringLiteral_16175/*"[r]"*/,
                                               0LL),
        !v13) )
  {
    sub_1BCAA3C(Object, v12);
  }
  WrapLineMessage__Init(v13, (System_String_o *)Object, 0LL);
  WrapLineMessage__UpdateWrapWidth(v13, (float)wrapWidth, 0LL);
  return v13;
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__GetPrintedLabelSize(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleConcatLabelMessageComponent_o *v3; // x19
  struct WrapLineMessage_array *battleMessages; // x19
  struct UnityEngine_Vector2_StaticFields *static_fields; // x9
  int max_length; // w8
  float y; // s8
  float x; // s9
  int v9; // w20
  UnityEngine_Vector2_o PrintedSize; // kr00_8
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v3 = this;
  if ( !byte_4B108BA )
  {
    this = (BattleConcatLabelMessageComponent_o *)sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, method, v2);
    byte_4B108BA = 1;
  }
  battleMessages = v3->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_13;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  max_length = battleMessages->max_length;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1BCAA44(this, method);
      this = (BattleConcatLabelMessageComponent_o *)battleMessages->m_Items[v9];
      if ( !this )
        break;
      PrintedSize = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0LL);
      max_length = battleMessages->max_length;
      ++v9;
      if ( PrintedSize.fields.y > y )
        y = PrintedSize.fields.y;
      x = x + PrintedSize.fields.x;
      if ( v9 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
LABEL_11:
  v11 = x;
  v12 = y;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


void __fastcall BattleConcatLabelMessageComponent__OnDestroy(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleConcatLabelMessageComponent___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  System_Action_object__o *_9__16_0; // x20
  Il2CppObject *v14; // x21
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19075 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_WrapLineMessage__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_WrapLineMessage___, v5, v6);
    sub_1BCA7E0(&Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, v7, v8);
    sub_1BCA7E0(&BattleConcatLabelMessageComponent___c_TypeInfo, v9, v10);
    byte_4B19075 = 1;
  }
  v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  if ( !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo, method);
    v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v11->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleConcatLabelMessageComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_WrapLineMessage__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__16_0, v14, Method_BattleConcatLabelMessageComponent___c__OnDestroy_b__16_0__, 0LL);
    static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_WrapLineMessage__o *)_9__16_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  BasicHelper__ForEach_object_(
    battleMessages,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WrapLineMessage___);
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
    sub_1BCAA3C(v8, v9);
  UIWidget__set_height(v11, v8, 0LL);
}


UnityEngine_Vector2_o __fastcall BattleConcatLabelMessageComponent__ResizeLabel(
        BattleConcatLabelMessageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  BattleConcatLabelMessageComponent___c_c *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *battleMessages; // x20
  System_Func_object__bool__o *_9__13_0; // x21
  Il2CppObject *v24; // x22
  struct BattleConcatLabelMessageComponent___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Object_array *v33; // x20
  const MethodInfo *v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x21
  int32_t maxLabelWidth; // w22
  const MethodInfo *v39; // x1
  UnityEngine_Vector2_o v40; // x0
  UnityEngine_Vector2_o v41; // x1
  UnityEngine_Vector2_o v42; // x2
  UnityEngine_Vector2_o v43; // x3
  float v44; // s0
  System_Action_object__o *v45; // x22
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PrintedLabelSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B19074 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_WrapLineMessage__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_WrapLineMessage___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WrapLineMessage___, v9, v10);
    sub_1BCA7E0(&System_Func_WrapLineMessage__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__, v13, v14);
    sub_1BCA7E0(&Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__, v15, v16);
    sub_1BCA7E0(&BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&BattleConcatLabelMessageComponent___c_TypeInfo, v19, v20);
    byte_4B19074 = 1;
  }
  v21 = BattleConcatLabelMessageComponent___c_TypeInfo;
  battleMessages = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.battleMessages;
  if ( !BattleConcatLabelMessageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelMessageComponent___c_TypeInfo, method);
    v21 = BattleConcatLabelMessageComponent___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v21->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, method);
      v21 = BattleConcatLabelMessageComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WrapLineMessage__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__13_0,
      v24,
      Method_BattleConcatLabelMessageComponent___c__ResizeLabel_b__13_0__,
      0LL);
    static_fields = BattleConcatLabelMessageComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_WrapLineMessage__bool__o *)_9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_object_(
          battleMessages,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WrapLineMessage___);
  v33 = System_Linq_Enumerable__ToArray_object_(
          v32,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, 0LL) )
  {
    v37 = sub_1BCAA2C(BattleConcatLabelMessageComponent___c__DisplayClass13_0_TypeInfo, v34, v35, v36);
    System_Object___ctor((Il2CppObject *)v37, 0LL);
    maxLabelWidth = this->fields.maxLabelWidth;
    LODWORD(v44) = *(_QWORD *)&BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v39);
    if ( !v33 || !v37 )
      sub_1BCAA3C(v40, v41);
    *(float *)(v37 + 16) = (float)((float)maxLabelWidth - v44) / (float)(int)v33->max_length;
    v45 = (System_Action_object__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1BCAA2C)(
                                       System_Action_WrapLineMessage__TypeInfo,
                                       v41,
                                       v42,
                                       v43);
    System_Action_object____ctor(
      v45,
      (Il2CppObject *)v37,
      Method_BattleConcatLabelMessageComponent___c__DisplayClass13_0__ResizeLabel_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (System_Action_T__o *)v45,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WrapLineMessage___);
  }
  PrintedLabelSize = BattleConcatLabelMessageComponent__GetPrintedLabelSize(this, v34);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_object__object__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Object_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4B19072 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__WrapLineMessage___, texts, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WrapLineMessage___, v6, v7);
    sub_1BCA7E0(&System_Func_string__WrapLineMessage__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__, v10, v11);
    sub_1BCA7E0(&BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo, v12, v13);
    byte_4B19072 = 1;
  }
  v14 = sub_1BCAA2C(BattleConcatLabelMessageComponent___c__DisplayClass10_0_TypeInfo, texts, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)texts, 0LL);
  if ( IsNullOrEmpty )
    return;
  if ( !texts )
LABEL_7:
    sub_1BCAA3C(IsNullOrEmpty, v16);
  *(_DWORD *)(v14 + 24) = this->fields.maxLabelWidth / (signed int)texts->max_length;
  v25 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_string__WrapLineMessage__TypeInfo, v16, v23, v24);
  System_Func_object__object____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_BattleConcatLabelMessageComponent___c__DisplayClass10_0__SetTexts_b__0__,
    0LL);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)texts,
                                                               (System_Func_TSource__TResult__o *)v25,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_string__WrapLineMessage___);
  v27 = System_Linq_Enumerable__ToArray_object_(
          v26,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WrapLineMessage___);
  this->fields.battleMessages = (struct WrapLineMessage_array *)v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleMessages, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  BattleConcatLabelMessageComponent__Adjust(this, v34);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19076 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleConcatLabelMessageComponent___c_TypeInfo, v1, v2);
    byte_4B19076 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleConcatLabelMessageComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleConcatLabelMessageComponent___c_TypeInfo->static_fields->__9 = (struct BattleConcatLabelMessageComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleConcatLabelMessageComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, text);
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
    sub_1BCAA3C(this, 0LL);
  x = ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)message, 0LL).fields.x;
  WrapLineMessage__UpdateWrapWidth(message, x + this->fields.addWidth, 0LL);
}