void BattleConcatLabelSkillNameComponent___ctor(BattleConcatLabelSkillNameComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.bgResizeTarget = 0x40000000003LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleConcatLabelSkillNameComponent__Adjust(BattleConcatLabelSkillNameComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UnityEngine_Vector2_o v6; // kr00_8
  float y; // s8
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *TopRubyHeight; // x0
  __int64 v10; // x1
  struct UISprite_o *bgSprite; // x8
  int v12; // w21
  float x; // s10
  float v14; // s11
  UnityEngine_Vector2_o pivotOffset; // kr08_8
  struct UISprite_o *v16; // x8
  int mWidth; // s2
  float mHeight; // s4
  float v19; // s0
  int32_t paddingRubbyLabelHeight; // w9
  float v21; // s0
  System_Collections_Generic_IEnumerable_T__o *battleMessages; // x19
  System_Action_object__o *v23; // x21
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973F19 & 1) == 0 )
  {
    sub_2213A60(&System_Action_WrapLineMessage__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_WrapLineMessage___);
    sub_2213A60(&Method_BattleConcatLabelSkillNameComponent___c__DisplayClass4_0__Adjust_b__0__);
    sub_2213A60(&BattleConcatLabelSkillNameComponent___c__DisplayClass4_0_TypeInfo);
    byte_5973F19 = 1;
  }
  v3 = sub_2213CCC(BattleConcatLabelSkillNameComponent___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v6 = BattleConcatLabelMessageComponent__ResizeLabel((BattleConcatLabelMessageComponent_o *)this, v4);
  y = v6.fields.y;
  if ( this->fields.paddingRubbyLabelHeight )
    y = v6.fields.y + BattleConcatLabelSkillNameComponent__GetMaxRubbyPadding(this, v5);
  v24.fields.x = v6.fields.x;
  v24.fields.y = y;
  BattleConcatLabelMessageComponent__ResizeBg((BattleConcatLabelMessageComponent_o *)this, v24, v5);
  TopRubyHeight = (UnityEngine_Component_o *)BattleConcatLabelSkillNameComponent__GetTopRubyHeight(this, v8);
  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_15;
  v12 = (int)TopRubyHeight;
  UIWidget__set_height((UIWidget_o *)this->fields.bgSprite, bgSprite->fields.mHeight + (_DWORD)TopRubyHeight, 0);
  TopRubyHeight = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !TopRubyHeight
    || (TopRubyHeight = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TopRubyHeight, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)TopRubyHeight, 0),
        (TopRubyHeight = (UnityEngine_Component_o *)this->fields.bgSprite) == 0)
    || (x = localPosition.fields.x,
        v14 = localPosition.fields.y,
        pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)TopRubyHeight, 0),
        (v16 = this->fields.bgSprite) == 0)
    || !v3 )
  {
LABEL_15:
    sub_2213CDC(TopRubyHeight, v10);
  }
  mWidth = v16->fields.mWidth;
  mHeight = (float)v16->fields.mHeight;
  *(_DWORD *)(v3 + 24) = 0;
  v19 = (float)(v14 + (float)((float)(1.0 - pivotOffset.fields.y) * mHeight)) - (float)((float)(mHeight - y) * 0.5);
  *(float *)(v3 + 16) = (float)(x + (float)((float)((float)mWidth - v6.fields.x) * 0.5))
                      - (float)(pivotOffset.fields.x * (float)mWidth);
  *(float *)(v3 + 20) = v19;
  if ( v12 >= 1 )
  {
    paddingRubbyLabelHeight = this->fields.paddingRubbyLabelHeight;
    v21 = v19 + (float)((float)v12 * -0.5);
    *(float *)(v3 + 20) = v21;
    if ( paddingRubbyLabelHeight )
      *(float *)(v3 + 20) = v21 - (float)paddingRubbyLabelHeight;
  }
  battleMessages = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  v23 = (System_Action_object__o *)sub_2213CCC(System_Action_WrapLineMessage__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)v3,
    Method_BattleConcatLabelSkillNameComponent___c__DisplayClass4_0__Adjust_b__0__,
    0);
  BasicHelper__ForEach_object_(
    battleMessages,
    (System_Action_T__o *)v23,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_WrapLineMessage___);
}


float BattleConcatLabelSkillNameComponent__GetMaxRubbyPadding(
        BattleConcatLabelSkillNameComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_float__o *v3; // x20
  ScriptLineMessage_o *DispLabelArray; // x0
  __int64 v5; // x1
  struct WrapLineMessage_array *battleMessages; // x22
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x24
  int v9; // w28
  int m_CancellationTokenSource; // w8
  WrapLineMessage_o *v11; // x21
  int v12; // w27
  int v13; // w29
  __int64 v14; // x23
  __int64 v15; // x8
  UnityEngine_GameObject_o *v16; // x22
  float v17; // s8
  struct WrapLineMessage_array *v19; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973F1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_float__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_float__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_float__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_float___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_float__TypeInfo);
    byte_5973F1A = 1;
  }
  v3 = (System_Collections_Generic_HashSet_float__o *)sub_2213CCC(System_Collections_Generic_HashSet_float__TypeInfo);
  System_Collections_Generic_HashSet_float____ctor(
    v3,
    (const MethodInfo_42C2F14 *)Method_System_Collections_Generic_HashSet_float___ctor__);
  battleMessages = this->fields.battleMessages;
  if ( !battleMessages )
    goto LABEL_31;
  max_length_low = LODWORD(battleMessages->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v8 = 0;
    v9 = 0;
    v19 = this->fields.battleMessages;
    while ( 1 )
    {
      if ( v8 >= max_length_low )
LABEL_32:
        sub_2213CE4(DispLabelArray);
      DispLabelArray = (ScriptLineMessage_o *)battleMessages->m_Items[v8];
      if ( !DispLabelArray )
        break;
      DispLabelArray = (ScriptLineMessage_o *)ScriptLineMessage__GetDispLabelArray(DispLabelArray, 0);
      if ( !DispLabelArray )
        break;
      m_CancellationTokenSource = (int)DispLabelArray->fields.m_CancellationTokenSource;
      v11 = (WrapLineMessage_o *)DispLabelArray;
      if ( m_CancellationTokenSource < 1 )
      {
        v13 = 0;
        if ( !v3 )
          break;
      }
      else
      {
        v12 = 0;
        v13 = 0;
        do
        {
          if ( v12 >= (unsigned int)m_CancellationTokenSource )
            goto LABEL_32;
          v14 = *((_QWORD *)&v11->fields.mainPrefab + v12);
          if ( !v14 )
            goto LABEL_31;
          v15 = *(_QWORD *)(v14 + 128);
          if ( !v15 )
            goto LABEL_31;
          if ( *(int *)(v15 + 16) >= 1 )
          {
            DispLabelArray = *(ScriptLineMessage_o **)(v14 + 24);
            if ( !DispLabelArray )
              goto LABEL_31;
            DispLabelArray = (ScriptLineMessage_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)DispLabelArray,
                                                      0);
            if ( !*(_QWORD *)(v14 + 24) )
              goto LABEL_31;
            v16 = (UnityEngine_GameObject_o *)DispLabelArray;
            DispLabelArray = (ScriptLineMessage_o *)UnityEngine_Component__get_transform(
                                                      *(UnityEngine_Component_o **)(v14 + 24),
                                                      0);
            if ( !DispLabelArray )
              goto LABEL_31;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)DispLabelArray, 0);
            GameObjectExtensions__SetLocalPositionY(
              v16,
              localPosition.fields.y + (float)this->fields.paddingRubbyLabelHeight,
              0);
            if ( !v3 )
              goto LABEL_31;
            v17 = *(float *)(v14 + 76);
            DispLabelArray = (ScriptLineMessage_o *)System_Collections_Generic_HashSet_float___Contains(
                                                      v3,
                                                      v17,
                                                      (const MethodInfo_42C3618 *)Method_System_Collections_Generic_HashSet_float__Contains__);
            if ( ((unsigned __int8)DispLabelArray & 1) == 0 )
            {
              ++v13;
              DispLabelArray = (ScriptLineMessage_o *)System_Collections_Generic_HashSet_float___Add(
                                                        v3,
                                                        v17,
                                                        (const MethodInfo_42C412C *)Method_System_Collections_Generic_HashSet_float__Add__);
            }
          }
          m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
          ++v12;
        }
        while ( v12 < m_CancellationTokenSource );
        if ( !v3 )
          break;
      }
      if ( v9 <= v13 )
        v9 = v13;
      System_Collections_Generic_HashSet_float___Clear(
        v3,
        (const MethodInfo_42C35B8 *)Method_System_Collections_Generic_HashSet_float__Clear__);
      battleMessages = v19;
      ++v8;
      max_length_low = LODWORD(v19->max_length);
      if ( (int)v8 >= (int)max_length_low )
        return (float)(this->fields.paddingRubbyLabelHeight * v9);
    }
LABEL_31:
    sub_2213CDC(DispLabelArray, v5);
  }
  v9 = 0;
  return (float)(this->fields.paddingRubbyLabelHeight * v9);
}


int32_t BattleConcatLabelSkillNameComponent__GetTopRubyHeight(
        BattleConcatLabelSkillNameComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  ScriptLineMessage_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  struct WrapLineMessage_array *battleMessages; // x8
  ScriptMessageLabel_array *DispLabelArray; // x21
  ScriptMessageLabel_o *v9; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  System_Action_WrapLineMessage__c *v11; // x0
  System_Action_object__o *v12; // x21

  if ( (byte_5973F18 & 1) == 0 )
  {
    sub_2213A60(&System_Action_WrapLineMessage__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_WrapLineMessage___);
    sub_2213A60(&Method_BattleConcatLabelSkillNameComponent___c__DisplayClass3_0__GetTopRubyHeight_b__0__);
    sub_2213A60(&BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_TypeInfo);
    byte_5973F18 = 1;
  }
  v3 = sub_2213CCC(BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !this->fields.paddingIffFirstLineRubyExists )
    return 0;
  IsNullOrEmpty = (ScriptLineMessage_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)this->fields.battleMessages,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !v3 )
    goto LABEL_15;
  battleMessages = this->fields.battleMessages;
  *(_DWORD *)(v3 + 20) = 0;
  if ( !battleMessages )
    goto LABEL_15;
  if ( !LODWORD(battleMessages->max_length) )
    goto LABEL_16;
  IsNullOrEmpty = (ScriptLineMessage_o *)battleMessages->m_Items[0];
  if ( !IsNullOrEmpty )
    goto LABEL_15;
  DispLabelArray = ScriptLineMessage__GetDispLabelArray(IsNullOrEmpty, 0);
  IsNullOrEmpty = (ScriptLineMessage_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)DispLabelArray,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !DispLabelArray )
LABEL_15:
    sub_2213CDC(IsNullOrEmpty, v5);
  if ( !LODWORD(DispLabelArray->max_length) )
LABEL_16:
    sub_2213CE4(IsNullOrEmpty);
  v9 = DispLabelArray->m_Items[0];
  if ( !v9 )
    goto LABEL_15;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.battleMessages;
  v11 = System_Action_WrapLineMessage__TypeInfo;
  *(float *)(v3 + 16) = v9->fields.mainPosition.fields.y;
  v12 = (System_Action_object__o *)sub_2213CCC(v11);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_BattleConcatLabelSkillNameComponent___c__DisplayClass3_0__GetTopRubyHeight_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v10,
    (System_Action_T__o *)v12,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_WrapLineMessage___);
  return *(_DWORD *)(v3 + 20);
}


// local variable allocation has failed, the output may be wrong!
void BattleConcatLabelSkillNameComponent__SetSkillSpriteActive(
        BattleConcatLabelSkillNameComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5973F17 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F17 = 1;
  }
  skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(skillSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.skillSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, value, 0);
  }
}


void BattleConcatLabelSkillNameComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973F1B & 1) == 0 )
  {
    sub_2213A60(&BattleConcatLabelSkillNameComponent___c_TypeInfo);
    byte_5973F1B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleConcatLabelSkillNameComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleConcatLabelSkillNameComponent___c_TypeInfo->static_fields->__9 = (struct BattleConcatLabelSkillNameComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleConcatLabelSkillNameComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleConcatLabelSkillNameComponent___c___ctor(
        BattleConcatLabelSkillNameComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleConcatLabelSkillNameComponent___c___GetTopRubyHeight_b__3_2(
        BattleConcatLabelSkillNameComponent___c_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  if ( !label )
    sub_2213CDC(this, 0);
  return label->fields.rubySize;
}


void BattleConcatLabelSkillNameComponent___c__DisplayClass3_0___ctor(
        BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleConcatLabelSkillNameComponent___c__DisplayClass3_0___GetTopRubyHeight_b__0(
        BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_o *this,
        WrapLineMessage_o *x,
        const MethodInfo *method)
{
  BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_o *v4; // x19
  System_Collections_Generic_IEnumerable_TSource__o *DispLabelArray; // x20
  System_Func_object__bool__o *_9__1; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  BattleConcatLabelSkillNameComponent___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  struct BattleConcatLabelSkillNameComponent___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__3_2; // x21
  Il2CppObject *v19; // x22
  struct BattleConcatLabelSkillNameComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v28; // w0

  v4 = this;
  if ( (byte_5973F1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ScriptMessageLabel__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ScriptMessageLabel___);
    sub_2213A60(&System_Func_ScriptMessageLabel__int__TypeInfo);
    sub_2213A60(&System_Func_ScriptMessageLabel__bool__TypeInfo);
    sub_2213A60(&Method_BattleConcatLabelSkillNameComponent___c__GetTopRubyHeight_b__3_2__);
    sub_2213A60(&Method_BattleConcatLabelSkillNameComponent___c__DisplayClass3_0__GetTopRubyHeight_b__1__);
    this = (BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_o *)sub_2213A60(&BattleConcatLabelSkillNameComponent___c_TypeInfo);
    byte_5973F1C = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  DispLabelArray = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptLineMessage__GetDispLabelArray(
                                                                          (ScriptLineMessage_o *)x,
                                                                          0);
  _9__1 = (System_Func_object__bool__o *)v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ScriptMessageLabel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleConcatLabelSkillNameComponent___c__DisplayClass3_0__GetTopRubyHeight_b__1__,
      0);
    v4->fields.__9__1 = (struct System_Func_ScriptMessageLabel__bool__o *)_9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          DispLabelArray,
          (System_Func_TSource__bool__o *)_9__1,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ScriptMessageLabel___);
  v15 = BattleConcatLabelSkillNameComponent___c_TypeInfo;
  v16 = v13;
  if ( !*(&BattleConcatLabelSkillNameComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleConcatLabelSkillNameComponent___c_TypeInfo, v14);
    v15 = BattleConcatLabelSkillNameComponent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__3_2 = (System_Func_object__int__o *)static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v14);
      static_fields = BattleConcatLabelSkillNameComponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ScriptMessageLabel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_2,
      v19,
      Method_BattleConcatLabelSkillNameComponent___c__GetTopRubyHeight_b__3_2__,
      0);
    v20 = BattleConcatLabelSkillNameComponent___c_TypeInfo->static_fields;
    v20->__9__3_2 = (struct System_Func_ScriptMessageLabel__int__o *)_9__3_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__3_2, (int32_t)_9__3_2, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__3_2,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ScriptMessageLabel__int___);
  v28 = System_Linq_Enumerable__FirstOrDefault_int_(
          v27,
          (const MethodInfo_388115C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
  if ( v4->fields.rubyResult < v28 )
    v4->fields.rubyResult = v28;
}


bool BattleConcatLabelSkillNameComponent___c__DisplayClass3_0___GetTopRubyHeight_b__1(
        BattleConcatLabelSkillNameComponent___c__DisplayClass3_0_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  struct System_String_o *rubyText; // x8

  if ( !label || (rubyText = label->fields.rubyText) == 0 )
    sub_2213CDC(this, label);
  return rubyText->fields._stringLength >= 1 && label->fields.mainPosition.fields.y >= this->fields.topY;
}


void BattleConcatLabelSkillNameComponent___c__DisplayClass4_0___ctor(
        BattleConcatLabelSkillNameComponent___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleConcatLabelSkillNameComponent___c__DisplayClass4_0___Adjust_b__0(
        BattleConcatLabelSkillNameComponent___c__DisplayClass4_0_o *this,
        WrapLineMessage_o *message,
        const MethodInfo *method)
{
  if ( !message )
    sub_2213CDC(this, 0);
  this->fields.pos = WrapLineMessage__SetOffsetMessage(message, this->fields.pos, 0);
}