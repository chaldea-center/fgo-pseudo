void __fastcall QuestBoardListViewMultiLimitedFormation___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewMultiLimitedFormation___ctor(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  TweenAlpha___ctor((TweenAlpha_o *)this, 0LL);
}


void __fastcall QuestBoardListViewMultiLimitedFormation__Init(
        QuestBoardListViewMultiLimitedFormation_o *this,
        UILabel_o *label,
        UISprite_o *sprite,
        QuestPhaseDetailEntity_BoardInfo_array *list,
        float maxWidth,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  QuestBoardListViewMultiLimitedFormation___c_c *v17; // x0
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__9_0; // x23
  Il2CppObject *v20; // x24
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  struct QuestPhaseDetailEntity_BoardInfo_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  float unscaledTime; // s8
  QuestBoardListViewMultiLimitedFormation_c *v50; // x0

  if ( (byte_4213C5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___, label);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v11);
    sub_B0D8A4(&Method_System_Func_QuestPhaseDetailEntity_BoardInfo__int___ctor__, v12);
    sub_B0D8A4(&System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo, v13);
    sub_B0D8A4(&QuestBoardListViewMultiLimitedFormation_TypeInfo, v14);
    sub_B0D8A4(&Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__, v15);
    sub_B0D8A4(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v16);
    byte_4213C5E = 1;
  }
  v17 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiLimitedFormation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiLimitedFormation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    v17 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo,
                                                                                label,
                                                                                sprite);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__9_0,
      v20,
      Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__,
      (const MethodInfo_2619564 *)Method_System_Func_QuestPhaseDetailEntity_BoardInfo__int___ctor__);
    v21 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    v21->__9__9_0 = (struct System_Func_QuestPhaseDetailEntity_BoardInfo__int__o *)_9__9_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TKey__o *)_9__9_0,
                                                               (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
  v29 = (struct QuestPhaseDetailEntity_BoardInfo_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                           v28,
                                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
  if ( !this )
    sub_B0D97C(v29);
  this->fields.InfoList = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.InfoList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.Label = label;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.Label,
    (System_Int32_array **)label,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.Sprite = sprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.Sprite,
    (System_Int32_array **)sprite,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.CurrentIndex = 0;
  *(_WORD *)&this->fields.Forward = 0;
  this->fields.MaxWidth = maxWidth;
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v50 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiLimitedFormation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiLimitedFormation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation_TypeInfo);
    v50 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  }
  v50->static_fields->InitTime = unscaledTime;
  QuestBoardListViewMultiLimitedFormation__SetNext(this, v48);
}


void __fastcall QuestBoardListViewMultiLimitedFormation__SetNext(
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
  int32_t v10; // w20
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4213C5F & 1) == 0 )
  {
    this = (QuestBoardListViewMultiLimitedFormation_o *)sub_B0D8A4(
                                                          &Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___,
                                                          method);
    byte_4213C5F = 1;
  }
  InfoList = v2->fields.InfoList;
  if ( !InfoList )
    goto LABEL_14;
  CurrentIndex = v2->fields.CurrentIndex;
  if ( (unsigned int)CurrentIndex >= InfoList->max_length )
    goto LABEL_15;
  v5 = InfoList->m_Items[CurrentIndex];
  if ( !v5
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)v5->fields.text) == 0LL
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                              (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)this,
                                                              v2->fields.Label,
                                                              v2->fields.MaxWidth,
                                                              0LL),
        (v6 = v2->fields.InfoList) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(this);
  }
  v7 = v2->fields.CurrentIndex;
  if ( (unsigned int)v7 >= v6->max_length )
  {
LABEL_15:
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
  v8 = v6->m_Items[v7];
  if ( !v8 )
    goto LABEL_14;
  this = (QuestBoardListViewMultiLimitedFormation_o *)v8->fields.image;
  if ( !this )
    goto LABEL_14;
  QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
    (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)this,
    v2->fields.Sprite,
    0LL);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.InfoList;
  v10 = v2->fields.CurrentIndex + 1;
  v2->fields.CurrentIndex = v10;
  if ( v10 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                v9,
                (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___) )
    v2->fields.CurrentIndex = 0;
}


void __fastcall QuestBoardListViewMultiLimitedFormation__Update(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  float unscaledTime; // s8
  QuestBoardListViewMultiLimitedFormation_c *v4; // x0
  float v5; // s9
  float v6; // s8
  float timeScale; // s0
  float v8; // s0
  int32_t v9; // w0
  const MethodInfo *v10; // x1
  _BOOL4 OldForward; // w8

  if ( (byte_4213C5D & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewMultiLimitedFormation_TypeInfo, method);
    byte_4213C5D = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v4 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiLimitedFormation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiLimitedFormation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation_TypeInfo);
    v4 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  }
  v5 = (float)(unscaledTime - v4->static_fields->InitTime) / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v6 = fmodf(v5, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v6 = timeScale * fmodf(v5, 1.0);
  }
  this->fields.OldForward = this->fields.Forward;
  v8 = fmodf(v5, 2.0);
  v9 = UnityEngine_Mathf__FloorToInt(v8, 0LL);
  OldForward = this->fields.OldForward;
  this->fields.Forward = v9 == 0;
  if ( OldForward && v9 )
    QuestBoardListViewMultiLimitedFormation__SetNext(this, v10);
  if ( *(&this->fields.style + 1) == 2 && !this->fields.Forward )
    v6 = 1.0 - v6;
  UITweener__set_tweenFactor((UITweener_o *)this, v6, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}


void __fastcall QuestBoardListViewMultiLimitedFormation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x0

  if ( (byte_42121E9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v1);
    byte_42121E9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestBoardListViewMultiLimitedFormation___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall QuestBoardListViewMultiLimitedFormation___c___ctor(
        QuestBoardListViewMultiLimitedFormation___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestBoardListViewMultiLimitedFormation___c___Init_b__9_0(
        QuestBoardListViewMultiLimitedFormation___c_o *this,
        QuestPhaseDetailEntity_BoardInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B0D97C(this);
  return info->fields.priority;
}