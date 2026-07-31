void QuestBoardListViewMultiLimitedFormation___ctor(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  TweenAlpha___ctor((TweenAlpha_o *)this, 0);
}


void QuestBoardListViewMultiLimitedFormation__Init(
        QuestBoardListViewMultiLimitedFormation_o *this,
        UILabel_o *label,
        UISprite_o *sprite,
        QuestPhaseDetailEntity_BoardInfo_array *list,
        float maxWidth,
        const MethodInfo *method)
{
  QuestBoardListViewMultiLimitedFormation___c_c *v11; // x0
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__9_0; // x23
  Il2CppObject *v14; // x24
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  const MethodInfo *v43; // x1

  if ( (byte_59351EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_21FFC50(&System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo);
    sub_21FFC50(&QuestBoardListViewMultiLimitedFormation_TypeInfo);
    sub_21FFC50(&Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__);
    sub_21FFC50(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    byte_59351EA = 1;
  }
  v11 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  if ( !*(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation___c_TypeInfo, label, sprite);
    v11 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__9_0 = (System_Func_object__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, label, sprite);
      static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v14, Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__, 0);
    v15 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    v15->__9__9_0 = (struct System_Func_QuestPhaseDetailEntity_BoardInfo__int__o *)_9__9_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TKey__o *)_9__9_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          v22,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
  if ( !this )
    sub_21FFECC(v23, v24);
  this->fields.InfoList = (struct QuestPhaseDetailEntity_BoardInfo_array *)v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.InfoList, (int32_t)v23, v25, v26, v27, v28, v29, v30);
  this->fields.Label = label;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.Label, (int32_t)label, v31, v32, v33, v34, v35, v36);
  this->fields.Sprite = sprite;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.Sprite, (int32_t)sprite, v37, v38, v39, v40, v41, v42);
  this->fields.CurrentIndex = 0;
  *(_WORD *)&this->fields.Forward = 0;
  this->fields.MaxWidth = maxWidth;
  QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime = UnityEngine_Time__get_unscaledTime(0);
  QuestBoardListViewMultiLimitedFormation__SetNext(this, v43);
}


void QuestBoardListViewMultiLimitedFormation__SetNext(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewMultiLimitedFormation_o *v2; // x19
  struct QuestPhaseDetailEntity_BoardInfo_array *InfoList; // x8
  __int64 CurrentIndex; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v5; // x8
  struct QuestPhaseDetailEntity_BoardInfo_array *v6; // x8
  __int64 v7; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  const MethodInfo_384633C *v10; // x1
  int32_t v11; // w21

  v2 = this;
  if ( (byte_59351EB & 1) == 0 )
  {
    this = (QuestBoardListViewMultiLimitedFormation_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___);
    byte_59351EB = 1;
  }
  InfoList = v2->fields.InfoList;
  if ( !InfoList )
    goto LABEL_14;
  CurrentIndex = v2->fields.CurrentIndex;
  if ( (unsigned int)CurrentIndex >= LODWORD(InfoList->max_length) )
    goto LABEL_15;
  v5 = InfoList->m_Items[CurrentIndex];
  if ( !v5
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)v5->fields.text) == 0
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                              (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)this,
                                                              v2->fields.Label,
                                                              v2->fields.MaxWidth,
                                                              0),
        (v6 = v2->fields.InfoList) == 0) )
  {
LABEL_14:
    sub_21FFECC(this, method);
  }
  v7 = v2->fields.CurrentIndex;
  if ( (unsigned int)v7 >= LODWORD(v6->max_length) )
LABEL_15:
    sub_21FFED4(this);
  v8 = v6->m_Items[v7];
  if ( !v8 )
    goto LABEL_14;
  this = (QuestBoardListViewMultiLimitedFormation_o *)v8->fields.image;
  if ( !this )
    goto LABEL_14;
  QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
    (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)this,
    v2->fields.Sprite,
    0);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.InfoList;
  v10 = (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___;
  v11 = v2->fields.CurrentIndex + 1;
  v2->fields.CurrentIndex = v11;
  if ( v11 >= System_Linq_Enumerable__Count_object_(v9, v10) )
    v2->fields.CurrentIndex = 0;
}


void QuestBoardListViewMultiLimitedFormation__Update(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  float v3; // s0
  float duration; // s1
  float v5; // s9
  float v6; // s8
  float timeScale; // s8
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  float v10; // s9
  unsigned int v11; // w8
  bool v12; // zf
  int OldForward; // w8
  int v14; // w9

  if ( (byte_59351E9 & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardListViewMultiLimitedFormation_TypeInfo);
    byte_59351E9 = 1;
  }
  v3 = UnityEngine_Time__get_unscaledTime(0) - QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime;
  duration = this->fields.duration;
  v5 = v3 / duration;
  if ( this->fields.ignoreTimeScale )
  {
    v6 = fmodf(v3 / duration, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0);
    v6 = fmodf(v5, 1.0) * timeScale;
  }
  this->fields.OldForward = this->fields.Forward;
  v10 = fmodf(v5, 2.0);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8, v9);
  v11 = vcvtms_s32_f32(v10);
  v12 = floorf(v10) != INFINITY && v11 == 0;
  OldForward = this->fields.OldForward;
  v14 = v12;
  this->fields.Forward = v14;
  if ( OldForward && OldForward != v14 )
    QuestBoardListViewMultiLimitedFormation__SetNext(this, v8);
  if ( this->fields.style == 2 && !this->fields.Forward )
    v6 = 1.0 - v6;
  UITweener__set_tweenFactor((UITweener_o *)this, v6, 0);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0);
}


void QuestBoardListViewMultiLimitedFormation___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59351EC & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    byte_59351EC = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewMultiLimitedFormation___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardListViewMultiLimitedFormation___c___ctor(
        QuestBoardListViewMultiLimitedFormation___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestBoardListViewMultiLimitedFormation___c___Init_b__9_0(
        QuestBoardListViewMultiLimitedFormation___c_o *this,
        QuestPhaseDetailEntity_BoardInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_21FFECC(this, 0);
  return info->fields.priority;
}