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
  QuestBoardListViewMultiLimitedFormation___c_c *v29; // x0
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__9_0; // x23
  Il2CppObject *v32; // x24
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  struct QuestPhaseDetailEntity_BoardInfo_array *v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x1
  float unscaledTime; // s8
  QuestBoardListViewMultiLimitedFormation_c *v63; // x0

  if ( (byte_42E8A78 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___,
      (_DWORD)label,
      (_DWORD)sprite,
      list);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_QuestPhaseDetailEntity_BoardInfo__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&QuestBoardListViewMultiLimitedFormation_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__, v23, v24, v25);
    sub_B5D5C4(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v26, v27, v28);
    byte_42E8A78 = 1;
  }
  v29 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiLimitedFormation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiLimitedFormation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    v29 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__9_0,
      v32,
      Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_QuestPhaseDetailEntity_BoardInfo__int___ctor__);
    v33 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    v33->__9__9_0 = (struct System_Func_QuestPhaseDetailEntity_BoardInfo__int__o *)_9__9_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TKey__o *)_9__9_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
  v41 = (struct QuestPhaseDetailEntity_BoardInfo_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                           v40,
                                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
  if ( !this )
    sub_B5D69C(v41, v42);
  this->fields.InfoList = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.InfoList,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.Label = label;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.Label,
    (System_Int32_array **)label,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.Sprite = sprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.Sprite,
    (System_Int32_array **)sprite,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.CurrentIndex = 0;
  *(_WORD *)&this->fields.Forward = 0;
  this->fields.MaxWidth = maxWidth;
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v63 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiLimitedFormation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiLimitedFormation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation_TypeInfo);
    v63 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  }
  v63->static_fields->InitTime = unscaledTime;
  QuestBoardListViewMultiLimitedFormation__SetNext(this, v61);
}


void __fastcall QuestBoardListViewMultiLimitedFormation__SetNext(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewMultiLimitedFormation_o *v4; // x19
  struct QuestPhaseDetailEntity_BoardInfo_array *InfoList; // x8
  __int64 CurrentIndex; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v7; // x8
  struct QuestPhaseDetailEntity_BoardInfo_array *v8; // x8
  __int64 v9; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  int32_t v12; // w20
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E8A79 & 1) == 0 )
  {
    this = (QuestBoardListViewMultiLimitedFormation_o *)sub_B5D5C4(
                                                          &Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___,
                                                          (_DWORD)method,
                                                          v2,
                                                          v3);
    byte_42E8A79 = 1;
  }
  InfoList = v4->fields.InfoList;
  if ( !InfoList )
    goto LABEL_14;
  CurrentIndex = v4->fields.CurrentIndex;
  if ( (unsigned int)CurrentIndex >= InfoList->max_length )
    goto LABEL_15;
  v7 = InfoList->m_Items[CurrentIndex];
  if ( !v7
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)v7->fields.text) == 0LL
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                              (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)this,
                                                              v4->fields.Label,
                                                              v4->fields.MaxWidth,
                                                              0LL),
        (v8 = v4->fields.InfoList) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(this, method);
  }
  v9 = v4->fields.CurrentIndex;
  if ( (unsigned int)v9 >= v8->max_length )
  {
LABEL_15:
    v13 = sub_B5D6C8(this);
    sub_B5D668(v13, 0LL);
  }
  v10 = v8->m_Items[v9];
  if ( !v10 )
    goto LABEL_14;
  this = (QuestBoardListViewMultiLimitedFormation_o *)v10->fields.image;
  if ( !this )
    goto LABEL_14;
  QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
    (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)this,
    v4->fields.Sprite,
    0LL);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.InfoList;
  v12 = v4->fields.CurrentIndex + 1;
  v4->fields.CurrentIndex = v12;
  if ( v12 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                v11,
                (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___) )
    v4->fields.CurrentIndex = 0;
}


void __fastcall QuestBoardListViewMultiLimitedFormation__Update(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float unscaledTime; // s8
  QuestBoardListViewMultiLimitedFormation_c *v6; // x0
  float v7; // s9
  float v8; // s8
  float timeScale; // s0
  float v10; // s0
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  _BOOL4 OldForward; // w8

  if ( (byte_42E8A77 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewMultiLimitedFormation_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A77 = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v6 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiLimitedFormation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiLimitedFormation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation_TypeInfo);
    v6 = QuestBoardListViewMultiLimitedFormation_TypeInfo;
  }
  v7 = (float)(unscaledTime - v6->static_fields->InitTime) / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v8 = fmodf(v7, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v8 = timeScale * fmodf(v7, 1.0);
  }
  this->fields.OldForward = this->fields.Forward;
  v10 = fmodf(v7, 2.0);
  v11 = UnityEngine_Mathf__FloorToInt(v10, 0LL);
  OldForward = this->fields.OldForward;
  this->fields.Forward = v11 == 0;
  if ( OldForward && v11 )
    QuestBoardListViewMultiLimitedFormation__SetNext(this, v12);
  if ( *(&this->fields.style + 1) == 2 && !this->fields.Forward )
    v8 = 1.0 - v8;
  UITweener__set_tweenFactor((UITweener_o *)this, v8, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}


void __fastcall QuestBoardListViewMultiLimitedFormation___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7EEC & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v1, v2, v3);
    byte_42E7EEC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return info->fields.priority;
}